#include <iostream>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include <string.h>

using namespace std;



int main(int argc, char **argv){
   if(argc==3){
        int N=atoi(argv[1]),M=atoi(argv[2]), length, i, j;
        char k;
        ofstream out( "work2out.in" );
        srand( time( NULL ) );

        for( i = 0; i < N; i++ ){
            for( j = 0; j < M; j++ ){
                 out <<char('0' + rand() % 10);
            }


        }
        out << endl;
        out.close();

    }

    return 0;
}
