#include <iostream>

using namespace std;
int main() {
	int ncr[31][31];
	int t;
	cin >> t;
	int n, m;
	for (int i = 0; i <= 30; i++) {
		ncr[i][i] = ncr[i][0] = 1;
		for (int j = 1; j <= i - 1; j++) {
			ncr[i][j] = ncr[i - 1][j - 1] + ncr[i - 1][j];
		}
	}
	for (int k = 0; k < t; k++) {
		cin >> n>>m;
		cout << ncr[m][n] << endl;
	
	}

}



int ncr[31][31];
void combination() {
	for (int i = 0; i <= 30; i++ ) {
		ncr[i][i] = ncr[i][0] = 1;
		for (int j = 1; j <= i - 1; j++) {
			ncr[i][j] = ncr[i - 1][j - 1] + ncr[i - 1][j];
		}
	}
}
int main() {
	int t;
	cin >> t;
	combination();
	int n, m;
	for (int k = 0; k < t; k++) {
		
		cin >> n >> m;
		cout << ncr[m][n] <<endl;
	}
	
}
