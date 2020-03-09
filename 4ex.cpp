#include <iostream>

class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

 public:
  void SetDate(int year, int month, int date){
      year_=year;
      month_=month;
      day_=date;
  }
  void AddDay(int inc){
      day_+=inc;
      while (day_>28){      
        
        if (month_==2){
            if (year_%4==0){day_-=29;} 
            else{day_-=28;} 
            month_ = 3;        
        }
        if (month_==(1 || 3 || 5 || 7 || 8 || 10 || 12)){
            day_-=31;
            month_+=1;
            if (month_>12){
                year_+=1;
                month_%=12;
            }
        }
        if (month_==(2 || 4 || 6 || 9 || 11)){
            day_-=30;
            month_+=1;   
        }

        if(month_==2 && year_%4==0 && day_<=29){break;}
        else if (month_ ==(1 || 3 || 5 || 7 || 8 || 10 || 12) && day_<=31){break;}
        else if (month_ == (2 || 4 || 6 || 9 || 11) && day_<=31){break;}
     }
  }
  void AddMonth(int inc){
      month_+=inc;
      year_+=month_/12;
      month_%=12;
  }
  void AddYear(int inc){
      year_+=inc;
  }

  void ShowDate(){
      std::cout << "Today is " << year_ << "-" << month_ << "-" << day_ << std::endl;
  }
};

int main(){
    Date date;
    date.SetDate(2020,3,9);
    date.AddDay(10);
    date.AddMonth(10);
    date.AddYear(10);
    
    date.ShowDate();
    return 0;
}