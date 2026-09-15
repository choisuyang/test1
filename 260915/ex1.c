#include <stdio.h>

typedef struct {
    char timestamp[20];
    char sensorid[20];
    char status[20];
    float distance;
} SensorLog;


int main(void) {
    FILE *fp;

    fp = fopen("sensor.txt", "r");
    if (fp == NULL) {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    char text[2000];
    SensorLog logs[200];
    int count;

    while(fgets(text, sizeof(text),fp)) {
        sscanf(text, "[%19[^]]] [%19[^]]] [%24[^]]] Distance: %f cm",
            logs[count].timestamp,
            logs[count].sensorid,
            logs[count].status,
            &logs[count].distance);
            count++;
            // printf("----> %s", text );
    }

    fclose(fp);

    printf("=== ULTRASONIC_01 정상 감지 데이터 ===\n");
    for (int i = 0; i < count; i++) {
        // printf("----> %s", logs[i]);
        if (strcmp(logs[i].sensorid, "ULTRASONIC_01") == 0 &&
            strcmp(logs[i].status, "DETECTED") == 0 && 
            strcmp(logs[i].sensorid, "ULTRASONIC_02") == 0) {
            printf("[%s] [%s] 거리: %.2f cm\n", logs[i].timestamp, logs[i].sensorid, logs[i].distance);
        }
    }

    return 0;
}

/*
1. 초음파 센서(예: HC-SR04)의 거리 범위 기준 설정
로그 데이터를 정형화하고 분류할 때 아래와 같은 하드웨어 범위를 기준으로 삼으시면 좋습니다.

최대/최소 физический 측정 가능 범위: 2.00 cm ~ 400.00 cm

실제 타겟 물체 감지 적정 범위 (정상 영역): 10.00 cm ~ 150.00 cm

이상치 및 에러 조건:

OUT_OF_TARGET_RANGE: 물체가 너무 가깝거나(2.00 ~ 9.99 cm) 멀리 있음(150.01 ~ 400.00 cm)

OUT_OF_BOUNDS: 센서 최대 한계 측정 거리 초과 (> 400.00 cm)

SENSOR_ERROR: 신호 수신 실패/타임아웃 (-1.00 cm)

2. 생성된 로그 파일 포맷 예시 (ultrasonic_sensor.log)
파일 내부에는 총 100개의 데이터가 아래와 같은 규칙으로 기록되어 있습니다.

Plaintext
[2026-09-15 10:00:00] [ULTRASONIC_01] [DETECTED] Distance: 42.15 cm
[2026-09-15 10:00:03] [ULTRASONIC_02] [OUT_OF_TARGET_RANGE] Distance: 5.30 cm
[2026-09-15 10:00:07] [ULTRASONIC_01] [OUT_OF_BOUNDS] Distance: 432.10 cm
[2026-09-15 10:00:10] [ULTRASONIC_01] [SENSOR_ERROR] Distance: -1.00 cm
3. C 언어로 풀어볼 수 있는 연습 문제 추천
생성된 ultrasonic_sensor.log 파일을 읽어 읽어들여 C 언어로 다음 과제들을 구현해보세요!

로그 파싱 (Formatting/Parsing)

fopen, fgets, sscanf 또는 strtok을 사용하여 각 줄에서 날짜/시간, 센서 ID, 상태 문자열, 측정 거리(float)를 구조체(struct LogEntry)에 저장하기.

필터링 및 정형화 (Data Filtering)

전체 로그 중 DETECTED 상태이면서 적정 범위(10cm ~ 150cm)에 들어오는 데이터만 추출하여 valid_detection.csv 형태로 재저장하기.

통계 계산 (Data Aggregation)

ULTRASONIC_01과 ULTRASONIC_02 각각의 정상 감지 횟수, 평균 감지 거리, 최소/최대 거리 계산하기.

전체 데이터 중 에러(SENSOR_ERROR 및 OUT_OF_BOUNDS) 발생 비율(%) 구하기.

*/