#include "QuanLy.h"
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <cstring>

QuanLy::QuanLy()
{
    // Doc tu file
    inputCustomer();
    inputCategory();
    inputProduct();
    inputSupplier();
    input_Input();
    input_DetailInput();
    input_Output();
    input_DetailOutput();
}

QuanLy ::~QuanLy()
{
}

void QuanLyXuatKho ::saveData()
{
    // Chi tiet don xuat
    ofstream write;
    write.open("detailOutputData.txt", ios::out);
    for (auto i : this->DataDetailOutput)
    {
        write << i.getDetailOutputId() << "," << i.getOutputId() << "," << i.getProductId() << "," << i.getDetailInputId() << "," << i.getCustomerId() << "," << i.getCount() << "\n";
    }
    write.close();
    // Don xuat
    write.open("outputData.txt", ios::out);
    for (auto i : this->DataOutput)
    {
        write << i.getOutputId() << "," << i.getDayOfOutput() << "\n";
    }
    write.close();
    // Chi tiet don nhap
    write.open("detailInputData.txt", ios::out);
    for (auto i : this->DataDetailInput)
    {
        write << i.getDetailInputId() << "," << i.getInputId() << "," << i.getProductId() << "," << i.getCount() << "," << i.getPriceIn() << "," << i.getPriceOut() << "," << i.getRest() << "\n";
    }
    write.close();
    // Don nhap

    write.open("inputData.txt", ios::out);
    for (auto i : this->DataInput)
    {
        write << i.getInputId() << "," << i.getDayOfInput() << "\n";
    }
    write.close();
    // Thong tin nha cung cap

    write.open("SupplierData.txt", ios::out);
    for (auto i : this->DataSupplier)
    {
        write << i.getSupplierId() << "," << i.getSupplierName() << "," << i.getSupplierAddress() << "," << i.getSupplierPhoneNumber() << "\n";
    }
    write.close();
    // San pham

    write.open("ProductData.txt", ios::out);
    for (auto i : this->DataProduct)
    {
        write << i.getProductId() << "," << i.getSupplierId() << "," << i.getProductName() << "," << i.getUnitId() << "\n";
    }
    write.close();
    // Unit

    write.open("unitData.txt", ios::out);
    for (auto i : this->DataCategory)
    {
        write << i.getproductTypeId() << "," << i.getproductName() << "\n";
    }
    write.close();
    // Khach hang

    write.open("customerData.txt", ios::out);
    for (auto i : this->DataCustomer)
    {
        write << i.getId() << "," << i.getName() << "," << i.getAddress() << "," << i.getPhoneNumber() << "\n";
    }
    write.close();
}

void QuanLyNhapKho ::saveData()
{
    // Chi tiet don xuat
    ofstream write;
    write.open("detailOutputData.txt", ios::out);
    for (auto i : this->DataDetailOutput)
    {
        write << i.getDetailOutputId() << "," << i.getOutputId() << "," << i.getProductId() << "," << i.getDetailInputId() << "," << i.getCustomerId() << "," << i.getCount() << "\n";
    }
    write.close();
    // Don xuat

    write.open("outputData.txt", ios::out);
    for (auto i : this->DataOutput)
    {
        write << i.getOutputId() << "," << i.getDayOfOutput() << "\n";
    }
    write.close();
    // Chi tiet don nhap

    write.open("detailInputData.txt", ios::out);
    for (auto i : this->DataDetailInput)
    {
        write << i.getDetailInputId() << "," << i.getInputId() << "," << i.getProductId() << "," << i.getCount() << "," << i.getPriceIn() << "," << i.getPriceOut() << "," << i.getRest() << "\n";
    }
    write.close();
    // Don nhap

    write.open("inputData.txt", ios::out);
    for (auto i : this->DataInput)
    {
        write << i.getInputId() << "," << i.getDayOfInput() << "\n";
    }
    write.close();
    // Thong tin nha cung cap

    write.open("SupplierData.txt", ios::out);
    for (auto i : this->DataSupplier)
    {
        write << i.getSupplierId() << "," << i.getSupplierName() << "," << i.getSupplierAddress() << "," << i.getSupplierPhoneNumber() << "\n";
    }
    write.close();
    // San pham

    write.open("ProductData.txt", ios::out);
    for (auto i : this->DataProduct)
    {
        write << i.getProductId() << "," << i.getSupplierId() << "," << i.getProductName() << "," << i.getUnitId() << "\n";
    }
    write.close();
    // Unit

    write.open("unitData.txt", ios::out);
    for (auto i : this->DataCategory)
    {
        write << i.getproductTypeId() << "," << i.getproductName() << "\n";
    }
    write.close();
    // Khach hang

    write.open("customerData.txt", ios::out);
    for (auto i : this->DataCustomer)
    {
        write << i.getId() << "," << i.getName() << "," << i.getAddress() << "," << i.getPhoneNumber() << "\n";
    }
    write.close();
}

void QuanLyTongKho ::saveData()
{
    // Chi tiet don xuat
    ofstream write;
    write.open("detailOutputData.txt", ios::out);
    for (auto i : this->DataDetailOutput)
    {
        write << i.getDetailOutputId() << "," << i.getOutputId() << "," << i.getProductId() << "," << i.getDetailInputId() << "," << i.getCustomerId() << "," << i.getCount() << "\n";
    }
    write.close();
    // Don xuat

    write.open("outputData.txt", ios::out);
    for (auto i : this->DataOutput)
    {
        write << i.getOutputId() << "," << i.getDayOfOutput() << "\n";
    }
    write.close();
    // Chi tiet don nhap

    write.open("detailInputData.txt", ios::out);
    for (auto i : this->DataDetailInput)
    {
        write << i.getDetailInputId() << "," << i.getInputId() << "," << i.getProductId() << "," << i.getCount() << "," << i.getPriceIn() << "," << i.getPriceOut() << "," << i.getRest() << "\n";
    }
    write.close();
    // Don nhap

    write.open("inputData.txt", ios::out);
    for (auto i : this->DataInput)
    {
        write << i.getInputId() << "," << i.getDayOfInput() << "\n";
    }
    write.close();
    // Thong tin nha cung cap

    write.open("SupplierData.txt", ios::out);
    for (auto i : this->DataSupplier)
    {
        write << i.getSupplierId() << "," << i.getSupplierName() << "," << i.getSupplierAddress() << "," << i.getSupplierPhoneNumber() << "\n";
    }
    write.close();
    // San pham

    write.open("ProductData.txt", ios::out);
    for (auto i : this->DataProduct)
    {
        write << i.getProductId() << "," << i.getSupplierId() << "," << i.getProductName() << "," << i.getUnitId() << "\n";
    }
    write.close();
    // Unit

    write.open("unitData.txt", ios::out);
    for (auto i : this->DataCategory)
    {
        write << i.getproductTypeId() << "," << i.getproductName() << "\n";
    }
    write.close();
    // Khach hang

    write.open("customerData.txt", ios::out);
    for (auto i : this->DataCustomer)
    {
        write << i.getId() << "," << i.getName() << "," << i.getAddress() << "," << i.getPhoneNumber() << "\n";
    }
    write.close();
}

void QuanLy::inputCustomer()
{
    ifstream fi("CustomerData.txt");
    string customerData;
    while (getline(fi, customerData))
    {
        vector<string> words = split(customerData, ',');
        this->DataCustomer.push_back(Customer(words[0], words[1], words[2], words[3]));
    }
}

void QuanLy::inputCategory()
{
    ifstream fi("unitData.txt");
    string categoryData;
    while (getline(fi, categoryData))
    {
        vector<string> words = split(categoryData, ',');
        this->DataCategory.push_back(Category(words[0], words[1]));
    }
}

void QuanLy::inputProduct()
{
    ifstream fi("ProductData.txt");
    string productData;
    while (getline(fi, productData))
    {
        vector<string> words = split(productData, ',');
        this->DataProduct.push_back(Product(words[0], words[1], words[2], words[3]));
    }
}

void QuanLy::inputSupplier()
{
    ifstream fi("SupplierData.txt");
    string supplierData;
    while (getline(fi, supplierData))
    {
        vector<string> words = split(supplierData, ',');
        this->DataSupplier.push_back(Supplier(words[0], words[1], words[2], words[3]));
    }
}

void QuanLy::input_Input()
{
    ifstream fi("inputData.txt");
    string inputData;
    while (getline(fi, inputData))
    {
        vector<string> words = split(inputData, ',');
        this->DataInput.push_back(Input(words[0], words[1]));
    }
}

void QuanLy::input_DetailInput()
{
    ifstream fi("detailInputData.txt");
    string detail_inputData;
    while (getline(fi, detail_inputData))
    {
        vector<string> words = split(detail_inputData, ',');
        this->DataDetailInput.push_back(DetailInput(words[0], words[1], words[2], stoi(words[3]), stoi(words[4]), stoi(words[5]), stoi(words[6])));
    }
}

void QuanLy::input_Output()
{
    ifstream fi("outputData.txt");
    string dataOutput;
    while (getline(fi, dataOutput))
    {
        vector<string> words = split(dataOutput, ',');
        this->DataOutput.push_back(Output(words[0], words[1]));
    }
}

void QuanLy::input_DetailOutput()
{
    ifstream fi("detailOutputData.txt");
    string dataDetailOutput;
    while (getline(fi, dataDetailOutput))
    {
        vector<string> words = split(dataDetailOutput, ',');
        this->DataDetailOutput.push_back(DetailOutput(words[0], words[1], words[2], words[3], words[4], stoi(words[5])));
    }
}

// Check Valid
bool QuanLy ::checkCusId(const string &id)
{
    if (id[0] != 'C' || id[1] != 'U' || id[2] != 'S')
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Dinh dang cua ma khach hang phai la CUSabc, voi abc la so nguyen duong!\n";
        return 0;
    }
    for (int i = 3; i < id.size() - 1; i++)
    {
        if (id[i] < '0' || id[i] > '9')
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Dinh dang cua ma khach hang phai la CUSabc, voi abc la so nguyen duong!\n";
            return 0;
        }
    }
    return 1;
}

bool QuanLy ::checkSupId(const string &id)
{
    if (id[0] != 'S' || id[1] != 'U' || id[2] != 'P')
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Dinh dang cua ma nha cung cap phai la SUPabc, voi abc la so nguyen duong!\n";
        return 0;
    }
    for (int i = 3; i < id.size() - 1; i++)
    {
        if (id[i] < '0' || id[i] > '9')
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Dinh dang cua ma nha cung cap phai la SUPabc, voi abc la so nguyen duong!\n";
            return 0;
        }
    }
    return 1;
}

bool QuanLy ::checkInpId(const string &id)
{
    if (id[0] != 'I' || id[1] != 'N')
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Dinh dang cua ma don nhap phai la INabc, voi abc la so nguyen duong!\n";
        return 0;
    }
    for (int i = 2; i < id.size() - 1; i++)
    {
        if (id[i] < '0' || id[i] > '9')
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Dinh dang cua ma don nhap phai la INabc, voi abc la so nguyen duong!\n";
            return 0;
        }
    }
    return 1;
}

bool QuanLy ::checkDinId(const string &id)
{
    if (id[0] != 'D' || id[1] != 'I' || id[2] != 'N')
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Dinh dang cua ma chi tiet don nhap phai la DINabc, voi abc la so nguyen duong!\n";
        return 0;
    }
    for (int i = 3; i < id.size() - 1; i++)
    {
        if (id[i] < '0' || id[i] > '9')
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Dinh dang cua ma chi tiet don nhap phai la DINabc, voi abc la so nguyen duong!\n";
            return 0;
        }
    }
    return 1;
}

bool QuanLy ::checkOutId(const string &id)
{
    if (id[0] != 'O' || id[1] != 'U' || id[2] != 'T')
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Dinh dang cua ma don xuat phai la OUTabc, voi abc la so nguyen duong!\n";
        return 0;
    }
    for (int i = 3; i < id.size() - 1; i++)
    {
        if (id[i] < '0' || id[i] > '9')
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Dinh dang cua ma don xuat phai la OUTabc, voi abc la so nguyen duong!\n";
            return 0;
        }
    }
    return 1;
}

bool QuanLy ::checkDoutId(const string &id)
{
    if (id[0] != 'D' || id[1] != 'O' || id[2] != 'U' || id[3] != 'T')
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Dinh dang cua ma chi tiet don xuat phai la DOUTabc, voi abc la so nguyen duong!\n";
        return 0;
    }
    for (int i = 4; i < id.size() - 1; i++)
    {
        if (id[i] < '0' || id[i] > '9')
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Dinh dang cua ma chi tiet don xuat phai la DOUTabc, voi abc la so nguyen duong!\n";
            return 0;
        }
    }
    return 1;
}

bool QuanLy ::checkUnitId(const string &id)
{
    if (id[0] != 'U' || id[1] != 'N' || id[2] != 'I' || id[3] != 'T')
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Dinh dang cua ma loai hang phai la UNITabc, voi abc la so nguyen duong!\n";
        return 0;
    }
    for (int i = 4; i < id.size() - 1; i++)
    {
        if (id[i] < '0' || id[i] > '9')
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Dinh dang cua ma loai hang phai la UNITabc, voi abc la so nguyen duong!\n";
            return 0;
        }
    }
    return 1;
}

bool QuanLy ::checkProId(const string &id)
{
    if (id[0] != 'P' || id[1] != 'R' || id[2] != 'O')
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Dinh dang cua ma san pham phai la PROabc, voi abc la so nguyen duong!\n";
        return 0;
    }
    for (int i = 3; i < id.size() - 1; i++)
    {
        if (id[i] < '0' || id[i] > '9')
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Dinh dang cua ma san pham phai la PROabc, voi abc la so nguyen duong!\n";
            return 0;
        }
    }
    return 1;
}

QuanLyXuatKho ::~QuanLyXuatKho()
{
    this->saveData();
}

void QuanLyXuatKho ::menuOut()
{
    int opt = -1;
    string tmp;
    while (true)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "1. Quan ly don xuat\n";
        cout << setw(40) << ""
             << "2. Quan ly khach hang\n";
        cout << setw(40) << ""
             << "3. Thoat chuong trinh\n";
        cout << setw(40) << ""
             << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        switch (opt)
        {
        case 1:
        {
            this->manaOutput();
            break;
        }
        case 2:
        {
            this->manaCus();
            break;
        }
        case 3:
        {
            cout << setw(40) << ""
                 << "Cam on. Hen gap lai ban lan sau\n";
            this->saveData();
            exit(0);
        }
        default:
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
            break;
        }
        }
    }
}

void QuanLyXuatKho::manaOutput()
{
    int opt = -1;
    string tmp;
    while (true)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "1. In don xuat\n";
        cout << setw(40) << ""
             << "2. Nhan don dat hang\n";
        cout << setw(40) << ""
             << "3. Xem doanh so ban hang\n";
        cout << setw(40) << ""
             << "4. Quay lai\n";
        cout << setw(40) << ""
             << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        switch (opt)
        {
        case 1:
        {
            this->ShowOutput();
            this->ShowDetailOutput();
            break;
        }
        case 2:
        {
            this->takeOrder();
            break;
        }
        case 3:
        {
            this->showFin();
        }
        case 4:
        {
            this->menuOut();
            return;
        }
        default:
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
            break;
        }
        }
    }
}

void QuanLyXuatKho ::manaCus()
{
    int opt = -1;
    string tmp;
    while (true)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "1. In thong tin cac khach hang\n";
        cout << setw(40) << ""
             << "2. Them khach hang\n";
        cout << setw(40) << ""
             << "3. Sua thong tin khach hang\n";
        cout << setw(40) << ""
             << "4. Xoa khach hang\n";
        cout << setw(40) << ""
             << "5. Quay lai\n";
        cout << setw(40) << ""
             << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        switch (opt)
        {
        case 1:
        {
            this->ShowCustomer();
            break;
        }
        case 2:
        {
            this->InsertCustomer();
            break;
        }
        case 3:
        {
            this->SetCustomer();
            break;
        }
        case 4:
        {
            this->DeleteCustomer();
            break;
        }
        case 5:
        {
            this->menuOut();
            return;
        }
        default:
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
            break;
        }
        }
    }
}

void QuanLyXuatKho::showFin()
{
    cout << setfill(char(' ')) << setw(40) << ""
         << "Nhap nam can xem: ";
    string year;
    cin >> year;
    int TongDoanhThu[20];
    memset(TongDoanhThu, 0, sizeof(TongDoanhThu));
    vector<string> v1[100];
    bool check1[100];
    memset(check1, 0, sizeof(check1));
    for (int i = 0; i <= this->DataOutput.size() - 1; i++)
    {
        if (DataOutput[i].getYearOutput(DataOutput[i].getDayOfOutput()) == year)
        {

            string tmp = DataOutput[i].getMonthOutput(DataOutput[i].getDayOfOutput());
            if (tmp[0] == '0')
            {
                int x = tmp[1] - '0';
                check1[x] = true;
                v1[x].push_back(DataOutput[i].getOutputId());
            }
            else if (tmp == "10")
            {
                check1[10] = true;
                v1[10].push_back(DataOutput[i].getOutputId());
            }
            else if (tmp == "11")
            {
                check1[11] = true;
                v1[11].push_back(DataOutput[i].getOutputId());
            }
            else if (tmp == "12")
            {
                check1[12] = true;
                v1[12].push_back(DataOutput[i].getOutputId());
            }
        }
    }
    for (int i = 1; i <= 12; i++)
    {
        if (check1[i] == true)
        {
            for (auto &j : v1[i])
            {
                for (int n = 0; n <= DataDetailOutput.size() - 1; n++)
                {
                    if (j == DataDetailOutput[n].getOutputId())
                    {
                        for (int m = 0; m <= DataDetailInput.size() - 1; m++)
                        {
                            if (DataDetailOutput[n].getDetailInputId() == DataDetailInput[m].getDetailInputId())
                            {
                                TongDoanhThu[i] += DataDetailOutput[n].getCount() * DataDetailInput[m].getPriceOut();
                            }
                        }
                    }
                }
            }
        }
    }
    for (int m = 1; m < 13; m++)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "|" << setfill(char(' '))
             << setw(3) << "" << m << setw(4 - to_string(m).size()) << ""
             << "|"
             << setw(13) << left << TongDoanhThu[m] << "|"
             << "\n";
    }
}

void QuanLyXuatKho::ShowCustomer()
{

    cout << "\n";
    cout << setfill(char(' ')) << setw(10) << "" << setfill(char(205)) << setw(83) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(10) << ""
         << "| CUS ID |" << setfill(char(' ')) << setw(10) << ""
         << "Name" << setw(10) << ""
         << "|"
         << setw(12) << ""
         << "ADDRESS" << setw(12) << ""
         << "|" << setw(5) << ""
         << "PHONE" << setw(5) << ""
         << "|\n";
    cout << setfill(char(' ')) << setw(10) << "" << setfill(char(205)) << setw(83) << "";
    cout << "\n";

    for (auto i : this->DataCustomer)
    {
        cout << setfill(char(' ')) << setw(10) << ""
             << "|" << setfill(char(' '))
             << setw(8) << left << i.getId() << "|"
             << setw(24) << left << i.getName() << "|"
             << setw(31) << left << i.getAddress() << "|"
             << setw(15) << left << i.getPhoneNumber() << "|"
             << "\n";
    }
    cout << setfill(char(' ')) << setw(10) << "" << setfill(char(205)) << setw(83) << ""
         << "\n";
    cout << "\n";
}
// Note: sua lai
void QuanLyXuatKho ::takeOrder()
{
    cout << setfill(char(' ')) << setw(40) << ""
         << "Nhan don dat hang\n";
    string outId, dayOut;
    int outCheck;
    do
    {
        outCheck = 0;
        do
        {
            cout << setw(40) << ""
                 << "Nhap ma don dat hang: ";
            cin >> outId;
        } while (!checkOutId(outId));
        cout << "\n";
        for (auto &i : this->DataOutput)
        {
            if (i.getOutputId() == outId)
            {
                cout << setw(40) << ""
                     << "Ma don dat hang da ton tai!\n";
                outCheck = 1;
                break;
            }
        }
    } while (outCheck);
    cout << setw(40) << ""
         << "Nhap ngay dat hang: ";
    cin >> dayOut;
    cout << "\n";
    Output out(outId, dayOut);
    this->DataOutput.push_back(out);
    string cusId;
    int cusCheck = 0;
    do
    {
        cout << setw(40) << ""
             << "Nhap ma khach hang dat mua hang: ";
        cin >> cusId;
    } while (!checkCusId(cusId));
    for (auto &i : this->DataCustomer)
    {
        if (i.getId() == cusId)
        {
            cusCheck = 1;
            break;
        }
    }
    // Going...
    if (!cusCheck)
    {
        cout << setw(40) << ""
             << "Them thong tin khach hang moi\n";
        string cusName, cusAddr, cusPhone;
        cout << setw(40) << ""
             << "Nhap ten khach hang: ";
        cin.ignore();
        getline(cin, cusName);
        cout << setw(40) << ""
             << "Nhap dia chi khach hang: ";
        getline(cin, cusAddr);
        cout << setw(40) << ""
             << "Nhap SDT khach hang: ";
        cin >> cusPhone;
        Customer cus(cusId, cusName, cusAddr, cusPhone);
        this->DataCustomer.push_back(cus);
    }
    string doutId;
    int doutCheck;
    while (true)
    {
        do
        {
            doutCheck = 0;
            do
            {
                cout << setw(40) << ""
                     << "Nhap ma chi tiet don dat hang: ";
                cin >> doutId;
            } while (!checkDoutId(doutId));
            cout << "\n";
            for (auto &i : this->DataDetailOutput)
            {
                if (i.getDetailOutputId() == doutId)
                {
                    cout << setw(40) << ""
                         << "Ma chi tiet don dat hang da ton tai!\n";
                    doutCheck = 1;
                    break;
                }
            }
        } while (doutCheck);

        string proId;
        int proCheck = 0;
        int count;
        while (true)
        {
            do
            {
                cout << setw(40) << ""
                     << "Nhap ma san pham: ";
                cin >> proId;
            } while (!checkProId(proId));
            for (auto &i : this->DataProduct)
            {
                if (i.getProductId() == proId)
                {
                    proCheck = 1;
                    break;
                }
            }
            if (!proCheck)
                cout << setw(40) << ""
                     << "San pham khong ton tai! Chon san pham khac\n";
            else
                break;
        }
        string tmp = "a";
        while (!checkInt(tmp))
        {
            cout << setw(40) << ""
                 << "Nhap so luong muon mua (La so nguyen duong): ";
            cin >> tmp;
        }
        count = stoi(tmp);
        int tmpcount = count;
        int rest = 0;
        for (auto &i : this->DataDetailInput)
        {
            if (i.getProductId() == proId)
                rest += i.getRest();
        }
        cout << setw(40) << ""
             << "So luong con lai cua san pham la: " << rest << "\n";
        if (rest < count)
        {
            cout << setw(40) << ""
                 << "So luong ton kho khong du!\n";
            int opt;
            string tmp;
            while (true)
            {
                cout << setw(40) << ""
                     << "1. Chon san pham khac hoac thay doi thong tin chi tiet don dat hang\n";
                cout << setw(40) << ""
                     << "2. Hoan thanh dat hang\n";
                cout << setw(40) << ""
                     << "Nhap lua chon cua ban: ";
                cin >> tmp;
                if (checkInt(tmp))
                    opt = stoi(tmp);
                else
                    opt = 0;
                if (opt == 1 || opt == 2)
                    break;
                else
                    cout << setw(40) << ""
                         << "Lua chon sai, vui long chon lai\n";
            }
            if (opt == 1)
                continue;
            else
            {
                cout << setw(40) << ""
                     << "Hoan thanh don dat hang!\n";
                manaOutput();
            }
        }
        // So luong ton kho con du
        else
        {
            string dinId;
            for (auto &i : this->DataDetailInput)
            {
                if (i.getProductId() == proId)
                {
                    dinId = i.getDetailInputId();
                    break;
                }
            }
            for (auto &i : this->DataDetailInput)
            {
                if (i.getProductId() == proId)
                {
                    if (count > i.getRest())
                    {
                        count -= i.getRest();
                        i.setRest(0);
                    }
                    else
                    {
                        i.setRest(i.getRest() - count);
                        count = 0;
                    }
                    if (count == 0)
                        break;
                }
            }
            DetailOutput dout(doutId, outId, proId, dinId, cusId, tmpcount);
            this->DataDetailOutput.push_back(dout);
        }
        int opt;
        while (true)
        {
            cout << setw(40) << ""
                 << "1. Them san pham\n";
            cout << setw(40) << ""
                 << "2. Hoan thanh don dat hang\n";
            cout << setw(40) << ""
                 << "Nhap lua chon cua ban: ";
            cin >> tmp;
            if (checkInt(tmp))
                opt = stoi(tmp);
            else
                opt = 0;
            if (opt != 1 && opt != 2)
                cout << "Nhap sai lua chon, vui long nhap lai!\n";
            else
                break;
        }
        if (opt == 2)
        {
            cout << setw(40) << ""
                 << "Hoan thanh dat hang\n";
            break;
        }
    }
    system("pause");
    manaOutput();
}

void QuanLyXuatKho::SortTimeOutput()
{
    sort(DataOutput.begin(), DataOutput.end(), cmp2);
}

// NOTE: Ham nay bi loi
void QuanLyXuatKho::InsertCustomer()
{
    string s1, s2, s3, s4;
    bool check = true;
    while (true)
    {
        do
        {
            cout << setw(40) << ""
                 << "Nhap ID:";
            cin >> s1;
        } while (!checkCusId(s1));
        bool check = false;
        for (auto &i : this->DataCustomer)
        {
            if (i.getId() == s1)
            {
                cout << setw(40) << ""
                     << "ID Vua Nhap Da Ton Tai, Xin Moi Nhap Lai!\n";
                check = true;
                break;
            }
        }
        if (check == false)
            break;
    }
    cout << setw(40) << ""
         << "Nhap Ten Khach Hang:";
    cin.ignore();
    getline(cin, s2);
    cout << setw(40) << ""
         << "Nhap Dia Chi Khach Hang:";

    getline(cin, s3);
    cout << setw(40) << ""
         << "Nhap So Dien Thoai Khach Hang:";

    cin >> s4;
    DataCustomer.push_back(Customer(s1, s2, s3, s4));
    cout << setw(40) << ""
         << "Khach Hang Da Duoc Them Thanh Cong!\n";
}
void QuanLyXuatKho::DeleteCustomer()
{
    string s;

    do
    {
        cout << setw(40) << ""
             << "Nhap ID Khach Hang Can Xoa: ";
        cin >> s;
    } while (!checkCusId(s));
    bool check = false;
    for (int i = 0; i <= this->DataCustomer.size() - 1; i++)
    {
        if (DataCustomer[i].getId() == s)
        {
            DataCustomer.erase(DataCustomer.begin() + i);
            check = true;
        }
    }
    if (check == false)
        cout << setw(40) << ""
             << "Khong Tim Thay Khach Hang Can Xoa!\n";
    else
        cout << setw(40) << ""
             << "Da Xoa Thanh Cong!\n";
}
void QuanLyXuatKho::SetCustomer()
{
    bool check = true;
    string s;
    int opt;
    int pos;
    while (true)
    {
        string s1;
        do
        {
            cout << setw(40) << ""
                 << "Nhap ID Khach Hang Can Update:";
            cin >> s1;
        } while (!checkCusId(s1));
        bool check = false;
        for (int i = 0; i <= this->DataCustomer.size() - 1; i++)
        {
            if (DataCustomer[i].getId() == s1)
            {
                check = true;
                pos = i;
                break;
            }
        }
        if (check == false)
        {
            cout << setw(40) << ""
                 << "Khong Tim Thay Khach Hang Can Update,Xin Moi Nhap Lai!\n";
        }
        else
        {
            cout << setw(40) << ""
                 << "Da Tim Thay Khach Hang Can Update!\n";
            break;
        }
    }
    cout << setw(40) << ""
         << "0:Dung Update\n";
    cout << setw(40) << ""
         << "1:Update Name\n";
    cout << setw(40) << ""
         << "2:Update Address\n";
    cout << setw(40) << ""
         << "3:Update PhoneNumber\n";
    while (true)
    {
        int opt;
        string tmp;
        cout << setw(40) << ""
             << "Nhap Thuoc Tinh Can Update:";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = -1;
        if (opt == 0)
        {
            cout << setw(40) << ""
                 << "Da Update Xong!\n";
            break;
        }
        if (opt == 1)
        {
            string s1;
            cout << setw(40) << ""
                 << "Nhap Ten Muon Update:";
            cin.ignore();
            getline(cin, s1);
            DataCustomer[pos].setName(s1);
        }
        if (opt == 2)
        {
            string s2;
            cout << setw(40) << ""
                 << "Nhap Dia Chi Muon Update:";
            cin.ignore();
            getline(cin, s2);
            DataCustomer[pos].setAddress(s2);
        }
        if (opt == 3)
        {
            string s3;
            cout << setw(40) << ""
                 << "Nhap So Dien Thoai Muon Update:";
            cin >> s3;
            DataCustomer[pos].setPhoneNumber(s3);
        }
        if (opt == -1)
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi nhap lai!\n";
    }
}
void QuanLyXuatKho::ShowOutput()
{
    SortTimeOutput();
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(25) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(40) << ""
         << "| OUT ID |" << setfill(char(' ')) << setw(5) << ""
         << "DATE" << setw(6) << "|"
         << "\n";
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(25) << "";
    cout << "\n";
    for (auto &i : DataOutput)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "|" << setfill(char(' '))
             << setw(8) << left << i.getOutputId() << "|"
             << setw(14) << left << i.getDayOfOutput() << "|"
             << "\n";
    }
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(25) << "";
    cout << "\n";
}
void QuanLyXuatKho::ShowDetailOutput()
{
    bool check = true;
    string s;
    while (true)
    {
        do
        {
            cout << setfill(char(' ')) << setw(30) << ""
                 << "Nhap Ma Don Xuat De Xem Don Xuat Chi Tiet: ";
            cin >> s;
        } while (!checkOutId(s));
        bool check = false;
        for (auto &i : this->DataOutput)
        {
            if (i.getOutputId() == s)
            {

                cout << "\n";
                cout << setfill(char(' ')) << setw(30) << "" << setfill(char(205)) << setw(65) << "";
                cout << "\n";
                cout << setfill(char(' ')) << setw(30) << ""
                     << "| DOUT ID |" << setfill(char(' ')) << setw(2) << ""
                     << "OUT ID" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "PRO ID" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "DIN ID" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "CUS ID" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "COUNT  " << setw(6) << "|";
                cout << "\n";
                cout << setfill(char(' ')) << setw(30) << "" << setfill(char(205)) << setw(65) << "";
                cout << "\n";

                for (auto &x : DataDetailOutput)
                {
                    if (x.getOutputId() == s)
                    {
                        cout << setfill(char(' ')) << setw(30) << ""
                             << "|" << setfill(char(' '))
                             << setw(9) << left << x.getDetailInputId() << "|"
                             << setw(10) << left << x.getOutputId() << "|"
                             << setw(10) << left << x.getProductId() << "|"
                             << setw(10) << left << x.getDetailInputId() << "|"
                             << setw(10) << left << x.getCustomerId() << "|"
                             << setw(9) << left << x.getCount() << "|"
                             << "\n";
                    }
                }
                cout << setfill(char(' ')) << setw(30) << "" << setfill(char(205)) << setw(65) << ""
                     << "\n";
                cout << "\n";
                cout << "\n";
                check = true;
                break;
            }
        }
        if (check == false)
        {
            cout << setw(40) << ""
                 << "Khong Tim Thay Ma Don Xuat,Xin Moi Nhap Lai!\n";
        }
        else
            break;
    }
}

QuanLyNhapKho ::~QuanLyNhapKho()
{
    saveData();
}

// Note: Sua lai
void QuanLyNhapKho::menuIn()
{
    int opt = -1;
    string tmp;
    while (opt != 3)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "1. Quan ly don nhap\n";
        cout << setw(40) << ""
             << "2. Quan ly nha cung cap\n";
        cout << setw(40) << ""
             << "3. Thoat chuong trinh\n";
        cout << setw(40) << ""
             << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        if (opt == 1)
        {
            manaInput();
        }
        else if (opt == 2)
        {
            manaSup();
        }
        else if (opt == 3)
        {
            cout << setw(40) << ""
                 << "Cam on. Hen gap lai ban lan sau!\n";
            saveData();
            exit(0);
        }
        else
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
        }
    }
}

void QuanLyNhapKho ::manaInput()
{
    int opt = -1;
    string tmp;
    while (opt != 4)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "1. In hoa don nhap hang\n";
        cout << setw(40) << ""
             << "2. Nhan don hang\n";
        cout << setw(40) << ""
             << "3. Xem thong ke tien nhap hang\n";
        cout << setw(40) << ""
             << "4. Quay lai\n";
        cout << setw(40) << ""
             << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        if (opt == 1)
        {
            SortDetailInput();
            ShowInput();
            ShowDetailInput();
        }
        else if (opt == 2)
        {
            SortDetailInput();
            getOrder();
        }
        else if (opt == 3)
        {
            SortDetailInput();
            showFin();
        }
        else if (opt == 4)
        {
            SortDetailInput();
            menuIn();
            return;
        }
        else
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
        }
    }
}

bool cmp3(DetailInput a, DetailInput b)
{
    Input x;
    Input y;
    vector<Input> v4;
    ifstream fi("inputData.txt");
    string j;
    while (getline(fi, j))
    {
        vector<string> words = split(j, ',');
        v4.push_back(Input(words[0], words[1]));
    }
    for (auto i : v4)
    {
        if (i.getInputId() == a.getInputId())
        {
            x.setInputId(a.getInputId());
            x.setDayOfInput(i.getDayOfInput());
        }
        if (i.getInputId() == b.getInputId())
        {
            y.setInputId(a.getInputId());
            y.setDayOfInput(i.getDayOfInput());
        }
    }
    if (x.getYearInput(x.getDayOfInput()) > y.getYearInput(y.getDayOfInput()))
        return true;
    else if (x.getYearInput(x.getDayOfInput()) == y.getYearInput(y.getDayOfInput()))
    {
        if (x.getMonthInput(x.getDayOfInput()) > y.getMonthInput(y.getDayOfInput()))
            return true;
        else if (x.getMonthInput(x.getDayOfInput()) == y.getMonthInput(y.getDayOfInput()))
        {
            if (x.getDayInput(x.getDayOfInput()) > y.getDayInput(y.getDayOfInput()))
                return true;
            else
                return false;
        }
        return false;
    }
    return false;
}

void QuanLyNhapKho ::SortDetailInput()
{
    sort(DataDetailInput.begin(), DataDetailInput.end(), cmp3);
}

void QuanLyNhapKho ::manaSup()
{
    int opt = -1;
    string tmp;
    while (opt != 5)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "1. In thong tin cac nha cung cap\n";
        cout << setw(40) << ""
             << "2. Them nha cung cap\n";
        cout << setw(40) << ""
             << "3. Sua thong tin nha cung cap\n";
        cout << setw(40) << ""
             << "4. Xoa nha cung cap\n";
        cout << setw(40) << ""
             << "5. Quay lai\n";
        cout << setw(40) << ""
             << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        if (opt == 1)
        {
            this->ShowSupplier();
        }
        else if (opt == 2)
        {
            this->InsertSupplier();
        }
        else if (opt == 3)
        {
            this->SetSupplier();
        }
        else if (opt == 4)
        {
            this->DeleteSupplier();
        }
        else if (opt == 5)
        {
            this->menuIn();
            return;
        }
        else
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
        }
    }
}

void QuanLyNhapKho ::showFin()
{
    string year;
    cout << setw(40) << ""
         << "Nhap nam can kiem tra: ";
    cin >> year;
    for (int m = 1; m < 13; m++)
    {
        int money = 0;
        for (auto i : this->DataInput)
        {
            if (i.getYearInput(i.getDayOfInput()) == year)
            {
                string s = i.getDayOfInput();
                if (stoi(i.getMonthInput(s)) == m)
                {
                    string inId = i.getInputId();
                    for (auto x : this->DataDetailInput)
                    {
                        if (x.getInputId() == inId)
                        {
                            money += x.getCount() * x.getPriceIn();
                        }
                    }
                }
            }
        }
        cout << setw(40) << ""
             << "Tien nhap hang thang " << m << ": " << money << endl;
    }
}

void QuanLyNhapKho::ShowSupplier()
{

    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(83) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << ""
         << "| SUP ID |" << setfill(char(' ')) << setw(10) << ""
         << "NAME" << setw(10) << ""
         << "|"
         << setw(12) << ""
         << "ADDRESS" << setw(12) << ""
         << "|" << setw(5) << ""
         << "PHONE" << setw(5) << ""
         << "|\n";
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(83) << "";
    cout << "\n";

    for (auto i : this->DataSupplier)
    {
        cout << setfill(char(' ')) << setw(20) << ""
             << "|" << setfill(char(' '))
             << setw(8) << left << i.getSupplierId() << "|"
             << setw(24) << left << i.getSupplierName() << "|"
             << setw(31) << left << i.getSupplierAddress() << "|"
             << setw(15) << left << i.getSupplierPhoneNumber() << "|"
             << "\n";
    }
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(83) << ""
         << "\n";
    cout << "\n";
}
void QuanLyNhapKho::InsertSupplier()
{
    string s1, s2, s3, s4;
    bool check = true;
    while (true)
    {
        do
        {
            cout << setw(40) << ""
                 << "Nhap ID:";
            cin >> s1;
        } while (!checkSupId(s1));
        bool check = false;
        for (auto &i : this->DataSupplier)
        {
            if (i.getSupplierId() == s1)
            {
                cout << setw(40) << ""
                     << "ID Vua Nhap Da Ton Tai, Xin Moi Nhap Lai!\n";
                check = true;
                break;
            }
        }
        if (check == false)
            break;
    }
    cout << setw(40) << ""
         << "Nhap Ten Nha Cung Cap:";
    cin.ignore();
    getline(cin, s2);
    cout << setw(40) << ""
         << "Nhap Dia Chi Nha Cung Cap:";

    getline(cin, s3);
    cout << setw(40) << ""
         << "Nhap So Dien Thoai Nha Cung Cap:";

    cin >> s4;
    DataSupplier.push_back(Supplier(s1, s2, s3, s4));
    cout << setw(40) << ""
         << "Nha Cung Cap Da Duoc Them Thanh Cong!\n";
}

void QuanLyNhapKho::DeleteSupplier()
{
    string s;
    do
    {
        cout << setw(40) << ""
             << "Nhap ID Nha Cung Cap Can Xoa:\n";
        cin >> s;
    } while (!checkSupId(s));
    bool check = false;
    for (int i = 0; i <= this->DataSupplier.size() - 1; i++)
    {
        if (DataSupplier[i].getSupplierId() == s)
        {
            DataSupplier.erase(DataSupplier.begin() + i);
            check = true;
        }
    }
    if (check == false)
        cout << setw(40) << ""
             << "Khong Tim Thay Nha Cung Cap Can Xoa!\n";
    else
        cout << setw(40) << ""
             << "Da Xoa Thanh Cong!\n";
}

void QuanLyNhapKho::SetSupplier()
{
    bool check = true;
    string s;
    int opt;
    int pos;
    while (true)
    {
        string s1;
        do
        {
            cout << setw(40) << ""
                 << "Nhap ID Nha Cung Cap Can Update:";
            cin >> s1;
        } while (!checkSupId(s));
        bool check = false;
        for (int i = 0; i <= this->DataSupplier.size() - 1; i++)
        {
            if (DataSupplier[i].getSupplierId() == s1)
            {
                check = true;
                pos = i;
                break;
            }
        }
        if (check == false)
        {
            cout << setw(40) << ""
                 << "Khong Tim Thay Nha Cung Cap Can Update,Xin Moi Nhap Lai!\n";
        }
        else
        {
            cout << setw(40) << ""
                 << "Da Tim Thay Nha Cung Cap Can Update!\n";
            break;
        }
    }
    cout << setw(40) << ""
         << "0:Dung Update\n";
    cout << setw(40) << ""
         << "1:Update Name\n";
    cout << setw(40) << ""
         << "2:Update Address\n";
    cout << setw(40) << ""
         << "3:Update PhoneNumber\n";
    while (true)
    {
        int opt;
        string tmp;
        cout << "\n";
        cout << setfill(char(' ')) << setw(40) << ""
             << "Nhap Thuoc Tinh Can Update:";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = -1;
        if (opt == 0)
        {
            cout << setw(40) << ""
                 << "Da Update Xong!\n";
            break;
        }
        if (opt == 1)
        {
            string s1;
            cout << setw(40) << ""
                 << "Nhap Ten Muon Update:";
            cin.ignore();
            getline(cin, s1);
            DataSupplier[pos].setSupplierName(s1);
        }
        if (opt == 2)
        {
            string s2;
            cout << setw(40) << ""
                 << "Nhap Dia Chi Muon Update:";
            cin.ignore();
            getline(cin, s2);
            DataSupplier[pos].setSupplierAddress(s2);
        }
        if (opt == 3)
        {
            string s3;
            cout << setw(40) << ""
                 << "Nhap So Dien Thoai Muon Update:";
            cin >> s3;
            DataSupplier[pos].setSupplierPhoneNumber(s3);
        }
        if (opt == -1)
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai!\n";
    }
}

void QuanLyNhapKho ::getOrder()
{
    string dateInput, inputId;
    int check = 0;
    do
    {
        check = 0;
        do
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Nhap ma don nhap: ";
            cin >> inputId;
        } while (!checkInpId(inputId));
        cout << "\n";
        for (auto &i : this->DataInput)
        {
            if (i.getInputId() == inputId)
            {
                cout << setw(40) << ""
                     << "Ma don nhap da ton tai, vui long nhap lai!\n";
                check = 1;
            }
        }
    } while (check);

    cout << setw(40) << " "
         << "Nhap ngay nhap hang: \n";
    cin >> dateInput;
    Input inp(inputId, dateInput);
    this->DataInput.push_back(inp);
    check = 0;
    cout << "\n";

    while (true)
    {
        cout << setw(40) << ""
             << "Nhap chi tiet don hang \n";
        string dinId, proId;
        int countIn, priceIn, priceOut;
        string tmp;
        while (true)
        {
            check = 0;
            do
            {
                cout << setw(40) << ""
                     << "Nhap ma chi tiet don nhap: ";
                cin >> dinId;
            } while (!checkDinId(dinId));
            for (auto &i : this->DataDetailInput)
            {
                if (i.getDetailInputId() == dinId)
                {
                    cout << setw(40) << ""
                         << "Ma chi tiet don nhap da ton tai, vui long nhap lai!\n";
                    check = 1;
                    break;
                }
            }
            if (!check)
                break;
        }
        if (!check)
        {
            int proCheck = 0;
            do
            {
                cout << setw(40) << ""
                     << "Nhap ma san pham : ";
                cin >> proId;
            } while (!checkProId(proId));
            for (auto &i : this->DataProduct)
            {
                if (i.getProductId() == proId)
                {
                    proCheck = 1;
                    break;
                }
            }
            if (!proCheck)
            {
                int supCheck = 0, unitCheck = 0;
                cout << setw(40) << ""
                     << "Them san pham moi\n";
                string supId, proName, unitId;
                cout << setw(40) << ""
                     << "Nhap ten san pham moi: ";
                cin.ignore();
                getline(cin, proName);
                do
                {
                    cout << setw(40) << ""
                         << "Nhap ma nha cung cap: ";
                    cin >> supId;
                } while (!checkSupId(supId));
                for (auto &i : this->DataSupplier)
                {
                    if (i.getSupplierId() == supId)
                    {
                        supCheck = 1;
                        break;
                    }
                }
                if (!supCheck)
                {
                    cout << setw(40) << ""
                         << "Nha cung cap nay chua ton tai, vui long them\n";
                    string supName, supAddress, supPhone;
                    cout << setw(40) << ""
                         << "Nhap ten nha cung cap: ";
                    cin.ignore();
                    getline(cin, supName);
                    cout << setw(40) << ""
                         << "Nhap dia chi nha cung cap: ";
                    getline(cin, supAddress);
                    cout << setw(40) << ""
                         << "Nhap so dien thoai nha cung cap: ";
                    cin >> supPhone;
                    Supplier sup(supId, supName, supAddress, supPhone);
                    this->DataSupplier.push_back(sup);
                }
                do
                {
                    cout << setw(40) << ""
                         << "Nhap ma loai hang: ";
                    cin >> unitId;
                } while (!checkUnitId(unitId));
                for (auto &i : this->DataCategory)
                {
                    if (i.getproductTypeId() == unitId)
                    {
                        unitCheck = 1;
                        break;
                    }
                }
                if (!unitCheck)
                {
                    cout << setw(40) << ""
                         << "Loai hang nay chua ton tai, vui long them\n";
                    string unitName;
                    cout << setw(40) << ""
                         << "Nhap ten loai hang: ";
                    cin.ignore();
                    getline(cin, unitName);
                    Category cat(unitId, unitName);
                    this->DataCategory.push_back(cat);
                }
                Product pro(proId, supId, proName, unitId);
                this->DataProduct.push_back(pro);
            }
            while (true)
            {
                cout << "\n";
                cout << setw(40) << ""
                     << "Nhap so luong nhap(La so nguyen duong): ";
                cin >> tmp;
                if (checkInt(tmp))
                {
                    countIn = stoi(tmp);
                    break;
                }
            }
            while (true)
            {
                cout << "\n";
                cout << setw(40) << ""
                     << "Nhap gia nhap vao(La so nguyen duong): ";
                cin >> tmp;
                if (checkInt(tmp))
                {
                    priceIn = stoi(tmp);
                    break;
                }
            }
            while (true)
            {
                cout << "\n";
                cout << setw(40) << ""
                     << "Nhap gia ban ra(La so nguyen duong): ";
                cin >> tmp;
                if (checkInt(tmp))
                {
                    priceOut = stoi(tmp);
                    break;
                }
            }
            DetailInput dinput(dinId, inputId, proId, countIn, priceIn, priceOut, countIn);
            this->DataDetailInput.push_back(dinput);
        }

        int opt;
        while (true)
        {
            cout << setw(40) << ""
                 << "1. Them san pham\n";
            cout << setw(40) << ""
                 << "2. Hoan thanh nhan don hang\n";
            cout << setw(40) << ""
                 << "Nhap lua chon cua ban: ";
            cin >> tmp;
            if (checkInt(tmp))
                opt = stoi(tmp);
            else
                opt = 0;
            if (opt != 1 && opt != 2)
                cout << setw(40) << ""
                     << "Nhap sai lua chon, vui long nhap lai!\n";
            else
                break;
        }
        if (opt == 2)
        {
            SortDetailInput();
            cout << setw(40) << ""
                 << "Nhan don hang thanh cong\n";
            break;
        }
    }
    system("pause");
    manaInput();
}

void QuanLyNhapKho::SortTimeInput()
{
    sort(DataInput.begin(), DataInput.end(), cmp);
}

void QuanLyNhapKho::ShowInput()
{
    SortTimeInput();
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(25) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(40) << ""
         << "| INP ID |" << setfill(char(' ')) << setw(5) << ""
         << "DATE" << setw(6) << "|"
         << "\n";
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(25) << "";
    cout << "\n";
    for (auto &i : DataInput)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "|" << setfill(char(' '))
             << setw(8) << left << i.getInputId() << "|"
             << setw(14) << left << i.getDayOfInput() << "|"
             << "\n";
    }
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(25) << "";
    cout << "\n";
}
void QuanLyNhapKho::ShowDetailInput()
{
    bool check = true;
    string s;
    while (true)
    {
        do
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Nhap Ma Don Nhap De Xem Don Nhap Chi Tiet:";
            cin >> s;
        } while (!checkInpId(s));
        bool check = false;
        for (auto &i : this->DataInput)
        {
            if (i.getInputId() == s)
            {
                cout << "\n";
                cout << setfill(char(' ')) << setw(25) << "" << setfill(char(205)) << setw(78) << "";
                cout << "\n";
                cout << setfill(char(' ')) << setw(25) << ""
                     << "| DIN ID |" << setfill(char(' ')) << setw(2) << ""
                     << "INP ID" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "PRO ID" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "COUNT" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "PRICE IN" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "PRICE OUT" << setw(2) << ""
                     << "|" << setw(2) << ""
                     << "REST  " << setw(6) << "|";
                cout << "\n";
                cout << setfill(char(' ')) << setw(25) << "" << setfill(char(205)) << setw(78) << "";
                cout << "\n";

                for (auto &x : DataDetailInput)
                {
                    if (x.getInputId() == s)
                    {
                        cout << setfill(char(' ')) << setw(25) << ""
                             << "|" << setfill(char(' '))
                             << setw(8) << left << x.getDetailInputId() << "|"
                             << setw(10) << left << x.getInputId() << "|"
                             << setw(10) << left << x.getProductId() << "|"
                             << setw(9) << left << x.getCount() << "|"
                             << setw(12) << left << x.getPriceIn() << "|"
                             << setw(12) << left << x.getPriceOut() << "|"
                             << setw(9) << left << x.getRest() << "|"
                             << "\n";
                    }
                }
                cout << setfill(char(' ')) << setw(25) << "" << setfill(char(205)) << setw(78) << ""
                     << "\n";
                cout << "\n";
                cout << "\n";
                check = true;
                break;
            }
        }
        if (check == false)
        {
            cout << setw(40) << ""
                 << "Khong Tim Thay Ma Don Nhap,Xin Moi Nhap Lai!\n";
        }
        else
            break;
    }
}

QuanLyTongKho ::~QuanLyTongKho()
{
    saveData();
}

void QuanLyTongKho::menuAll()
{
    int opt = -1;
    string tmp;
    while (true)
    {
        cout << setw(40) << ""
             << "1. Quan ly hang hoa\n";
        cout << setw(40) << ""
             << "2. Quan ly doanh thu\n";
        cout << setw(40) << ""
             << "3. Thoat chuong trinh\n";
        cout << setw(40) << ""
             << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        switch (opt)
        {
        case 1:
        {
            system("cls");
            manaPro();
            break;
        }
        case 2:
        {
            system("cls");
            manaFin();
            break;
        }
        case 3:
        {
            system("cls");
            cout << setw(40) << ""
                 << "Cam on. Hen gap lai ban lan sau!\n";
            saveData();
            exit(0);
        }
        default:
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
            break;
        }
        }
    }
}

void QuanLyTongKho ::manaPro()
{
    int opt = -1;
    string tmp;
    while (true)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "1. In thong tin hang hoa trong kho\n";
        cout << setw(40) << ""
             << "2. Sua thong tin 1 mat hang\n";
        cout << setw(40) << ""
             << "3. Xoa 1 mat hang\n";
        cout << setw(40) << ""
             << "4. In thong tin cac loai trong kho\n";
        cout << setw(40) << ""
             << "5. Sua thong tin 1 loai hang\n";
        cout << setw(40) << ""
             << "6. Xoa 1 loai hang\n";
        cout << setw(40) << ""
             << "7. Quay lai\n";
        cout << setw(40) << ""
             << "Nhap lua chon cua ban: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        switch (opt)
        {
        case 1:
        {
            system("cls");
            ShowProduct();
            break;
        }
        case 2:
        {
            system("cls");
            ShowProduct();
            SetProduct();
            break;
        }
        case 3:
        {
            system("cls");
            ShowProduct();
            DeleteProduct();
            break;
        }
        case 4:
        {
            system("cls");
            ShowCategory();
            break;
        }
        case 5:
        {
            system("cls");
            ShowCategory();
            SetCategory();
            cout << endl;
            ShowCategory();
            break;
        }
        case 6:
        {
            system("cls");
            ShowCategory();
            DeleteCategory();
            break;
        }
        case 7:
        {
            system("cls");
            menuAll();
            break;
        }
        default:
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
            break;
        }
        }
    }
}

void QuanLyTongKho ::manaFin()
{
    int opt = -1;
    string tmp;
    while (true)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "1. Doanh thu theo nam\n";
        cout << setw(40) << ""
             << "2. Quay lai\n";
        cout << setw(40) << ""
             << "Nhap lua chon: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = 0;
        switch (opt)
        {
        case 1:
        {
            ShowCost_Yearly();
            break;
        }
        case 2:
        {
            menuAll();
            break;
        }
        default:
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi ban nhap lai: \n";
            break;
        }
        }
    }
}

void QuanLyTongKho::ShowCategory()
{

    cout << "\n";
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(31) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(40) << ""
         << "| UNIT ID |" << setfill(char(' ')) << setw(5) << ""
         << "UNIT NAME" << setw(6) << "|";
    cout << "\n";
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(31) << "";
    cout << "\n";
    for (auto &i : DataCategory)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "|" << setfill(char(' '))
             << setw(9) << left << i.getproductTypeId() << "|"
             << setw(18) << left << i.getproductName() << " |"
             << "\n";
    }
    cout << setfill(char(' ')) << setw(40) << "" << setfill(char(205)) << setw(31) << ""
         << "\n";
    cout << "\n";
    cout << "\n";
}

void QuanLyTongKho::InsertCategory()
{
    string s1, s2;
    bool check = true;
    while (true)
    {
        do
        {
            cout << setw(40) << ""
                 << "Nhap Ma Loai Hang:";
            cin >> s1;
        } while (!checkUnitId(s1));
        bool check = false;
        for (auto &i : this->DataCategory)
        {
            if (i.getproductTypeId() == s1)
            {
                cout << setw(40) << ""
                     << "ID Vua Nhap Da Ton Tai, Xin Moi Nhap Lai!\n";
                check = true;
                break;
            }
        }
        if (check == false)
            break;
    }
    cout << setw(40) << ""
         << "Nhap Ten Loai Hang:";
    cin.ignore();
    getline(cin, s2);

    DataCategory.push_back(Category(s1, s2));
    cout << " Da Them Thanh Cong Loai Hang!\n";
}

void QuanLyTongKho::DeleteCategory()
{
    string s;

    do
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Nhap Ma Loai Hang Can Xoa: ";
        cin >> s;
    } while (!checkUnitId(s));
    bool check = false;
    for (int i = 0; i <= this->DataCategory.size() - 1; i++)
    {
        if (DataCategory[i].getproductTypeId() == s)
        {
            DataCategory.erase(DataCategory.begin() + i);
            check = true;
        }
    }
    if (check == false)
        cout << setw(40) << ""
             << "Khong Tim Thay Loai Hang Can Xoa!\n";
    else
        cout << setw(40) << ""
             << "Da Xoa Thanh Cong!\n";
}

void QuanLyTongKho::SetCategory()
{
    bool check = true;
    string s;
    int opt;
    int pos;
    while (true)
    {
        string s1;
        do
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Nhap ID Loai Hang Can Update: ";
            cin >> s1;
        } while (!checkUnitId(s1));
        bool check = false;
        for (int i = 0; i <= this->DataCategory.size() - 1; i++)
        {
            if (DataCategory[i].getproductTypeId() == s1)
            {
                check = true;
                pos = i;
                break;
            }
        }
        if (check == false)
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Khong Tim Thay Ma Loai Hang Can Update. Xin Moi Nhap Lai!\n";
        }
        else
        {
            cout << setw(40) << ""
                 << "Da Tim Thay Loai Hang Can Update!\n";
            break;
        }
    }
    cout << setw(40) << ""
         << "0:Dung Update\n";
    cout << setw(40) << ""
         << "1:Update Ten Loai Hang\n";

    while (true)
    {
        int opt;
        string tmp;
        cout << endl;
        cout << setfill(char(' ')) << setw(40) << ""
             << "Nhap Thuoc Tinh Can Update: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = -1;
        if (opt == 0)
        {
            cout << setw(40) << ""
                 << "Da Update Xong!\n";
            break;
        }
        if (opt == 1)
        {
            string s1;
            cout << setw(40) << ""
                 << "Nhap Ten Loai Hang Muon Update: ";
            cin.ignore();
            getline(cin, s1);
            DataCategory[pos].setproductName(s1);
        }
        if (opt == -1)
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi nhap lai!\n";
        }
    }
}

void QuanLyTongKho::ShowProduct()
{

    cout << "\n";
    cout << setfill(char(' ')) << setw(25) << "" << setfill(char(205)) << setw(57) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(25) << ""
         << "| PRO ID |" << setfill(char(' ')) << setw(2) << ""
         << "SUP ID" << setw(2) << ""
         << "|" << setw(10) << ""
         << "NAME" << setw(10) << ""
         << "|" << setw(2) << ""
         << "UNIT ID" << setw(2) << "|";
    cout << "\n";
    cout << setfill(char(' ')) << setw(25) << "" << setfill(char(205)) << setw(57) << "";
    cout << "\n";

    for (auto &i : DataProduct)
    {
        cout << setfill(char(' ')) << setw(25) << ""
             << "|" << setfill(char(' '))
             << setw(8) << left << i.getProductId() << "|"
             << setw(10) << left << i.getSupplierId() << "|"
             << setw(24) << left << i.getProductName() << "|"
             << setw(10) << left << i.getUnitId() << "|"
             << "\n";
    }
    cout << setfill(char(' ')) << setw(25) << "" << setfill(char(205)) << setw(57) << ""
         << "\n";
    cout << "\n";
    cout << "\n";
}

void QuanLyTongKho::InsertProduct()
{
    string s1, s2, s3, s4;
    bool check = true;
    while (true)
    {
        do
        {
            cout << setw(40) << ""
                 << "Nhap ID Can Them:";
            cin >> s1;
        } while (!checkProId(s1));
        bool check = false;
        for (auto &i : this->DataProduct)
        {
            if (i.getProductId() == s1)
            {
                cout << setw(40) << ""
                     << "ID Vua Nhap Da Ton Tai, Xin Moi Nhap Lai!\n";
                check = true;
                break;
            }
        }
        if (check == false)
            break;
    }
    cout << setw(40) << ""
         << "Nhap Ma Nha Cung Cap:";
    cin >> s2;

    cout << setw(40) << ""
         << "Nhap Ten San Pham:";
    cin.ignore();
    getline(cin, s3);

    cout << setw(40) << ""
         << "Nhap Ma Loai Hang:";
    getline(cin, s4);
    DataProduct.push_back(Product(s1, s2, s3, s4));
    cout << setw(40) << ""
         << "San Pham Da Duoc Them Thanh Cong!\n";
}

void QuanLyTongKho::DeleteProduct()
{
    string s;
    do
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Nhap Ma San Pham Can Xoa: ";
        cin >> s;
    } while (!checkProId(s));
    bool check = false;
    for (int i = 0; i <= this->DataProduct.size() - 1; i++)
    {
        if (DataProduct[i].getProductId() == s)
        {
            DataProduct.erase(DataProduct.begin() + i);
            check = true;
        }
    }
    if (check == false)
        cout << setw(40) << ""
             << "Khong Tim Thay San Pham Can Xoa!\n";
    else
        cout << setw(40) << ""
             << "Da Xoa San Pham Thanh Cong!\n\n";
}

void QuanLyTongKho::SetProduct()
{
    bool check = true;
    string s;
    int opt;
    int pos;
    while (true)
    {
        string s1;
        do
        {
            cout << setfill(char(' ')) << setw(40) << ""
                 << "Nhap ID San Pham Can Update: ";
            cin >> s1;
        } while (!checkProId(s1));
        bool check = false;
        for (int i = 0; i <= this->DataProduct.size() - 1; i++)
        {
            if (DataProduct[i].getProductId() == s1)
            {
                check = true;
                pos = i;
                break;
            }
        }
        if (check == false)
        {
            cout << setw(40) << ""
                 << "Khong Tim Thay San Pham Can Update,Xin Moi Nhap Lai!\n";
        }
        else
        {
            cout << setw(40) << ""
                 << "Da Tim Thay San Pham Can Update!\n\n";
            break;
        }
    }
    cout << setw(40) << ""
         << "0:Dung Update\n";
    cout << setw(40) << ""
         << "1:Update Ma Nha Cung Cap\n";
    cout << setw(40) << ""
         << "2:Update Ten San Pham\n";
    cout << setw(40) << ""
         << "3:Update Ma Loai Hang\n";
    while (true)
    {
        int opt;
        string tmp;
        cout << "\n";
        cout << setfill(char(' ')) << setw(40) << ""
             << "Nhap Thuoc Tinh Can Update: ";
        cin >> tmp;
        if (checkInt(tmp))
            opt = stoi(tmp);
        else
            opt = -1;
        if (opt == 0)
        {
            system("cls");
            cout << setw(40) << ""
                 << "Da Update Xong!\n\n";
            ShowProduct();
            break;
        }
        if (opt == 1)
        {
            string s1;
            cout << setw(40) << ""
                 << "Nhap Ma Nha Cung Cap Muon Update:";
            cin >> s1;
            DataProduct[pos].setSupplierId(s1);
        }
        if (opt == 2)
        {
            string s2;
            cout << setw(40) << ""
                 << "Nhap Ten San Pham Muon Update:";
            cin.ignore();
            getline(cin, s2);
            DataProduct[pos].setProductName(s2);
        }
        if (opt == 3)
        {
            string s3;
            cout << setw(40) << ""
                 << "Nhap Ma Loai Hang Muon Update:";
            cin.ignore();
            getline(cin, s3);
            DataProduct[pos].setUnitId(s3);
        }
        if (opt == -1)
        {
            cout << setw(40) << ""
                 << "Nhap sai lua chon, moi nhap lai!\n";
        }
    }
}

void QuanLyTongKho::ShowCost_Monthly()
{
    string month;
    while (true)
    {
        cout << setfill(char(' ')) << setw(40) << ""
             << "Nhap thang can xem (01 -> 12): ";
        cin >> month;
        if (stoi(month) > 0 && stoi(month) < 13)
            break;
    }
    system("cls");
    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(81) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << ""
         << "| DIN ID |" << setfill(char(' ')) << setw(2) << ""
         << "INP ID" << setw(2) << ""
         << "|" << setw(2) << ""
         << "PRO ID" << setw(2) << ""
         << "|" << setw(4) << ""
         << "DAY" << setw(4) << ""
         << "|" << setw(2) << ""
         << "COUNT" << setw(2) << ""
         << "|" << setw(2) << ""
         << "PRICE IN" << setw(2) << ""
         << "|" << setw(2) << ""
         << "PRICE OUT" << setw(2) << ""
         << "|";

    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(81) << "";
    cout << "\n";

    for (int i = 0; i <= this->DataInput.size() - 1; i++)
    {

        if (DataInput[i].getMonthInput(DataInput[i].getDayOfInput()) == month)
        {
            for (auto x : DataDetailInput)
            {
                if (DataInput[i].getInputId() == x.getInputId())
                {
                    cout << setfill(char(' ')) << setw(20) << ""
                         << "|" << setfill(char(' '))
                         << setw(8) << left << x.getDetailInputId() << "|"
                         << setw(10) << left << x.getInputId() << "|"
                         << setw(10) << left << x.getProductId() << "|"
                         << setw(11) << left << DataInput[i].getDayOfInput() << "|"
                         << setw(9) << left << x.getCount() << "|"
                         << setw(12) << left << x.getPriceIn() << "|"
                         << setw(13) << left << x.getPriceOut() << "|"
                         << "\n";
                }
            }
        }
    }
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(81) << ""
         << "\n";
    cout << "\n";
    cout << "\n";

    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(77) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << ""
         << "| DOUT ID |" << setfill(char(' ')) << setw(2) << ""
         << "OUT ID" << setw(2) << ""
         << "|" << setw(4) << ""
         << "DAY" << setw(4) << ""
         << "|" << setw(2) << ""
         << "PRO ID" << setw(2) << ""
         << "|" << setw(2) << ""
         << "DIN ID" << setw(2) << ""
         << "|" << setw(2) << ""
         << "CUS ID" << setw(2) << ""
         << "|" << setw(2) << ""
         << "COUNT  " << setw(6) << "|";
    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(77) << "";
    cout << "\n";
    for (auto y : DataOutput)
    {
        if (y.getMonthOutput(y.getDayOfOutput()) == month)
        {
            for (auto x : DataDetailOutput)
            {
                if (x.getOutputId() == y.getOutputId())
                {
                    cout << setfill(char(' ')) << setw(20) << ""
                         << "|" << setfill(char(' '))
                         << setw(9) << left << x.getDetailInputId() << "|"
                         << setw(10) << left << x.getOutputId() << "|"
                         << setw(11) << left << y.getDayOfOutput() << "|"
                         << setw(10) << left << x.getProductId() << "|"
                         << setw(10) << left << x.getDetailInputId() << "|"
                         << setw(10) << left << x.getCustomerId() << "|"
                         << setw(9) << left << x.getCount() << "|"
                         << "\n";
                }
            }
        }
    }
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(77) << ""
         << "\n";
}

void QuanLyTongKho::ShowCost_Yearly()
{
    string s;
    bool check[100];
    memset(check, 0, sizeof(check));
    vector<string> v[100];
    while (true)
    {
        cout << endl;
        cout << setw(40) << ""
             << "Nhap Nam Can Tinh Doanh Thu: ";
        cin >> s;
        int check = 0;
        for (auto x : DataInput)
        {
            if (s == x.getYearInput(x.getDayOfInput()))
                check = 1;
        }
        for (auto x : DataOutput)
        {
            if (s == x.getYearOutput(x.getDayOfOutput()))
                check = 1;
        }
        if (check)
            break;
        else
            cout << setw(40) << ""
                 << "Du lieu cho nam nay khong ton tai, vui long nhap lai!";
    }
    for (int i = 0; i <= this->DataInput.size() - 1; i++)
    {
        if (DataInput[i].getYearInput(DataInput[i].getDayOfInput()) == s)
        {

            string tmp = DataInput[i].getMonthInput(DataInput[i].getDayOfInput());
            if (tmp[0] == '0')
            {
                int x = tmp[1] - '0';
                check[x] = true;
                v[x].push_back(DataInput[i].getInputId());
            }
            else if (tmp == "10")
            {
                check[10] = true;
                v[10].push_back(DataInput[i].getInputId());
            }
            else if (tmp == "11")
            {
                check[11] = true;
                v[11].push_back(DataInput[i].getInputId());
            }
            else if (tmp == "12")
            {
                check[12] = true;
                v[12].push_back(DataInput[i].getInputId());
            }
        }
    }
    int TongChiPhi[20];
    memset(TongChiPhi, 0, sizeof(TongChiPhi));
    int TongDoanhThu[20];
    memset(TongDoanhThu, 0, sizeof(TongDoanhThu));
    for (int i = 1; i <= 12; i++)
    {
        if (check[i] == true)
        {
            for (auto &j : v[i])
            {

                for (int n = 0; n <= DataDetailInput.size() - 1; n++)
                {
                    if (j == DataDetailInput[n].getInputId())
                    {
                        TongChiPhi[i] += DataDetailInput[n].getCount() * DataDetailInput[n].getPriceIn();
                        for (int m = 0; m <= DataDetailOutput.size() - 1; m++)
                        {
                            if (DataDetailInput[n].getDetailInputId() == DataDetailOutput[m].getDetailInputId())
                            {
                                TongDoanhThu[i] += DataDetailInput[n].getPriceOut() * DataDetailOutput[m].getCount();
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(77) << "";
    cout << "\n";
    cout << setfill(char(' ')) << setw(20) << ""
         << "|   Thang   |" << setfill(char(' '))
         << setw(6) << ""
         << "Chi phi" << setw(6) << ""
         << "|"
         << setw(6) << ""
         << "Doanh thu" << setw(6) << ""
         << "|"
         << setw(6) << ""
         << "Loi nhuan" << setw(6) << ""
         << "|\n";
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(77) << "";
    cout << "\n";
    for (int i = 1; i <= 12; i++)
    {
        cout << setfill(char(' ')) << setw(20) << ""
             << "|" << setfill(char(' '))
             << setw(6) << left << "Thang" << setw(1) << "" << i << setw(4 - to_string(i).size()) << left << ""
             << "|"
             << setw(18) << left << TongChiPhi[i] << " |"
             << setw(20) << left << TongDoanhThu[i] << "|"
             << setw(22) << left << TongDoanhThu[i] - TongChiPhi[i] << "|"
             << "\n";
    }
    cout << setfill(char(' ')) << setw(20) << "" << setfill(char(205)) << setw(77) << ""
         << "\n";
    cout << "\n";
    ShowCost_Monthly();
}

bool QuanLy ::checkInt(const string &s)
{
    for (auto x : s)
        if (x < '0' || x > '9')
            return false;
        else
            return true;
}

bool QuanLyTongKho ::checkInt(const string &s)
{
    for (auto x : s)
        if (x < '0' || x > '9')
            return false;
        else
            return true;
}

bool QuanLyNhapKho ::checkInt(const string &s)
{
    for (auto x : s)
        if (x < '0' || x > '9')
            return false;
        else
            return true;
}

bool QuanLyXuatKho ::checkInt(const string &s)
{
    for (auto x : s)
        if (x < '0' || x > '9')
            return false;
        else
            return true;
}
