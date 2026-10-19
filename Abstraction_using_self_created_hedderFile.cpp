# include <iostream>
# include "bird.h"
using namespace std;
void birdsdosomething(bird *&birds){
    birds->eat();
    birds->fly();
}
int main(){
    // bird*birds = new pigeon();
    // birdsdosomething(birds); 
    // bird*birds = new sparrow();
    // birdsdosomething(birds); 
    bird*birds = new Eagle();
    birdsdosomething(birds); 
}
