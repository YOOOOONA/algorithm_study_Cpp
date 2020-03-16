#include <iostream>
#include <string.h>
class Marine{
    int hp;
    int coord_x, coord_y;
    int damage;
    bool is_dead;
    char* name; //마린에게는 각각 이름을 붙여줄 수 있다!

  public:
    Marine();//기본 생성자
    Marine(int x, int y);//x,y좌표에 마린 생성
    Marine(int x, int y, const char* marine_name);//이름까지 붙여주는 생성자
    ~Marine();//소멸자

    int attack();
    void be_attacked(int damage_earn);
    void move(int x, int y);//새로운위치

    void show_status();
};
Marine::Marine(){
    hp = 50;
    coord_x = coord_y = 0;
    damage = 5;
    is_dead = false;
    name = NULL;
}
Marine::Marine(int x, int y){
    coord_x = x;
    coord_y = y;
    hp = 50;
    damage = 5;
    is_dead = false;
    name = NULL;
}
Marine::Marine(int x, int y, const char* marine_name){
    coord_x = x;
    coord_y = y;
    hp = 50;
    damage = 5;
    is_dead = false;
    name = new char[strlen(marine_name) + 1];//길이배열만들어서
    strcpy(name, marine_name);//함수써서 스트링 넣어야됨..
}
Marine::~Marine() {
  std::cout << name << " 의 소멸자 호출 ! " << std::endl;
  if (name != NULL) {
    delete[] name;//name자체가 char의 배열 형태로 동적할당 되었으므로 여기서도 배열형태로 가야됨
  }
}
void Marine::move(int x, int y){
    coord_x = x;
    coord_y = y;
}
int Marine::attack(){ return damage; }
void Marine::be_attacked(int damage_earn){
    hp -= damage_earn;
    if (hp<=0) is_dead = true;
}
void Marine::show_status(){
    std::cout << " *** Marine : " << name << " *** " << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
    std::cout << " HP : " << hp << std::endl;
}
int main(){
    //Marine marine1(2,3);
    //Marine marine2(3,5);
    Marine* marines[100];

    marines[0] = new Marine(2,3,"Marine2");//new 와 malloc 모두 무언가를 동적으로 생성하는데 특히 new는 객체의 동적호출+생성자 자동호출
    marines[1] = new Marine(3,5,"Marine1");

    //marine1.show_status();
    //marine2.show_status();    
    marines[0] -> show_status();//.이 아니라 ->를 사용하는 이유: marines가 Marine들의 포인터를 가리키는 배열이라서..
    marines[1] -> show_status();

    std::cout << std::endl << "marine 1 attacked marine 2! " << std::endl;
    
    //marine2.be_attacked(marine1.attack());
    marines[0] -> be_attacked(marines[1] -> attack());
    
    marines[0] -> show_status();
    marines[1] -> show_status();
    //marine1.show_status();
    //marine2.show_status();

    delete marines[0];//new와 한 셋트 deleted
    delete marines[1];
}