#include <bits/stdc++.h>

using namespace std;

class Ice{
public:
    Ice() { cout << "ICE" << '\n'; }
    ~Ice() { cout << "~ICE" << '\n'; }
};
class Pat{
public:
    Pat() { cout << "Pat" << '\n'; }
    ~Pat() { cout << "~Pat" << '\n'; }
};
class Bingsoo{
public:
    Bingsoo() { cout << "Bingsoo" << '\n'; }
    ~Bingsoo() { cout << "Bingsoo" << '\n'; }

private:
    Ice ice;
};

class PatBingsoo : public Bingsoo { //팥빙수 호출시 부모인 Bingsoo도 같이 호출
public:
    PatBingsoo() { cout << "PatBingsoo" << '\n'; }
    ~PatBingsoo() { cout << "PatBingsoo" << '\n'; }
private:
    Pat pat;
};

int main(){
    PatBingsoo *p = new PatBingsoo;
    delete p;
    return 0;
}