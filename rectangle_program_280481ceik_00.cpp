#include<iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int width;
        public:
        rectangle(int length, int width){
            this-> length = length;
            this -> width = width;

        }
        int calculate_area(){
            return length * width;
        }
        int calculate_perimeter(){
            return 2 * (length + width);

        }
};
int main(){
    rectangle r(4,6);
    cout<<"Area of rectangle is = "<<r.calculate_area()<<endl;
    cout<<"Perimeter of rectangle is = "<<r.calculate_perimeter()<<endl;
    return 0;
}