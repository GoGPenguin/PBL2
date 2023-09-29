#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>
#include "Role.h"

using namespace std;

//Done login

Role::Role(){
 
    ifstream read ("userAccount.txt");
    string accountData;
    while (getline(read, accountData)){
        vector<string> word = split(accountData, ',');
        userData.push_back(User(word[0], word[1], word[2], word[3], word[4]));
    }
    read.close();

}

Role::~Role(){

    ofstream write;
    write.open("userAccount.txt", ios::out);
    for (auto i : this->userData){
        write << i.getUserId() << "," << i.getNameOfUser() << "," << i.getRoleId() << "," << i.getUserName() << "," << i.getPassword() << "\n";
    }
    write.close();

}

//checkValid
bool Role :: checkUserId(const string& id){
    if (id[0] != 'U' || id[1] != 'S' || id[2] != 'E' || id[3] != 'R') {
        return 0;
    }
    for (int i = 4; i < id.size() - 1; i++){
        if (id[i] < '0' || id[i] > '9') {
        return 0;
        }
    }
    return 1;
}

bool Role :: checkInt(const string& s){
    for (auto x : s) if (x < '0' || x > '9') return false;
    else return true;  

}



int Role::existUser(const string& tmp){
    for (int i = 0; i < this->userData.size(); i++){
        if (userData[i].getUserId() == tmp || userData[i].getUserName() == tmp) return i;
    }
    return -1;
}

void Role::addUser(){
    listUser();
	User tmp;
    string data;
    int check = 0;
    while (true){
        cout << setfill(char(' ')) << setw(40) << "" << "Nhap ma nguoi dung : ";
        cin >> data;
        if (existUser(data) != -1){
            cout << setw(40) << "" << "Ma nguoi dung da ton tai! Vui long tao lai.\n";
        }
        else if (!checkUserId(data)){
            cout << setw(40) << "" << "Dinh dang ma nguoi dung khong dung\n";
            cout << setw(40) << "" << "Ma nguoi dung nhap vao phai co dang USERabc, voi abc la 1 so nguyen duong!\n";
        }
        else {
            tmp.setUserId(data);
            cout << "\n";
            break;
        }
    }
    cout << setw(40) << "" << "Nhap ten nguoi dung: ";
    cin.ignore();
    getline(cin, data);
    tmp.setNameOfUser(data);
    cout << "\n";
    int opt;
    string optmp;
    do{ 
        cout << setw(40) << "" << "1. Quan Ly\n";
        cout << setw(40) << "" << "2. Quan Ly Nhap Hang\n";
        cout << setw(40) << "" << "3. Quan Ly Xuat Hang\n";
        cout << setw(40) << "" << "4. Nhan vien\n";
        cout << setw(40) << "" << "Nhap vai tro cua nguoi dung: ";
        cin >> optmp;
        if (checkInt(optmp)) opt = stoi(optmp);
        else opt = 0;
        cout << "\n";
        if (opt == 1) {
            tmp.setRoleId("Quan Ly");
            break;
        }
        else if (opt == 2) {
            tmp.setRoleId("Quan Ly Nhap Hang");
            break;
        }
        else if (opt == 3) {
            tmp.setRoleId("Quan Ly Xuat Hang");
            break;
        }
        else if (opt == 4) {
            tmp.setRoleId("Nhan Vien");
            break;
        }
        else cout << setw(40) << "" << "Khong ton tai lua chon nay!\n";
    } while(opt != 1 || opt != 2 || opt != 3 || opt != 4);

    while(true){
        cout << setw(40) << "" << "Nhap tai khoan: ";
        cin >> data;
        cout << "\n";
        if (existUser(data) != -1){
            cout << setw(40) << "" << "Ten nguoi dung da ton tai! Vui long tao lai.\n";
        }
        else {
            tmp.setUserName(data);
            break;
        }
    }
    cout << setw(40) << "" << "Nhap mat khau: ";
    cin >> data;
    cout << "\n";
    tmp.setPassword(data);
    this->userData.push_back(tmp);
    system("cls");
    listUser();
    cout << setfill(char(' ')) << setw(40) << "" << "Nguoi dung duoc tao thanh cong!\n\n";
}

void Role::removeUser(){
    listUser();
	string id;
    while (true){
        cout << setfill(char(' ')) << setw(40) << "" << "Nhap ma nguoi dung : ";
        cin >> id;
        if (!checkUserId(id)){
            cout << setw(40) << "" << "Dinh dang ma nguoi dung khong dung\n";
            cout << setw(40) << "" << "Ma nguoi dung nhap vao phai co dang USERabc, voi abc la 1 so nguyen duong!\n";
        }
        else break;
    }
    char x;
    cout << setfill(char(' ')) << setw(40) << "" << "Ban co chac muon xoa nguoi dung nay? (Y: Yes/ N: NO): ";
    cin >> x;
    cout << "\n";
    bool check = 0;
    if (x == 'Y' || x == 'y')
    for (int i = 0; i < this->userData.size(); i++){
        if (existUser(id) != -1 && userData[i].getUserId() == id) {
            userData.erase(userData.begin() + i);
            cout << setfill(char(' ')) << setw(40) << "" << "Tai khoan nguoi dung nay da bi xoa!\n";
            check = 1;
            listUser();
            system("pause");
            system("cls");
            break;
        }
    }
    else {
        check = 1;
        cout << setfill(char(' ')) << setw(40) << "" << "Xoa nguoi dung khong thanh cong!";
        cout << "\n";
    }
    if (!check) cout << setw(40) << "" << "Tai khoan khong ton tai!\n";
}

void Role::listUser(){
    cout << "\n";
    cout << setfill(char(' ')) << setw(10) << "" << setfill(char(205)) << setw(95) <<"";
    cout << "\n";
    cout << setfill(char(' ')) << setw(10) << "" << "| USERID |" << setfill(char(' ')) << setw(10) << "" << "NAME" << setw(10) << "" << "|" 
    << setw(8) << "" << "ROLE" << setw(8) << "" << "|" << setw(6) << "" << "USERNAME" << setw(6) << "" << "|" 
    << setw(4) << "" << "PASSWORD" << setw(4) << "" << "|\n";
    cout << setfill(char(' ')) << setw(10) << "" << setfill(char(205)) << setw(95) <<"";
    cout << "\n";
    for (auto i : userData) {
        i.userShow();
    }
    cout << setfill(char(' ')) << setw(10) << "" << setfill(char(205)) << setw(95) << "" << "\n";
}

void Role::setUser(){
    listUser();
    cout << setfill(char(' ')) << setw(40) << "" << "Nhap tai khoan ban muon thay doi thong tin: \n";
    string data; 
    while (true){
        cout << setfill(char(' ')) << setw(40) << "" << "Nhap ma nguoi dung : ";
        cin >> data;
        if (!checkUserId(data)){
            cout << setw(40) << "" << "Dinh dang ma nguoi dung khong dung\n";
            cout << setw(40) << "" << "Ma nguoi dung nhap vao phai co dang USERabc, voi abc la 1 so nguyen duong!\n";
        }
        else break;
    }
    cout << "\n";
    if (existUser(data) != -1){
        cout << setfill(char(' ')) << setw(40) << "" << "Ban muon thay doi\n";
        cout << setw(40) << "" << "1. Ten nguoi dung." << "" << "\n";
        cout << setw(40) << "" << "2. Mat khau.";
        cout << "\n";
        int opt;
        string tmp;
        do{
            cout << setw(40) << "" << "Lua chon cua ban la: ";
            cin >> tmp;
            if (checkInt(tmp)) opt = stoi(tmp);
            else opt = 0;
            if (opt != 1 && opt != 2) cout << setw(40) << "" << "Moi ban nhap lai lua chon!\n";
        } while (opt != 1 && opt != 2);
        if (opt == 1) {
            cout << setfill(char(' ')) << setw(40) << "" << "Nhap ten ban muon doi: ";
            cin.ignore();
            string name;
            getline(cin, name);
            userData[existUser(data)].setNameOfUser(name);
            cout << setw(40) << "" << "Ten nguoi dung duoc cap nhat thanh cong!\n";
        }
        else if (opt == 2){
            cout << setw(40) << "" << "Nhap mat khau moi: ";
            string pass;
            cin >> pass;
            userData[existUser(data)].setPassword(pass);
            cout << setw(40) << "" << "Mat khau moi duoc cap nhat thanh cong!\n";
        }
        listUser();
        system("pause");
        system("cls");
    }
    else cout << setw(40) << "Nguoi dung khong ton tai\n";
}

void Role::sortUserByRole(){
    for (int i = 0; i < this->userData.size(); i++){
        for (int j = i + 1; j < this->userData.size(); j++){
            if (userData[i].getRoleId() < userData[j].getRoleId()){
                User tmp = userData[i];
                userData[i] = userData[j];
                userData[j] = tmp;
            }
        }
    }
}

void Role::manaLogin(){
    int opt = 0;
    string tmp;
    while (opt != 5){
        cout << setfill(char(' ')) << setw(40) << "" << "1. In thong tin cac tai khoan\n";
        cout << setw(40) << "" << "2. Them tai khoan moi\n";
        cout << setw(40) << "" << "3. Sua doi 1 tai khoan\n";
        cout << setw(40) << "" << "4. Xoa 1 tai khoan\n";
        cout << setw(40) << "" << "5. Quay lai\n";
        cout << setfill(char(' ')) << setw(40) << "" << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp)) opt = stoi(tmp);
        else opt = 0;
        cout << "\n";
        switch(opt){
            case 1: {
                cout << "\n";
                system("cls");
                listUser();
                break;
            }
            case 2: {
                system("cls");
                addUser();
                break;
            }
            case 3: {
                system("cls");
                setUser();
                break;
            }
            case 4:{
                system("cls");
                removeUser();
                break;
            }
            case 5:{
                system("cls");
                break;
            }
            default: {
                system("cls");
                cout << setw(40) << "" << "Nhap sai lua chon, moi ban nhap lai: \n";
                break;
            }
        }
    }
}

int Role::login(){
    while(true){
        int check = 0;
        string username, password;
        cout << setfill(char('-')) << setw(50) << "DANG NHAP" << setw(50)<< "\n\n\n";
        cout << setfill(char(' ')) << setw(40) << "Tai khoan: ";
        cin >> username;
        cout << "\n";
        cout << setfill(char(' ')) << setw(39) << "Mat khau: ";
        char x = 'b';
        while (x != 13){
            x = getch();
            if (x == 13) break;
            else if (x == 8 && password.size() != 0){
                password.pop_back();
                cout << "\b" << " \b";
            }
            else if (x != 8){
                password += x;
                cout << '*';
            }
        }
        system("cls");
        for (int i = 0; i < userData.size(); i++){
            if (userData[i].getUserName() == username && userData[i].getPassword() == password){
                if (userData[i].getRoleId() == "Quan Ly Xuat Hang") {
                    cout << setfill(char(' ')) << setw(45 - userData[i].getUserName().size()) << "" << "Xin chao " << userData[i].getUserName() << "." << " Ban la quan ly xuat hang!\n";
                    QuanLyXuatKho manaOut;
                    system("cls");
                    manaOut.menuOut();
                    
                }
                else if (userData[i].getRoleId() == "Quan Ly Nhap Hang"){
                    cout << setfill(char(' ')) << setw(45 - userData[i].getUserName().size()) << "" << "Xin chao " << userData[i].getUserName() << "." << " Ban la quan ly nhap hang!\n";
                    QuanLyNhapKho manaIn;
                    system("cls");
                    manaIn.menuIn();
                }
                else if (userData[i].getRoleId() == "Quan Ly"){
                    cout << setfill(char(' ')) << setw(45 - userData[i].getUserName().size()) << "" << "Xin chao " << userData[i].getUserName() << "." << " Ban la quan ly!\n\n";
                    int opt = 0;
                    string optmp;
                    a:
                    cout << setfill(char(' ')) << setw(40) << "" << "1. Quan ly tai khoan dang nhap\n";
                    cout << setw(40) << "" << "2. Quan ly tong kho\n";
                    cout << setw(40) << "" << "3. Thoat chuong trinh\n";
                    while (opt != '1' && opt != '2' && opt != '3'){
                        cout << setfill(char(' ')) << setw(40) << "" << "Moi nhap lua chon cua ban: ";
                        cin >> optmp;
                        if (checkInt(optmp)) opt = stoi(optmp);
                        else opt = 0;
                        cout << "\n";
                        switch(opt){
                            case 1: {
                                system("cls");
                                manaLogin();
                                opt = -1;
                                goto a;
                                break;
                            }
                            case 2: {
                                QuanLyTongKho manaAll;
                                system("cls");
                                manaAll.menuAll();
                                break;
                            }
                            case 3: {
                                system("cls");
                                cout << "\n\n\n\n\n";
                                cout << setw(40) << "" << "Cam on. Hen gap lai ban lan sau"<< "\n\n";
                                return 0;
                            }
                            default :{
                                cout << setw(40) << "" << "Lua chon ban nhap khong ton tai, vui long nhap lai!\n";
                            }
                        }
                    }
                }
                check = 1;
            }
        }
        if (check == 1) break;
        else {
            cout << setw(40) << "" << "Tai khoan hoac mat khau ban nhap khong dung!\n";
            cout << setw(40) << "" << "1. Nhan phim bat ky de tiep tuc...\n";
            cout << setw(40) << "" << "0. Nhan 0 de thoat chuong trinh!\n";
            cout << setw(40) << "" << "Lua chon cua ban la: ";
            int p;
            string ptmp;
            cin >> ptmp;
            if (checkInt(ptmp)) p = stoi(ptmp);
            else p = 1;
            if (!p) {
                system("cls");
                cout << "\n\n\n\n\n";
                cout << setw(40) << "" << "Cam on. Hen gap lai ban lan sau"<< "\n\n";
                break;
            }
            system("cls");
        }
    }
}  

void Role::run(){
    cout << setfill((char)205) << setw(100) << "\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << "|        ____                      _             _  ___             _    _                        |\n";                    
    cout << "|       / __ |                    | |           | |/ / |           | |  | |                       |\n";                     
    cout << "|      | |  | |_   _  __ _ _ __   | |    _   _  | ' /| |__   ___   | |__| | __   _   _  ____      |\n";
    cout << "|      | |  | | | | |/ _` | '_ |  | |   | | | | |  < | '_ | / _ |  |  __  |/ _`'| '_| |/ _` |     |\n";
    cout << "|      | |__| | |_| | (_| | | | | | |___| |_| | | . || | | | (_) | | |  | | (_| | | | | (_| |     |\n";
    cout << "|       |___|_||__,_||__,_|_| |_| |______|__, | |_||_|_| |_||___/  |_|  |_|L__,_|_| |_||__, |     |\n";
    cout << "|                                         __/ |                                         __/ |     |\n";
    cout << "|                                        |___/                                         |___/      |\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << setfill((char)205) << setw(100) << "\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << "| " << setfill(char(' ')) << setw(40) << "Sinh vien thuc hien" << setw(30) << "Nguyen Van Truong Son" << setw(28) << "|\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << "| " << setfill(char(' ')) << setw(66)<< "Nguyen Thuc Hoang" << setw(32) << "|\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << "| " << setfill(char(' ')) << setw(24) << "Lop" << setw(31) << "21T-DT" << setw(43) << "|\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << "| " << setfill(char(' ')) << setw(98) << " |\n";
    cout << setfill((char)205) << setw(100) << "\n\n";
    cout << setfill(char(' ')) << setw(65) << "Nhan phim bat ky de Dang nhap..."<< "\n\n";
    char c = getchar();
    system("cls");
    this->login();
}
