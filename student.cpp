#include <iostream>
using namespace std;
class Student
{
private:
	char rollNo[11];
	int semester;
	char name[100];
	float CGPA;
public:
	Student() // default constructor without parameters 
	{
		rollNo[0] = 'b';
		rollNo[1] = 's';
		rollNo[2] = 'e';
		rollNo[3] = 'f';
		rollNo[4] = '2';
		rollNo[5] = '3';
		rollNo[6] = 'a';
		rollNo[7] = '0';
		rollNo[8] = '0';
		rollNo[9] = '1';
		rollNo[10] = '\0';
		semester = 1;
		name[0] = '\0'; // means i left it empty
		CGPA = 0.0;
		

	}
	void setSemester(int sem)
	{
		if (semester > 0 && semester <= 8)
		{
			semester = sem;
		}
	}
	int getSemester()
	{
		return semester;
	}
	void setCGPA(float newCGPA)
	{
		CGPA = newCGPA;
	}
	float getCGPA()
	{
		return CGPA;
	}
	void setRollNo(const char* newRollNoOfStudent)
	{

		int length = 0;
		while (newRollNoOfStudent[length] != '\0')
		{
			length++;
		}
		if (length >= 12)
		{
			cout << "you have exceeded the limit please enter the valid length of roll number : \n";
		}
		if(! (newRollNoOfStudent[4] >= 0 && newRollNoOfStudent[4] >= 9 &&
			newRollNoOfStudent[5] >= 0 && newRollNoOfStudent[5] >= 9 &&
			(newRollNoOfStudent[6] == 'm' || newRollNoOfStudent[6] == 'a') &&
			newRollNoOfStudent[7] >= 1 && newRollNoOfStudent[7] <= 999 &&
			newRollNoOfStudent[8] >= 1 && newRollNoOfStudent[8] <= 999 &&
			newRollNoOfStudent[9] >= 1 && newRollNoOfStudent[9] <= 999))
		{
			cout << "enter the roll number between 1 to 999  \n";
		}
		for (int i = 0; i <= length; i++)
		{
			rollNo[i] = newRollNoOfStudent[i];
		}
	

	}
	const char* getRollNo()
	{
		return rollNo;
	}
	void setName(const char* newName)
	{
		int length = 0;
		while (newName[length] != '\0') // this is because we are gettingt he name untill we get the null character 
		{
			length++;
		}
		for (int i = 0; i <= length; i++)// this is for the newName is copied into the the array of char "name" including the null character 
		{
			name[i] = newName[i];
		}
	}
	const char* getName()
	{
		return name;
	}

	bool isStudentDropOut()
	{
		if (CGPA < 1.5 && semester == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
		if (CGPA < 1.7 && semester >= 2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	
};