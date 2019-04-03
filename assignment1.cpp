
#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()


{
	int buf_Size;
	cout << "What is the Buffer size?" << endl;
	cin >> buf_Size;
	cout << "Enter the string: " << endl;
	string input;
	int size=ceil((float)buf_Size/2);
	char error;



while(getline(cin,input)){


int i;

int inlen=input.length();

int rotation=ceil((float)inlen/(size-1));

char bufferLeft[size];

char bufferRight[size];

for(i=0;i<size-1;i++){

bufferLeft[i]=' ';

bufferRight[i]=' ';

}


bufferLeft[size-1]='L';

bufferRight[size-1]='R';


for(i=0;i<input.length();i++){

if((i/(size-1))%2 == 0){

bufferLeft[i%(buf_Size-2)]=input[i];


for(int j=0;j<size;j++){

cout << bufferLeft[j];

}

for(int j=0;j<size;j++){

cout << bufferRight[j];

}

cout << endl;

}

else{

bufferRight[(i-size+1)%(buf_Size-2)]=input[i];


for(int j=0;j<size;j++){

cout << bufferLeft[j];

}

for(int j=0;j<size;j++){

cout << bufferRight[j];

}

cout << endl;

}

}

for(i=0;i<size;i++){

cout << bufferLeft[i];

}

for(i=0;i<size;i++){

cout << bufferRight[i];

}

cout << endl;

}




return 0;
}


