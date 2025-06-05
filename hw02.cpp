#include <iostream>
using namespace std;

class Animal {
public:
	virtual void makeSound() const = 0;  //순수 가상 함수
	virtual ~Animal() {}                // 가상 소멸자
};

class Dog : public Animal {             // Dog 클래스는 Animal 클래스를 상속받음
public:
	void makeSound() const override {   // makeSound 함수 오버라이드
        cout << "멍멍!" << endl;        
    }
};
class Cat : public Animal {             // Cat 클래스는 Animal 클래스를 상속받음
public:
	void makeSound() const override {   // makeSound 함수 오버라이드
        cout << "야옹!" << endl;
    }
};
class Cow : public Animal {             // Cow 클래스는 Animal 클래스를 상속받음
public:
	void makeSound() const override {   // makeSound 함수 오버라이드
        cout << "음메!" << endl;
    }
};

int main() {
	Animal* animals[3]; // 3개의 동물 객체를 가리킬 수 있는 포인터 배열

	animals[0] = new Dog(); // 동물 객체 생성
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < 3; ++i) { 
		animals[i]->makeSound();    // 동물들의 makeSound 함수 호출
    }

    return 0;
}