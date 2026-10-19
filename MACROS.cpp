# include <iostream>
# include <algorithm>
# define MAX(x,y) (x>y ? x:y)   // THESE ARE MACROS WHICH JUST REPLACE THE DEFINE VALUES TO THE CODE THEY 
# define PI 3.15                // THEY DO NOT TAKE ANY EXTRA SPACE  
using namespace std;
float area(int r){
    return PI *r*r;
}
int max(int a,int b){
    return MAX(a,b);
}
int main(){
    cout<<area(9)<<endl;
    cout<<MAX(34,89);

}