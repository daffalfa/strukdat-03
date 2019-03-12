#include <iostream>
#include <math.h>

using namespace std;

typedef struct {
 float panjang;
 float lebar;
} segiempat;

void input(segiempat *s) {
 cout<<"Input panjang : "; cin>>s->panjang;
 cout<<"Input lebar : "; cin>>s->lebar;
 }

float keliling(segiempat *s) {
 return 2*(s->panjang+s->lebar);
}

float luas(segiempat  *s) {
 return s->panjang*s->lebar;

}

float diagonal(segiempat *s) {
 return sqrt((s->panjang*s->panjang)+(s->lebar*s->lebar));
}

void print(segiempat *s) {
 cout<<keliling(s)<<endl ;
 cout<<luas (s)<<endl;
 cout<<diagonal (s)<<endl;

}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(sg);
}
