#pragma once
#include "Contenedor.h"
#include "Sector.h"
#include "Pedido.h"
#include <random>
#include "Solicitud.h"

namespace Prueba2Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		System::Collections::Queue^ colaPerecederos = gcnew System::Collections::Queue();
	private: System::Windows::Forms::ListBox^  lbNoPerecederos;

	private: System::Windows::Forms::ListBox^  lbPerecederos;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;

	private:
		System::Collections::Queue^ colaNoPerecederos = gcnew System::Collections::Queue();
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_SeACoA;
	private: System::Windows::Forms::Button^  btn_SeACoB;
	private: System::Windows::Forms::Label^  lbl_Información;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_SeICoB;
	private: System::Windows::Forms::Button^  btn_SeICoA;
	private: System::Windows::Forms::Button^  btn_SeHCoB;
	private: System::Windows::Forms::Button^  btn_SeHCoA;
	private: System::Windows::Forms::Button^  btn_SeGCoB;
	private: System::Windows::Forms::Button^  btn_SeGCoA;
	private: System::Windows::Forms::Button^  btn_SeFCoB;
	private: System::Windows::Forms::Button^  btn_SeFCoA;
	private: System::Windows::Forms::Button^  btn_SeECoB;
	private: System::Windows::Forms::Button^  btn_SeECoA;

	private: System::Windows::Forms::Button^  btn_SeDCoB;
	private: System::Windows::Forms::Button^  btn_SeDCoA;
	private: System::Windows::Forms::Button^  btn_SeCCoB;
	private: System::Windows::Forms::Button^  btn_SeCCoA;
	private: System::Windows::Forms::Button^  btn_SeBCoB;
	private: System::Windows::Forms::Button^  btn_SeBCoA;
	private: System::Windows::Forms::Button^  btn_EmptyAll;
	private: System::Windows::Forms::Button^  btn_FillRand;
	private: System::Windows::Forms::Label^  lbl_Sección;
	private: System::Windows::Forms::TextBox^  tb_Sección;
	private: System::Windows::Forms::TextBox^  tb_Columna;
	private: System::Windows::Forms::Label^  lbl_Columna;
	private: System::Windows::Forms::TextBox^  tb_Perecedero;
	private: System::Windows::Forms::Label^  lbl_Perecedero;
	private: System::Windows::Forms::TextBox^  tb_Posición;
	private: System::Windows::Forms::Label^  lbl_Posición;
	private: System::Windows::Forms::Button^  btn_ExecuteOrders;

	private: System::Windows::Forms::Button^  btn_AddQueue;
	private: System::Windows::Forms::Label^  lbl_InfoQueue;
	private: System::Windows::Forms::ListBox^  ObjetosA;
	private: System::Windows::Forms::ListBox^  ObjetosI;




	private: System::Windows::Forms::ListBox^  ObjetosH;

	private: System::Windows::Forms::ListBox^  ObjetosG;

	private: System::Windows::Forms::ListBox^  ObjetosF;

	private: System::Windows::Forms::ListBox^  ObjetosE;

	private: System::Windows::Forms::ListBox^  ObjetosD;
	private: System::Windows::Forms::ListBox^  ObjetosC;


	private: System::Windows::Forms::ListBox^  ObjetosB;
	private: System::Windows::Forms::ListBox^  ObjetosBb;
	private: System::Windows::Forms::ListBox^  ObjetosCb;
	private: System::Windows::Forms::ListBox^  ObjetosDb;
	private: System::Windows::Forms::ListBox^  ObjetosAb;
	private: System::Windows::Forms::ListBox^  ObjetosEb;
	private: System::Windows::Forms::ListBox^  ObjetosFb;
	private: System::Windows::Forms::ListBox^  ObjetosGb;
	private: System::Windows::Forms::ListBox^  ObjetosHb;
	private: System::Windows::Forms::ListBox^  ObjetosIb;







	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_SeACoA = (gcnew System::Windows::Forms::Button());
			this->btn_SeACoB = (gcnew System::Windows::Forms::Button());
			this->lbl_Información = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_SeICoB = (gcnew System::Windows::Forms::Button());
			this->btn_SeICoA = (gcnew System::Windows::Forms::Button());
			this->btn_SeHCoB = (gcnew System::Windows::Forms::Button());
			this->btn_SeHCoA = (gcnew System::Windows::Forms::Button());
			this->btn_SeGCoB = (gcnew System::Windows::Forms::Button());
			this->btn_SeGCoA = (gcnew System::Windows::Forms::Button());
			this->btn_SeFCoB = (gcnew System::Windows::Forms::Button());
			this->btn_SeFCoA = (gcnew System::Windows::Forms::Button());
			this->btn_SeECoB = (gcnew System::Windows::Forms::Button());
			this->btn_SeECoA = (gcnew System::Windows::Forms::Button());
			this->btn_SeDCoB = (gcnew System::Windows::Forms::Button());
			this->btn_SeDCoA = (gcnew System::Windows::Forms::Button());
			this->btn_SeCCoB = (gcnew System::Windows::Forms::Button());
			this->btn_SeCCoA = (gcnew System::Windows::Forms::Button());
			this->btn_SeBCoB = (gcnew System::Windows::Forms::Button());
			this->btn_SeBCoA = (gcnew System::Windows::Forms::Button());
			this->btn_EmptyAll = (gcnew System::Windows::Forms::Button());
			this->btn_FillRand = (gcnew System::Windows::Forms::Button());
			this->lbl_Sección = (gcnew System::Windows::Forms::Label());
			this->tb_Sección = (gcnew System::Windows::Forms::TextBox());
			this->tb_Columna = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Columna = (gcnew System::Windows::Forms::Label());
			this->tb_Perecedero = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Perecedero = (gcnew System::Windows::Forms::Label());
			this->tb_Posición = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Posición = (gcnew System::Windows::Forms::Label());
			this->btn_ExecuteOrders = (gcnew System::Windows::Forms::Button());
			this->btn_AddQueue = (gcnew System::Windows::Forms::Button());
			this->lbl_InfoQueue = (gcnew System::Windows::Forms::Label());
			this->ObjetosA = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosI = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosH = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosG = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosF = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosE = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosD = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosC = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosB = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosBb = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosCb = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosDb = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosAb = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosEb = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosFb = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosGb = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosHb = (gcnew System::Windows::Forms::ListBox());
			this->ObjetosIb = (gcnew System::Windows::Forms::ListBox());
			this->lbNoPerecederos = (gcnew System::Windows::Forms::ListBox());
			this->lbPerecederos = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_SeACoA
			// 
			this->btn_SeACoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeACoA->Location = System::Drawing::Point(161, 63);
			this->btn_SeACoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeACoA->Name = L"btn_SeACoA";
			this->btn_SeACoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeACoA->TabIndex = 0;
			this->btn_SeACoA->Text = L"Se A Co A";
			this->btn_SeACoA->UseVisualStyleBackColor = false;
			this->btn_SeACoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeACoA_Click);
			// 
			// btn_SeACoB
			// 
			this->btn_SeACoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeACoB->Location = System::Drawing::Point(241, 63);
			this->btn_SeACoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeACoB->Name = L"btn_SeACoB";
			this->btn_SeACoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeACoB->TabIndex = 1;
			this->btn_SeACoB->Text = L"Se A Co B";
			this->btn_SeACoB->UseVisualStyleBackColor = false;
			this->btn_SeACoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeACoB_Click);
			// 
			// lbl_Información
			// 
			this->lbl_Información->AutoSize = true;
			this->lbl_Información->Location = System::Drawing::Point(9, 30);
			this->lbl_Información->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Información->Name = L"lbl_Información";
			this->lbl_Información->Size = System::Drawing::Size(0, 13);
			this->lbl_Información->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(184, 39);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Agregar Contenedores";
			// 
			// btn_SeICoB
			// 
			this->btn_SeICoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeICoB->Location = System::Drawing::Point(241, 285);
			this->btn_SeICoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeICoB->Name = L"btn_SeICoB";
			this->btn_SeICoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeICoB->TabIndex = 5;
			this->btn_SeICoB->Text = L"Se I Co B";
			this->btn_SeICoB->UseVisualStyleBackColor = false;
			this->btn_SeICoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeICoB_Click);
			// 
			// btn_SeICoA
			// 
			this->btn_SeICoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeICoA->Location = System::Drawing::Point(161, 285);
			this->btn_SeICoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeICoA->Name = L"btn_SeICoA";
			this->btn_SeICoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeICoA->TabIndex = 4;
			this->btn_SeICoA->Text = L"Se I Co A";
			this->btn_SeICoA->UseVisualStyleBackColor = false;
			this->btn_SeICoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeICoA_Click);
			// 
			// btn_SeHCoB
			// 
			this->btn_SeHCoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeHCoB->Location = System::Drawing::Point(241, 258);
			this->btn_SeHCoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeHCoB->Name = L"btn_SeHCoB";
			this->btn_SeHCoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeHCoB->TabIndex = 7;
			this->btn_SeHCoB->Text = L"Se H Co B";
			this->btn_SeHCoB->UseVisualStyleBackColor = false;
			this->btn_SeHCoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeHCoB_Click);
			// 
			// btn_SeHCoA
			// 
			this->btn_SeHCoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeHCoA->Location = System::Drawing::Point(161, 258);
			this->btn_SeHCoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeHCoA->Name = L"btn_SeHCoA";
			this->btn_SeHCoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeHCoA->TabIndex = 6;
			this->btn_SeHCoA->Text = L"Se H Co A";
			this->btn_SeHCoA->UseVisualStyleBackColor = false;
			this->btn_SeHCoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeHCoA_Click);
			// 
			// btn_SeGCoB
			// 
			this->btn_SeGCoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeGCoB->Location = System::Drawing::Point(241, 230);
			this->btn_SeGCoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeGCoB->Name = L"btn_SeGCoB";
			this->btn_SeGCoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeGCoB->TabIndex = 9;
			this->btn_SeGCoB->Text = L"Se G Co B";
			this->btn_SeGCoB->UseVisualStyleBackColor = false;
			this->btn_SeGCoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeGCoB_Click);
			// 
			// btn_SeGCoA
			// 
			this->btn_SeGCoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeGCoA->Location = System::Drawing::Point(161, 230);
			this->btn_SeGCoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeGCoA->Name = L"btn_SeGCoA";
			this->btn_SeGCoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeGCoA->TabIndex = 8;
			this->btn_SeGCoA->Text = L"Se G Co A";
			this->btn_SeGCoA->UseVisualStyleBackColor = false;
			this->btn_SeGCoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeGCoA_Click);
			// 
			// btn_SeFCoB
			// 
			this->btn_SeFCoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeFCoB->Location = System::Drawing::Point(241, 202);
			this->btn_SeFCoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeFCoB->Name = L"btn_SeFCoB";
			this->btn_SeFCoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeFCoB->TabIndex = 11;
			this->btn_SeFCoB->Text = L"Se F Co B";
			this->btn_SeFCoB->UseVisualStyleBackColor = false;
			this->btn_SeFCoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeFCoB_Click);
			// 
			// btn_SeFCoA
			// 
			this->btn_SeFCoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeFCoA->Location = System::Drawing::Point(161, 202);
			this->btn_SeFCoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeFCoA->Name = L"btn_SeFCoA";
			this->btn_SeFCoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeFCoA->TabIndex = 10;
			this->btn_SeFCoA->Text = L"Se F Co A";
			this->btn_SeFCoA->UseVisualStyleBackColor = false;
			this->btn_SeFCoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeFCoA_Click);
			// 
			// btn_SeECoB
			// 
			this->btn_SeECoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeECoB->Location = System::Drawing::Point(241, 174);
			this->btn_SeECoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeECoB->Name = L"btn_SeECoB";
			this->btn_SeECoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeECoB->TabIndex = 13;
			this->btn_SeECoB->Text = L"Se E Co B";
			this->btn_SeECoB->UseVisualStyleBackColor = false;
			this->btn_SeECoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeECoB_Click);
			// 
			// btn_SeECoA
			// 
			this->btn_SeECoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeECoA->Location = System::Drawing::Point(161, 174);
			this->btn_SeECoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeECoA->Name = L"btn_SeECoA";
			this->btn_SeECoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeECoA->TabIndex = 12;
			this->btn_SeECoA->Text = L"Se E Co A";
			this->btn_SeECoA->UseVisualStyleBackColor = false;
			this->btn_SeECoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeECoA_Click);
			// 
			// btn_SeDCoB
			// 
			this->btn_SeDCoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeDCoB->Location = System::Drawing::Point(241, 146);
			this->btn_SeDCoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeDCoB->Name = L"btn_SeDCoB";
			this->btn_SeDCoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeDCoB->TabIndex = 15;
			this->btn_SeDCoB->Text = L"Se D Co B";
			this->btn_SeDCoB->UseVisualStyleBackColor = false;
			this->btn_SeDCoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeDCoB_Click);
			// 
			// btn_SeDCoA
			// 
			this->btn_SeDCoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeDCoA->Location = System::Drawing::Point(161, 146);
			this->btn_SeDCoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeDCoA->Name = L"btn_SeDCoA";
			this->btn_SeDCoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeDCoA->TabIndex = 14;
			this->btn_SeDCoA->Text = L"Se D Co A";
			this->btn_SeDCoA->UseVisualStyleBackColor = false;
			this->btn_SeDCoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeDCoA_Click);
			// 
			// btn_SeCCoB
			// 
			this->btn_SeCCoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeCCoB->Location = System::Drawing::Point(241, 119);
			this->btn_SeCCoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeCCoB->Name = L"btn_SeCCoB";
			this->btn_SeCCoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeCCoB->TabIndex = 17;
			this->btn_SeCCoB->Text = L"Se C Co B";
			this->btn_SeCCoB->UseVisualStyleBackColor = false;
			this->btn_SeCCoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeCCoB_Click);
			// 
			// btn_SeCCoA
			// 
			this->btn_SeCCoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeCCoA->Location = System::Drawing::Point(161, 119);
			this->btn_SeCCoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeCCoA->Name = L"btn_SeCCoA";
			this->btn_SeCCoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeCCoA->TabIndex = 16;
			this->btn_SeCCoA->Text = L"Se C Co A";
			this->btn_SeCCoA->UseVisualStyleBackColor = false;
			this->btn_SeCCoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeCCoA_Click);
			// 
			// btn_SeBCoB
			// 
			this->btn_SeBCoB->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeBCoB->Location = System::Drawing::Point(241, 91);
			this->btn_SeBCoB->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeBCoB->Name = L"btn_SeBCoB";
			this->btn_SeBCoB->Size = System::Drawing::Size(69, 19);
			this->btn_SeBCoB->TabIndex = 19;
			this->btn_SeBCoB->Text = L"Se B Co B";
			this->btn_SeBCoB->UseVisualStyleBackColor = false;
			this->btn_SeBCoB->Click += gcnew System::EventHandler(this, &MyForm::btn_SeBCoB_Click);
			// 
			// btn_SeBCoA
			// 
			this->btn_SeBCoA->BackColor = System::Drawing::Color::DarkGray;
			this->btn_SeBCoA->Location = System::Drawing::Point(161, 91);
			this->btn_SeBCoA->Margin = System::Windows::Forms::Padding(2);
			this->btn_SeBCoA->Name = L"btn_SeBCoA";
			this->btn_SeBCoA->Size = System::Drawing::Size(69, 19);
			this->btn_SeBCoA->TabIndex = 18;
			this->btn_SeBCoA->Text = L"Se B Co A";
			this->btn_SeBCoA->UseVisualStyleBackColor = false;
			this->btn_SeBCoA->Click += gcnew System::EventHandler(this, &MyForm::btn_SeBCoA_Click);
			// 
			// btn_EmptyAll
			// 
			this->btn_EmptyAll->BackColor = System::Drawing::Color::DarkGray;
			this->btn_EmptyAll->Location = System::Drawing::Point(161, 363);
			this->btn_EmptyAll->Margin = System::Windows::Forms::Padding(2);
			this->btn_EmptyAll->Name = L"btn_EmptyAll";
			this->btn_EmptyAll->Size = System::Drawing::Size(149, 19);
			this->btn_EmptyAll->TabIndex = 20;
			this->btn_EmptyAll->Text = L"Vaciar Todos los Sectores";
			this->btn_EmptyAll->UseVisualStyleBackColor = false;
			this->btn_EmptyAll->Click += gcnew System::EventHandler(this, &MyForm::btn_EmptyAll_Click);
			// 
			// btn_FillRand
			// 
			this->btn_FillRand->BackColor = System::Drawing::Color::DarkGray;
			this->btn_FillRand->Location = System::Drawing::Point(161, 331);
			this->btn_FillRand->Margin = System::Windows::Forms::Padding(2);
			this->btn_FillRand->Name = L"btn_FillRand";
			this->btn_FillRand->Size = System::Drawing::Size(149, 19);
			this->btn_FillRand->TabIndex = 21;
			this->btn_FillRand->Text = L"Llenar Columnas";
			this->btn_FillRand->UseVisualStyleBackColor = false;
			this->btn_FillRand->Click += gcnew System::EventHandler(this, &MyForm::btn_FillRand_Click);
			// 
			// lbl_Sección
			// 
			this->lbl_Sección->AutoSize = true;
			this->lbl_Sección->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Sección->Location = System::Drawing::Point(360, 63);
			this->lbl_Sección->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Sección->Name = L"lbl_Sección";
			this->lbl_Sección->Size = System::Drawing::Size(49, 13);
			this->lbl_Sección->TabIndex = 22;
			this->lbl_Sección->Text = L"Sección:";
			// 
			// tb_Sección
			// 
			this->tb_Sección->Location = System::Drawing::Point(362, 89);
			this->tb_Sección->Margin = System::Windows::Forms::Padding(2);
			this->tb_Sección->Name = L"tb_Sección";
			this->tb_Sección->Size = System::Drawing::Size(79, 20);
			this->tb_Sección->TabIndex = 23;
			// 
			// tb_Columna
			// 
			this->tb_Columna->Location = System::Drawing::Point(468, 89);
			this->tb_Columna->Margin = System::Windows::Forms::Padding(2);
			this->tb_Columna->Name = L"tb_Columna";
			this->tb_Columna->Size = System::Drawing::Size(79, 20);
			this->tb_Columna->TabIndex = 25;
			// 
			// lbl_Columna
			// 
			this->lbl_Columna->AutoSize = true;
			this->lbl_Columna->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Columna->Location = System::Drawing::Point(466, 63);
			this->lbl_Columna->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Columna->Name = L"lbl_Columna";
			this->lbl_Columna->Size = System::Drawing::Size(51, 13);
			this->lbl_Columna->TabIndex = 24;
			this->lbl_Columna->Text = L"Columna:";
			// 
			// tb_Perecedero
			// 
			this->tb_Perecedero->Location = System::Drawing::Point(468, 164);
			this->tb_Perecedero->Margin = System::Windows::Forms::Padding(2);
			this->tb_Perecedero->Name = L"tb_Perecedero";
			this->tb_Perecedero->Size = System::Drawing::Size(79, 20);
			this->tb_Perecedero->TabIndex = 29;
			// 
			// lbl_Perecedero
			// 
			this->lbl_Perecedero->AutoSize = true;
			this->lbl_Perecedero->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Perecedero->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lbl_Perecedero->Location = System::Drawing::Point(466, 126);
			this->lbl_Perecedero->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Perecedero->Name = L"lbl_Perecedero";
			this->lbl_Perecedero->Size = System::Drawing::Size(81, 26);
			this->lbl_Perecedero->TabIndex = 28;
			this->lbl_Perecedero->Text = L"Perecedero:\r\n(Si = S; No = N)";
			// 
			// tb_Posición
			// 
			this->tb_Posición->Location = System::Drawing::Point(362, 164);
			this->tb_Posición->Margin = System::Windows::Forms::Padding(2);
			this->tb_Posición->Name = L"tb_Posición";
			this->tb_Posición->Size = System::Drawing::Size(79, 20);
			this->tb_Posición->TabIndex = 27;
			// 
			// lbl_Posición
			// 
			this->lbl_Posición->AutoSize = true;
			this->lbl_Posición->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Posición->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lbl_Posición->Location = System::Drawing::Point(360, 126);
			this->lbl_Posición->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Posición->Name = L"lbl_Posición";
			this->lbl_Posición->Size = System::Drawing::Size(50, 13);
			this->lbl_Posición->TabIndex = 26;
			this->lbl_Posición->Text = L"Posición:";
			// 
			// btn_ExecuteOrders
			// 
			this->btn_ExecuteOrders->BackColor = System::Drawing::Color::DarkGray;
			this->btn_ExecuteOrders->Location = System::Drawing::Point(420, 269);
			this->btn_ExecuteOrders->Margin = System::Windows::Forms::Padding(2);
			this->btn_ExecuteOrders->Name = L"btn_ExecuteOrders";
			this->btn_ExecuteOrders->Size = System::Drawing::Size(69, 44);
			this->btn_ExecuteOrders->TabIndex = 31;
			this->btn_ExecuteOrders->Text = L"Ejecutar Solicitudes";
			this->btn_ExecuteOrders->UseVisualStyleBackColor = false;
			this->btn_ExecuteOrders->Click += gcnew System::EventHandler(this, &MyForm::btn_ExecuteOrders_Click);
			// 
			// btn_AddQueue
			// 
			this->btn_AddQueue->BackColor = System::Drawing::Color::DarkGray;
			this->btn_AddQueue->Location = System::Drawing::Point(420, 212);
			this->btn_AddQueue->Margin = System::Windows::Forms::Padding(2);
			this->btn_AddQueue->Name = L"btn_AddQueue";
			this->btn_AddQueue->Size = System::Drawing::Size(69, 41);
			this->btn_AddQueue->TabIndex = 30;
			this->btn_AddQueue->Text = L"Añadir a la Cola";
			this->btn_AddQueue->UseVisualStyleBackColor = false;
			this->btn_AddQueue->Click += gcnew System::EventHandler(this, &MyForm::btn_AddQueue_Click);
			// 
			// lbl_InfoQueue
			// 
			this->lbl_InfoQueue->AutoSize = true;
			this->lbl_InfoQueue->BackColor = System::Drawing::Color::Transparent;
			this->lbl_InfoQueue->Location = System::Drawing::Point(421, 39);
			this->lbl_InfoQueue->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_InfoQueue->Name = L"lbl_InfoQueue";
			this->lbl_InfoQueue->Size = System::Drawing::Size(69, 13);
			this->lbl_InfoQueue->TabIndex = 32;
			this->lbl_InfoQueue->Text = L"Pedido No. 1";
			// 
			// ObjetosA
			// 
			this->ObjetosA->BackColor = System::Drawing::Color::IndianRed;
			this->ObjetosA->FormattingEnabled = true;
			this->ObjetosA->Location = System::Drawing::Point(598, 39);
			this->ObjetosA->Name = L"ObjetosA";
			this->ObjetosA->Size = System::Drawing::Size(52, 69);
			this->ObjetosA->TabIndex = 33;
			// 
			// ObjetosI
			// 
			this->ObjetosI->FormattingEnabled = true;
			this->ObjetosI->Location = System::Drawing::Point(900, 39);
			this->ObjetosI->Name = L"ObjetosI";
			this->ObjetosI->Size = System::Drawing::Size(50, 69);
			this->ObjetosI->TabIndex = 34;
			// 
			// ObjetosH
			// 
			this->ObjetosH->BackColor = System::Drawing::Color::RoyalBlue;
			this->ObjetosH->FormattingEnabled = true;
			this->ObjetosH->Location = System::Drawing::Point(752, 377);
			this->ObjetosH->Name = L"ObjetosH";
			this->ObjetosH->Size = System::Drawing::Size(52, 69);
			this->ObjetosH->TabIndex = 35;
			// 
			// ObjetosG
			// 
			this->ObjetosG->BackColor = System::Drawing::Color::LightSlateGray;
			this->ObjetosG->FormattingEnabled = true;
			this->ObjetosG->Location = System::Drawing::Point(752, 269);
			this->ObjetosG->Name = L"ObjetosG";
			this->ObjetosG->Size = System::Drawing::Size(52, 69);
			this->ObjetosG->TabIndex = 36;
			// 
			// ObjetosF
			// 
			this->ObjetosF->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ObjetosF->FormattingEnabled = true;
			this->ObjetosF->Location = System::Drawing::Point(752, 146);
			this->ObjetosF->Name = L"ObjetosF";
			this->ObjetosF->Size = System::Drawing::Size(52, 69);
			this->ObjetosF->TabIndex = 37;
			// 
			// ObjetosE
			// 
			this->ObjetosE->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ObjetosE->FormattingEnabled = true;
			this->ObjetosE->Location = System::Drawing::Point(752, 39);
			this->ObjetosE->Name = L"ObjetosE";
			this->ObjetosE->Size = System::Drawing::Size(52, 69);
			this->ObjetosE->TabIndex = 38;
			// 
			// ObjetosD
			// 
			this->ObjetosD->BackColor = System::Drawing::Color::Turquoise;
			this->ObjetosD->FormattingEnabled = true;
			this->ObjetosD->Location = System::Drawing::Point(598, 377);
			this->ObjetosD->Name = L"ObjetosD";
			this->ObjetosD->Size = System::Drawing::Size(52, 69);
			this->ObjetosD->TabIndex = 39;
			// 
			// ObjetosC
			// 
			this->ObjetosC->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->ObjetosC->FormattingEnabled = true;
			this->ObjetosC->Location = System::Drawing::Point(598, 269);
			this->ObjetosC->Name = L"ObjetosC";
			this->ObjetosC->Size = System::Drawing::Size(52, 69);
			this->ObjetosC->TabIndex = 40;
			// 
			// ObjetosB
			// 
			this->ObjetosB->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ObjetosB->FormattingEnabled = true;
			this->ObjetosB->Location = System::Drawing::Point(598, 146);
			this->ObjetosB->Name = L"ObjetosB";
			this->ObjetosB->Size = System::Drawing::Size(52, 69);
			this->ObjetosB->TabIndex = 41;
			// 
			// ObjetosBb
			// 
			this->ObjetosBb->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ObjetosBb->FormattingEnabled = true;
			this->ObjetosBb->Location = System::Drawing::Point(656, 146);
			this->ObjetosBb->Name = L"ObjetosBb";
			this->ObjetosBb->Size = System::Drawing::Size(52, 69);
			this->ObjetosBb->TabIndex = 43;
			// 
			// ObjetosCb
			// 
			this->ObjetosCb->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->ObjetosCb->FormattingEnabled = true;
			this->ObjetosCb->Location = System::Drawing::Point(656, 269);
			this->ObjetosCb->Name = L"ObjetosCb";
			this->ObjetosCb->Size = System::Drawing::Size(52, 69);
			this->ObjetosCb->TabIndex = 44;
			// 
			// ObjetosDb
			// 
			this->ObjetosDb->BackColor = System::Drawing::Color::Turquoise;
			this->ObjetosDb->FormattingEnabled = true;
			this->ObjetosDb->Location = System::Drawing::Point(656, 377);
			this->ObjetosDb->Name = L"ObjetosDb";
			this->ObjetosDb->Size = System::Drawing::Size(52, 69);
			this->ObjetosDb->TabIndex = 45;
			// 
			// ObjetosAb
			// 
			this->ObjetosAb->BackColor = System::Drawing::Color::IndianRed;
			this->ObjetosAb->FormattingEnabled = true;
			this->ObjetosAb->Location = System::Drawing::Point(656, 39);
			this->ObjetosAb->Name = L"ObjetosAb";
			this->ObjetosAb->Size = System::Drawing::Size(52, 69);
			this->ObjetosAb->TabIndex = 46;
			// 
			// ObjetosEb
			// 
			this->ObjetosEb->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ObjetosEb->FormattingEnabled = true;
			this->ObjetosEb->Location = System::Drawing::Point(810, 39);
			this->ObjetosEb->Name = L"ObjetosEb";
			this->ObjetosEb->Size = System::Drawing::Size(52, 69);
			this->ObjetosEb->TabIndex = 47;
			// 
			// ObjetosFb
			// 
			this->ObjetosFb->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ObjetosFb->FormattingEnabled = true;
			this->ObjetosFb->Location = System::Drawing::Point(810, 146);
			this->ObjetosFb->Name = L"ObjetosFb";
			this->ObjetosFb->Size = System::Drawing::Size(52, 69);
			this->ObjetosFb->TabIndex = 48;
			// 
			// ObjetosGb
			// 
			this->ObjetosGb->BackColor = System::Drawing::Color::LightSlateGray;
			this->ObjetosGb->FormattingEnabled = true;
			this->ObjetosGb->Location = System::Drawing::Point(810, 269);
			this->ObjetosGb->Name = L"ObjetosGb";
			this->ObjetosGb->Size = System::Drawing::Size(52, 69);
			this->ObjetosGb->TabIndex = 49;
			this->ObjetosGb->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// ObjetosHb
			// 
			this->ObjetosHb->BackColor = System::Drawing::Color::RoyalBlue;
			this->ObjetosHb->FormattingEnabled = true;
			this->ObjetosHb->Location = System::Drawing::Point(810, 377);
			this->ObjetosHb->Name = L"ObjetosHb";
			this->ObjetosHb->Size = System::Drawing::Size(52, 69);
			this->ObjetosHb->TabIndex = 50;
			// 
			// ObjetosIb
			// 
			this->ObjetosIb->FormattingEnabled = true;
			this->ObjetosIb->Location = System::Drawing::Point(956, 39);
			this->ObjetosIb->Name = L"ObjetosIb";
			this->ObjetosIb->Size = System::Drawing::Size(52, 69);
			this->ObjetosIb->TabIndex = 51;
			// 
			// lbNoPerecederos
			// 
			this->lbNoPerecederos->BackColor = System::Drawing::Color::LemonChiffon;
			this->lbNoPerecederos->FormattingEnabled = true;
			this->lbNoPerecederos->Location = System::Drawing::Point(1123, 23);
			this->lbNoPerecederos->Name = L"lbNoPerecederos";
			this->lbNoPerecederos->Size = System::Drawing::Size(94, 407);
			this->lbNoPerecederos->TabIndex = 52;
			// 
			// lbPerecederos
			// 
			this->lbPerecederos->BackColor = System::Drawing::Color::PaleGreen;
			this->lbPerecederos->FormattingEnabled = true;
			this->lbPerecederos->Location = System::Drawing::Point(1023, 23);
			this->lbPerecederos->Name = L"lbPerecederos";
			this->lbPerecederos->Size = System::Drawing::Size(85, 407);
			this->lbPerecederos->TabIndex = 53;
			this->lbPerecederos->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(595, 240);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 13);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Contenedor C";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(749, 23);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Contenedor E";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(595, 23);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 56;
			this->label4->Text = L"Contenedor A";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(749, 126);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 57;
			this->label5->Text = L"Contenedor F";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(595, 125);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 58;
			this->label6->Text = L"Contenedor B";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(595, 352);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Contenedor D";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(749, 238);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Contenedor G";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(749, 352);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 13);
			this->label9->TabIndex = 61;
			this->label9->Text = L"Contenedor H";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(897, 23);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 13);
			this->label10->TabIndex = 62;
			this->label10->Text = L"Contenedor I";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(1001, 9);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(107, 13);
			this->label11->TabIndex = 63;
			this->label11->Text = L"Lista de Perecederos";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(1113, 9);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(124, 13);
			this->label12->TabIndex = 64;
			this->label12->Text = L"Lista de No Perecederos";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1240, 472);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbPerecederos);
			this->Controls->Add(this->lbNoPerecederos);
			this->Controls->Add(this->ObjetosIb);
			this->Controls->Add(this->ObjetosHb);
			this->Controls->Add(this->ObjetosGb);
			this->Controls->Add(this->ObjetosFb);
			this->Controls->Add(this->ObjetosEb);
			this->Controls->Add(this->ObjetosAb);
			this->Controls->Add(this->ObjetosDb);
			this->Controls->Add(this->ObjetosCb);
			this->Controls->Add(this->ObjetosBb);
			this->Controls->Add(this->ObjetosB);
			this->Controls->Add(this->ObjetosC);
			this->Controls->Add(this->ObjetosD);
			this->Controls->Add(this->ObjetosE);
			this->Controls->Add(this->ObjetosF);
			this->Controls->Add(this->ObjetosG);
			this->Controls->Add(this->ObjetosH);
			this->Controls->Add(this->ObjetosI);
			this->Controls->Add(this->ObjetosA);
			this->Controls->Add(this->lbl_InfoQueue);
			this->Controls->Add(this->btn_ExecuteOrders);
			this->Controls->Add(this->btn_AddQueue);
			this->Controls->Add(this->tb_Perecedero);
			this->Controls->Add(this->lbl_Perecedero);
			this->Controls->Add(this->tb_Posición);
			this->Controls->Add(this->lbl_Posición);
			this->Controls->Add(this->tb_Columna);
			this->Controls->Add(this->lbl_Columna);
			this->Controls->Add(this->tb_Sección);
			this->Controls->Add(this->lbl_Sección);
			this->Controls->Add(this->btn_FillRand);
			this->Controls->Add(this->btn_EmptyAll);
			this->Controls->Add(this->btn_SeBCoB);
			this->Controls->Add(this->btn_SeBCoA);
			this->Controls->Add(this->btn_SeCCoB);
			this->Controls->Add(this->btn_SeCCoA);
			this->Controls->Add(this->btn_SeDCoB);
			this->Controls->Add(this->btn_SeDCoA);
			this->Controls->Add(this->btn_SeECoB);
			this->Controls->Add(this->btn_SeECoA);
			this->Controls->Add(this->btn_SeFCoB);
			this->Controls->Add(this->btn_SeFCoA);
			this->Controls->Add(this->btn_SeGCoB);
			this->Controls->Add(this->btn_SeGCoA);
			this->Controls->Add(this->btn_SeHCoB);
			this->Controls->Add(this->btn_SeHCoA);
			this->Controls->Add(this->btn_SeICoB);
			this->Controls->Add(this->btn_SeICoA);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_Información);
			this->Controls->Add(this->btn_SeACoB);
			this->Controls->Add(this->btn_SeACoA);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//--------------------------------------------------------------------------------------------------------------------------------------------------
//Declaración de Sectores:
	public:
		Sector ^ Sector_A = gcnew Sector();
		Sector ^ Sector_B = gcnew Sector();
		Sector ^ Sector_C = gcnew Sector();
		Sector ^ Sector_D = gcnew Sector();
		Sector ^ Sector_E = gcnew Sector();
		Sector ^ Sector_F = gcnew Sector();
		Sector ^ Sector_G = gcnew Sector();
		Sector ^ Sector_H = gcnew Sector();
		Sector ^ Sector_I = gcnew Sector();
//--------------------------------------------------------------------------------------------------------------------------------------------------
//Declaración de Cola y Auxiliar de Cola:
		System::Collections::Queue ^ Pedidos = gcnew System::Collections::Queue();
		int Cantidad_Pedidos = 0; 
//---------------------------------------------------------------------------------------------------------------------------------------------------
//Métodos & Funciones Auxiliares:
		void ActualizarInformación()
		{
			lbl_Información->Text = "Información:\n\n" +
				"Sector A:\nColumna A: " + Sector_A->Columna_A->Count + "     Columna B: " + Sector_A->Columna_B->Count + "\n\n" +
				"Sector B:\nColumna A: " + Sector_B->Columna_A->Count + "     Columna B: " + Sector_B->Columna_B->Count + "\n\n" +
				"Sector C:\nColumna A: " + Sector_C->Columna_A->Count + "     Columna B: " + Sector_C->Columna_B->Count + "\n\n" +
				"Sector D:\nColumna A: " + Sector_D->Columna_A->Count + "     Columna B: " + Sector_D->Columna_B->Count + "\n\n" +
				"Sector E:\nColumna A: " + Sector_E->Columna_A->Count + "     Columna B: " + Sector_E->Columna_B->Count + "\n\n" +
				"Sector F:\nColumna A: " + Sector_F->Columna_A->Count + "     Columna B: " + Sector_F->Columna_B->Count + "\n\n" +
				"Sector G:\nColumna A: " + Sector_G->Columna_A->Count + "     Columna B: " + Sector_G->Columna_B->Count + "\n\n" +
				"Sector H:\nColumna A: " + Sector_H->Columna_A->Count + "     Columna B: " + Sector_H->Columna_B->Count + "\n\n" +
				"Sector I:\nColumna A: " + Sector_I->Columna_A->Count + "     Columna B: " + Sector_I->Columna_B->Count;
		}

		void ActualizarPedidos()
		{
			lbl_InfoQueue->Text = "Pedido No. " + (Cantidad_Pedidos + 1).ToString();
		}

		void AgregarPedido()
		{
			Pedido ^ NuevoPedido = gcnew Pedido();

			if (tb_Columna->Text != "A" && tb_Columna->Text != "B" && tb_Columna->Text != "C" && tb_Columna->Text != "D" && tb_Columna->Text != "E" && tb_Columna->Text != "F" && tb_Columna->Text != "G" && tb_Columna->Text != "H" && tb_Columna->Text != "I")
			{
				MessageBox::Show("La columna indicada está fuera de rango.");
				tb_Columna->Text = "";
			}
			else 
			{
				NuevoPedido->Columna = tb_Columna->Text;
			}

			if (tb_Sección->Text != "A" || tb_Sección->Text != "B")
			{
				MessageBox::Show("La sección indicada está fuera de rango.");
				tb_Sección->Text = "";
			}
			else
			{
				NuevoPedido->Sector = tb_Sección->Text;
			}

			if (!Validar_Int(tb_Posición->Text))
			{
				MessageBox::Show("Se espera un número entero.");
				tb_Posición->Text = "";
			}
			else
			{
				int a = Convert::ToInt32(tb_Posición->Text);

				if (a < 0 || a > 3)
				{
					MessageBox::Show("La posición está fuera de rango.");
					tb_Posición->Text = "";
				}
				else
				{
					NuevoPedido->Posición = a;
				}
			}

			if (tb_Perecedero->Text != "S" || tb_Perecedero->Text != "N")
			{
				MessageBox::Show("Estado de perecedero fuera de rango.");
				tb_Perecedero->Text = "";
			}
			else
			{
				if (tb_Perecedero->Text == "S")
				{
					NuevoPedido->Perecedero = true;
				}
				else
				{
					NuevoPedido->Perecedero = false;
				}
			}

			Cantidad_Pedidos += 1;
			VaciarEspacios_Pedidos();
			ActualizarPedidos();
		}

		bool Validar_Int(System::String ^ a)
		{
			int Guest = false;

			if (int::TryParse(a, Guest))
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		void VaciarEspacios_Pedidos()
		{
			tb_Columna->Text = "";
			tb_Perecedero->Text = "";
			tb_Posición->Text = "";
			tb_Sección->Text = "";
		}

		void VaciarSectores()
		{
			Sector_A->Columna_A->Clear();
			ObjetosA->Items->Clear();
			Sector_A->Columna_B->Clear();
			ObjetosAb->Items->Clear();
			Sector_B->Columna_A->Clear();
			ObjetosB->Items->Clear();
			Sector_B->Columna_B->Clear();
			ObjetosBb->Items->Clear();
			Sector_C->Columna_A->Clear();
			ObjetosC->Items->Clear();
			Sector_C->Columna_B->Clear();
			ObjetosCb->Items->Clear();
			Sector_D->Columna_A->Clear();
			ObjetosD->Items->Clear();
			Sector_D->Columna_B->Clear();
			ObjetosDb->Items->Clear();
			Sector_E->Columna_A->Clear();
			ObjetosE->Items->Clear();
			Sector_E->Columna_B->Clear();
			ObjetosEb->Items->Clear();
			Sector_F->Columna_A->Clear();
			ObjetosF->Items->Clear();
			Sector_F->Columna_B->Clear();
			ObjetosFb->Items->Clear();
			Sector_G->Columna_A->Clear();
			ObjetosG->Items->Clear();
			Sector_G->Columna_B->Clear();
			ObjetosGb->Items->Clear();
			Sector_H->Columna_A->Clear();
			ObjetosH->Items->Clear();
			Sector_H->Columna_B->Clear();
			ObjetosHb->Items->Clear();
			Sector_I->Columna_A->Clear();
			ObjetosI->Items->Clear();
			Sector_I->Columna_B->Clear();
			ObjetosIb->Items->Clear();
		}

		void HabilitarSectores()
		{
			Sector_A->ColumnaA_Revisado = false;
			Sector_A->ColumnaB_Revisado = false;
			Sector_B->ColumnaA_Revisado = false;
			Sector_B->ColumnaB_Revisado = false;
			Sector_C->ColumnaA_Revisado = false;
			Sector_C->ColumnaB_Revisado = false;
			Sector_D->ColumnaA_Revisado = false;
			Sector_D->ColumnaB_Revisado = false;
			Sector_E->ColumnaA_Revisado = false;
			Sector_E->ColumnaB_Revisado = false;
			Sector_F->ColumnaA_Revisado = false;
			Sector_F->ColumnaB_Revisado = false;
			Sector_G->ColumnaA_Revisado = false;
			Sector_G->ColumnaB_Revisado = false;
			Sector_H->ColumnaA_Revisado = false;
			Sector_H->ColumnaB_Revisado = false;
			Sector_I->ColumnaA_Revisado = false;
			Sector_I->ColumnaB_Revisado = false;
		}

		int ObtenerRandom(int n)
		{
			return rand() % n;
		}

		void LlenarColumnas(int n)
		{
			int Cantidad_Espacios = n;

			while (Cantidad_Espacios > 0)
			{
				int Cantidad_Contenedores = ObtenerRandom(3);
				Cantidad_Espacios = 48 - Sector_A->Columna_A->Count - Sector_A->Columna_B->Count - Sector_B->Columna_A->Count - Sector_B->Columna_B->Count - Sector_C->Columna_A->Count - Sector_C->Columna_B->Count - Sector_D->Columna_A->Count - Sector_D->Columna_B->Count - Sector_E->Columna_A->Count - Sector_E->Columna_B->Count - Sector_F->Columna_A->Count - Sector_F->Columna_B->Count - Sector_G->Columna_A->Count - Sector_G->Columna_B->Count - Sector_H->Columna_A->Count - Sector_H->Columna_B->Count - Sector_I->Columna_A->Count - Sector_I->Columna_B->Count;

				if (Cantidad_Contenedores > 3)
				{
					Cantidad_Contenedores = 3;
				}
				else if (Cantidad_Contenedores < 0)
				{
					Cantidad_Contenedores = 0;
				}
				else if (n - Cantidad_Contenedores < 0)
				{
					Cantidad_Contenedores = n;
				}

				if (n > 0)
				{
					if (!Sector_A->ColumnaA_Revisado)
					{
						if (Sector_A->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_A->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_A, "A", Cantidad_Contenedores);
						Sector_A->ColumnaA_Revisado = true;
					}
					else if (!Sector_A->ColumnaB_Revisado)
					{
						if (Sector_A->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_A->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_A, "A", Cantidad_Contenedores);
						Sector_A->ColumnaB_Revisado = true;
					}
					else if (!Sector_B->ColumnaA_Revisado)
					{
						if (Sector_B->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_B->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_B, "B", Cantidad_Contenedores);
						Sector_B->ColumnaA_Revisado = true;
					}
					else if (!Sector_B->ColumnaB_Revisado)
					{
						if (Sector_B->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_B->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_B, "B", Cantidad_Contenedores);
						Sector_B->ColumnaB_Revisado = true;
					}
					else if (!Sector_C->ColumnaA_Revisado)
					{
						if (Sector_C->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_C->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_C, "C", Cantidad_Contenedores);
						Sector_C->ColumnaA_Revisado = true;
					}
					else if (!Sector_C->ColumnaB_Revisado)
					{
						if (Sector_C->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_C->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_C, "C", Cantidad_Contenedores);
						Sector_C->ColumnaB_Revisado = true;
					}
					else if (!Sector_D->ColumnaA_Revisado)
					{
						if (Sector_D->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_D->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_D, "D", Cantidad_Contenedores);
						Sector_D->ColumnaA_Revisado = true;
					}
					else if (!Sector_D->ColumnaB_Revisado)
					{
						if (Sector_D->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_D->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_D, "D", Cantidad_Contenedores);
						Sector_D->ColumnaB_Revisado = true;
					}
					else if (!Sector_E->ColumnaA_Revisado)
					{
						if (Sector_E->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_E->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_E, "E", Cantidad_Contenedores);
						Sector_E->ColumnaA_Revisado = true;
					}
					else if (!Sector_E->ColumnaB_Revisado)
					{
						if (Sector_E->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_E->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_E, "E", Cantidad_Contenedores);
						Sector_E->ColumnaB_Revisado = true;
					}
					else if (!Sector_F->ColumnaA_Revisado)
					{
						if (Sector_F->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_F->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_F, "F", Cantidad_Contenedores);
						Sector_F->ColumnaA_Revisado = true;
					}
					else if (!Sector_F->ColumnaB_Revisado)
					{
						if (Sector_F->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_F->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_F, "F", Cantidad_Contenedores);
						Sector_F->ColumnaB_Revisado = true;
					}
					else if (!Sector_G->ColumnaA_Revisado)
					{
						if (Sector_G->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_G->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_G, "G", Cantidad_Contenedores);
						Sector_G->ColumnaA_Revisado = true;
					}
					else if (!Sector_G->ColumnaB_Revisado)
					{
						if (Sector_G->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_G->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_G, "G", Cantidad_Contenedores);
						Sector_G->ColumnaB_Revisado = true;
					}
					else if (!Sector_H->ColumnaA_Revisado)
					{
						if (Sector_H->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_H->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_H, "H", Cantidad_Contenedores);
						Sector_H->ColumnaA_Revisado = true;
					}
					else if (!Sector_H->ColumnaB_Revisado)
					{
						if (Sector_H->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_H->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_H, "H", Cantidad_Contenedores);
						Sector_H->ColumnaB_Revisado = true;
					}
					else if (!Sector_I->ColumnaA_Revisado)
					{
						if (Sector_I->Columna_A->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_I->Columna_A->Count;
						}

						Añadir_ColumnaA(Sector_I, "I", Cantidad_Contenedores);
						Sector_I->ColumnaA_Revisado = true;
					}
					else if (!Sector_I->ColumnaB_Revisado)
					{
						if (Sector_I->Columna_B->Count + Cantidad_Contenedores > 3)
						{
							Cantidad_Contenedores = 3 - Sector_I->Columna_B->Count;
						}

						Añadir_ColumnaB(Sector_I, "I", Cantidad_Contenedores);
						Sector_I->ColumnaB_Revisado = true;
					}
					else
					{
						Cantidad_Contenedores = 0;
						HabilitarSectores();
					}

					ActualizarInformación();
					n - Cantidad_Contenedores;
				}
				else
				{
					Cantidad_Espacios = 48 - Sector_A->Columna_A->Count - Sector_A->Columna_B->Count - Sector_B->Columna_A->Count - Sector_B->Columna_B->Count - Sector_C->Columna_A->Count - Sector_C->Columna_B->Count - Sector_D->Columna_A->Count - Sector_D->Columna_B->Count - Sector_E->Columna_A->Count - Sector_E->Columna_B->Count - Sector_F->Columna_A->Count - Sector_F->Columna_B->Count - Sector_G->Columna_A->Count - Sector_G->Columna_B->Count - Sector_H->Columna_A->Count - Sector_H->Columna_B->Count - Sector_I->Columna_A->Count - Sector_I->Columna_B->Count;

					if (Cantidad_Espacios > 0)
					{
						n = Cantidad_Espacios;
					}
					else
					{
						MessageBox::Show("Se han colocado todos los contenedores.\nContenedores no colocados: " + n.ToString());
						ActualizarInformación();
					}
				}
			}

			MessageBox::Show("Se han colocado todos los contenedores.");
			ActualizarInformación();
		}

		System::String ^ ObtenerIds(Sector ^ N)
		{
			System::String ^ Identificadores = "";

			System::Collections::Stack ^ NuevaPlia_A = gcnew System::Collections::Stack();
			System::Collections::Stack ^ NuevaPlia_B = gcnew System::Collections::Stack();

			NuevaPlia_A = N->Columna_A;
			NuevaPlia_B = N->Columna_B;

			int Tamaño_A = NuevaPlia_A->Count;
			int Tamaño_B = NuevaPlia_B->Count;

			for (int i = 0; i < Tamaño_A; i++)
			{
				if (i == 0)
				{
					Identificadores += "\n" + NuevaPlia_A->Pop() + "   ";
				}
				else
				{
					Identificadores += NuevaPlia_A->Pop() + "   ";
				}
			}

			for (int i = 0; i < Tamaño_B; i++)
			{
				if (i == 0)
				{
					Identificadores += "\n\n" + NuevaPlia_B->Pop() + "   ";
				}
				else
				{
					Identificadores += NuevaPlia_B->Pop() + "   ";
				}
			}

			return Identificadores;
		}
//---------------------------------------------------------------------------------------------------------------------------------------------------
//Métodos de Adición de Contenedores:
		void Añadir_ColumnaA(Sector ^ ElSector, System::String ^ Id, int Cant)
		{
			if (Cant > 0)
			{
				Contenedor ^ NuevoContenedor = gcnew Contenedor();

				if (ElSector->Columna_A->Count < 3)
				{
					if (Id == "A")
					{
						NuevoContenedor->Id = 111 + ObjetosA->Items->Count;
						ObjetosA->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "B")
					{
						NuevoContenedor->Id = 211 + ObjetosB->Items->Count;
						ObjetosB->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "C")
					{
						NuevoContenedor->Id = 311 + ObjetosC->Items->Count;
						ObjetosC->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "D")
					{
						NuevoContenedor->Id = 411 + ObjetosD->Items->Count;
						ObjetosD->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "E")
					{
						NuevoContenedor->Id = 511 + ObjetosE->Items->Count;
						ObjetosE->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "F")
					{
						NuevoContenedor->Id = 611 + ObjetosF->Items->Count;
						ObjetosF->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "G")
					{
						NuevoContenedor->Id = 711 + ObjetosG->Items->Count;
						ObjetosG->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "H")
					{
						NuevoContenedor->Id = 811 + ObjetosH->Items->Count;
						ObjetosH->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "I")
					{
						NuevoContenedor->Id = 911 + ObjetosI->Items->Count;
						ObjetosI->Items->Add(NuevoContenedor->Id);
					}

					ElSector->Columna_A->Push(NuevoContenedor->Id);
					Añadir_ColumnaA(ElSector, Id, Cant - 1);
				}
				else
				{
					MessageBox::Show("La columna está llena.");
				}
			}
		}

		void Añadir_ColumnaB(Sector ^ ElSector, System::String ^ Id, int Cant)
		{
			if (Cant > 0)
			{
				Contenedor ^ NuevoContenedor = gcnew Contenedor();

				if (ElSector->Columna_B->Count < 3)
				{
					if (Id == "A")
					{
						NuevoContenedor->Id = 121 + ObjetosAb->Items->Count;
						ObjetosAb->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "B")
					{
						NuevoContenedor->Id = 221 + ObjetosBb->Items->Count;
						ObjetosBb->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "C")
					{
						NuevoContenedor->Id = 321 + ObjetosCb->Items->Count;
						ObjetosCb->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "D")
					{
						NuevoContenedor->Id = 421 + ObjetosDb->Items->Count;
						ObjetosDb->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "E")
					{
						NuevoContenedor->Id = 521 + ObjetosEb->Items->Count;
						ObjetosEb->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "F")
					{
						NuevoContenedor->Id = 621 + ObjetosFb->Items->Count;
						ObjetosFb->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "G")
					{
						NuevoContenedor->Id = 721 + ObjetosGb->Items->Count;
						ObjetosGb->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "H")
					{
						NuevoContenedor->Id = 821 + ObjetosHb->Items->Count;
						ObjetosHb->Items->Add(NuevoContenedor->Id);
					}
					else if (Id == "I")
					{
						NuevoContenedor->Id = 921 + ObjetosIb->Items->Count;
						ObjetosIb->Items->Add(NuevoContenedor->Id);
					}

					ElSector->Columna_B->Push(NuevoContenedor->Id);
					Añadir_ColumnaA(ElSector, Id, Cant - 1);
				}
				else
				{
					MessageBox::Show("La columna está llena.");
				}
			}
		}
//---------------------------------------------------------------------------------------------------------------------------------------------------
//Activación de Métodos:
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		ActualizarInformación();
	}

	private: System::Void btn_SeACoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosA->Items->Count < 3) {
			Añadir_ColumnaA(Sector_A, "A", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}

	}

	private: System::Void btn_SeACoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosAb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_A, "A", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeBCoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosB->Items->Count < 3) {
			Añadir_ColumnaA(Sector_B, "B", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeBCoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosBb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_B, "B", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeCCoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosC->Items->Count < 3) {
			Añadir_ColumnaA(Sector_C, "C", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeCCoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosCb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_C, "C", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeDCoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosD->Items->Count < 3) {
			Añadir_ColumnaA(Sector_D, "D", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeDCoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosDb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_D, "D", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeECoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosE->Items->Count < 3) {
			Añadir_ColumnaA(Sector_E, "E", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeECoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosEb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_E, "E", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeFCoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosF->Items->Count < 3) {
			Añadir_ColumnaA(Sector_F, "F", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeFCoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosFb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_F, "F", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeGCoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosG->Items->Count < 3) {
			Añadir_ColumnaA(Sector_G, "G", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeGCoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosGb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_G, "G", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeHCoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosH->Items->Count < 3) {
			Añadir_ColumnaA(Sector_H, "H", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeHCoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosHb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_H, "H", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeICoA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosI->Items->Count < 3) {
			Añadir_ColumnaA(Sector_I, "I", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_SeICoB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ObjetosIb->Items->Count < 3) {
			Añadir_ColumnaB(Sector_I, "I", 1);
		}
		else {
			MessageBox::Show("Contenedor lleno");
		}
	}

	private: System::Void btn_EmptyAll_Click(System::Object^  sender, System::EventArgs^  e) {
		VaciarSectores();
		HabilitarSectores();
		ActualizarInformación();
	}

	private: System::Void btn_FillRand_Click(System::Object^  sender, System::EventArgs^  e) {
		int Total = 48;
		LlenarColumnas(Total);
		ActualizarInformación();
		MessageBox::Show("Identificadores:\n" + ObtenerIds(Sector_A) + "\n" + ObtenerIds(Sector_B) + "\n" + ObtenerIds(Sector_C) + "\n" + ObtenerIds(Sector_D) + "\n" + ObtenerIds(Sector_E) + "\n" + ObtenerIds(Sector_F) + "\n" + ObtenerIds(Sector_G) + "\n" + ObtenerIds(Sector_H) + "\n" + ObtenerIds(Sector_I));
	}
//---------------------------------------------------------------------------------------------------------------------------------------------------
	private: System::Void btn_AddQueue_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Su solicitud tardara " + (colaNoPerecederos->Count * 5 + colaPerecederos->Count * 5) + " min");
		if (tb_Perecedero->Text == "S") {
			Solicitud^ nuevasolicitud;
			nuevasolicitud = gcnew Solicitud();
			nuevasolicitud->sector = tb_Sección->Text;
			nuevasolicitud->columna = tb_Columna->Text;
			nuevasolicitud->posicion = System::Convert::ToInt32(tb_Posición->Text);

			colaPerecederos->Enqueue(nuevasolicitud);
			lbPerecederos->Items->Add(nuevasolicitud->sector + nuevasolicitud->columna + nuevasolicitud->posicion);
		
			tb_Sección->Text = "";
			tb_Columna->Text = "";
			tb_Posición->Text = "";
			tb_Perecedero->Text = "";
		}
		else
		{
			Solicitud^ nuevasolicitud;
			nuevasolicitud = gcnew Solicitud();
			nuevasolicitud->sector = tb_Sección->Text;
			nuevasolicitud->columna = tb_Columna->Text;
			nuevasolicitud->posicion = System::Convert::ToInt32(tb_Posición->Text);

			colaNoPerecederos->Enqueue(nuevasolicitud);
			lbNoPerecederos->Items->Add(nuevasolicitud->sector + nuevasolicitud->columna + nuevasolicitud->posicion);
		
			tb_Sección->Text = "";
			tb_Columna->Text = "";
			tb_Posición->Text = "";
			tb_Perecedero->Text = "";
		}
	}
	
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_ExecuteOrders_Click(System::Object^  sender, System::EventArgs^  e) {
	if (colaPerecederos->Count <= 0 && colaNoPerecederos->Count <= 0) {
		MessageBox::Show("No hay solicitudes por operar");
		return;
	}
	Solicitud^ nuevasolicitud;
	if (colaPerecederos->Count > 0)
	{
		nuevasolicitud = (Solicitud^)colaPerecederos->Dequeue();
		lbPerecederos->Items->Remove(nuevasolicitud->sector + nuevasolicitud->columna + nuevasolicitud->posicion);
	}
	else {
	    if (colaNoPerecederos->Count > 0)
		{
			nuevasolicitud = (Solicitud^)colaNoPerecederos->Dequeue();
			lbNoPerecederos->Items->Remove(nuevasolicitud->sector + nuevasolicitud->columna + nuevasolicitud->posicion);
		}
	}

	if (nuevasolicitud->sector == "A") {
		if (nuevasolicitud->columna == "A") {
			ObjetosA->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosAb->Items->Remove(nuevasolicitud->posicion);
		}

	}
	if (nuevasolicitud->sector == "B") {
		if (nuevasolicitud->columna == "A") {
			ObjetosB->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosBb->Items->Remove(nuevasolicitud->posicion);
		}

	}
	if (nuevasolicitud->sector == "C") {
		if (nuevasolicitud->columna == "A") {
			ObjetosC->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosCb->Items->Remove(nuevasolicitud->posicion);
		}

	}
	if (nuevasolicitud->sector == "D") {
		if (nuevasolicitud->columna == "A") {
			ObjetosD->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosDb->Items->Remove(nuevasolicitud->posicion);
		}

	}
	if (nuevasolicitud->sector == "E") {
		if (nuevasolicitud->columna == "A") {
			ObjetosE->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosEb->Items->Remove(nuevasolicitud->posicion);
		}

	}
	if (nuevasolicitud->sector == "F") {
		if (nuevasolicitud->columna == "A") {
			ObjetosF->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosFb->Items->Remove(nuevasolicitud->posicion);
		}

	}
	if (nuevasolicitud->sector == "G") {
		if (nuevasolicitud->columna == "A") {
			ObjetosG->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosGb->Items->Remove(nuevasolicitud->posicion);
		}

	}
	if (nuevasolicitud->sector == "H") {
		if (nuevasolicitud->columna == "A") {
			ObjetosH->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosHb->Items->Remove(nuevasolicitud->posicion);
		}

	}if (nuevasolicitud->sector == "I") {
		if (nuevasolicitud->columna == "A") {
			ObjetosI->Items->Remove(nuevasolicitud->posicion);
		}
		else {
			ObjetosIb->Items->Remove(nuevasolicitud->posicion);
		}

	}
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}