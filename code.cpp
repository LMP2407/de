#include <iostream>
using namespace std;

// ==================== Các hàm ====================

// Người 1: Hàm tính tổng
double tinhTong(double a, double b) {
    // TODO: Viết code tính tổng
    return 0; // placeholder
}

// Người 2: Hàm tính hiệu
double tinhHieu(double a, double b) {
    // TODO: Viết code tính hiệu
    return 0; // placeholder
}

// Người 3: Hàm tính tích
double tinhTich(double a, double b) {
    // TODO: Viết code tính tích
    return 0; // placeholder
}

// Người 3: Hàm tính thương
double tinhThuong(double a, double b) {
    // TODO: Viết code tính thương, xử lý chia cho 0
    return 0; // placeholder
}

// ==================== Main ====================
int main() {
    double a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    cout << "Tong: " << tinhTong(a, b) << endl;
    cout << "Hieu: " << tinhHieu(a, b) << endl;
    cout << "Tich: " << tinhTich(a, b) << endl;
    cout << "Thuong: " << tinhThuong(a, b) << endl;

    return 0;
}
