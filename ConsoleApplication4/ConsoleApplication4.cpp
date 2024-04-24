// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


//class Tv {
//private:
//    int width, heigth;
//
//public:
//
//    Tv(int h, int w) {
//        if (h < 0 || w < 0) {
//            std::cout << "EROARE! AI INTRODUS UN NUMAR MAI MIC DE 0!\n";
//
//        }
//        heigth = h;
//        width = w;
//        
//    }
//
//    int area() {
//        return heigth = width;
//    }
//    int getheight() {
//        return heigth;
//    }
//    int getwidth() {
//        return width;
//    }
//
//
//};
//
//
////a doua tema
//
//class Jungla {
//public:
//    
//     std::string animal;
//    std::string leu, tigru, sarpe, pasare;
//    
//    void introduanimal() {
//        std::cout << "Introdu unul dintre aceste cuvinte pentru a se afisa care este sunetul pe care animalul ales il face : Leu, Tigru, Sarpe, Pasare\n";
//        std::cin >> animal;
//    }
//
//
//   void print_sunet() 
//   {
//       
//       if (animal == "Leu" || animal == "leu") {
//           std::cout << "Leii fac Grr\n";
//       }
//       else if (animal == "Tigru") {
//           std::cout << "Tigrii fac Rawr\n";
//       }
//       else if (animal == "Sarpe") {
//           std::cout << "Serpii fac Sss\n";
//       }
//       else if (animal == "Pasare") {
//           std::cout << "Pasarile fac Cirip\n";
//       }
//       else {
//           std::cout << "Animalul introdus nu este valid!\n";
//       }
//    }
//
//   
//
//   
//};


class Animal {

public:

    std::string nume;
    int varsta;


    void afisare() {

        std::cout << "Introdu (C)caine sau (P)pisica si varsta: \n";

        std::cin >> nume >> varsta;
       
       

    }

    
};



class Caine : public Animal {
public:

    void latra() {
       
            std::cout << "Wooof! Wooof! Wooof!\n";
        
        
    }

};






class Pisica : public Animal {
public:

    void toarce() {
        
      std::cout << "Rrrrrrmmmrrrr, Rrrrrrmmmrrrr, Rrrrrrmmmrrrr..\n";
        
       
    }

};






int main()
{

    /*Tv tv1(20, 50);
    std::cout << "Inaltimea Tv-ului: " << tv1.getheight() << std::endl;
    std::cout << "Latimea Tv-ului: " << tv1.getwidth() << std::endl;
    std::cout << "Aria Tv-ului: " << tv1.getheight() << std::endl;

    

    Jungla animal1;
    animal1.introduanimal();
    animal1.print_sunet();

    Jungla animal2;
    animal2.introduanimal();
    animal2.print_sunet();

    Jungla animal3;
    animal3.introduanimal();
    animal3.print_sunet();

    Jungla animal4;
    animal4.introduanimal();
    animal4.print_sunet();*/

   
    Animal animal;
    animal.afisare();


    if (animal.nume == "caine" || animal.nume == "Caine") {
        Caine caine;
        
        caine.latra();
}
    
    

    else if (animal.nume == "pisica" || animal.nume == "Pisica") {

        Pisica pisica;

        

        pisica.toarce();

    }

    
    else {
        std::cout << "Animalul ales este invalid!\n";
    }
    
    
    
    
    


}

