#include "InputeVector.h"

void InputeVector(int n, int mode)
	//��������� ������� ��� ���������� �������
{
		int  j;
		int temp = 1, temp1,var = N*M*P;
		//� ��������� �� ����, ���� �� �������� � ����, ������ � ����� ��������
		switch (mode)
		{
		case 1:		for (j = 0; j < n; j++)
						B[j] = temp++;
			//����� ����������
			break;
		
		case 2:		for (j = 0; j < n; j++)
						B[j] = 1 + rand() % var;
			//������� �������� �� 1 �� P*N*M + 1
			break;
		
		case 3:		temp1 = n;
					for (j = 0; j < n; j++)
						B[j] = temp1--;
			//�������� ����������
			break;

		default: break;
		}
}