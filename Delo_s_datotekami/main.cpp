/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Uporabnik
 *
 * Created on 09. marec 2018, 15:14
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void correctString(){
    int j = 0;
    int i = 0;
    int n= 0;
    string temp;
    ifstream myfile;
    myfile.open ("vhod.txt");
    ofstream myfile2;
    
    string line;
    
    bool isSpace = false;
    
    
    if(myfile.is_open()){
        getline(myfile, line);
        n = line.length();
        cout<<line<<" is long: "<<n<<endl;
        
        for(int k=0;k<n;k++){
            line[k]=tolower(line[k]);
        }
        myfile.close();

        cout<<line<<endl;
        
        
        
        while(j<n){
            
          
            if(line[j]==' '){
 
		line[i]=line[j];
		i++;
                j++;
 
		while(j<n && line[j]==' '){
			j++;
                                
		}
 
            }
       
 
            if(line[j]=='.' || line[j]==',' || line[j]=='?' || line[j]=='!' ){
			
			if(line[i-1]==' '){	
				line[i-1]=line[j];
				j++;
			}
			else{
				line[i]=line[j];
				i++;
                                j++;
			}
 
            }
            
            else{
 		line[i]=line[j];
		i++;
                     j++;
		}
            
           
            }
        
        
        if(i<j){
 
            i--;
            if(line[i]==' '){
		line[i]='\0';
		i++;
		}
            while(i<n){
		line[i+1]='\0';
		i++;
                     
		}
 
	}
        
        cout<<i<<endl<<j<<endl;
     
        cout<<i<<endl<<j<<endl;
        cout<<line<<endl;

        
    }
    else{
        cout<<"wrong";
    }
    
    
    i = 0;
    
    
    while(line[i]!='\0'){
        
        
        if(( line[i]=='!' || line[i]=='?' || line[i]=='.')&& line[i+1]!='\0'){
            line[i+2]=toupper(line[i+2]);
           
            
        }
        if(line[0]!=' '){
           line[0]= toupper(line[0]); 
        }
        
        
        cout<<line[i];
        i++;
    }
    cout<<endl;
   for(int k = 0;k<i;k++){
       int p= k;
       temp[k]= line[k];
       line[k]=line[k];
       
          if(line[k]==',' && line[k+1]!=' '){
                temp[k+1]= line[k+1];
                line[k+1]=' ';
                while(k<i){
                    temp[k+2]= line[k+2];
                    line[k+2]=temp[k+1];
                    k++;
                }
        
           }
           
                       
           
       }
    cout<<endl<<line;
    myfile2.open("izhod.txt",ios::trunc);
    
    myfile2<<line<<endl;
    myfile2.close();
    
}
/*
 * 
 */
int main(int argc, char** argv) {
    correctString();
    return 0;
}

