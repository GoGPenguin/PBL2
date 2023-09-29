#ifndef QUANLY_H
#define QUANLY_H

#include "Customer.h"
#include "Category.h"
#include "Product.h"
#include "Helper.h"
#include "Supplier.h"
#include "Input.h"
#include "DetailInput.h"
#include "Output.h"
#include "DetailOutput.h"
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;

class QuanLy
{
protected:
    vector<Customer> DataCustomer;
    vector<Category> DataCategory;
    vector<Product> DataProduct;
    vector<Supplier> DataSupplier;
    vector<Input> DataInput;
    vector<DetailInput> DataDetailInput;
    vector<Output> DataOutput;
    vector<DetailOutput> DataDetailOutput;

public:
    QuanLy();
    ~QuanLy();
    // Doc tu file
    void inputCustomer();
    void inputCategory();
    void inputProduct();
    void inputSupplier();
    void input_Input();
    void input_DetailInput();
    void input_Output();
    void input_DetailOutput();

    // CheckValidID
    bool checkCusId(const string &);
    bool checkSupId(const string &);
    bool checkDinId(const string &);
    bool checkInpId(const string &);
    bool checkOutId(const string &);
    bool checkDoutId(const string &);
    bool checkProId(const string &);
    bool checkUnitId(const string &);
    bool checkInt(const string &);
};

class QuanLyXuatKho : public QuanLy
{
public:
    ~QuanLyXuatKho();
    void ShowCustomer();
    void InsertCustomer();
    void DeleteCustomer(); // truyen ID
    void SetCustomer();
    void ShowOutput();
    void ShowDetailOutput();
    void SortTimeOutput();
    void saveData();
    void showFin();
    void takeOrder();
    void menuOut();
    void manaCus();
    void manaOutput();
    bool checkInt(const string &);
};

class QuanLyNhapKho : public QuanLy
{
public:
    ~QuanLyNhapKho();
    void ShowSupplier();
    void InsertSupplier();
    void DeleteSupplier();
    void SetSupplier();
    void ShowInput();
    void ShowDetailInput();
    void SortTimeInput();
    void SortDetailInput();
    void showFin();
    void saveData();
    void getOrder();
    void menuIn();
    void manaSup();
    void manaInput();
    bool checkInt(const string &);
};

class QuanLyTongKho : public QuanLy
{
public:
    ~QuanLyTongKho();
    void ShowCategory();
    void InsertCategory();
    void DeleteCategory();
    void SetCategory();
    void ShowProduct();
    void InsertProduct();
    void DeleteProduct();
    void SetProduct();
    void ShowCost_Monthly();
    void ShowCost_Yearly();
    void saveData();
    void menuAll();
    void manaPro();
    void manaFin();
    void manaLogin();
    bool checkInt(const string &);
};
#endif // QUANLY_H
