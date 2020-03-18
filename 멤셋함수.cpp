#include <string.h> // string.h 파일이 필요합니다.
#include <stdio.h>

int main (){

    char a[20];

    // 1바이트마다 모두 65로 초기화////////////////////////memset(배열의 pointer,대체하고자하는 value,배열의 size)
    // 배열을 채울 때는 sizeof()함수를 사용하면 됩니다.
    // sizeof 함수 - 배열의 전체 바이트 크기를 반환합니다.
    memset(a, 65, sizeof(a));

    // 출력을 통해 확인
    for(int i = 0; i < (sizeof(a)/sizeof(char)); i++){
        printf("%c\n", a[i]);//65를 char형태로 출력하라했으니 A가 20개 출력되지
    }

}
//memset쓰는 이유: 배열에 단순한 값복사만 하고 싶은 경우에 for문보다 빠르기 때문