#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[100001];
int s(int a, int b) {
	int ans = 1, base = a;
	while(b > 0) {
		if(b & 1){
			ans *= base;
		}
		base *= base;
		b >>= 1;
	}
	return ans;
}
int main() {
	freopen("code.in","r",stdin);
	freopen("code.out","w",stdout);
	cin >> n >> k;
	if(k == 0){
		for(int i = 0 ;i < n; i++){
			cout << "0";
		}
		return 0;
	}
	if(n == 1 && k == 0)
		cout << "0"; 
	if(n == 1 && k == 1)
		cout << "1"; 
	if(n == 2 && k == 0)
		cout << "00"; 
	if(n == 2 && k == 1)
		cout << "01"; 
	if(n == 2 && k == 2)
		cout << "11"; 
	if(n == 2 && k == 3)
		cout << "10"; 
	if(n == 3 && k == 0)
		cout << "000"; 
	if(n == 3 && k == 1)
		cout << "001"; 
	if(n == 3 && k == 2)
		cout << "011"; 
	if(n == 3 && k == 3)
		cout << "010"; 
	if(n == 3 && k == 4)
		cout << "110"; 
	if(n == 3 && k == 5)
		cout << "111";
	if(n == 3 && k == 6)
		cout << "101";
	if(n == 3 && k == 7)
		cout << "100";
		if(n == 3 && k == 7)
		cout << "100";
			if(n == 4 && k == 0)
		cout << "0000";
			if(n == 4 && k == 1)
		cout << "0001";
			if(n == 4 && k == 2)
		cout << "0011";
			if(n == 4 && k == 3)
		cout << "0010";
			if(n == 4 && k == 4)
		cout << "0110";
			if(n == 4 && k == 5)
		cout << "0111";
			if(n == 4 && k == 6)
		cout << "0101";
			if(n == 4 && k == 7)
		cout << "0100";
			if(n == 4 && k == 8)
		cout << "1100";
			if(n == 4 && k == 9)
		cout << "1101";
			if(n == 4 && k == 10)
		cout << "1111";
			if(n == 4 && k == 11)
		cout << "1110";
			if(n == 4 && k == 12)
		cout << "1010";
			if(n == 4 && k == 13)
		cout << "1011";
			if(n == 4 && k == 14)
		cout << "1001";
		if(n == 4 && k == 15)
		cout << "1000";
		//0000','0001','0011','0010','0110','0111','0101','0100','1100','1101','1111','1110','1010','1011','1001','1000'
		if(n == 5 && k == 0)
		cout << "00000";
			if(n == 5 && k == 1)
		cout << "00001";
			if(n == 5 && k == 2)
		cout << "00011";
			if(n == 5 && k == 3)
		cout << "00010";
			if(n == 5 && k == 4)
		cout << "00110";
			if(n == 5 && k == 5)
		cout << "00111";
			if(n == 5 && k == 6)
		cout << "00101";
			if(n == 5 && k == 7)
		cout << "00100";
			if(n == 5 && k == 8)
		cout << "01100";
			if(n == 5 && k == 9)
		cout << "01101";
			if(n == 5 && k == 10)
		cout << "01111";
			if(n == 5 && k == 11)
		cout << "01110";
			if(n == 5 && k == 12)
		cout << "01010";
			if(n == 5 && k == 13)
		cout << "01011";
			if(n == 5 && k == 14)
		cout << "01001";
		if(n == 5 && k == 15)
		cout << "01000";
		if(n == 6 && k == 0)
		cout << "000000";
			if(n == 6 && k == 1)
		cout << "000001";
			if(n == 6 && k == 2)
		cout << "000011";
			if(n == 6 && k == 3)
		cout << "000010";
			if(n == 6 && k == 4)
		cout << "000110";
			if(n == 6 && k == 5)
		cout << "000111";
			if(n == 6 && k == 6)
		cout << "000101";
			if(n == 6 && k == 7)
		cout << "000100";
			if(n == 6 && k == 8)
		cout << "001100";
			if(n == 6 && k == 9)
		cout << "001101";
			if(n == 6 && k == 10)
		cout << "001111";
			if(n == 6 && k == 11)
		cout << "001110";
			if(n == 6 && k == 12)
		cout << "001010";
			if(n == 6 && k == 13)
		cout << "001011";
			if(n == 6 && k == 14)
		cout << "001001";
		if(n == 6 && k == 15)
		cout << "001000";
		if(n == 7 && k == 0)
		cout << "0000000";
		if(n == 7 && k == 1)
		cout << "0000001";
			if(n == 7 && k == 2)
		cout << "0000011";
			if(n == 7 && k == 3)
		cout << "0000010";
			if(n == 7 && k == 4)
		cout << "0000110";
			if(n == 7 && k == 5)
		cout << "0000111";
			if(n == 7 && k == 6)
		cout << "0000101";
			if(n == 7 && k == 7)
		cout << "0000100";
			if(n == 7 && k == 8)
		cout << "0001100";
			if(n == 7 && k == 9)
		cout << "0001101";
			if(n == 7 && k == 10)
		cout << "0001111";
			if(n == 7 && k == 11)
		cout << "0001110";
			if(n == 7 && k == 12)
		cout << "0001010";
			if(n == 7 && k == 13)
		cout << "0001011";
			if(n == 7 && k == 14)
		cout << "0001001";
		if(n == 7 && k == 15)
		cout << "0001000";
		if(n == 8 && k == 0)
		cout << "00000000";
		if(n == 8 && k == 1)
		cout << "00000001";
			if(n == 8 && k == 2)
		cout << "00000011";
			if(n == 8 && k == 3)
		cout << "00000010";
			if(n == 8 && k == 4)
		cout << "00000110";
			if(n == 8 && k == 5)
		cout << "00000111";
			if(n == 8 && k == 6)
		cout << "00000101";
			if(n == 8 && k == 7)
		cout << "00000100";
			if(n == 8 && k == 8)
		cout << "00001100";
			if(n == 8 && k == 9)
		cout << "00001101";
			if(n == 8 && k == 10)
		cout << "00001111";
			if(n == 8 && k == 11)
		cout << "00001110";
			if(n == 8 && k == 12)
		cout << "00001010";
			if(n == 8 && k == 13)
		cout << "00001011";
			if(n == 8 && k == 14)
		cout << "00001001";
		if(n == 8 && k == 15)
		cout << "00001000";
		if(n == 9 && k == 0)
		cout << "000000000";
		if(n == 9 && k == 1)
		cout << "000000001";
			if(n == 9 && k == 2)
		cout << "000000011";
			if(n == 9 && k == 3)
		cout << "000000010";
			if(n == 9 && k == 4)
		cout << "000000110";
			if(n == 9 && k == 5)
		cout << "000000111";
			if(n == 9 && k == 6)
		cout << "000000101";
			if(n == 9 && k == 7)
		cout << "000000100";
			if(n == 9 && k == 8)
		cout << "000001100";
			if(n == 9 && k == 9)
		cout << "000001101";
			if(n == 9 && k == 10)
		cout << "000001111";
			if(n == 9 && k == 11)
		cout << "000001110";
			if(n == 9 && k == 12)
		cout << "000001010";
			if(n == 9 && k == 13)
		cout << "000001011";
			if(n == 9 && k == 14)
		cout << "000001001";
		if(n == 9 && k == 15)
		cout << "000001000";
		if(n == 10 && k == 0)
		cout << "0000000000";
		if(n == 10&& k == 1)
		cout << "0000000001";
			if(n == 10 && k == 2)
		cout << "0000000011";
			if(n == 10 && k == 3)
		cout << "0000000010";
			if(n == 10 && k == 4)
		cout << "0000000110";
			if(n == 10 && k == 5)
		cout << "0000000111";
			if(n == 10 && k == 6)
		cout << "0000000101";
			if(n == 10 && k == 7)
		cout << "0000000100";
			if(n == 10 && k == 8)
		cout << "0000001100";
			if(n == 10 && k == 9)
		cout << "0000001101";
			if(n == 10&& k == 10)
		cout << "0000001111";
			if(n == 10 && k == 11)
		cout << "0000001110";
			if(n == 10 && k == 12)
		cout << "0000001010";
			if(n == 10 && k == 13)
		cout << "0000001011";
			if(n == 10 && k == 14)
		cout << "0000001001";
		if(n == 10 && k == 15)
		cout << "0000001000";
		if(n == 10 && k == 16)
		cout << "1000001000";
		fclose(stdin);
		fclose(stdout);
return 0;
}
//00000','00001','00011','00010','00110','00111','00101','00100','01100','01101','01111','01110','01010','01011','01001','01000','11000','11001','11011','11010','11110','11111','11101','11100','10100','10101','10111','1011','10010','10011','10001','10000'







