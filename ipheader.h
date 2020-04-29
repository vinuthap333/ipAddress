#include<iostream>
#include<vector>
#include<string>
#include<sstream>

class IPAddress{

private:
        int a;
        int b;
        int c;
        int d;

public: IPAddress():a(127),b(0),c(0),d(1){}
        IPAddress(int w,int x,int y,int z):a(w),b(x),c(y),d(z){}
        
        IPAddress(std::string ipaddress){
                
                std::vector<std::string> tokens;
                std::stringstream check1(ipaddress);
                std::string intermediate;

                while(getline(check1, intermediate, '.'))
                {
                        tokens.push_back(intermediate);
                }

                a = stoi(tokens[0]); 
                b = stoi(tokens[1]); 
                c = stoi(tokens[2]);
                d = stoi(tokens[3]); 
        }
        
        void display() const;
};

