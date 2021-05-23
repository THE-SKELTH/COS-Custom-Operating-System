#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;

void BRSOD(){
	for(int e;e < 10;e++){
		system("color 14");
		system("color 41");
		system("cls");
		cout << " *** YOUR COMPUTER IS VERY VERY FATAL ERROR !!!\n";
		cout << " *** STOP 8x88872 (0x5555FR,8x88872)" << endl;
		BRSOD();
		if(e == 10){
			e = 0;
		}
	}
}

void RSOD(){
	system("cls");
	system("color 4f");
	cout << " A problem has been detect and CoS has been shutdown to prevent damage \n\tto your computer\n\n"
			" CRASH_MEMORY_DUMP\n"
			" CPU_OVERLOAD\n"
			" WARING YOU COMPUTER WILL EXPLODES\n\n"
			" FATAL CANNOT BE REPAIR\n\n"
			" ***  STOP: 1x00087 (0x0000F4,1x00087)\n";
	ofstream log("erorrrr_log.txt");
	log << "STOP * 0x000080F3";
	log.close();
	system("erorrrr_log.txt");
	Sleep(100000);
}

void BSOD(){
	system("cls");
		system("color 1f");
		cout << " A problem has been detect and CoS has been shutdown to prevent damage \nto your computer.\n\n"
				" The Problem seem to be cause by the following file: XT5556.vcpu\n"
				" PAGE_FAULT_IN_NONPAGED_AREA\n"
				" if this first time you see this stop error scren\nfollow this step:\n"
				" restart the CoS and enter bios B \nand change value of memory to structure vcpu\n"
				" Press any key to restart\n\n"
				" ***  STOP: 0x00078 (0x0000F3,0x00078)\n\n";
		ofstream log("erorr_log.txt");
		log << "STOP * 0x000000F4";
		log.close();
		_getch();
		system("erorr_log.txt");
		cout << " Shutingdown CoS...\n";
		Sleep(5000);
		exit(0);
}

void COSS(){
	string user1;
	string shuts = "shutdown [s]";
	string shutr = "shutdown [r]";
	string color = "color [c]";
	cout << "Welcome to Custom OS\n";
	cout << "Type Command >>";
	getline(cin, user1);
	if(user1 == shuts){
		cout << "Your computer Will shutdown !!!\n";
		Sleep(2000);
		system("cls");
		cout << "Log off....\n";
		Sleep(1500);
		system("cls");
		cout << "Shutting Down...n";
		Sleep(5000);
		exit(0);
	}else if(user1 == shutr){
		cout << "Your computer Will shutdown !!!\n";
		Sleep(2000);
		system("cls");
		cout << "Log off....\n";
		Sleep(1500);
		system("cls");
		cout << "Shutting Down...n";
		Sleep(5000);
		system("CoS.exe");
		exit(0);
	}else if(user1 == color){
		BSOD();
	}
}

void CoS(){
	//1
	string rsod1 = "0x0000F4,1x00087";
	string rsod2 = "0x0000F3,1x00098";
	string rsod3 = "0x0000F2,1x00028";
	string rsod4 = "0x0000F1,1x00912";
	//2
	string bsod1 = "0x0000F3,0x00078";
	string bsod2 = "0x0000F2,0x00297";
	string bsod3 = "0x0000F7,0x02894";
	string bsod4 = "0x0000F4,0x00887";
	//3
	string brsod1 = "0x5555FR,8x88872";
	string brsod2 = "0x5247UG,8x88284";
	string brsod3 = "0x5538GR,8x48973";
	string brsod4 = "0x5528YR,8x88284";
	//true
	string cput = "0x555567,8x5GF6T";
	//string cpu_value;
	//int cpu_value;
	string cpu_value_zero;
	ifstream value("XT5556.vcpu");
	//string cpu_value;
	getline(value,cpu_value_zero);
	cout << "\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\tWelcome To COS";
	_getch();
	if(cpu_value_zero == brsod1){
		BRSOD();
	}else if(cpu_value_zero == brsod2){
		BRSOD();
	}else if(cpu_value_zero == brsod3){
		BRSOD();
	}else if(cpu_value_zero == brsod4){
		BRSOD();
	}
	if(cpu_value_zero == bsod1){
		BSOD();
	}else if(cpu_value_zero == bsod2){
		BSOD();
	}else if(cpu_value_zero == bsod3){
		BSOD();
	}else if(cpu_value_zero == bsod4){
		BSOD();
	}
	if(cpu_value_zero == rsod1){
		RSOD();
	}else if(cpu_value_zero == rsod2){
		RSOD();
	}else if(cpu_value_zero == rsod3){
		RSOD();
	}else if(cpu_value_zero == rsod4){
		RSOD();
	}
	else {
		BSOD();
	}
	if(cpu_value_zero == cput){
		COSS();
	}
	/*switch(cpu_value_zero){
		case 1:
			RSOD();
			break;
		case 0:
			BSOD();
			break;
		default:
			exit(0);
			break;
	}*/
}

int Boot(){
	long bt;
	bt = 0;
	system("cls");
		for(long i = 0;;i++){
			system("cls");
			bt++;
			cout << "Booting...\n"
					"Booting Stats :" << bt << "%\n";
			Sleep(200);
			if(bt == 100){
				system("cls");
				CoS();
			}
		}
		
		return 0;
}

void BIOS(){
	string cpu_value_bios;
	ifstream biosd("XT5556.vcpu");
	getline(biosd,cpu_value_bios);
	munu:
		char slc;
		system("cls");
		system("color 9b");
		cout << "Welcome To BIOS of CoS \n"
				"Menu: \n"
				"1. Change Cpu Value\n";
		cin >> slc;
		switch(slc){
			case '1':
				goto cop;
				break;
			default:
				BSOD();
				break;
	}
	
	cop:
		char peg;
		system("cls");
		cout << "default value is << " << cpu_value_bios << endl;
		cout << "change to ";
		cin >> peg;
		ofstream cff("XT5556.vcpu");
		cff << peg;
		goto munu;
}

int Booting_conf(){
		system("title Custom operating System");
		system("cls");
		char cfrm;
		cout << "Welcome To Boot Menu \n"
				"G for start Boot \n"
				"B to BIOS\n";
		cout << "Select: ";
		cin >> cfrm;
		if(cfrm == 'G' || cfrm == 'g'){
			Boot();
		}
		if(cfrm == 'B' || cfrm == 'b'){
			BIOS();
		}
		
		return 0;
}

int main(){
	goto Loading;
	
	Loading:
		cout << "\n";
		Sleep(2500);
		goto Bootp;
	
	Bootp:
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n"
				"\t\t\t\t C&o&S";
		Sleep(4000);
		Booting_conf();
}
