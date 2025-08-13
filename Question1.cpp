#include<iostream>
#include<string>
using namespace std;


class Publication{

    private:
    string title;
    float price;

    public:
    void getdata(){
        cin.ignore();
    cout<<"Enter Title:"<<endl;
    getline(cin, title);
    cout<<"Enter Price:"<<endl;
    cin>>price;

    }
    void putdata(){
     cout<<title<<endl;
     cout<<price<<endl;
    }
};
class Book : public Publication{
   private:
    int pageCount;
public :
void getdata(){
    Publication::getdata();
    cout<<"pageCount is:"<<endl;
    cin>>pageCount;
}
void putdata(){
    Publication::putdata();
    cout<<pageCount<<endl;
}

};
class Tape: public Publication{
   private:
    float playingTime;
    public:
    void getdata(){
        Publication::getdata();
        cout<<"playing Time is :"<<endl;
        cin>>playingTime;
    }
    void putdata(){
        Publication::putdata();
        cout<<playingTime<<endl;
    }

};
int main(){
    Book b1;
    Tape t1;
    cout << "Enter details for Book:\n";
    b1.getdata();
    cout << "\nEnter details for Tape:\n";
    t1.getdata();
     cout << "\nBook Details:\n";
    b1.putdata();
    cout << "\nTape Details:\n";
    t1.putdata();
    return 0;
}