#pragma once

ref class Solicitud
{
public: 
	System::String^ sector;
public:
	System::String^ columna;
public:
	int posicion;

public:
	Solicitud();
	~Solicitud();
};

