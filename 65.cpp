#include <bits/stdc++.h>

using namespace std;

class String {
public:
String() {
         strData = NULL;
         len = 0;
 }

 String(const char* str) {
         len = strlen(str);
         strData = new char[len + 1];
         strcpy(strData, str);
 }

 String(const String &rhs) {
    len  = rhs.len;
    strData = new char[len+1];
    strcpy(strData, rhs.strData);
 }

 ~String() {
    if(strData){
        delete[] strData;
        cout << "메모리 해제 " << (void*)strData << '\n';
    }
 }

String operator=(const String &rhs){
    if(this != &rhs){
        len  = rhs.len;
        delete[] strData;
        strData = new char[len+1];
        strcpy(strData, rhs.strData);
    }
    return *this;
}

 const char* GetStrData() const {
        return strData;
 }

 String getName(){
    
 }

 int GetLen() const {
       return len;
 }
private:
      char* strData;
      int len;

};
int main() {
      String s1("Hi");
      String s2(s1);
      String s3;
      s3 = s1;

}