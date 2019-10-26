#include <bits/stdc++.h>
#include<fstream>
#include<string>

using namespace std;

string decToBin(string n)
{
     string r;
      if(n=="s0")
        r="00";
      else if(n=="s1")
        r="01";
      else if(n=="s2")
        r="10";
      else if(n=="s3")
        r="11";


      return r;


}


int main()
{




    map <string,string> mp;
    map <string,string> operation;

    operation["ADD"] = "000"; //0000 ADD
    operation["SUB"] = "001"; //0001 SUB
    operation["MUL"] = "010";//0010 MUL
    operation["DIV"] = "011"; //001 DIV
    operation["AND"] = "100"; //0000 AND
    operation["OR"]  =  "101"; //0001 OR
    operation["NOR"] = "110";//0010 NOR
    operation["XOR"] = "111"; //001 XOR



    string opcode,oprnd1,oprnd2,oprnd3;
     int i=1;

    while(cin>>opcode) {


        if(opcode == "ADD") {
            cin >> oprnd1 >> oprnd2 >> oprnd3;

                mp["s1"] = oprnd1;

                  mp["s2"] = oprnd2;

                  mp["s3"] = oprnd3;

               }

        if(opcode == "SUB") {
            cin >> oprnd1 >> oprnd2 >> oprnd3;

                mp["s1"] = oprnd1;

                  mp["s2"] = oprnd2;

                  mp["s3"] = oprnd3;

               }

        if(opcode == "MUL") {
            cin >> oprnd1 >> oprnd2 >> oprnd3;

                mp["s1"] = oprnd1;

                  mp["s2"] = oprnd2;

                  mp["s3"] = oprnd3;

               }

        if(opcode == "DIV") {
            cin >> oprnd1 >> oprnd2 >> oprnd3;

                mp["s1"] = oprnd1;

                  mp["s2"] = oprnd2;

                  mp["s3"] = oprnd3;

               }

        if(opcode == "AND") {
            cin >> oprnd1 >> oprnd2 >> oprnd3;

                mp["s1"] = oprnd1;

                  mp["s2"] = oprnd2;

                  mp["s3"] = oprnd3;

               }

        if(opcode == "OR") {
            cin >> oprnd1 >> oprnd2 >> oprnd3;

                mp["s1"] = oprnd1;

                  mp["s2"] = oprnd2;

                  mp["s3"] = oprnd3;

               }
        if(opcode == "NOR") {
            cin >> oprnd1 >> oprnd2 >> oprnd3;

                mp["s1"] = oprnd1;

                  mp["s2"] = oprnd2;

                  mp["s3"] = oprnd3;

               }
         if(opcode == "XOR") {
            cin >> oprnd1 >> oprnd2 >> oprnd3;

                mp["s1"] = oprnd1;

                  mp["s2"] = oprnd2;

                  mp["s3"] = oprnd3;


               }


             ofstream file;

               file.open("output.txt", std::ios_base::app);
               file<< "Machine code for instruction :"<< i <<"\n";

                 file<< operation[opcode] << " " << decToBin(mp["s1"]) << " " << decToBin(mp["s2"]) << " " << decToBin(mp["s3"]) << "\n";
                file.close();
                 i++;

        cout<<"Insruction NO :"<< i<<endl;
    }


    return 0;
}
