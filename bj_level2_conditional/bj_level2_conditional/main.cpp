//
//  main.cpp
//  bj_level2_conditional
//
//  Created by suhseungju on 2022/05/15.
//

#include <iostream>
using namespace std;

int main() {
    // 조건문
    // 1330 두 수 비교하기
    int a, b;
    cin >> a >> b;
    
    if (a > b)
        printf(">");
    else if (a < b)
        printf("<");
    else
        printf("==");
     
    // 9498 시험 성적
    int score;
    cin >> score;
        
    switch (score / 10) {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    
    // 2753 윤년
    int year;
    cin >> year;
        
    if (year % 4 == 0)
        if (year % 100 != 0 || year % 400 == 0)
            printf("1");
        else
            printf("0");
    else
        printf("0");
    
    // 14681 사분면 고르기
    int x, y;
    cin >> x >> y;
    
    if (x > 0)
        if (y > 0) // 1 사분면
            printf("1");
        else // 4 사분면
            printf("4");
    else
        if (y > 0) // 2 사분면
            printf("2");
        else // 3 사분면
            printf("3");
    
    // 2884 알람 시계
    int hour, min;
    cin >> hour >> min;
    
    // 1시간 = 60분
    if (min < 45) { // 45분보다 작을 경우
        min += 15;
        hour--;
    }
    else {
        min -= 45;
    }
    if (hour < 0) // 자정
        hour = 23;
    
    cout << hour << " " << min;
                
    // 2525 오븐 시계
    int currentHour, currentMin, time;
    int endHour, endMin;
    cin >> currentHour >> currentMin;
    cin >> time;
    
    currentMin += time;
    
    if (currentMin < 60) {
        endHour = currentHour;
        endMin = currentMin;
    }
    else {
        endHour = (currentHour + currentMin / 60) % 24;
        endMin = currentMin % 60;
    }
                
    cout << endHour << " " << endMin;
    
    // 2480 주사위 세 개
    int c, d, f, reward;
    cin >> c >> d >> f;
    
    if (c == d && d == f)
        reward = 10000 + c * 1000;
    else if (c == d || c == f)
        reward = 1000 + c * 100;
    else if (d == f)
        reward = 1000 + d * 100;
    else
        reward = max(max(c, d), f) * 100;
    
    cout << reward;
    return 0;
        
}

