//this is the program for the hangman game
#include<iostream>
#include<string>
using namespace std;
string ans="mango";
string safe="_____";          //this is inisalized for the saving the correct guess numbers
int lives=5;
//this is the function to draw the hangman drawing 
void hangman(int rlives){
    if(rlives==4){cout<<endl;
        cout<<"     o"<<endl<<"   --"<<"|"<<"--"<<endl<<"    /"<<"\\";
    }
    if(rlives==3){cout<<endl;
        cout<<"     "<<endl<<"   --"<<"|"<<"--"<<endl<<"    /"<<"\\";
    }
    if(rlives==2){cout<<endl;
        cout<<"     "<<endl<<"   --"<<" "<<"--"<<endl<<"    /"<<"\\";
    }
    if(rlives==1){cout<<endl;
        cout<<"     "<<endl<<"     "<<" "<<"  "<<endl<<"    /"<<"\\";
    }
    if(rlives==0){cout<<endl;
        cout<<"     "<<endl<<"     "<<" "<<"  "<<endl<<"     "<<"  ";
    }
}
bool checkfun(char &c ) {
	bool match=false;
	for(int i=0; i<ans.size(); i++) {
		if(c==ans[i]) {
			if (c == safe[i]) {
				cout << "you already found that letter! try something else." << endl;
				return true;           //here the function will not reduce chance
			}
			match=true;
			cout<<"Yes ! you have guess the correct "<<" ";
			cout<<ans[i]<<"  "<<endl;
			safe[i]=ans[i];
		}
	}
	if(match==false) {
		cout<<"Sorry wrong guess"<<endl;
		lives--;
		cout<<"chance gone , chances left "<<lives<<endl;
	}
	if(match==true) {
		cout<<"chance left "<<lives<<endl;
	}
	for(int i=0; i<ans.size(); i++) {
		cout<<safe[i];
		cout<<" ";
	}
	cout<<endl;
	return match;
}
int main() {
	char ch;
	while (lives > 0 && safe != ans) {      //till the life are ended 
		ch = ' ';
		cout << "\nEnter a letter to guess: ";
		cin >> ch;

		checkfun(ch);
		hangman(lives);
	} 

	if (safe == ans) {
		cout << "\nCONGRATULATIONS! You saved the hangman! The word was: " << ans << endl;
	} else {
		cout << "\nGAME OVER. You ran out of lives. The word was: " << ans << endl;
	}

	return 0;
}