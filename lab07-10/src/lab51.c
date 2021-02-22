#include <stdio.h>

/**

 * @file lab51.c
 * @brief ���� � ������ ��������� � ����������� ������ �5
 * "��������� ��������� ������� ������ ��� ���� ������� �����"
 * @author Polizhay Rostyslav.
 * @date 25-jan-2020
 * @version 0.1

*/

/**

 * @brief �������, ��� �������� ��������� ������� ������
 * @param ��� ����� �����
 * @return �������� ����� "a"

*/

int nod(int a, int b) {

	while (a != b) {

		if (a > b) {

			a = a - b;

		}

		else {

			b = b - a;

		}

	}

	return a;

}

int main() {

	//������ ���������� ���������� ������� � ���������� � ������������� �������
	int result = nod(1000, 100);

	printf("%d", result);

	return 0;

}

