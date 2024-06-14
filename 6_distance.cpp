#include<iostream>

using namespace std;

class D2;

class D1{
    private:
      int meters;
      int centimeters;
    public:
      void get_data()
      {
        cout<<"Enter distance in meters and centimeters:";
        cin>>meters>>centimeters;
      }
      friend void add(D1 obj1,D2 obj2);
};

class D2{
  private:
    int feet;
    int inches;
  public:
    void get_data()
    {
      cout<<"Enter distance in feet and inches:";
      cin>>feet>>inches;
    }
    friend void add(D1 obj1,D2 obj2);
    
};

void add(D1 obj1,D2 obj2)
{
  int d1_inches=obj1.meters*39.37 +obj1.centimeters*0.3937;

  int total_inches=d1_inches+obj2.feet*12+obj2.inches;
  int feet=total_inches/12;
  int inches=total_inches%12;

  cout<<"Total distance:"<<feet<<"feet,"<<inches<<"inches"<<endl;

}
int main()
{
  D1 d1;
  D2 d2;
  d1.get_data();
  d2.get_data();
  add(d1,d2);
  return 0;
}
