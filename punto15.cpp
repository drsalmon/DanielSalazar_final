#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
const float m=7294.29;
const float q=2.0;

void leap(float t_in, float t_end, float delta_t, float m, float q, string filename);

float dydt(float t, float x, float y, float m, float q);
float dxdt(float t, float x, float y, float m, float q);

int main(){

  leap(0.0, 10.0, 0.1, m, q, "elemento.dat");
  return 0;
}

float dydt(float t, float x, float y, float m, float q){
    return m/q;
}        


float dxdt(float t, float x, float y, float m, float q){
    return y;
}
    

void leap(float t_in, float t_end, float delta_t, float m, float q, string filename){
  float t=t_in;
  float x=1.0;
  float y=0.0;
  ofstream outfile;
  outfile.open(filename);
  while(t<t_end){    
    outfile << t << " " << x << " " << y << endl;
    x = x + 0.5 * delta_t * dxdt(t, x, y, m, q);
    y  = y + delta_t * dydt(t, x, y, m, q);
    x  = x + 0.5 * delta_t * dxdt(t, x, y, m, q);
    t = t + delta_t;
  }
  outfile.close();
}
