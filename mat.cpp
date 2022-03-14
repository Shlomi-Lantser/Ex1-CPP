#include <iostream>
#include <string>
#include <vector>
#include "mat.hpp"

using namespace std;
const int maxChar = 126;
const int minChar = 33;

namespace ariel
{
    string mat(int x, int y, char a, char b)
    {
        if (a < minChar || a >maxChar || b<minChar || b > maxChar || x%2 ==0 || y%2==0 || x<0 || y<0){
           throw invalid_argument("ERROR : BAF ARGS !");
        
        }
        string result;
        if (x==1){
            for (int i = 0; i < y; i++)
            {
                result += a;
                result += "\n";
            }
            return result;
        }
        char a1 = a;
        char b1 = b;
        int temp =x;
        x=y;
        y=temp;
        vector<vector<char>> mat(x , vector<char> (y,'0'));
        int k=0;
        int t=0;
        int s=0;
        
        while (k<x){
            for (int i = s; i < y-s; i++)
        {
            mat[k][i] = a1;
            mat[x-s-1][i] = a1;
        }
             for (int i = s; i < x-s; i++)
        {
            mat[i][k] = a1;
            mat[i][y-1-s] = a1;
        }
        
        
        k++;
        s++;
       
       if (a1 == a){
            a1=b;
       }else if (a1==b){
            a1 =a;
       } 
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++){
                result+= mat[i][j];
            }
        result += "\n";
        }   
    return result;
    }
}
