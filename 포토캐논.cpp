#include <string.h>
#include <iostream>

class Photon_Cannon{
    int hp, shield;
    int coord_x, coord_y;
    int damage;

    char *name;

  public:
    Photon_Cannon(int x, int y);
    Photon_Cannon(const Photon_Cannon& pc);
    ~Photon_Cannon();

    void show_status();
};
Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc){
    std::cout << "copy creater call !" << std::endl;
    hp = pc.hp;
    shield = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    damage = pc.damage;   

    name = NULL; 
}
Photon_Cannon::Photon_Cannon(int x, int y){
    std::cout << "creator call! " << std::endl;
    hp = shield = 100;
    coord_x = x;
    coord_y = y;
    damage = 20;
}
Photon_Cannon::~Photon_Cannon(){
    if (name) delete[] name;
}
void Photon_Cannon::show_status(){
    std::cout << "Photon_Cannon " << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
    std::cout << " HP : " << hp << std::endl;
}
int main(){
    Photon_Cannon pc1(3,3,"Cannon");
    //Photon_Cannon pc2(pc1);
    //Photon_Cannon pc3 = pc2;//얘는 show_status할수없음
    Photon_Cannon pc4 = pc1;

    pc1.show_status();
    //pc2.show_status();
    pc4.show_status();
}


