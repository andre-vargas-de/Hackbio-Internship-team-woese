#####Kehinde, C++

#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

void task1 (string name, string email, string slackusername, string Biostack, string twitter_handle) {
  cout << name << "\n" << email << "\n"  << slackusername << "\n" << Biostack << "\n" << twitter_handle;
}

void hamming_dist (string slackusername, string twitterhandle) {
  char string1[20], string2[20];
    int count = 0;

    for (int i=0; string1[i]!=0; i++)
        if(string1[i] != string2[i])
            count++;
    cout << "\nhamming Distance: "<<count;
}