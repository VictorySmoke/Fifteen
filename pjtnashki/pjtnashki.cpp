#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct coordinate 
{
	int x;
	int y;
} zero;

int kolvo = 0;

int main()
{
	srand(time(NULL));
	clock_t start, end;

	start = clock();
	int a;
	cout << "Welcome to fifteen" << endl;
	cout << "If you chose manual assembly, then w - move 0 up; s - move 0 down; a - move 0 to the left; d - move 0 to the right." << endl;
	cout << "Choose how many figures there will be" << endl;
	cout << "Enter 8 or 15 "<<endl;
	cin >> a;
//8 деталй
	if (a == 8) {
		char b;
		cout << "Choose who will play: you or the computer" << endl;
		cout << "Enter p or c " << endl;
		cin >> b;

		if (b == 'p') {
			//человек
			char c;
			cout << "Choose who will fill the playing field: you or the computer" << endl;
			cout << "Enter r or c" << endl;
			cin >> c;
			if (c == 'c') {
				// сборка пк
				int mass1[3][3];
				int mass_c[9];
				int cifry = 9;
				int va = -1;
				bool sobrano = 0;

				for (int i = 0; i < 9; i++) {

					while (mass_c[i] != va) {
						va = rand() % cifry;
						if (va == mass_c[0] || va == mass_c[1] || va == mass_c[2] || va == mass_c[3] || va == mass_c[4] || va == mass_c[5] || va == mass_c[6] || va == mass_c[7] || va == mass_c[8]) {

						}
						else {
							mass_c[i] = va;
						}
					}
				}

				mass1[0][0] = mass_c[0];
				mass1[0][1] = mass_c[1];
				mass1[0][2] = mass_c[2];
				mass1[1][0] = mass_c[3];
				mass1[1][1] = mass_c[4];
				mass1[1][2] = mass_c[5];
				mass1[2][0] = mass_c[6];
				mass1[2][1] = mass_c[7];
				mass1[2][2] = mass_c[8];

				while (sobrano != 1) {
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							cout << mass1[i][j] << " ";
							if (mass1[i][j] == 0)
							{
								zero.x = j;
								zero.y = i;
							}
						}
						cout << endl;
					}
					cout << endl;
					if (mass1[0][0] == 1 && mass1[0][1] == 2 && mass1[0][2] == 3 && mass1[1][0] == 4 && mass1[1][1] == 5 && mass1[1][2] == 6 && mass1[2][0] == 7 && mass1[2][1] == 8 && mass1[2][2] == 0) {
						sobrano = 1;
					}
					else {
						char dvishenie;
						cin >> dvishenie;
						cout << endl;
						if (dvishenie == 'w') {
							if (zero.y == 0) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y - 1][zero.x];
								zero.y--;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dvishenie == 'a') {
							if (zero.x == 0) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y][zero.x - 1];
								zero.x--;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dvishenie == 'd') {
							if (zero.x == 2) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y][zero.x + 1];
								zero.x++;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dvishenie == 's') {
							if (zero.y == 2) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y + 1][zero.x];
								zero.y++;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else {
							cout << "";
						}
						kolvo++;
					}
				}
			}
			else if (c == 'r') {
				//сборка руками
				int mass1[3][3];
				int mass_c[9];
				int cifry = 9;
				int va = -1;
				bool sobrano = 0;

				for (int i = 0; i < 9; i++) {

					while (mass_c[i] != va) {
						cout << "Enter the value "<<endl;
						cin >> va;
						if (va == mass_c[0] || va == mass_c[1] || va == mass_c[2] || va == mass_c[3] || va == mass_c[4] || va == mass_c[5] || va == mass_c[6] || va == mass_c[7] || va == mass_c[8]) {

						}
						else {
							mass_c[i] = va;
						}
					}
				}

				mass1[0][0] = mass_c[0];
				mass1[0][1] = mass_c[1];
				mass1[0][2] = mass_c[2];
				mass1[1][0] = mass_c[3];
				mass1[1][1] = mass_c[4];
				mass1[1][2] = mass_c[5];
				mass1[2][0] = mass_c[6];
				mass1[2][1] = mass_c[7];
				mass1[2][2] = mass_c[8];

				while (sobrano != 1) {
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							cout << mass1[i][j] << " ";
							if (mass1[i][j] == 0)
							{
								zero.x = j;
								zero.y = i;
							}
						}
						cout << endl;
					}
					cout << endl;
					if (mass1[0][0] == 1 && mass1[0][1] == 2 && mass1[0][2] == 3 && mass1[1][0] == 4 && mass1[1][1] == 5 && mass1[1][2] == 6 && mass1[2][0] == 7 && mass1[2][1] == 8 && mass1[2][2] == 0) {
						sobrano = 1;
					}
					else {
						char dvishenie;
						cin >> dvishenie;
						cout << endl;
						if (dvishenie == 'w') {
							if (zero.y == 0) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y - 1][zero.x];
								zero.y--;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dvishenie == 'a') {
							if (zero.x == 0) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y][zero.x - 1];
								zero.x--;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dvishenie == 'd') {
							if (zero.x == 2) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y][zero.x + 1];
								zero.x++;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dvishenie == 's') {
							if (zero.y == 2) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y + 1][zero.x];
								zero.y++;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else {
							cout << "";
						}
						kolvo++;
					}
				}
			}
			else {
				cout << "Try again"<<endl;
			}
		}
		else if (b == 'c') {
			//пк
			char c;
			cout << "Choose who will fill the playing field: you or the computer" << endl;
			cout << "Enter r or c" << endl;
			cin >> c;
			if (c == 'c') {
				//сборка пк
				int mass1[3][3];
				int mass_c[9];
				int cifry = 9;
				int va = -1;
				bool sobrano = 0;
				int dviz;

				for (int i = 0; i < 9; i++) {
					while (mass_c[i] != va) {
						va = rand() % cifry;
						if (va == mass_c[0] || va == mass_c[1] || va == mass_c[2] || va == mass_c[3] || va == mass_c[4] || va == mass_c[5] || va == mass_c[6] || va == mass_c[7] || va == mass_c[8]) {

						}
						else {
							mass_c[i] = va;
						}
					}
				}

				mass1[0][0] = mass_c[0];
				mass1[0][1] = mass_c[1];
				mass1[0][2] = mass_c[2];
				mass1[1][0] = mass_c[3];
				mass1[1][1] = mass_c[4];
				mass1[1][2] = mass_c[5];
				mass1[2][0] = mass_c[6];
				mass1[2][1] = mass_c[7];
				mass1[2][2] = mass_c[8];

				while (sobrano != 1) {
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							cout << mass1[i][j] << " ";
							if (mass1[i][j] == 0)
							{
								zero.x = j;
								zero.y = i;
							}
						}
						cout << endl;
					}
					cout << endl;
					if (mass1[0][0] == 1 && mass1[0][1] == 2 && mass1[0][2] == 3 && mass1[1][0] == 4 && mass1[1][1] == 5 && mass1[1][2] == 6 && mass1[2][0] == 7 && mass1[2][1] == 8 && mass1[2][2] == 0) {
						sobrano = 1;
					}
					else {
						dviz = rand() % 4;
						cout << dviz << endl << endl;
						if (dviz == 0) {
							if (zero.y == 0) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y - 1][zero.x];
								zero.y--;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dviz == 1) {
							if (zero.x == 0) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y][zero.x - 1];
								zero.x--;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dviz == 2) {
							if (zero.x == 2) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y][zero.x + 1];
								zero.x++;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dviz == 3) {
							if (zero.y == 2) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y + 1][zero.x];
								zero.y++;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else {
							cout << "";
						}
						kolvo++;
					}
				}
			}
			else if (c == 'r') {
				//сборка руками
				int mass1[3][3];
				int mass_c[9];
				int cifry = 9;
				int va = -1;
				bool sobrano = 0;
				int dviz;

				for (int i = 0; i < 9; i++) {

					while (mass_c[i] != va) {
						cout << "Enter the value " << endl;
						cin >> va;
						if (va == mass_c[0] || va == mass_c[1] || va == mass_c[2] || va == mass_c[3] || va == mass_c[4] || va == mass_c[5] || va == mass_c[6] || va == mass_c[7] || va == mass_c[8]) {

						}
						else {
							mass_c[i] = va;
						}
					}
				}

				mass1[0][0] = mass_c[0];
				mass1[0][1] = mass_c[1];
				mass1[0][2] = mass_c[2];
				mass1[1][0] = mass_c[3];
				mass1[1][1] = mass_c[4];
				mass1[1][2] = mass_c[5];
				mass1[2][0] = mass_c[6];
				mass1[2][1] = mass_c[7];
				mass1[2][2] = mass_c[8];
				while (sobrano != 1) {
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							cout << mass1[i][j] << " ";
							if (mass1[i][j] == 0)
							{
								zero.x = j;
								zero.y = i;
							}
						}
						cout << endl;
					}
					cout << endl;
					if (mass1[0][0] == 1 && mass1[0][1] == 2 && mass1[0][2] == 3 && mass1[1][0] == 4 && mass1[1][1] == 5 && mass1[1][2] == 6 && mass1[2][0] == 7 && mass1[2][1] == 8 && mass1[2][2] == 0) {
						sobrano = 1;
					}
					else {
						dviz = rand() % 4;
						cout << dviz << endl << endl;
						if (dviz == 0) {
							if (zero.y == 0) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y - 1][zero.x];
								zero.y--;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dviz == 1) {
							if (zero.x == 0) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y][zero.x - 1];
								zero.x--;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dviz == 2) {
							if (zero.x == 2) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y][zero.x + 1];
								zero.x++;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else if (dviz == 3) {
							if (zero.y == 2) {
							}
							else {
								mass1[zero.y][zero.x] = mass1[zero.y + 1][zero.x];
								zero.y++;
								mass1[zero.y][zero.x] = 0;
							}
						}
						else {
							cout << "";
						}
						kolvo++;
					}
				}
			}
			else {
				cout << "Try again"<<endl;
			}
		}
		else {
			cout << "Try again"<<endl;
		}
	}
	else if (a == 15) {
			char b;
			cout << "Choose who will play: you or the computer" << endl;
			cout << "Enter p or c " << endl;
			cin >> b;

			if (b == 'p') {
				//человек
				char c;
				cout << "Choose who will fill the playing field: you or the computer" << endl;
				cout << "Enter r or c" << endl;
				cin >> c;
				if (c == 'c') {
					// сборка пк
					int mass1[4][4];
					int mass_c[16];
					int cifry = 16;
					int va = -1;
					bool sobrano = 0;

					for (int i = 0; i < 16; i++) {

						while (mass_c[i] != va) {
							va = rand() % cifry;
							if(va == mass_c[0] || va == mass_c[1] || va == mass_c[2] || va == mass_c[3] || va == mass_c[4] || va == mass_c[5] || va == mass_c[6] || va == mass_c[7] || va == mass_c[8] || va == mass_c[9] || va == mass_c[10] || va == mass_c[11] || va == mass_c[12] || va == mass_c[13] || va == mass_c[14] || va == mass_c[15]) {

							}
							else {
								mass_c[i] = va;
							}
						}
					}

					mass1[0][0] = mass_c[0];
					mass1[0][1] = mass_c[1];
					mass1[0][2] = mass_c[2];
					mass1[0][3] = mass_c[3];
					mass1[1][0] = mass_c[4];
					mass1[1][1] = mass_c[5];
					mass1[1][2] = mass_c[6];
					mass1[1][3] = mass_c[7];
					mass1[2][0] = mass_c[8];
					mass1[2][1] = mass_c[9];
					mass1[2][2] = mass_c[10];
					mass1[2][3] = mass_c[11];
					mass1[3][0] = mass_c[12];
					mass1[3][1] = mass_c[13];
					mass1[3][2] = mass_c[14];
					mass1[3][3] = mass_c[15];

					while (sobrano != 1) {
						for (int i = 0; i < 4; i++) {
							for (int j = 0; j < 4; j++) {
								cout << mass1[i][j] << " ";
								if (mass1[i][j] == 0)
								{
									zero.x = j;
									zero.y = i;
								}
							}
							cout << endl;
						}
						cout << endl;
						if (mass1[0][0] == 1 && mass1[0][1] == 2 && mass1[0][2] == 3 && mass1[0][3] == 4 && mass1[1][0] == 5 && mass1[1][1] == 6 && mass1[1][2] == 7 && mass1[1][3] == 8 && mass1[2][0] == 9 && mass1[2][1] == 10 && mass1[2][2] == 11 && mass1[2][3] == 12 && mass1[3][0] == 13 && mass1[3][1] == 14 && mass1[3][2] == 15 && mass1[3][3] == 0) {
							sobrano = 1;
						}
						else {
							char dvishenie;
							cin >> dvishenie;
							cout << endl;
							if (dvishenie == 'w') {
								if (zero.y == 0) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y - 1][zero.x];
									zero.y--;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dvishenie == 'a') {
								if (zero.x == 0) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y][zero.x - 1];
									zero.x--;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dvishenie == 'd') {
								if (zero.x == 3) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y][zero.x + 1];
									zero.x++;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dvishenie == 's') {
								if (zero.y == 3) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y + 1][zero.x];
									zero.y++;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else {
								cout << "";
							}
							kolvo++;
						}
					}
				}
				else if (c == 'r') {
					//сборка руками
					int mass1[4][4];
					int mass_c[16];
					int cifry = 16;
					int va = -1;
					bool sobrano = 0;

					for (int i = 0; i < 16; i++) {

						while (mass_c[i] != va) {
							cout << "Enter the value " << endl;
							cin >> va;
							if (va == mass_c[0] || va == mass_c[1] || va == mass_c[2] || va == mass_c[3] || va == mass_c[4] || va == mass_c[5] || va == mass_c[6] || va == mass_c[7] || va == mass_c[8] || va == mass_c[9] || va == mass_c[10] || va == mass_c[11] || va == mass_c[12] || va == mass_c[13] || va == mass_c[14] || va == mass_c[15]) {

							}
							else {
								mass_c[i] = va;
							}
						}
					}

					mass1[0][0] = mass_c[0];
					mass1[0][1] = mass_c[1];
					mass1[0][2] = mass_c[2];
					mass1[0][3] = mass_c[3];
					mass1[1][0] = mass_c[4];
					mass1[1][1] = mass_c[5];
					mass1[1][2] = mass_c[6];
					mass1[1][3] = mass_c[7];
					mass1[2][0] = mass_c[8];
					mass1[2][1] = mass_c[9];
					mass1[2][2] = mass_c[10];
					mass1[2][3] = mass_c[11];
					mass1[3][0] = mass_c[12];
					mass1[3][1] = mass_c[13];
					mass1[3][2] = mass_c[14];
					mass1[3][3] = mass_c[15];

					while (sobrano != 1) {
						for (int i = 0; i < 4; i++) {
							for (int j = 0; j < 4; j++) {
								cout << mass1[i][j] << " ";
								if (mass1[i][j] == 0)
								{
									zero.x = j;
									zero.y = i;
								}
							}
							cout << endl;
						}
						cout << endl;

						if (mass1[0][0] == 1 && mass1[0][1] == 2 && mass1[0][2] == 3 && mass1[0][3] == 4 && mass1[1][0] == 5 && mass1[1][1] == 6 && mass1[1][2] == 7 && mass1[1][3] == 8 && mass1[2][0] == 9 && mass1[2][1] == 10 && mass1[2][2] == 11 && mass1[2][3] == 12 && mass1[3][0] == 13 && mass1[3][1] == 14 && mass1[3][2] == 15 && mass1[3][3] == 0) {
							sobrano = 1;
						}
						else {
							char dvishenie;
							cin >> dvishenie;
							cout << endl;
							if (dvishenie == 'w') {
								if (zero.y == 0) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y - 1][zero.x];
									zero.y--;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dvishenie == 'a') {
								if (zero.x == 0) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y][zero.x - 1];
									zero.x--;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dvishenie == 'd') {
								if (zero.x == 3) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y][zero.x + 1];
									zero.x++;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dvishenie == 's') {
								if (zero.y == 3) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y + 1][zero.x];
									zero.y++;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else {
								cout << "";
							}
							kolvo++;
						}
					}
				}
				else {
					cout << "Try again"<<endl;
				}
			}
			else if (b == 'c') {
				//пк
				char c;
				cout << "Choose who will fill the playing field: you or the computer" << endl;
				cout << "Enter r or c" << endl;
				cin >> c;
				if (c == 'c') {
					//сборка пк
					int mass1[4][4];
					int mass_c[16];
					int cifry = 16;
					int va = -1;
					bool sobrano = 0;
					int dviz;

					for (int i = 0; i < 16; i++) {
						while (mass_c[i] != va) {
							va = rand() % cifry;
							if (va == mass_c[0] || va == mass_c[1] || va == mass_c[2] || va == mass_c[3] || va == mass_c[4] || va == mass_c[5] || va == mass_c[6] || va == mass_c[7] || va == mass_c[8] || va == mass_c[9] || va == mass_c[10] || va == mass_c[11] || va == mass_c[12] || va == mass_c[13] || va == mass_c[14] || va == mass_c[15]) {

							}
							else {
								mass_c[i] = va;
							}
						}
					}

					mass1[0][0] = mass_c[0];
					mass1[0][1] = mass_c[1];
					mass1[0][2] = mass_c[2];
					mass1[0][3] = mass_c[3];
					mass1[1][0] = mass_c[4];
					mass1[1][1] = mass_c[5];
					mass1[1][2] = mass_c[6];
					mass1[1][3] = mass_c[7];
					mass1[2][0] = mass_c[8];
					mass1[2][1] = mass_c[9];
					mass1[2][2] = mass_c[10];
					mass1[2][3] = mass_c[11];
					mass1[3][0] = mass_c[12];
					mass1[3][1] = mass_c[13];
					mass1[3][2] = mass_c[14];
					mass1[3][3] = mass_c[15];

					while (sobrano != 1) {
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								cout << mass1[i][j] << " ";
								if (mass1[i][j] == 0)
								{
									zero.x = j;
									zero.y = i;
								}
							}
							cout << endl;
						}
						cout << endl;
						if (mass1[0][0] == 1 && mass1[0][1] == 2 && mass1[0][2] == 3 && mass1[0][3] == 4 && mass1[1][0] == 5 && mass1[1][1] == 6 && mass1[1][2] == 7 && mass1[1][3] == 8 && mass1[2][0] == 9 && mass1[2][1] == 10 && mass1[2][2] == 11 && mass1[2][3] == 12 && mass1[3][0] == 13 && mass1[3][1] == 14 && mass1[3][2] == 15 && mass1[3][3] == 0) {
							sobrano = 1;
						}
						else {
							dviz = rand() % 4;
							cout << dviz << endl << endl;
							if (dviz == 0) {
								if (zero.y == 0) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y - 1][zero.x];
									zero.y--;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dviz == 1) {
								if (zero.x == 0) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y][zero.x - 1];
									zero.x--;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dviz == 2) {
								if (zero.x == 3) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y][zero.x + 1];
									zero.x++;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dviz == 3) {
								if (zero.y == 3) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y + 1][zero.x];
									zero.y++;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else {
								cout << "";
							}
							kolvo++;
						}
					}
				}
				else if (c == 'r') {
					//сборка руками
					int mass1[4][4];
					int mass_c[16];
					int cifry = 16;
					int va = -1;
					bool sobrano = 0;
					int dviz;

					for (int i = 0; i < 16; i++) {

						while (mass_c[i] != va) {
							cout << "Enter the value " << endl;
							cin >> va;
							if ( va == mass_c[0] || va == mass_c[1] || va == mass_c[2] || va == mass_c[3] || va == mass_c[4] || va == mass_c[5] || va == mass_c[6] || va == mass_c[7] || va == mass_c[8] || va == mass_c[9] || va == mass_c[10] || va == mass_c[11] || va == mass_c[12] || va == mass_c[13] || va == mass_c[14] || va == mass_c[15]) {

							}
							else {
								mass_c[i] = va;
							}
						}
					}

					mass1[0][0] = mass_c[0];
					mass1[0][1] = mass_c[1];
					mass1[0][2] = mass_c[2];
					mass1[0][3] = mass_c[3];
					mass1[1][0] = mass_c[4];
					mass1[1][1] = mass_c[5];
					mass1[1][2] = mass_c[6];
					mass1[1][3] = mass_c[7];
					mass1[2][0] = mass_c[8];
					mass1[2][1] = mass_c[9];
					mass1[2][2] = mass_c[10];
					mass1[2][3] = mass_c[11];
					mass1[3][0] = mass_c[12];
					mass1[3][1] = mass_c[13];
					mass1[3][2] = mass_c[14];
					mass1[3][3] = mass_c[15];
					while (sobrano != 1) {
						for (int i = 0; i < 4; i++) {
							for (int j = 0; j < 4; j++) {
								cout << mass1[i][j] << " ";
								if (mass1[i][j] == 0)
								{
									zero.x = j;
									zero.y = i;
								}
							}
							cout << endl;
						}
						cout << endl;
						if (mass1[0][0] == 1 && mass1[0][1] == 2 && mass1[0][2] == 3 && mass1[0][3] == 4 && mass1[1][0] == 5 && mass1[1][1] == 6 && mass1[1][2] == 7 && mass1[1][3] == 8 && mass1[2][0] == 9 && mass1[2][1] == 10 && mass1[2][2] == 11 && mass1[2][3] == 12 && mass1[3][0] == 13 && mass1[3][1] == 14 && mass1[3][2] == 15 && mass1[3][3] == 0) {
							sobrano = 1;
						}
						else {
							dviz = rand() % 4;
							cout << dviz << endl << endl;
							if (dviz == 0) {
								if (zero.y == 0) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y - 1][zero.x];
									zero.y--;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dviz == 1) {
								if (zero.x == 0) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y][zero.x - 1];
									zero.x--;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dviz == 2) {
								if (zero.x == 3) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y][zero.x + 1];
									zero.x++;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else if (dviz == 3) {
								if (zero.y == 3) {
								}
								else {
									mass1[zero.y][zero.x] = mass1[zero.y + 1][zero.x];
									zero.y++;
									mass1[zero.y][zero.x] = 0;
								}
							}
							else {
								cout << "";
							}
							kolvo++;
						}
					}
				}
				else {
					cout << "Try again"<<endl;
				}
			}
			else {
				cout << "Try again"<<endl;
			}	
	}
	else {
		cout << "Try again"<<endl;
	}

	end = clock();

	cout << "Statistics: "<<endl;
	printf("Have you played %.4f second(s)\n", ((double)end - start) / ((double)CLOCKS_PER_SEC));
	cout <<"Number of permutations " << kolvo;

}