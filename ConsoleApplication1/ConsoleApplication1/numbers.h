#include <string>
using namespace std;
string numbers_lt_20_to_string(int number)
{
	string answer;
	switch (number)
	{
	case 1:answer = "����"; break;
	case 2:answer = "���"; break;	
	case 3:answer = "���"; break;
	case 4:answer = "������"; break;	
	case 5:answer = "����"; break;	
	case 6:answer = "�����"; break;	
	case 7:answer = "����"; break;	
	case 8:answer = "������"; break;	
	case 9:answer = "������"; break;	
	case 10:answer = "������"; break;	
	case 11:answer = "����������"; break;	
	case 12:answer = "����������"; break;	
	case 13:answer = "����������"; break;	
	case 14:answer = "�����������"; break;	
	case 15:answer = "�����������"; break;	
	case 16:answer = "������������"; break;	
	case 17:answer = "�����������"; break;	
	case 18:answer = "�������������"; break;	
	case 19:answer = "�������������"; break;
	case 20:answer = "��������"; break;	
	case 30:answer = "��������"; break;	
	case 40:answer = "�����"; break;
	case 50:answer = "����������"; break;	
	case 60:answer = "�����������"; break;	
	case 70:answer = "����������"; break;
	case 80:answer = "������������"; break;	
	case 90:answer = "���������"; break;	
	case 100:answer = "���"; break;	



	default: break;	
	}
	return answer;
}