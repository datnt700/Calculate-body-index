#include <iostream>
using namespace std;
struct Person
{
    string name;
    int age;
    float height;
    float weight;

};
float calculate_bmi(Person person)
{
    float bmi = person.weight / (person.height * person.height);
    string result;
    if(bmi < 18.5)
    {
        result = "Underweight";
    }
    else if(bmi > 25)
    {
        result = "Overweight";
    }
    else
    {
        result = "Normal";
    }
    cout << "BMI of "<< person.name<< ", "<< person.age<<" age is: "<< bmi<<endl;
    cout <<"Status: "<<result<<endl;

}




int main()
{
    Person p;
    p.name ="Datbeo";
    p.age = 22;
    p.height = 1.66;
    p.weight = 68;

    calculate_bmi(p);

}
