// View sizeof                                                                                                                                                                                                                               

#include<iostream>

using namespace std;

int main(int argc, char **argv) {

  cout << "short size is " << sizeof(short) << endl;
  cout << "unsigned short size is " << sizeof(unsigned short) << endl;

  int data_i;
  cout << "int size is " << sizeof(data_i) << " " << sizeof(int) << endl;

  long data_l;
  cout << "long size is " << sizeof(data_l) << endl;

  long long data_ll;
  cout << "long long size is " << sizeof(data_ll) << endl;

  double data_d;
  cout << "double size is " << sizeof(data_d) << endl;

  cout << "char size is " << sizeof(char) << endl;
  cout << "string size is " << sizeof(string) << endl;  // ?

  return 0;
}

/* OUTPUT:
short size is 2
unsigned short size is 2
int size is 4 4
long size is 8
long long size is 8
double size is 8
char size is 1
string size is 8
*/
