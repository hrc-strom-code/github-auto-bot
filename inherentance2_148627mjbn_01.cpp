#include<iostream>
using namespace std;
class Employee{


public :
    string name;
protected :
    int id;
Employee(string name, int id){
    this -> name = name;
    this -> id = id;
}
};
class Manager : public Employee{
    public :
    int teamsize;
    Manager(string name, int id, int teamsize) : Employee(name, id){
        this -> teamsize = teamsize;
    }
};
class Director: public Manager{
    public :
    int budget;
    Director(string name, int id, int teamsize, int budget) : Manager(name, id, teamsize){
        this -> budget = budget;
    }
    void display(){
        cout<<"Name: "<<name<<", ID: "<<id<<", Team Size: "<<teamsize<<", Budget: "<<budget<<endl;
    }
};


int main(){
    Director d1("Alice", 1, 10, 50000);
    d1.display();
    return 0;}