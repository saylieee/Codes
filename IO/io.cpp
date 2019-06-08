/*
 Input Stream: If the direction of flow of bytes is from device(for example: Keyboard) to the main memory then this process is called input.
 
 Output Stream: If the direction of flow of bytes is opposite, i.e. from main memory to device( display screen ) then this process is called output.
 
 iostream: iostream stands for standard input output stream. This header file contains definitions to objects like cin, cout, cerr etc.
 
 fstream: This header file mainly describes the file stream. This header file is used to handle the data being read from a file as input or data being written into the file as output.

 */
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{

   // char str1[100000];
   // scanf("%s",str1); // doesn't read spaces
    
    //printf("--%s--",str1);
    
  //  printf("\n--------------\n");
    
    
    
 /*   char str2[100000];
    scanf(" %[^\n]s",str2); // reads string with white spaces till you hit Enter
    
    printf("--%s--\n",str2);
    printf("lenght of string--> %lu",strlen(str2));
  
    printf("\n--------------\n");

  */
    
    // alternate method to read strings with whitespaces
  /*
    string S;
    getline(cin,S);
    cout<<S;
    printf("\n--------------\n");
    
  */
    
    //reading 2-D strings
    
 /*
  
  int max_len =  100; //maximum length of a string
    int n = 5; // no of strings
    char **strs = (char **) malloc(sizeof (char) * n);
   
    for (int i = 0 ; i < n ; i++) {
        strs[i] = (char *) malloc(sizeof (char) * max_len);
    }
    
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]s",strs[i]); // space before % is needed
    }
    
    for (int i = 0; i < n; i++) {
        printf("%s    --> %lu \n",strs[i],strlen(strs[i]));
    }
    
    */
    
    
   // File Opeartions
  //Source  https://www.programiz.com/c-programming/c-file-input-output
  //  https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
    
  /*  FILE *fp;
    
    fp = fopen("sample.txt", "w"); // writing into file
    char s[125];
    scanf("%[^\n]s" ,s);
    
    fprintf(fp, "%s" ,s);
    
    fclose(fp);
    */
   
    // using ifstream,ofstream,fstream
    // Readin Multiline text from file
    
  /*  string line;
    string S;
    ifstream fp;
    
    fp.open("sample.txt");
    while (getline(fp, line)){
        cout<<line<<endl;
    }
   fp.close();
   */
    ofstream fp;
    string S;
    fp.open("sample1.txt");
    
    getline(cin,S);
    fp<<S<<endl;
    fp.close();
    return 0;
}
