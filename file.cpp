#include <iostream>
#include <fstream>
#include<fcntl.h>
#include<string>
#define BUFFER_SIZE 19

using namespace std;

class file_test{
public:
  ifstream file;
  char buf[];

int file_get(){
  file.open("./test-file");
  return 0;
}

void file_read(){
  if(file.is_open()){
    for(getline(file, buf);){
      cout << "line: " << line << endl;
    }
  }
}

void file_write(){

}

};

int main(){
  file_test test;
  test.file_get();
  test.file_read();
}
