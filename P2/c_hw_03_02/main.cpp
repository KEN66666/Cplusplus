#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    string s;

    string book,goal="";
    int row,col,count=0;

    cin>>row>>col>>book;
    int len_book=book.length();

    map<char, int> DataMap;

    for(int i = 0; i<len_book; ++i){
        if(DataMap.find(book.at(i)) != DataMap.end())
            ++DataMap[book.at(i)];
        else DataMap[book.at(i)] = 1;
    }

    int p,k,n;
    while(cin>>p>>k>>n){

        if(p<=row &&k<=col){
            p--;
            k--;
            cout<<book.at(col *p+k)<<" "<<DataMap[book.at(col*p+k)]<<" "<<DataMap[book.at(col*p+k)]%n<<endl;
            goal+=book.at(col*p+k);
        }
        else{
            cout<<"error"<<endl;
        }

    }
    cout<<goal<<" ";

    sort(goal.begin(), goal.end());
    do {
        for(int i = 0; i+goal.length()< len_book; ++i){
            int temp = book.find(goal, i);
            if(temp < len_book && temp >= 0){
                i = temp;
                ++count;
            }
        }
    }while (next_permutation(goal.begin(), goal.end()));

    cout<<count<<endl;

    return 0;
}
