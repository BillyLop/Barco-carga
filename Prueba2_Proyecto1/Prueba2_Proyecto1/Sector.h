#pragma once
ref class Sector
{
public:
	Sector();
public:
	System::Collections::Stack ^ Columna_A = gcnew System::Collections::Stack();
public:
	System::Collections::Stack ^ Columna_B = gcnew System::Collections::Stack();;
public:
	bool ColumnaA_Revisado = false;
	bool ColumnaB_Revisado = false;
};

