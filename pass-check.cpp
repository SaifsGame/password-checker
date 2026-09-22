#include<iostream>
//#include<string>
#include<cctype>


int main(){

    std::string Pass;
    bool upcase = false;
    bool lowcase = false;
    bool digit = false;
    bool special = false;
    bool passcheck = true;
    int score;

    do{
        std::cout << "Enter Password to Check: ";
        std::cin >> Pass;

        if(Pass.length() > 8 ){
        std::cout<<"\nPassword: "<<Pass<<std::endl;
        std::cout<<"Length of Password is:["<<Pass.length()<<"]"<<std::endl;    
        for (int i = 0; i < Pass.length(); i++){
    

        if (isupper(Pass[i])){
            upcase = true;
        }
        
        if( islower(Pass[i])){
            lowcase = true;
        }
        if( isdigit(Pass[i])){
            digit = true;
        }
        if(  ispunct(Pass[i])){
            special = true;
        }
    }
        
        if (upcase && lowcase && digit && special){
            score = 8;
        } else if (upcase && lowcase && digit ){
            score = 5;
        } else if ((upcase || lowcase) && digit ){
            score = 3;
        } else {
            score = 0;
        }
 
        std::cout<<"\nPassword Score: ["<<score<<"/8] ";
        for (int i = 1 ; i <= 8 ; i++){
           if(i <= score){
            std::cout<<"◉";
            } else {
                std::cout<<"◌";
            }
        }
        

        passcheck = false;
        break;
    }
        else {
            std::cout<<"Password Lenght is too short[len must > 8]!\n";
        }

    } while (passcheck);

    


    return 0;
};