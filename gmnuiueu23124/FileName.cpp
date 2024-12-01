#include <iostream>  
#include <string>  
using namespace std;

class Student {
private:
    string name;
    int age;

public:
 
    Student() : name(""), age(0) {}

    Student(const string& name, int age) : name(name), age(age) {}
  
    string getName() const { return name; }
    int getAge() const { return age; }
  
    void setName(const string& name) { this->name = name; }
    void setAge(int age) { this->age = age; }
 
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Aspirant : public Student {
private:
    string thesisTopic;   

public:
     
    Aspirant() : Student(), thesisTopic("") {}
  
    Aspirant(const string& name, int age, const string& thesisTopic)
        : Student(name, age), thesisTopic(thesisTopic) {}
 
    string getThesisTopic() const { return thesisTopic; }
    void setThesisTopic(const string& thesisTopic) { this->thesisTopic = thesisTopic; }
 
    void display() const {
        Student::display(); 
        cout << "Thesis Topic: " << thesisTopic << endl;
    }
};

 
int main() {
    
    Student student("John Doe", 25);
    student.display();

    Aspirant aspirant("Jane Smith", 29, "Machine Learning Applications");
    aspirant.display();
  
    aspirant.setThesisTopic("Deep Learning in NLP");
    cout << "Updated Thesis Topic: " << aspirant.getThesisTopic() << endl;

    return 0;
}