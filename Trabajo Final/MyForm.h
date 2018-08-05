#pragma once
#include "Jugador.h"
#include "ArrJug.h"
#include "Propiedad.h"
#include "Mapa.h"
#include <string>
#include <windows.h>

namespace TrabajoFinal {
	using namespace std;
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
		ArrJug* o;
		CPropiedad* oPropiedad;
		Mapa *mapa;
		Mapa *daditos = new Mapa(620, 300);
		Mapa* matris;
		CJugador *personaje1 = NULL;
		CJugador *personaje2 = NULL;
		int bancoDinero = 1000000;
		bool inicio;
		int iniciotimer1=0;
		Random ^r2 = gcnew Random();
		Random ^r3 = gcnew Random();
		Random ^r4 = gcnew Random();
		int b=0;
		int ncasillas1=1;
		int ncasillas2 = 1;
		int c = 0;
		int indiceMapa=1;
		int id = 1;
		int id2 = 1;
		int posicion1 = 1;
		int posicion2 = 1;
		
		bool turnoJ1;
		bool turnoJ2;
		int precioProT1=0;
		int precioProT2 = 0;
		int precioProPC = 0;
		int ajjj;
		
		String^ sNom;

		System::Windows::Forms::DialogResult result;
		



	private: System::Windows::Forms::Timer^  tJuego;
	private: System::Windows::Forms::Button^  Girar;

	private: System::Windows::Forms::Label^  Nombre1;
	private: System::Windows::Forms::Label^  Nombre2;
	private: System::Windows::Forms::Label^  Nombre3;
	private: System::Windows::Forms::Label^  Nombre4;

	private: System::Windows::Forms::Label^  txtTurno2;

	private: System::Windows::Forms::Label^  dineroJ1;
	private: System::Windows::Forms::Label^  dineroJ2;
	private: System::Windows::Forms::Label^  Barco;
	private: System::Windows::Forms::Label^  Zapato;
	private: System::Windows::Forms::Label^  Ninguno11;
	private: System::Windows::Forms::Label^  Ninguno21;


	private: System::Windows::Forms::Label^  n2;
	private: System::Windows::Forms::Label^  banco;
	private: System::Windows::Forms::PictureBox^  pbIzquierda1;
	private: System::Windows::Forms::PictureBox^  pbDerecha1;


	//private: System::Windows::Forms::PictureBox^  pbElegir;
	private: System::Windows::Forms::Button^  btnContinuar1;

	private: System::Windows::Forms::PictureBox^  pbIzquierda2;
	private: System::Windows::Forms::PictureBox^  pbDerecha2;
	private: System::Windows::Forms::Button^  btnContinuar2;

	private: System::Windows::Forms::Button^  btnCancelar2;
	private: System::Windows::Forms::Label^  Ninguno12;
	private: System::Windows::Forms::Label^  Ninguno13;
	private: System::Windows::Forms::Label^  Ninguno14;
	private: System::Windows::Forms::Label^  Ninguno15;

	private: System::Windows::Forms::Label^  Ninguno22;
	private: System::Windows::Forms::Label^  Ninguno23;
	private: System::Windows::Forms::Label^  Ninguno24;
	private: System::Windows::Forms::Label^  Ninguno25;
	private: System::Windows::Forms::Timer^  tJuego2;
	private: System::Windows::Forms::Label^  puntoAzul;
	private: System::Windows::Forms::Label^  puntoRojo;
	private: System::Windows::Forms::PictureBox^  AV1;
	private: System::Windows::Forms::PictureBox^  AV2;
	private: System::Windows::Forms::PictureBox^  AV3;
	private: System::Windows::Forms::PictureBox^  AV4;
	private: System::Windows::Forms::PictureBox^  AV5;
	private: System::Windows::Forms::PictureBox^  AV6;
	private: System::Windows::Forms::PictureBox^  AH5;
	private: System::Windows::Forms::PictureBox^  AH6;
	private: System::Windows::Forms::PictureBox^  AH3;
	private: System::Windows::Forms::PictureBox^  AH4;
	private: System::Windows::Forms::PictureBox^  AH1;
	private: System::Windows::Forms::PictureBox^  AH2;
	private: System::Windows::Forms::PictureBox^  RV1;
	private: System::Windows::Forms::PictureBox^  RV2;
	private: System::Windows::Forms::PictureBox^  RV3;
	private: System::Windows::Forms::PictureBox^  RV4;
	private: System::Windows::Forms::PictureBox^  RV5;
	private: System::Windows::Forms::PictureBox^  RV6;
	private: System::Windows::Forms::PictureBox^  RH5;
private: System::Windows::Forms::PictureBox^  RH6;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
private: System::Windows::Forms::Button^  bVender1;


	private: System::Windows::Forms::Button^  bVender2;
	private: System::Windows::Forms::Button^  ABanco1;
	private: System::Windows::Forms::Button^  OtroJug1;
	private: System::Windows::Forms::Button^  OtroJug2;
	private: System::Windows::Forms::Button^  ABanco2;




private: System::Windows::Forms::PictureBox^  RH3;

private: System::Windows::Forms::PictureBox^  RH1;
private: System::Windows::Forms::PictureBox^  RH2;
private: System::Windows::Forms::PictureBox^  RH4;
private: System::Windows::Forms::PictureBox^  RH7;
private: System::Windows::Forms::PictureBox^  AH7;
private: System::Windows::Forms::PictureBox^  AH8;
private: System::Windows::Forms::PictureBox^  RH8;










	private: System::Windows::Forms::Panel^  pJuego;

			 
	public:
		MyForm(void)
		{
			o = new ArrJug();
			mapa = new Mapa();

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			b = r2->Next(1, 7);

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
		
	private: System::Windows::Forms::Button^  btnJugar;
	protected:
	private: System::Windows::Forms::Button^  btnSalir;
	private: System::Windows::Forms::PictureBox^  pbUPCpolio;
	private: System::Windows::Forms::PictureBox^  pbCubo;


	private: System::Windows::Forms::Button^  btnP1vsPC;
	private: System::Windows::Forms::Button^  btnP1vsP2;
	private: System::Windows::Forms::Label^  lblJ1;

	private: System::Windows::Forms::TextBox^  txtJugador1;
	private: System::Windows::Forms::Label^  lblJ2;

	private: System::Windows::Forms::TextBox^  txtJugador2;
	private: System::Windows::Forms::PictureBox^  pbNose1;

	private: System::Windows::Forms::Button^  btnAceptar1;
private: System::Windows::Forms::Button^  btnCancelar1;


	private: System::Windows::Forms::Button^  btnAceptar2;

	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnJugar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->pbUPCpolio = (gcnew System::Windows::Forms::PictureBox());
			this->pbCubo = (gcnew System::Windows::Forms::PictureBox());
			this->btnP1vsPC = (gcnew System::Windows::Forms::Button());
			this->btnP1vsP2 = (gcnew System::Windows::Forms::Button());
			this->lblJ1 = (gcnew System::Windows::Forms::Label());
			this->txtJugador1 = (gcnew System::Windows::Forms::TextBox());
			this->lblJ2 = (gcnew System::Windows::Forms::Label());
			this->txtJugador2 = (gcnew System::Windows::Forms::TextBox());
			this->pbNose1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnAceptar1 = (gcnew System::Windows::Forms::Button());
			this->btnCancelar1 = (gcnew System::Windows::Forms::Button());
			this->btnAceptar2 = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->tJuego = (gcnew System::Windows::Forms::Timer(this->components));
			this->pJuego = (gcnew System::Windows::Forms::Panel());
			this->Girar = (gcnew System::Windows::Forms::Button());
			this->Nombre1 = (gcnew System::Windows::Forms::Label());
			this->Nombre2 = (gcnew System::Windows::Forms::Label());
			this->Nombre3 = (gcnew System::Windows::Forms::Label());
			this->Nombre4 = (gcnew System::Windows::Forms::Label());
			this->txtTurno2 = (gcnew System::Windows::Forms::Label());
			this->dineroJ1 = (gcnew System::Windows::Forms::Label());
			this->dineroJ2 = (gcnew System::Windows::Forms::Label());
			this->Barco = (gcnew System::Windows::Forms::Label());
			this->Zapato = (gcnew System::Windows::Forms::Label());
			this->Ninguno11 = (gcnew System::Windows::Forms::Label());
			this->Ninguno21 = (gcnew System::Windows::Forms::Label());
			this->n2 = (gcnew System::Windows::Forms::Label());
			this->banco = (gcnew System::Windows::Forms::Label());
			this->pbIzquierda1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbDerecha1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnContinuar1 = (gcnew System::Windows::Forms::Button());
			this->pbIzquierda2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbDerecha2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnContinuar2 = (gcnew System::Windows::Forms::Button());
			this->btnCancelar2 = (gcnew System::Windows::Forms::Button());
			this->Ninguno12 = (gcnew System::Windows::Forms::Label());
			this->Ninguno13 = (gcnew System::Windows::Forms::Label());
			this->Ninguno14 = (gcnew System::Windows::Forms::Label());
			this->Ninguno15 = (gcnew System::Windows::Forms::Label());
			this->Ninguno22 = (gcnew System::Windows::Forms::Label());
			this->Ninguno23 = (gcnew System::Windows::Forms::Label());
			this->Ninguno24 = (gcnew System::Windows::Forms::Label());
			this->Ninguno25 = (gcnew System::Windows::Forms::Label());
			this->tJuego2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->puntoAzul = (gcnew System::Windows::Forms::Label());
			this->puntoRojo = (gcnew System::Windows::Forms::Label());
			this->AV1 = (gcnew System::Windows::Forms::PictureBox());
			this->AV2 = (gcnew System::Windows::Forms::PictureBox());
			this->AV3 = (gcnew System::Windows::Forms::PictureBox());
			this->AV4 = (gcnew System::Windows::Forms::PictureBox());
			this->AV5 = (gcnew System::Windows::Forms::PictureBox());
			this->AV6 = (gcnew System::Windows::Forms::PictureBox());
			this->AH5 = (gcnew System::Windows::Forms::PictureBox());
			this->AH6 = (gcnew System::Windows::Forms::PictureBox());
			this->AH3 = (gcnew System::Windows::Forms::PictureBox());
			this->AH4 = (gcnew System::Windows::Forms::PictureBox());
			this->AH1 = (gcnew System::Windows::Forms::PictureBox());
			this->AH2 = (gcnew System::Windows::Forms::PictureBox());
			this->RV1 = (gcnew System::Windows::Forms::PictureBox());
			this->RV2 = (gcnew System::Windows::Forms::PictureBox());
			this->RV3 = (gcnew System::Windows::Forms::PictureBox());
			this->RV4 = (gcnew System::Windows::Forms::PictureBox());
			this->RV5 = (gcnew System::Windows::Forms::PictureBox());
			this->RV6 = (gcnew System::Windows::Forms::PictureBox());
			this->RH5 = (gcnew System::Windows::Forms::PictureBox());
			this->RH6 = (gcnew System::Windows::Forms::PictureBox());
			this->RH3 = (gcnew System::Windows::Forms::PictureBox());
			this->RH1 = (gcnew System::Windows::Forms::PictureBox());
			this->RH2 = (gcnew System::Windows::Forms::PictureBox());
			this->RH4 = (gcnew System::Windows::Forms::PictureBox());
			this->RH7 = (gcnew System::Windows::Forms::PictureBox());
			this->AH7 = (gcnew System::Windows::Forms::PictureBox());
			this->AH8 = (gcnew System::Windows::Forms::PictureBox());
			this->RH8 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->bVender1 = (gcnew System::Windows::Forms::Button());
			this->bVender2 = (gcnew System::Windows::Forms::Button());
			this->ABanco1 = (gcnew System::Windows::Forms::Button());
			this->OtroJug1 = (gcnew System::Windows::Forms::Button());
			this->OtroJug2 = (gcnew System::Windows::Forms::Button());
			this->ABanco2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUPCpolio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCubo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbNose1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbIzquierda1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDerecha1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbIzquierda2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDerecha2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH8))->BeginInit();
			this->SuspendLayout();
			// 
			// btnJugar
			// 
			this->btnJugar->BackColor = System::Drawing::Color::Black;
			this->btnJugar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnJugar->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJugar->ForeColor = System::Drawing::Color::Gold;
			this->btnJugar->Location = System::Drawing::Point(12, 68);
			this->btnJugar->Name = L"btnJugar";
			this->btnJugar->Size = System::Drawing::Size(100, 45);
			this->btnJugar->TabIndex = 15;
			this->btnJugar->Text = L"JUGAR";
			this->btnJugar->UseVisualStyleBackColor = false;
			this->btnJugar->Click += gcnew System::EventHandler(this, &MyForm::btnJugar_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::Black;
			this->btnSalir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSalir.BackgroundImage")));
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->ForeColor = System::Drawing::Color::Gold;
			this->btnSalir->Location = System::Drawing::Point(12, 119);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(100, 43);
			this->btnSalir->TabIndex = 14;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// pbUPCpolio
			// 
			this->pbUPCpolio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbUPCpolio.Image")));
			this->pbUPCpolio->Location = System::Drawing::Point(12, 12);
			this->pbUPCpolio->Name = L"pbUPCpolio";
			this->pbUPCpolio->Size = System::Drawing::Size(100, 50);
			this->pbUPCpolio->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbUPCpolio->TabIndex = 13;
			this->pbUPCpolio->TabStop = false;
			// 
			// pbCubo
			// 
			this->pbCubo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCubo.Image")));
			this->pbCubo->Location = System::Drawing::Point(12, 168);
			this->pbCubo->Name = L"pbCubo";
			this->pbCubo->Size = System::Drawing::Size(100, 50);
			this->pbCubo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbCubo->TabIndex = 16;
			this->pbCubo->TabStop = false;
			// 
			// btnP1vsPC
			// 
			this->btnP1vsPC->BackColor = System::Drawing::Color::Transparent;
			this->btnP1vsPC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnP1vsPC.BackgroundImage")));
			this->btnP1vsPC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnP1vsPC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnP1vsPC->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnP1vsPC->ForeColor = System::Drawing::Color::White;
			this->btnP1vsPC->Location = System::Drawing::Point(12, 250);
			this->btnP1vsPC->Name = L"btnP1vsPC";
			this->btnP1vsPC->Size = System::Drawing::Size(97, 45);
			this->btnP1vsPC->TabIndex = 19;
			this->btnP1vsPC->Text = L"Jugador vs Computadora";
			this->btnP1vsPC->UseVisualStyleBackColor = false;
			this->btnP1vsPC->Click += gcnew System::EventHandler(this, &MyForm::btnP1vsPC_Click);
			// 
			// btnP1vsP2
			// 
			this->btnP1vsP2->BackColor = System::Drawing::Color::Transparent;
			this->btnP1vsP2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnP1vsP2.BackgroundImage")));
			this->btnP1vsP2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnP1vsP2->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnP1vsP2->ForeColor = System::Drawing::Color::White;
			this->btnP1vsP2->Location = System::Drawing::Point(12, 301);
			this->btnP1vsP2->Name = L"btnP1vsP2";
			this->btnP1vsP2->Size = System::Drawing::Size(100, 45);
			this->btnP1vsP2->TabIndex = 20;
			this->btnP1vsP2->Text = L"Jugador 1 vs Jugador 2";
			this->btnP1vsP2->UseVisualStyleBackColor = false;
			this->btnP1vsP2->Click += gcnew System::EventHandler(this, &MyForm::btnP1vsP2_Click);
			// 
			// lblJ1
			// 
			this->lblJ1->AutoSize = true;
			this->lblJ1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblJ1->Location = System::Drawing::Point(127, 282);
			this->lblJ1->Name = L"lblJ1";
			this->lblJ1->Size = System::Drawing::Size(181, 58);
			this->lblJ1->TabIndex = 22;
			this->lblJ1->Text = L"Ingresar nombre \r\n    de Jugador 1";
			// 
			// txtJugador1
			// 
			this->txtJugador1->Location = System::Drawing::Point(132, 45);
			this->txtJugador1->MaxLength = 10;
			this->txtJugador1->Name = L"txtJugador1";
			this->txtJugador1->Size = System::Drawing::Size(100, 20);
			this->txtJugador1->TabIndex = 10;
			// 
			// lblJ2
			// 
			this->lblJ2->AutoSize = true;
			this->lblJ2->BackColor = System::Drawing::Color::Transparent;
			this->lblJ2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblJ2->Location = System::Drawing::Point(127, 224);
			this->lblJ2->Name = L"lblJ2";
			this->lblJ2->Size = System::Drawing::Size(175, 58);
			this->lblJ2->TabIndex = 24;
			this->lblJ2->Text = L"Ingresar nombre\r\n   de Jugador 2";
			// 
			// txtJugador2
			// 
			this->txtJugador2->Location = System::Drawing::Point(132, 77);
			this->txtJugador2->MaxLength = 10;
			this->txtJugador2->Name = L"txtJugador2";
			this->txtJugador2->Size = System::Drawing::Size(100, 20);
			this->txtJugador2->TabIndex = 10;
			// 
			// pbNose1
			// 
			this->pbNose1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbNose1.Image")));
			this->pbNose1->Location = System::Drawing::Point(132, 103);
			this->pbNose1->Name = L"pbNose1";
			this->pbNose1->Size = System::Drawing::Size(100, 50);
			this->pbNose1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbNose1->TabIndex = 25;
			this->pbNose1->TabStop = false;
			// 
			// btnAceptar1
			// 
			this->btnAceptar1->BackColor = System::Drawing::Color::Transparent;
			this->btnAceptar1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAceptar1.BackgroundImage")));
			this->btnAceptar1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAceptar1->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAceptar1->ForeColor = System::Drawing::Color::White;
			this->btnAceptar1->Location = System::Drawing::Point(12, 403);
			this->btnAceptar1->Name = L"btnAceptar1";
			this->btnAceptar1->Size = System::Drawing::Size(100, 45);
			this->btnAceptar1->TabIndex = 27;
			this->btnAceptar1->Text = L"Aceptar";
			this->btnAceptar1->UseVisualStyleBackColor = false;
			this->btnAceptar1->Visible = false;
			this->btnAceptar1->Click += gcnew System::EventHandler(this, &MyForm::btnAceptar1_Click);
			// 
			// btnCancelar1
			// 
			this->btnCancelar1->BackColor = System::Drawing::Color::Transparent;
			this->btnCancelar1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelar1.BackgroundImage")));
			this->btnCancelar1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancelar1->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar1->ForeColor = System::Drawing::Color::White;
			this->btnCancelar1->Location = System::Drawing::Point(12, 454);
			this->btnCancelar1->Name = L"btnCancelar1";
			this->btnCancelar1->Size = System::Drawing::Size(100, 45);
			this->btnCancelar1->TabIndex = 28;
			this->btnCancelar1->Text = L"Cancelar";
			this->btnCancelar1->UseVisualStyleBackColor = false;
			this->btnCancelar1->Click += gcnew System::EventHandler(this, &MyForm::btnCancelar_Click);
			// 
			// btnAceptar2
			// 
			this->btnAceptar2->BackColor = System::Drawing::Color::Transparent;
			this->btnAceptar2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAceptar2.BackgroundImage")));
			this->btnAceptar2->Enabled = false;
			this->btnAceptar2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAceptar2->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAceptar2->ForeColor = System::Drawing::Color::White;
			this->btnAceptar2->Location = System::Drawing::Point(12, 352);
			this->btnAceptar2->Name = L"btnAceptar2";
			this->btnAceptar2->Size = System::Drawing::Size(100, 45);
			this->btnAceptar2->TabIndex = 29;
			this->btnAceptar2->Text = L"Aceptar";
			this->btnAceptar2->UseVisualStyleBackColor = false;
			this->btnAceptar2->Visible = false;
			this->btnAceptar2->Click += gcnew System::EventHandler(this, &MyForm::btnAceptar2_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(127, 12);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(175, 29);
			this->lbl1->TabIndex = 31;
			this->lbl1->Text = L"Ingresar nombre\r\n";
			this->lbl1->Visible = false;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(15, 224);
			this->txt1->MaxLength = 10;
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(100, 20);
			this->txt1->TabIndex = 10;
			this->txt1->Visible = false;
			// 
			// tJuego
			// 
			this->tJuego->Interval = 50;
			this->tJuego->Tick += gcnew System::EventHandler(this, &MyForm::tJuego_Tick);
			// 
			// pJuego
			// 
			this->pJuego->BackColor = System::Drawing::Color::Transparent;
			this->pJuego->ForeColor = System::Drawing::Color::Transparent;
			this->pJuego->Location = System::Drawing::Point(132, 156);
			this->pJuego->Name = L"pJuego";
			this->pJuego->Size = System::Drawing::Size(100, 62);
			this->pJuego->TabIndex = 33;
			this->pJuego->Visible = false;
			// 
			// Girar
			// 
			this->Girar->BackColor = System::Drawing::Color::Teal;
			this->Girar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Girar->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Girar->Location = System::Drawing::Point(132, 419);
			this->Girar->Name = L"Girar";
			this->Girar->Size = System::Drawing::Size(145, 32);
			this->Girar->TabIndex = 34;
			this->Girar->Text = L"GIRAR DADO";
			this->Girar->UseVisualStyleBackColor = false;
			this->Girar->Visible = false;
			this->Girar->Click += gcnew System::EventHandler(this, &MyForm::btnAvanzar_Click);
			// 
			// Nombre1
			// 
			this->Nombre1->AutoSize = true;
			this->Nombre1->BackColor = System::Drawing::Color::Black;
			this->Nombre1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nombre1->ForeColor = System::Drawing::Color::White;
			this->Nombre1->Location = System::Drawing::Point(150, 476);
			this->Nombre1->Name = L"Nombre1";
			this->Nombre1->Size = System::Drawing::Size(57, 23);
			this->Nombre1->TabIndex = 35;
			this->Nombre1->Text = L"label1";
			this->Nombre1->Visible = false;
			// 
			// Nombre2
			// 
			this->Nombre2->AutoSize = true;
			this->Nombre2->BackColor = System::Drawing::Color::Black;
			this->Nombre2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nombre2->ForeColor = System::Drawing::Color::White;
			this->Nombre2->Location = System::Drawing::Point(251, 45);
			this->Nombre2->Name = L"Nombre2";
			this->Nombre2->Size = System::Drawing::Size(57, 23);
			this->Nombre2->TabIndex = 36;
			this->Nombre2->Text = L"label1";
			this->Nombre2->Visible = false;
			// 
			// Nombre3
			// 
			this->Nombre3->AutoSize = true;
			this->Nombre3->BackColor = System::Drawing::Color::Black;
			this->Nombre3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nombre3->ForeColor = System::Drawing::Color::White;
			this->Nombre3->Location = System::Drawing::Point(251, 74);
			this->Nombre3->Name = L"Nombre3";
			this->Nombre3->Size = System::Drawing::Size(60, 23);
			this->Nombre3->TabIndex = 37;
			this->Nombre3->Text = L"label2";
			this->Nombre3->Visible = false;
			// 
			// Nombre4
			// 
			this->Nombre4->AutoSize = true;
			this->Nombre4->BackColor = System::Drawing::Color::Black;
			this->Nombre4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nombre4->ForeColor = System::Drawing::Color::White;
			this->Nombre4->Location = System::Drawing::Point(251, 103);
			this->Nombre4->Name = L"Nombre4";
			this->Nombre4->Size = System::Drawing::Size(119, 23);
			this->Nombre4->TabIndex = 38;
			this->Nombre4->Text = L"Computadora";
			this->Nombre4->Visible = false;
			// 
			// txtTurno2
			// 
			this->txtTurno2->AutoSize = true;
			this->txtTurno2->BackColor = System::Drawing::Color::Black;
			this->txtTurno2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTurno2->ForeColor = System::Drawing::Color::White;
			this->txtTurno2->Location = System::Drawing::Point(251, 130);
			this->txtTurno2->Name = L"txtTurno2";
			this->txtTurno2->Size = System::Drawing::Size(79, 23);
			this->txtTurno2->TabIndex = 39;
			this->txtTurno2->Text = L"Turno de";
			this->txtTurno2->Visible = false;
			// 
			// dineroJ1
			// 
			this->dineroJ1->AutoSize = true;
			this->dineroJ1->BackColor = System::Drawing::Color::Black;
			this->dineroJ1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dineroJ1->ForeColor = System::Drawing::Color::White;
			this->dineroJ1->Location = System::Drawing::Point(251, 159);
			this->dineroJ1->Name = L"dineroJ1";
			this->dineroJ1->Size = System::Drawing::Size(67, 23);
			this->dineroJ1->TabIndex = 41;
			this->dineroJ1->Text = L"150000";
			this->dineroJ1->Visible = false;
			// 
			// dineroJ2
			// 
			this->dineroJ2->AutoSize = true;
			this->dineroJ2->BackColor = System::Drawing::Color::Black;
			this->dineroJ2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dineroJ2->ForeColor = System::Drawing::Color::White;
			this->dineroJ2->Location = System::Drawing::Point(251, 186);
			this->dineroJ2->Name = L"dineroJ2";
			this->dineroJ2->Size = System::Drawing::Size(67, 23);
			this->dineroJ2->TabIndex = 42;
			this->dineroJ2->Text = L"150000";
			this->dineroJ2->Visible = false;
			// 
			// Barco
			// 
			this->Barco->AutoSize = true;
			this->Barco->BackColor = System::Drawing::Color::Black;
			this->Barco->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Barco->ForeColor = System::Drawing::Color::White;
			this->Barco->Location = System::Drawing::Point(308, 219);
			this->Barco->Name = L"Barco";
			this->Barco->Size = System::Drawing::Size(57, 23);
			this->Barco->TabIndex = 43;
			this->Barco->Text = L"Barco";
			this->Barco->Visible = false;
			// 
			// Zapato
			// 
			this->Zapato->AutoSize = true;
			this->Zapato->BackColor = System::Drawing::Color::Black;
			this->Zapato->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Zapato->ForeColor = System::Drawing::Color::White;
			this->Zapato->Location = System::Drawing::Point(308, 250);
			this->Zapato->Name = L"Zapato";
			this->Zapato->Size = System::Drawing::Size(64, 23);
			this->Zapato->TabIndex = 44;
			this->Zapato->Text = L"Zapato";
			this->Zapato->Visible = false;
			// 
			// Ninguno11
			// 
			this->Ninguno11->AutoSize = true;
			this->Ninguno11->BackColor = System::Drawing::Color::Black;
			this->Ninguno11->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno11->ForeColor = System::Drawing::Color::White;
			this->Ninguno11->Location = System::Drawing::Point(308, 286);
			this->Ninguno11->Name = L"Ninguno11";
			this->Ninguno11->Size = System::Drawing::Size(13, 23);
			this->Ninguno11->TabIndex = 45;
			this->Ninguno11->Text = L" ";
			this->Ninguno11->Visible = false;
			// 
			// Ninguno21
			// 
			this->Ninguno21->AutoSize = true;
			this->Ninguno21->BackColor = System::Drawing::Color::Black;
			this->Ninguno21->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno21->ForeColor = System::Drawing::Color::White;
			this->Ninguno21->Location = System::Drawing::Point(308, 317);
			this->Ninguno21->Name = L"Ninguno21";
			this->Ninguno21->Size = System::Drawing::Size(13, 23);
			this->Ninguno21->TabIndex = 46;
			this->Ninguno21->Text = L" ";
			this->Ninguno21->Visible = false;
			// 
			// n2
			// 
			this->n2->AutoSize = true;
			this->n2->BackColor = System::Drawing::Color::Black;
			this->n2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n2->ForeColor = System::Drawing::Color::White;
			this->n2->Location = System::Drawing::Point(150, 352);
			this->n2->Name = L"n2";
			this->n2->Size = System::Drawing::Size(20, 23);
			this->n2->TabIndex = 47;
			this->n2->Text = L"2";
			this->n2->Visible = false;
			// 
			// banco
			// 
			this->banco->AutoSize = true;
			this->banco->BackColor = System::Drawing::Color::Black;
			this->banco->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->banco->ForeColor = System::Drawing::Color::White;
			this->banco->Location = System::Drawing::Point(150, 385);
			this->banco->Name = L"banco";
			this->banco->Size = System::Drawing::Size(77, 23);
			this->banco->TabIndex = 48;
			this->banco->Text = L"1000000";
			this->banco->Visible = false;
			// 
			// pbIzquierda1
			// 
			this->pbIzquierda1->BackColor = System::Drawing::Color::Transparent;
			this->pbIzquierda1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbIzquierda1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbIzquierda1.Image")));
			this->pbIzquierda1->Location = System::Drawing::Point(283, 349);
			this->pbIzquierda1->Name = L"pbIzquierda1";
			this->pbIzquierda1->Size = System::Drawing::Size(59, 48);
			this->pbIzquierda1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbIzquierda1->TabIndex = 49;
			this->pbIzquierda1->TabStop = false;
			this->pbIzquierda1->Visible = false;
			this->pbIzquierda1->Click += gcnew System::EventHandler(this, &MyForm::pbIzquierda1_Click);
			// 
			// pbDerecha1
			// 
			this->pbDerecha1->BackColor = System::Drawing::Color::Transparent;
			this->pbDerecha1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbDerecha1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbDerecha1.Image")));
			this->pbDerecha1->Location = System::Drawing::Point(366, 349);
			this->pbDerecha1->Name = L"pbDerecha1";
			this->pbDerecha1->Size = System::Drawing::Size(63, 48);
			this->pbDerecha1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbDerecha1->TabIndex = 50;
			this->pbDerecha1->TabStop = false;
			this->pbDerecha1->Visible = false;
			this->pbDerecha1->Click += gcnew System::EventHandler(this, &MyForm::pbDerecha1_Click);
			// 
			// btnContinuar1
			// 
			this->btnContinuar1->BackColor = System::Drawing::Color::Transparent;
			this->btnContinuar1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnContinuar1.BackgroundImage")));
			this->btnContinuar1->Enabled = false;
			this->btnContinuar1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnContinuar1->Font = (gcnew System::Drawing::Font(L"Candara", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinuar1->ForeColor = System::Drawing::Color::White;
			this->btnContinuar1->Location = System::Drawing::Point(366, 9);
			this->btnContinuar1->Name = L"btnContinuar1";
			this->btnContinuar1->Size = System::Drawing::Size(100, 45);
			this->btnContinuar1->TabIndex = 52;
			this->btnContinuar1->Text = L"Continuar";
			this->btnContinuar1->UseVisualStyleBackColor = false;
			this->btnContinuar1->Visible = false;
			this->btnContinuar1->Click += gcnew System::EventHandler(this, &MyForm::btnContinuar_Click);
			// 
			// pbIzquierda2
			// 
			this->pbIzquierda2->BackColor = System::Drawing::Color::Transparent;
			this->pbIzquierda2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbIzquierda2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbIzquierda2.Image")));
			this->pbIzquierda2->Location = System::Drawing::Point(283, 403);
			this->pbIzquierda2->Name = L"pbIzquierda2";
			this->pbIzquierda2->Size = System::Drawing::Size(62, 48);
			this->pbIzquierda2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbIzquierda2->TabIndex = 53;
			this->pbIzquierda2->TabStop = false;
			this->pbIzquierda2->Visible = false;
			this->pbIzquierda2->Click += gcnew System::EventHandler(this, &MyForm::pbIzquierda2_Click);
			// 
			// pbDerecha2
			// 
			this->pbDerecha2->BackColor = System::Drawing::Color::Transparent;
			this->pbDerecha2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbDerecha2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbDerecha2.Image")));
			this->pbDerecha2->Location = System::Drawing::Point(366, 403);
			this->pbDerecha2->Name = L"pbDerecha2";
			this->pbDerecha2->Size = System::Drawing::Size(63, 48);
			this->pbDerecha2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbDerecha2->TabIndex = 54;
			this->pbDerecha2->TabStop = false;
			this->pbDerecha2->Visible = false;
			this->pbDerecha2->Click += gcnew System::EventHandler(this, &MyForm::pbDerecha2_Click);
			// 
			// btnContinuar2
			// 
			this->btnContinuar2->BackColor = System::Drawing::Color::Transparent;
			this->btnContinuar2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnContinuar2.BackgroundImage")));
			this->btnContinuar2->Enabled = false;
			this->btnContinuar2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnContinuar2->Font = (gcnew System::Drawing::Font(L"Candara", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinuar2->ForeColor = System::Drawing::Color::White;
			this->btnContinuar2->Location = System::Drawing::Point(366, 60);
			this->btnContinuar2->Name = L"btnContinuar2";
			this->btnContinuar2->Size = System::Drawing::Size(100, 45);
			this->btnContinuar2->TabIndex = 55;
			this->btnContinuar2->Text = L"Continuar";
			this->btnContinuar2->UseVisualStyleBackColor = false;
			this->btnContinuar2->Visible = false;
			this->btnContinuar2->Click += gcnew System::EventHandler(this, &MyForm::btnContinuar2_Click);
			// 
			// btnCancelar2
			// 
			this->btnCancelar2->BackColor = System::Drawing::Color::Transparent;
			this->btnCancelar2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelar2.BackgroundImage")));
			this->btnCancelar2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancelar2->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar2->ForeColor = System::Drawing::Color::White;
			this->btnCancelar2->Location = System::Drawing::Point(283, 457);
			this->btnCancelar2->Name = L"btnCancelar2";
			this->btnCancelar2->Size = System::Drawing::Size(100, 45);
			this->btnCancelar2->TabIndex = 60;
			this->btnCancelar2->Text = L"Cancelar";
			this->btnCancelar2->UseVisualStyleBackColor = false;
			this->btnCancelar2->Visible = false;
			// 
			// Ninguno12
			// 
			this->Ninguno12->AutoSize = true;
			this->Ninguno12->BackColor = System::Drawing::Color::Black;
			this->Ninguno12->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno12->ForeColor = System::Drawing::Color::White;
			this->Ninguno12->Location = System::Drawing::Point(403, 119);
			this->Ninguno12->Name = L"Ninguno12";
			this->Ninguno12->Size = System::Drawing::Size(13, 23);
			this->Ninguno12->TabIndex = 61;
			this->Ninguno12->Text = L" ";
			this->Ninguno12->Visible = false;
			// 
			// Ninguno13
			// 
			this->Ninguno13->AutoSize = true;
			this->Ninguno13->BackColor = System::Drawing::Color::Black;
			this->Ninguno13->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno13->ForeColor = System::Drawing::Color::White;
			this->Ninguno13->Location = System::Drawing::Point(403, 156);
			this->Ninguno13->Name = L"Ninguno13";
			this->Ninguno13->Size = System::Drawing::Size(13, 23);
			this->Ninguno13->TabIndex = 62;
			this->Ninguno13->Text = L" ";
			this->Ninguno13->Visible = false;
			// 
			// Ninguno14
			// 
			this->Ninguno14->AutoSize = true;
			this->Ninguno14->BackColor = System::Drawing::Color::Black;
			this->Ninguno14->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno14->ForeColor = System::Drawing::Color::White;
			this->Ninguno14->Location = System::Drawing::Point(403, 186);
			this->Ninguno14->Name = L"Ninguno14";
			this->Ninguno14->Size = System::Drawing::Size(13, 23);
			this->Ninguno14->TabIndex = 63;
			this->Ninguno14->Text = L" ";
			this->Ninguno14->Visible = false;
			// 
			// Ninguno15
			// 
			this->Ninguno15->AutoSize = true;
			this->Ninguno15->BackColor = System::Drawing::Color::Black;
			this->Ninguno15->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno15->ForeColor = System::Drawing::Color::White;
			this->Ninguno15->Location = System::Drawing::Point(403, 221);
			this->Ninguno15->Name = L"Ninguno15";
			this->Ninguno15->Size = System::Drawing::Size(13, 23);
			this->Ninguno15->TabIndex = 64;
			this->Ninguno15->Text = L" ";
			this->Ninguno15->Visible = false;
			// 
			// Ninguno22
			// 
			this->Ninguno22->AutoSize = true;
			this->Ninguno22->BackColor = System::Drawing::Color::Black;
			this->Ninguno22->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno22->ForeColor = System::Drawing::Color::White;
			this->Ninguno22->Location = System::Drawing::Point(403, 286);
			this->Ninguno22->Name = L"Ninguno22";
			this->Ninguno22->Size = System::Drawing::Size(13, 23);
			this->Ninguno22->TabIndex = 66;
			this->Ninguno22->Text = L" ";
			this->Ninguno22->Visible = false;
			// 
			// Ninguno23
			// 
			this->Ninguno23->AutoSize = true;
			this->Ninguno23->BackColor = System::Drawing::Color::Black;
			this->Ninguno23->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno23->ForeColor = System::Drawing::Color::White;
			this->Ninguno23->Location = System::Drawing::Point(403, 317);
			this->Ninguno23->Name = L"Ninguno23";
			this->Ninguno23->Size = System::Drawing::Size(13, 23);
			this->Ninguno23->TabIndex = 67;
			this->Ninguno23->Text = L" ";
			this->Ninguno23->Visible = false;
			// 
			// Ninguno24
			// 
			this->Ninguno24->AutoSize = true;
			this->Ninguno24->BackColor = System::Drawing::Color::Black;
			this->Ninguno24->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno24->ForeColor = System::Drawing::Color::White;
			this->Ninguno24->Location = System::Drawing::Point(435, 349);
			this->Ninguno24->Name = L"Ninguno24";
			this->Ninguno24->Size = System::Drawing::Size(13, 23);
			this->Ninguno24->TabIndex = 68;
			this->Ninguno24->Text = L" ";
			this->Ninguno24->Visible = false;
			// 
			// Ninguno25
			// 
			this->Ninguno25->AutoSize = true;
			this->Ninguno25->BackColor = System::Drawing::Color::Black;
			this->Ninguno25->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ninguno25->ForeColor = System::Drawing::Color::White;
			this->Ninguno25->Location = System::Drawing::Point(435, 385);
			this->Ninguno25->Name = L"Ninguno25";
			this->Ninguno25->Size = System::Drawing::Size(13, 23);
			this->Ninguno25->TabIndex = 69;
			this->Ninguno25->Text = L" ";
			this->Ninguno25->Visible = false;
			// 
			// tJuego2
			// 
			this->tJuego2->Tick += gcnew System::EventHandler(this, &MyForm::tJuego2_Tick);
			// 
			// puntoAzul
			// 
			this->puntoAzul->AutoSize = true;
			this->puntoAzul->BackColor = System::Drawing::Color::Blue;
			this->puntoAzul->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->puntoAzul->ForeColor = System::Drawing::Color::White;
			this->puntoAzul->Location = System::Drawing::Point(435, 119);
			this->puntoAzul->Name = L"puntoAzul";
			this->puntoAzul->Size = System::Drawing::Size(16, 23);
			this->puntoAzul->TabIndex = 70;
			this->puntoAzul->Text = L"  ";
			this->puntoAzul->Visible = false;
			// 
			// puntoRojo
			// 
			this->puntoRojo->AutoSize = true;
			this->puntoRojo->BackColor = System::Drawing::Color::Red;
			this->puntoRojo->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->puntoRojo->ForeColor = System::Drawing::Color::White;
			this->puntoRojo->Location = System::Drawing::Point(435, 156);
			this->puntoRojo->Name = L"puntoRojo";
			this->puntoRojo->Size = System::Drawing::Size(16, 23);
			this->puntoRojo->TabIndex = 71;
			this->puntoRojo->Text = L"  ";
			this->puntoRojo->Visible = false;
			// 
			// AV1
			// 
			this->AV1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AV1.Image")));
			this->AV1->Location = System::Drawing::Point(480, 9);
			this->AV1->Name = L"AV1";
			this->AV1->Size = System::Drawing::Size(29, 98);
			this->AV1->TabIndex = 0;
			this->AV1->TabStop = false;
			this->AV1->Visible = false;
			// 
			// AV2
			// 
			this->AV2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AV2.Image")));
			this->AV2->Location = System::Drawing::Point(515, 9);
			this->AV2->Name = L"AV2";
			this->AV2->Size = System::Drawing::Size(29, 98);
			this->AV2->TabIndex = 72;
			this->AV2->TabStop = false;
			this->AV2->Visible = false;
			// 
			// AV3
			// 
			this->AV3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AV3.Image")));
			this->AV3->Location = System::Drawing::Point(550, 9);
			this->AV3->Name = L"AV3";
			this->AV3->Size = System::Drawing::Size(29, 98);
			this->AV3->TabIndex = 73;
			this->AV3->TabStop = false;
			this->AV3->Visible = false;
			// 
			// AV4
			// 
			this->AV4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AV4.Image")));
			this->AV4->Location = System::Drawing::Point(585, 9);
			this->AV4->Name = L"AV4";
			this->AV4->Size = System::Drawing::Size(29, 98);
			this->AV4->TabIndex = 74;
			this->AV4->TabStop = false;
			this->AV4->Visible = false;
			// 
			// AV5
			// 
			this->AV5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AV5.Image")));
			this->AV5->Location = System::Drawing::Point(620, 9);
			this->AV5->Name = L"AV5";
			this->AV5->Size = System::Drawing::Size(29, 98);
			this->AV5->TabIndex = 75;
			this->AV5->TabStop = false;
			this->AV5->Visible = false;
			// 
			// AV6
			// 
			this->AV6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AV6.Image")));
			this->AV6->Location = System::Drawing::Point(655, 9);
			this->AV6->Name = L"AV6";
			this->AV6->Size = System::Drawing::Size(29, 98);
			this->AV6->TabIndex = 76;
			this->AV6->TabStop = false;
			this->AV6->Visible = false;
			// 
			// AH5
			// 
			this->AH5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AH5.Image")));
			this->AH5->Location = System::Drawing::Point(556, 461);
			this->AH5->Name = L"AH5";
			this->AH5->Size = System::Drawing::Size(89, 32);
			this->AH5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AH5->TabIndex = 77;
			this->AH5->TabStop = false;
			this->AH5->Visible = false;
			// 
			// AH6
			// 
			this->AH6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AH6.Image")));
			this->AH6->Location = System::Drawing::Point(456, 461);
			this->AH6->Name = L"AH6";
			this->AH6->Size = System::Drawing::Size(89, 32);
			this->AH6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AH6->TabIndex = 78;
			this->AH6->TabStop = false;
			this->AH6->Visible = false;
			// 
			// AH3
			// 
			this->AH3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AH3.Image")));
			this->AH3->Location = System::Drawing::Point(455, 423);
			this->AH3->Name = L"AH3";
			this->AH3->Size = System::Drawing::Size(89, 32);
			this->AH3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AH3->TabIndex = 79;
			this->AH3->TabStop = false;
			this->AH3->Visible = false;
			// 
			// AH4
			// 
			this->AH4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AH4.Image")));
			this->AH4->Location = System::Drawing::Point(556, 423);
			this->AH4->Name = L"AH4";
			this->AH4->Size = System::Drawing::Size(89, 32);
			this->AH4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AH4->TabIndex = 80;
			this->AH4->TabStop = false;
			this->AH4->Visible = false;
			// 
			// AH1
			// 
			this->AH1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AH1.Image")));
			this->AH1->Location = System::Drawing::Point(455, 385);
			this->AH1->Name = L"AH1";
			this->AH1->Size = System::Drawing::Size(89, 32);
			this->AH1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AH1->TabIndex = 81;
			this->AH1->TabStop = false;
			this->AH1->Visible = false;
			// 
			// AH2
			// 
			this->AH2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AH2.Image")));
			this->AH2->Location = System::Drawing::Point(556, 385);
			this->AH2->Name = L"AH2";
			this->AH2->Size = System::Drawing::Size(89, 32);
			this->AH2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AH2->TabIndex = 82;
			this->AH2->TabStop = false;
			this->AH2->Visible = false;
			// 
			// RV1
			// 
			this->RV1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RV1.Image")));
			this->RV1->Location = System::Drawing::Point(471, 131);
			this->RV1->Name = L"RV1";
			this->RV1->Size = System::Drawing::Size(30, 100);
			this->RV1->TabIndex = 83;
			this->RV1->TabStop = false;
			this->RV1->Visible = false;
			// 
			// RV2
			// 
			this->RV2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RV2.Image")));
			this->RV2->Location = System::Drawing::Point(507, 131);
			this->RV2->Name = L"RV2";
			this->RV2->Size = System::Drawing::Size(30, 100);
			this->RV2->TabIndex = 84;
			this->RV2->TabStop = false;
			this->RV2->Visible = false;
			// 
			// RV3
			// 
			this->RV3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RV3.Image")));
			this->RV3->Location = System::Drawing::Point(543, 130);
			this->RV3->Name = L"RV3";
			this->RV3->Size = System::Drawing::Size(30, 100);
			this->RV3->TabIndex = 85;
			this->RV3->TabStop = false;
			this->RV3->Visible = false;
			// 
			// RV4
			// 
			this->RV4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RV4.Image")));
			this->RV4->Location = System::Drawing::Point(579, 131);
			this->RV4->Name = L"RV4";
			this->RV4->Size = System::Drawing::Size(30, 100);
			this->RV4->TabIndex = 86;
			this->RV4->TabStop = false;
			this->RV4->Visible = false;
			// 
			// RV5
			// 
			this->RV5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RV5.Image")));
			this->RV5->Location = System::Drawing::Point(615, 131);
			this->RV5->Name = L"RV5";
			this->RV5->Size = System::Drawing::Size(30, 100);
			this->RV5->TabIndex = 87;
			this->RV5->TabStop = false;
			this->RV5->Visible = false;
			// 
			// RV6
			// 
			this->RV6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RV6.Image")));
			this->RV6->Location = System::Drawing::Point(651, 132);
			this->RV6->Name = L"RV6";
			this->RV6->Size = System::Drawing::Size(30, 99);
			this->RV6->TabIndex = 88;
			this->RV6->TabStop = false;
			this->RV6->Visible = false;
			// 
			// RH5
			// 
			this->RH5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RH5.Image")));
			this->RH5->Location = System::Drawing::Point(455, 343);
			this->RH5->Name = L"RH5";
			this->RH5->Size = System::Drawing::Size(90, 32);
			this->RH5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RH5->TabIndex = 89;
			this->RH5->TabStop = false;
			this->RH5->Visible = false;
			// 
			// RH6
			// 
			this->RH6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RH6.Image")));
			this->RH6->Location = System::Drawing::Point(556, 343);
			this->RH6->Name = L"RH6";
			this->RH6->Size = System::Drawing::Size(89, 32);
			this->RH6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RH6->TabIndex = 90;
			this->RH6->TabStop = false;
			this->RH6->Visible = false;
			// 
			// RH3
			// 
			this->RH3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RH3.Image")));
			this->RH3->Location = System::Drawing::Point(455, 305);
			this->RH3->Name = L"RH3";
			this->RH3->Size = System::Drawing::Size(90, 32);
			this->RH3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RH3->TabIndex = 91;
			this->RH3->TabStop = false;
			this->RH3->Visible = false;
			// 
			// RH1
			// 
			this->RH1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RH1.Image")));
			this->RH1->Location = System::Drawing::Point(456, 263);
			this->RH1->Name = L"RH1";
			this->RH1->Size = System::Drawing::Size(89, 36);
			this->RH1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RH1->TabIndex = 92;
			this->RH1->TabStop = false;
			this->RH1->Visible = false;
			// 
			// RH2
			// 
			this->RH2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RH2.Image")));
			this->RH2->Location = System::Drawing::Point(556, 305);
			this->RH2->Name = L"RH2";
			this->RH2->Size = System::Drawing::Size(89, 32);
			this->RH2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RH2->TabIndex = 93;
			this->RH2->TabStop = false;
			this->RH2->Visible = false;
			// 
			// RH4
			// 
			this->RH4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RH4.Image")));
			this->RH4->Location = System::Drawing::Point(556, 263);
			this->RH4->Name = L"RH4";
			this->RH4->Size = System::Drawing::Size(89, 36);
			this->RH4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RH4->TabIndex = 94;
			this->RH4->TabStop = false;
			this->RH4->Visible = false;
			// 
			// RH7
			// 
			this->RH7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RH7.Image")));
			this->RH7->Location = System::Drawing::Point(455, 237);
			this->RH7->Name = L"RH7";
			this->RH7->Size = System::Drawing::Size(89, 36);
			this->RH7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RH7->TabIndex = 95;
			this->RH7->TabStop = false;
			this->RH7->Visible = false;
			// 
			// AH7
			// 
			this->AH7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AH7.Image")));
			this->AH7->Location = System::Drawing::Point(456, 499);
			this->AH7->Name = L"AH7";
			this->AH7->Size = System::Drawing::Size(89, 32);
			this->AH7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AH7->TabIndex = 96;
			this->AH7->TabStop = false;
			this->AH7->Visible = false;
			// 
			// AH8
			// 
			this->AH8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AH8.Image")));
			this->AH8->Location = System::Drawing::Point(556, 499);
			this->AH8->Name = L"AH8";
			this->AH8->Size = System::Drawing::Size(89, 32);
			this->AH8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AH8->TabIndex = 97;
			this->AH8->TabStop = false;
			this->AH8->Visible = false;
			// 
			// RH8
			// 
			this->RH8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RH8.Image")));
			this->RH8->Location = System::Drawing::Point(556, 237);
			this->RH8->Name = L"RH8";
			this->RH8->Size = System::Drawing::Size(89, 36);
			this->RH8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->RH8->TabIndex = 98;
			this->RH8->TabStop = false;
			this->RH8->Visible = false;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Black;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::White;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(704, 134);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(156, 96);
			this->listBox1->TabIndex = 106;
			this->listBox1->Visible = false;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::White;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Location = System::Drawing::Point(704, 17);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(156, 96);
			this->listBox2->TabIndex = 105;
			this->listBox2->Visible = false;
			// 
			// bVender1
			// 
			this->bVender1->BackColor = System::Drawing::Color::Red;
			this->bVender1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bVender1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bVender1->Location = System::Drawing::Point(704, 436);
			this->bVender1->Name = L"bVender1";
			this->bVender1->Size = System::Drawing::Size(156, 38);
			this->bVender1->TabIndex = 104;
			this->bVender1->Text = L"Vender";
			this->bVender1->UseVisualStyleBackColor = false;
			this->bVender1->Visible = false;
			this->bVender1->Click += gcnew System::EventHandler(this, &MyForm::bVender1_Click_1);
			// 
			// bVender2
			// 
			this->bVender2->BackColor = System::Drawing::Color::DodgerBlue;
			this->bVender2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bVender2->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bVender2->Location = System::Drawing::Point(704, 394);
			this->bVender2->Name = L"bVender2";
			this->bVender2->Size = System::Drawing::Size(156, 36);
			this->bVender2->TabIndex = 103;
			this->bVender2->Text = L"Vender";
			this->bVender2->UseVisualStyleBackColor = false;
			this->bVender2->Visible = false;
			this->bVender2->Click += gcnew System::EventHandler(this, &MyForm::bVender2_Click_1);
			// 
			// ABanco1
			// 
			this->ABanco1->BackColor = System::Drawing::Color::Red;
			this->ABanco1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ABanco1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ABanco1->Location = System::Drawing::Point(704, 353);
			this->ABanco1->Name = L"ABanco1";
			this->ABanco1->Size = System::Drawing::Size(156, 35);
			this->ABanco1->TabIndex = 102;
			this->ABanco1->Text = L"Banco";
			this->ABanco1->UseVisualStyleBackColor = false;
			this->ABanco1->Visible = false;
			this->ABanco1->Click += gcnew System::EventHandler(this, &MyForm::ABanco1_Click_1);
			// 
			// OtroJug1
			// 
			this->OtroJug1->BackColor = System::Drawing::Color::Red;
			this->OtroJug1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->OtroJug1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OtroJug1->Location = System::Drawing::Point(704, 241);
			this->OtroJug1->Name = L"OtroJug1";
			this->OtroJug1->Size = System::Drawing::Size(156, 32);
			this->OtroJug1->TabIndex = 101;
			this->OtroJug1->Text = L"A Jugador 2";
			this->OtroJug1->UseVisualStyleBackColor = false;
			this->OtroJug1->Visible = false;
			this->OtroJug1->Click += gcnew System::EventHandler(this, &MyForm::OtroJug1_Click_1);
			// 
			// OtroJug2
			// 
			this->OtroJug2->BackColor = System::Drawing::Color::DodgerBlue;
			this->OtroJug2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->OtroJug2->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OtroJug2->Location = System::Drawing::Point(704, 315);
			this->OtroJug2->Name = L"OtroJug2";
			this->OtroJug2->Size = System::Drawing::Size(156, 31);
			this->OtroJug2->TabIndex = 99;
			this->OtroJug2->Text = L"A jugador 1";
			this->OtroJug2->UseVisualStyleBackColor = false;
			this->OtroJug2->Visible = false;
			this->OtroJug2->Click += gcnew System::EventHandler(this, &MyForm::OtroJug2_Click_1);
			// 
			// ABanco2
			// 
			this->ABanco2->BackColor = System::Drawing::Color::DodgerBlue;
			this->ABanco2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ABanco2->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ABanco2->Location = System::Drawing::Point(704, 276);
			this->ABanco2->Name = L"ABanco2";
			this->ABanco2->Size = System::Drawing::Size(156, 33);
			this->ABanco2->TabIndex = 100;
			this->ABanco2->Text = L"Banco";
			this->ABanco2->UseVisualStyleBackColor = false;
			this->ABanco2->Visible = false;
			this->ABanco2->Click += gcnew System::EventHandler(this, &MyForm::ABanco2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 523);
			this->Controls->Add(this->RH8);
			this->Controls->Add(this->AH8);
			this->Controls->Add(this->AH7);
			this->Controls->Add(this->RH7);
			this->Controls->Add(this->RH4);
			this->Controls->Add(this->RH2);
			this->Controls->Add(this->RH1);
			this->Controls->Add(this->RH3);
			this->Controls->Add(this->RH6);
			this->Controls->Add(this->RH5);
			this->Controls->Add(this->RV6);
			this->Controls->Add(this->RV5);
			this->Controls->Add(this->RV4);
			this->Controls->Add(this->RV3);
			this->Controls->Add(this->RV2);
			this->Controls->Add(this->RV1);
			this->Controls->Add(this->AH2);
			this->Controls->Add(this->AH1);
			this->Controls->Add(this->AH4);
			this->Controls->Add(this->AH3);
			this->Controls->Add(this->AH6);
			this->Controls->Add(this->AH5);
			this->Controls->Add(this->AV6);
			this->Controls->Add(this->AV5);
			this->Controls->Add(this->AV4);
			this->Controls->Add(this->AV3);
			this->Controls->Add(this->AV2);
			this->Controls->Add(this->AV1);
			this->Controls->Add(this->puntoRojo);
			this->Controls->Add(this->puntoAzul);
			this->Controls->Add(this->OtroJug2);
			this->Controls->Add(this->ABanco2);
			this->Controls->Add(this->OtroJug1);
			this->Controls->Add(this->ABanco1);
			this->Controls->Add(this->bVender2);
			this->Controls->Add(this->bVender1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->Ninguno25);
			this->Controls->Add(this->Ninguno24);
			this->Controls->Add(this->Ninguno23);
			this->Controls->Add(this->Ninguno22);
			this->Controls->Add(this->Ninguno15);
			this->Controls->Add(this->Ninguno14);
			this->Controls->Add(this->Ninguno13);
			this->Controls->Add(this->Ninguno12);
			this->Controls->Add(this->btnCancelar2);
			this->Controls->Add(this->btnContinuar2);
			this->Controls->Add(this->pbDerecha2);
			this->Controls->Add(this->pbIzquierda2);
			this->Controls->Add(this->btnContinuar1);
			this->Controls->Add(this->pbDerecha1);
			this->Controls->Add(this->pbIzquierda1);
			this->Controls->Add(this->banco);
			this->Controls->Add(this->n2);
			this->Controls->Add(this->Ninguno21);
			this->Controls->Add(this->Ninguno11);
			this->Controls->Add(this->Zapato);
			this->Controls->Add(this->Barco);
			this->Controls->Add(this->dineroJ2);
			this->Controls->Add(this->dineroJ1);
			this->Controls->Add(this->txtTurno2);
			this->Controls->Add(this->Nombre4);
			this->Controls->Add(this->Nombre3);
			this->Controls->Add(this->Nombre2);
			this->Controls->Add(this->Nombre1);
			this->Controls->Add(this->Girar);
			this->Controls->Add(this->pJuego);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->btnAceptar2);
			this->Controls->Add(this->btnCancelar1);
			this->Controls->Add(this->btnAceptar1);
			this->Controls->Add(this->pbNose1);
			this->Controls->Add(this->lblJ2);
			this->Controls->Add(this->txtJugador2);
			this->Controls->Add(this->lblJ1);
			this->Controls->Add(this->txtJugador1);
			this->Controls->Add(this->btnP1vsP2);
			this->Controls->Add(this->btnP1vsPC);
			this->Controls->Add(this->pbCubo);
			this->Controls->Add(this->btnJugar);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->pbUPCpolio);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUPCpolio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCubo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbNose1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbIzquierda1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDerecha1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbIzquierda2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDerecha2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AV6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RV6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AH8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RH8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void OcultarInicio() {
			this->pbUPCpolio->Visible = false;
			this->pbUPCpolio->Enabled = false;
			this->btnJugar->Visible = false;
			this->btnJugar->Enabled = false;
			this->btnSalir->Visible = false;
			this->btnSalir->Enabled = false;
		}
		void InicioMostrar() {
			this->ClientSize = System::Drawing::Size(1100, 650);

			this->pbUPCpolio->Location = System::Drawing::Point(0, 0);
			this->pbUPCpolio->Size = System::Drawing::Size(1100, 650);
			this->pbUPCpolio->Visible = true;
			this->pbUPCpolio->Enabled = true;
			this->pbUPCpolio->BringToFront();

			this->btnSalir->Location = System::Drawing::Point(850, 550);
			this->btnSalir->Size = System::Drawing::Size(150, 70);
			this->btnSalir->Visible = true;
			this->btnSalir->Enabled = true;
			this->btnSalir->BringToFront();

			this->btnJugar->Location = System::Drawing::Point(80, 550);
			this->btnJugar->Size = System::Drawing::Size(150, 70);
			this->btnJugar->Visible = true;
			this->btnJugar->Enabled = true;
			this->btnJugar->BringToFront();

			inicio = false;
		}
		void MostrarCubo() {
			this->pbCubo->Location = System::Drawing::Point(0, 0);
			this->pbCubo->Size = System::Drawing::Size(1100, 650);
			this->pbCubo->Visible = true;
			this->pbCubo->Enabled = true;
			this->pbCubo->BringToFront();

			this->btnP1vsPC->Location = System::Drawing::Point(320, 300);
			this->btnP1vsPC->Size = System::Drawing::Size(200, 120);
			this->btnP1vsPC->Visible = true;
			this->btnP1vsPC->Enabled = true;
			this->btnP1vsPC->BringToFront();

			this->btnP1vsP2->Location = System::Drawing::Point(600, 300);
			this->btnP1vsP2->Size = System::Drawing::Size(200, 120);
			this->btnP1vsP2->Visible = true;
			this->btnP1vsP2->Enabled = true;
			this->btnP1vsP2->BringToFront();

		}
		void P1vsPC() {
			this->pbNose1->Location = System::Drawing::Point(0, 0);
			this->pbNose1->Size = System::Drawing::Size(1100, 650);
			this->pbNose1->Visible = true;
			this->pbNose1->Enabled = true;

			this->lbl1->Location = System::Drawing::Point(480, 300);
			this->lbl1->Size = System::Drawing::Size(200, 120);
			this->lbl1->Visible = true;
			this->lbl1->Enabled = true;

			this->txt1->Location = System::Drawing::Point(480, 350);
			this->txt1->Size = System::Drawing::Size(200, 120);
			this->txt1->Visible = true;
			this->txt1->Enabled = true;

			this->btnAceptar1->Location = System::Drawing::Point(850, 550);
			this->btnAceptar1->Size = System::Drawing::Size(150, 70);
			this->btnAceptar1->Visible = true;
			this->btnAceptar1->Enabled = true;

			this->btnCancelar1->Location = System::Drawing::Point(80, 550);
			this->btnCancelar1->Size = System::Drawing::Size(150, 70);
			this->btnCancelar1->Visible = true;
			this->btnCancelar1->Enabled = true;

		}
		void P1vsP2(){
			this->pbNose1->Location = System::Drawing::Point(0, 0);
			this->pbNose1->Size = System::Drawing::Size(1100, 650);
			this->pbNose1->Visible = true;
			this->pbNose1->Enabled = true;
			//jugador 1
			this->lblJ1->Location = System::Drawing::Point(300, 300);
			this->lblJ1->Size = System::Drawing::Size(200, 120);
			this->lblJ1->Visible = true;
			this->lblJ1->Enabled = true;
			this->lblJ1->BringToFront();

			this->txtJugador1->Location = System::Drawing::Point(300, 400);
			this->txtJugador1->Size = System::Drawing::Size(200, 120);
			this->txtJugador1->Visible = true;
			this->txtJugador1->Enabled = true;
			this->txtJugador1->BringToFront();
			//jugador 2
			this->lblJ2->Location = System::Drawing::Point(600, 300);
			this->lblJ2->Size = System::Drawing::Size(200, 120);
			this->lblJ2->Visible = true;
			this->lblJ2->Enabled = true;
			this->lblJ2->BringToFront();

			this->txtJugador2->Location = System::Drawing::Point(600, 400);
			this->txtJugador2->Size = System::Drawing::Size(200, 120);
			this->txtJugador2->Visible = true;
			this->txtJugador2->Enabled = true;
			this->txtJugador2->BringToFront();

			this->btnAceptar2->Location = System::Drawing::Point(850, 550);
			this->btnAceptar2->Size = System::Drawing::Size(150, 70);
			this->btnAceptar2->Visible = true;
			this->btnAceptar2->Enabled = true;

			this->btnCancelar1->Location = System::Drawing::Point(80, 550);
			this->btnCancelar1->Size = System::Drawing::Size(150, 70);
			this->btnCancelar1->Visible = true;
			this->btnCancelar1->Enabled = true;

		}

		void Aceptar1() {
			char*n;
			n = new char[20];
			sprintf(n, "%s", txt1->Text);
			//strcpy(n, "a");
			o->registrar1(n,1);
			
		}
		void Aceptar2() {
			char*n; 
			char*m;
			m = new char[20];
			n = new char[20];
			sprintf(n, "%s", txtJugador1->Text);
			sprintf(m, "%s", txtJugador2->Text);
			
			o->registrar2(n,1,m,2);
		}
		void Cancelar1() {
			MostrarCubo();
			this->txt1->Visible = false;
			this->txtJugador1->Visible = false;
			this->txtJugador2->Visible = false;
			this->lbl1->Visible = false;
			this->lblJ1->Visible = false;
			this->lblJ2->Visible = false;
			this->txtJugador1->Enabled = false;
			this->txtJugador2->Enabled = false;
		}
		void Cancelar2() {
			MostrarCubo();
			this->txt1->Visible = false;
			this->txtJugador1->Visible = false;
			this->txtJugador2->Visible = false;
			this->lbl1->Visible = false;
			this->lblJ1->Visible = false;
			this->lblJ2->Visible = false;
		}
		void ocultarCubo() {
			this->pbCubo->Visible = false;
			this->pbCubo->Enabled = false;

			this->btnP1vsPC->Visible = false;
			this->btnP1vsPC->Enabled = false;

			this->btnP1vsP2->Visible = false;
			this->btnP1vsP2->Enabled = false;
		}

		void ocultarP1vsPC() {
			this->pbNose1->Visible = false;
			this->pbNose1->Enabled = false;

			this->lbl1->Visible = false;
			this->lbl1->Enabled = false;
								  
			this->txt1->Visible = false;
			this->txt1->Enabled = false;

			this->btnAceptar1->Visible = false;
			this->btnAceptar1->Enabled = false;
										 
			this->btnCancelar1->Visible = false;
			this->btnCancelar1->Enabled = false;

			this->ClientSize = System::Drawing::Size(1100, 650);
		}

		void ocultarP1vsP2() {

			this->lblJ1->Visible = false;
			this->lblJ1->Enabled = false;

			this->txtJugador1->Visible = false;
			this->txtJugador1->Enabled = false;

			this->lblJ2->Visible =false;
			this->lblJ2->Enabled =false;

			this->txtJugador2->Visible = false;
			this->txtJugador2->Enabled = false;

			this->btnAceptar2->Visible = false;
			this->btnAceptar2->Enabled = false;
										 
			this->btnCancelar1->Visible = false;
			this->btnCancelar1->Enabled = false;

			this->ClientSize = System::Drawing::Size(1100, 650);
		}

		void JuegoMostrar()
		{
			this->pJuego->Location = System::Drawing::Point(0, 0);
			this->pJuego->Size = System::Drawing::Size(1100, 650);
			this->pJuego->Visible = true;
			this->pJuego->Enabled = true;

			this->Girar->Location = System::Drawing::Point(610, 425);
			this->Girar->BringToFront();


			this->bVender1->Location = System::Drawing::Point(430, 425);
		//	this->bVender1->BringToFront();

			this->ABanco1->Location = System::Drawing::Point(430, 325);
			this->ABanco1->BringToFront();

			this->OtroJug1->Location = System::Drawing::Point(430, 290);
			this->OtroJug1->BringToFront();


			this->bVender2->Location = System::Drawing::Point(780, 425);
		//	this->bVender2->BringToFront();

			this->ABanco2->Location = System::Drawing::Point(780, 325);
			this->ABanco2->BringToFront();

			this->OtroJug2->Location = System::Drawing::Point(780, 290);
			this->OtroJug2->BringToFront();

			

			this->Nombre1->Location = System::Drawing::Point(136, 143);
			this->Nombre1->BringToFront();
			this->Nombre2->Location = System::Drawing::Point(136, 143);
			this->Nombre2->BringToFront();
			this->Nombre3->Location = System::Drawing::Point(136, 403);
			this->Nombre3->BringToFront();
			this->Nombre4->Location = System::Drawing::Point(136, 403);
			this->Nombre4->BringToFront();

			this->dineroJ1->Location = System::Drawing::Point(125, 170);
			this->dineroJ1->BringToFront();

			this->dineroJ2->Location = System::Drawing::Point(125, 435);
			this->dineroJ2->BringToFront();

			this->listBox1-> Location = System::Drawing::Point(50, 245);
			this->listBox2-> Location = System::Drawing::Point(50, 514);

			


			this->puntoAzul->Location = System::Drawing::Point(20, 403);
			this->puntoAzul->BringToFront();

			this->puntoRojo->Location = System::Drawing::Point(20, 143);
			this->puntoRojo->BringToFront();


			this->Barco->Location = System::Drawing::Point(125, 195);
			this->Barco->BringToFront();

			this->Zapato->Location = System::Drawing::Point(125, 460);
			this->Zapato->BringToFront();


			this->n2->Location = System::Drawing::Point(200, 35);
			this->n2->BringToFront();

			this->banco->Location = System::Drawing::Point(100, 70);
			this->banco->BringToFront();

			this->listBox1->BringToFront();
			this->listBox2->BringToFront();

		}
		void mostrarDatosEnLbl() {
			this->dineroJ1->Visible = true;
			this->dineroJ2->Visible = true;
			this->Barco->Visible = true;
			this->Zapato->Visible = true;
			this->Ninguno11->Visible = true;
			this->Ninguno12->Visible = true;
			this->Ninguno13->Visible = true;
			this->Ninguno14->Visible = true;
			this->Ninguno15->Visible = true;
			this->Ninguno21->Visible = true;
			this->Ninguno22->Visible = true;
			this->Ninguno23->Visible = true;
			this->Ninguno24->Visible = true;
			this->Ninguno25->Visible = true;
			this->puntoAzul->Visible = true;
			this->puntoRojo->Visible = true;
			this->n2->Visible = true;
			this->banco->Visible = true;
			this->Girar->Visible = true;
			this->Girar->Enabled = true;
			this->bVender2->Visible = true;
			this->bVender2->Enabled = true;
			this->bVender1->Visible = true;
			this->bVender1->Enabled = true;
			this->listBox1->Visible = true;
			this->listBox2->Visible = true;

		}
		void mostrarElegirFigura1() {

			this->txt1->Visible = false;
			this->lbl1->Visible = false;
			
			this->btnContinuar1->Location = System::Drawing::Point(500, 500);
			this->btnContinuar1->Size = System::Drawing::Size(180, 80);
			this->btnContinuar1->Visible = true;
			this->btnContinuar1->Enabled = true;
			this->btnContinuar1->BringToFront();

			this->pbIzquierda1->Location = System::Drawing::Point(680, 250);
			this->pbIzquierda1->Visible = true;
			this->pbIzquierda1->BringToFront();
			

			this->pbDerecha1->Location = System::Drawing::Point(850, 250);
			this->pbDerecha1->Visible = true;
			this->pbDerecha1->BringToFront();

			this->pbIzquierda2->Location = System::Drawing::Point(680, 365);
			this->pbIzquierda2->Visible = true;
			this->pbIzquierda2->BringToFront();

			this->pbDerecha2->Location = System::Drawing::Point(850, 365);
			this->pbDerecha2->Visible = true;
			this->pbDerecha2->BringToFront();

		}
		void mostrarElegirFigura2() {

			this->txt1->Visible = false;
			this->lbl1->Visible = false;

			this->btnContinuar2->Location = System::Drawing::Point(500, 500);
			this->btnContinuar2->Size = System::Drawing::Size(180, 80);
			this->btnContinuar2->Visible = true;
			this->btnContinuar2->Enabled = true;
			this->btnContinuar2->BringToFront();

			this->pbIzquierda1->Location = System::Drawing::Point(680, 250);
			this->pbIzquierda1->Visible = true;
			this->pbIzquierda1->BringToFront();


			this->pbDerecha1->Location = System::Drawing::Point(850, 250);
			this->pbDerecha1->Visible = true;
			this->pbDerecha1->BringToFront();

			this->pbIzquierda2->Location = System::Drawing::Point(680, 365);
			this->pbIzquierda2->Visible = true;
			this->pbIzquierda2->BringToFront();

			this->pbDerecha2->Location = System::Drawing::Point(850, 365);
			this->pbDerecha2->Visible = true;
			this->pbDerecha2->BringToFront();

		}

		void iniciaJuego1() {
			this->Aceptar1();
			this->ocultarP1vsPC();
			this->Nombre1->Text = txt1->Text;
			this->Nombre1->Visible = true;
			this->Nombre4->Visible = true;
			this->mostrarDatosEnLbl();
		}

		void iniciaJuego2() {
			this->Aceptar2();
			this->ocultarP1vsP2();
			this->Nombre2->Text = txtJugador1->Text;
			this->Nombre2->Visible = true;
			this->Nombre3->Text = txtJugador2->Text;
			this->Nombre3->Visible = true;
			this->mostrarDatosEnLbl();
		}

		bool casillasJugador1(int casillasid) {

			switch (casillasid) {
			//esquina
			case 0:
				//Coordenadas en funcion de los pixeles
				personaje1->setX(265);
				personaje1->setY(490);
				//Coordenadas en funcion de la matriz Matriz
				personaje1->setXM(4);
				personaje1->setYM(0);
				return true;
				break;
			case 1:

				personaje1->setX(265);
				personaje1->setY(400);
				personaje1->setXM(3);
				personaje1->setYM(0);
				return true;
				break;
			case 2:
				personaje1->setX(265);
				personaje1->setY(290);
				personaje1->setXM(2);
				personaje1->setYM(0);
				return true;
				break;
			case 3:
				personaje1->setX(265);
				personaje1->setY(200);
				personaje1->setXM(1);
				personaje1->setYM(0);
				return true;
				break;
			//esquina
			case 4:
				personaje1->setX(265);
				personaje1->setY(30);
				personaje1->setXM(0);
				personaje1->setYM(0);
				return true;
				break;
			case 5:
				personaje1->setX(420);
				personaje1->setY(30);
				return true;
				break;
			case 6:
				personaje1->setX(500);
				personaje1->setY(30);
				return true;
				break;
			case 7:
				personaje1->setX(600);
				personaje1->setY(30);
				return true;
				break;
			case 8:
				personaje1->setX(690);
				personaje1->setY(30);
				return true;
				break;
			case 9:
				
				personaje1->setX(780);
				personaje1->setY(30);
				return true;
				break;
			case 10:
				personaje1->setX(850);
				personaje1->setY(30);
				return true;
				break;
			//esquina
			case 11:
				personaje1->setX(1020);
				personaje1->setY(30);

				return true;
				break;
			case 12:
				personaje1->setX(1020);
				personaje1->setY(200);
				return true;
				break;
			case 13:
				personaje1->setX(1020);
				personaje1->setY(290);
				return true;
				break;
			case 14:
				personaje1->setX(1020);
				personaje1->setY(400);
				return true;
				break;
			//esquina
			case 15:
				personaje1->setX(1020);
				personaje1->setY(490);
				return true;
				break;
			case 16:
				personaje1->setX(880);
				personaje1->setY(490);
				return true;
				break;
			case 17:
				personaje1->setX(780);
				personaje1->setY(490);
				return true;
				break;
			case 18:
				personaje1->setX(690);
				personaje1->setY(490);
				return true;
				break;
			case 19:
				personaje1->setX(600);
				personaje1->setY(490);
				return true;
				break;
			case 20:
				personaje1->setX(500);
				personaje1->setY(490);
				return true;
				break;
			case 21:
				personaje1->setX(420);
				personaje1->setY(490);
				return true;
				break;
			}
		}

		void casillasJugador2(int casillasid) {
			
			switch (casillasid) {
				//esquina
			case 0:
				personaje2->setX(300);
				personaje2->setY(540);
				break;
			case 1:
				personaje2->setX(300);
				personaje2->setY(400);
				break;
			case 2:
				personaje2->setX(300);
				personaje2->setY(290);
				break;
			case 3:
				personaje2->setX(300);
				personaje2->setY(200);
				break;
				//esquina
			case 4:
				personaje2->setX(300);
				personaje2->setY(86);
				break;
			case 5:
				personaje2->setX(420);
				personaje2->setY(70);
				break;
			case 6:
				personaje2->setX(500);
				personaje2->setY(70);
				break;
			case 7:
				personaje2->setX(600);
				personaje2->setY(70);
				break;
			case 8:
				personaje2->setX(690);
				personaje2->setY(70);
			break;
			case 9:
				personaje2->setX(780);
				personaje2->setY(70);
				break;
			case 10:
				personaje2->setX(860);
				personaje2->setY(70);
				break;
				//esquina
			case 11:
				personaje2->setX(1000);
				personaje2->setY(70);
				break;
			case 12:
				personaje2->setX(1000);
				personaje2->setY(200);
				break;
			case 13:
				personaje2->setX(1000);
				personaje2->setY(290);
				break;
			case 14:
				personaje2->setX(1000);
				personaje2->setY(400);
				break;
				//esquina
			case 15:
				personaje2->setX(1000);
				personaje2->setY(540);
				break;
			case 16:
				personaje2->setX(880);
				personaje2->setY(540);
				break;
			case 17:
				personaje2->setX(780);
				personaje2->setY(540);
				break;
			case 18:
				personaje2->setX(690);
				personaje2->setY(540);
				break;
			case 19:
				personaje2->setX(600);
				personaje2->setY(540);
				break;
			case 20:
				personaje2->setX(500);
				personaje2->setY(540);
				break;
			case 21:
				personaje2->setX(400);
				personaje2->setY(540);
				break;
			}
		}
		
		void TurnoJugador1(int posicion1) {
			String ^propJ1;
			String ^propJ2;
			String ^propJ3;
			String ^propJ4;
			String ^propJ5;
			int id;
			
			switch (posicion1)
			{
			case 1:
				personaje1->setPlata(10000);
				bancoDinero = bancoDinero - 10000;
				banco->Text = bancoDinero.ToString();
				break;
			case 2:
				propiedadPaga1("Av. Larco", 13000);
				if (!pertenece1("Av. Larco") && !pertenece2("Av. Larco")) {
					result = MessageBox::Show("¿Deseas comprar la Avenida Larco?", "Aviso", MessageBoxButtons::YesNo);
					
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-13000);
						oPropiedad = new CPropiedad("Av. Larco", 13000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 13000;
						banco->Text = bancoDinero.ToString();
						propJ1 += "Av. Larco, ";
						this->Ninguno11->Text += propJ1;
						precioProT1 += 13000;
						this->RV1->Visible = true;
						this->RV1->Location = System::Drawing::Point(380, 373);
						this->RV1->BringToFront();
					}
				}

				break;
			case 3:
				propiedadPaga1("Av. Arequipa", 10000);
				if (!pertenece1("Av. Arequipa") && !pertenece2("Av. Arequipa")) {
					result = MessageBox::Show("¿Deseas comprar la Avenida Arequipa?", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-10000);
						oPropiedad = new CPropiedad("Av. Arequipa", 10000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 10000;
						banco->Text = bancoDinero.ToString();
						propJ2 += "Av. Arequipa, ";
						this->Ninguno12->Text += propJ2;
						precioProT1 += 10000;
						this->RV2->Visible = true;
						this->RV2->Location = System::Drawing::Point(380, 273);
						this->RV2->BringToFront();
					}
				}
				break;
			case 4:
				propiedadPaga1("Paseo de la república", 90000);
				if (!pertenece1("Paseo de la república") && !pertenece2("Paseo de la república")) {
					result = MessageBox::Show("¿Deseas comprar Paseo la república? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-90000);
						oPropiedad = new CPropiedad("Paseo de la república", 90000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 90000;
						banco->Text = bancoDinero.ToString();
						propJ2 += "Paseo de la república, ";
						this->Ninguno12->Text += propJ2;
						precioProT1 += 90000;
						this->RV3->Visible = true;
						this->RV3->Location = System::Drawing::Point(380, 173);
						this->RV3->BringToFront();
					}
				}
				break;
			case 5:
				break;
			case 6:
				propiedadPaga1("Jirón de la unión", 15000);
				if (!pertenece1("Jirón de la unión") && !pertenece2("Jirón de la unión")) {
					result = MessageBox::Show("¿Deseas comprar el Jirón de la unión? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-15000);
						oPropiedad = new CPropiedad("Jirón de la unión", 15000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 15000;
						banco->Text = bancoDinero.ToString();
						propJ2 += "Jirón de la unión, ";
						this->Ninguno12->Text += propJ2;
						precioProT1 += 15000;
						this->RH4->Visible = true;
						this->RH4->Location = System::Drawing::Point(410, 140);
						this->RH4->BringToFront();
					}
				}
			
				break;
			case 7:
				propiedadPaga1("Plaza San Martín", 14000);
				if (!pertenece1("Plaza San Martín") && !pertenece2("Plaza San Martín")) {
					result = MessageBox::Show("¿Deseas comprar la Plaza San Martín? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-14000);
						oPropiedad = new CPropiedad("Plaza San Martín", 14000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 14000;
						banco->Text = bancoDinero.ToString();
						propJ3 += "Plz. San Martín, ";
						this->Ninguno13->Text += propJ3;
						precioProT1 += 14000;
						this->RH5->Visible = true;
						this->RH5->Location = System::Drawing::Point(500, 140);
						this->RH5->BringToFront();
					}
				}
				break;
			case 8:
				propiedadPaga1("Centro Cívico", 5000);
				if (!pertenece1("Centro Cívico") && !pertenece2("Centro Cívico")) {
					result = MessageBox::Show("¿Deseas comprar el Centro Cívico? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-5000);
						oPropiedad = new CPropiedad("Centro Cívico", 5000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 5000;
						banco->Text = bancoDinero.ToString();
						propJ3 += "C. Cívico, ";
						this->Ninguno13->Text += propJ3;
						precioProT1 += 5000;
						this->RH6->Visible = true;
						this->RH6->Location = System::Drawing::Point(590, 140);
						this->RH6->BringToFront();
					}
				}
				break;
			case 10:
				propiedadPaga1("Av. Bolivar", 17000);
				if (!pertenece1("Av. Bolivar") && !pertenece2("Av. Bolivar")) {
					result = MessageBox::Show("¿Deseas comprar la Avenida Bolivar? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-17000);
						oPropiedad = new CPropiedad("Av. Bolivar", 17000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 17000;
						banco->Text = bancoDinero.ToString();
						propJ3 += "Av. Bolivar, ";
						this->Ninguno13->Text += propJ3;
						precioProT1 += 17000;
						this->RH8->Visible = true;
						this->RH8->Location = System::Drawing::Point(770, 140);
						this->RH8->BringToFront();
					}
				}
				break;
			case 11:case 22:
				result = MessageBox::Show("Paga Impuestos", "Aviso", MessageBoxButtons::OK);
				personaje1->setPlata(-(0.10*precioProT1));
				bancoDinero = bancoDinero + (0.10*precioProT1);
				banco->Text = bancoDinero.ToString();
				break;
			case 12:
				break;
			case 13:
				propiedadPaga1("UNMSM", 23000);
				if (!pertenece1("UNMSM") && !pertenece2("UNMSM")) {
					result = MessageBox::Show("¿Deseas comprar la Universidad Mayor de San Marcos? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-23000);
						oPropiedad = new CPropiedad("UNMSM", 23000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 23000;
						banco->Text = bancoDinero.ToString();
						propJ4 += "UNMSM, ";
						this->Ninguno14->Text += propJ4;
						precioProT1 += 23000;
						this->RV4->Visible = true;
						this->RV4->Location = System::Drawing::Point(950, 173);
						this->RV4->BringToFront();
					}
				}
				break;
			case 14:
				propiedadPaga1("Avenida Venezuela", 25000);
				if (!pertenece1("Avenida Venezuela") && !pertenece2("Avenida Venezuela")) {
					result = MessageBox::Show("¿Deseas comprar la Avenida Venezuela? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-25000);
						oPropiedad = new CPropiedad("Av. Venezuela", 25000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 25000;
						banco->Text = bancoDinero.ToString();
						propJ4 += "Av. Venezuela, ";
						this->Ninguno14->Text += propJ4;
						precioProT1 += 25000;
						this->RV5->Visible = true;
						this->RV5->Location = System::Drawing::Point(950, 273);
						this->RV5->BringToFront();
					}
				}
				break;
			case 15:
				propiedadPaga1("Avenida la Marina", 17500);
				if (!pertenece1("Avenida la Marina") && !pertenece2("Avenida la Marina")) {
					result = MessageBox::Show("¿Deseas comprar la Avenida la Marina? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-17500);
						oPropiedad = new CPropiedad("Av. La Marina", 17500);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 17500;
						banco->Text = bancoDinero.ToString();
						propJ4 += "Av. La Marina, ";
						this->Ninguno14->Text += propJ4;
						precioProT1 += 17500;
						this->RV6->Visible = true;
						this->RV6->Location = System::Drawing::Point(950, 373);
						this->RV6->BringToFront();
					}
				}
				break;
			case 16:
				result = MessageBox::Show("Vaya a la carcel, además pagará 1000 soles al banco ", "Aviso", MessageBoxButtons::OK);
				personaje1->setPlata(10000);
				personaje1->setPlata(-1000);
				bancoDinero = bancoDinero + 10000;
				banco->Text = bancoDinero.ToString();
				casillasJugador1(4);
				this->posicion1 = 4;
				break;
			case 18:
				propiedadPaga1("Plaza San miguel", 31000);
				if (!pertenece1("Plaza San miguel") && !pertenece2("Plaza San miguel")) {
					result = MessageBox::Show("¿Deseas comprar la Plaza San miguel? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-31000);
						oPropiedad = new CPropiedad("Plaza San miguel", 31000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 31000;
						banco->Text = bancoDinero.ToString();
						propJ5 += "Plz. San miguel, ";
						this->Ninguno15->Text += propJ5;
						precioProT1 += 31000;
						this->RH1-> Visible = true;
						this->RH1->Location = System::Drawing::Point(770, 473);
						this->RH1->BringToFront();
					}
				}
				break;
			case 19:
				propiedadPaga1("UPC", 31000);
				if (!pertenece1("UPC") && !pertenece2("UPC")) {
					result = MessageBox::Show("¿Deseas comprar la UPC? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-27000);
						oPropiedad = new CPropiedad("UPC", 27000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 27000;
						banco->Text = bancoDinero.ToString();
						propJ5 += "UPC, ";
						this->Ninguno15->Text += propJ5;
						precioProT1 += 27000;
						this->RH2->Visible = true;
						this->RH2->Location = System::Drawing::Point(680, 473);
						this->RH2->BringToFront();
					}
				}
				break;
			case 20:
				propiedadPaga1("Avenida Primavera", 25000);
				if (!pertenece1("Avenida Primavera") && !pertenece2("Avenida Primavera")) {
					result = MessageBox::Show("¿Deseas comprar la Avenida Primavera? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-25000);
						oPropiedad = new CPropiedad("Av. Primavera", 25000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 25000;
						banco->Text = bancoDinero.ToString();
						propJ5 += "Av. Primavera, ";
						this->Ninguno15->Text+= propJ5;
						precioProT1 += 25000;
						this->RH3->Visible = true;
						this->RH3->Location = System::Drawing::Point(590, 473);
						this->RH3->BringToFront();
					}
				}
				break;
			case 21:
				propiedadPaga1("Bembos", 39000);
				if (!pertenece1("Bembos") && !pertenece2("Bembos")) {
					result = MessageBox::Show("¿Deseas comprar Bembos? ", "Aviso", MessageBoxButtons::YesNo);
					if (result == System::Windows::Forms::DialogResult::Yes)
					{
						personaje1->setPlata(-39000);
						oPropiedad = new CPropiedad("Bembos", 39000);
						personaje1->agregarPropiedad(oPropiedad);
						bancoDinero = bancoDinero + 39000;
						banco->Text = bancoDinero.ToString();
						propJ5 += "Bembos, ";
						this->Ninguno15->Text += propJ5;
						precioProT1 += 39000;
						this->RH7->Visible = true;
						this->RH7->Location = System::Drawing::Point(500, 473);
						this->RH7->BringToFront();
					}
				}
				break;
			case 9: case 17:
				ajjj = r3->Next(1, 6);

				switch (ajjj)
				{
				case 1:
					result = MessageBox::Show("Avance hasta la entrada", "Aviso", MessageBoxButtons::OK);
					casillasJugador1(0);
					this->posicion1 = 0;
					bancoDinero = bancoDinero -10000;
					banco->Text = bancoDinero.ToString();
					personaje1->setPlata(10000);
					break;
				case 2:
					result = MessageBox::Show("Pague 2000 soles al otro jugador. ", "Aviso", MessageBoxButtons::OK);
					personaje1->setPlata(-2000);
					personaje2->setPlata(2000);

					break;
				case 3:
					result = MessageBox::Show("Vaya directo a la cárcel, no pase por La entrada", "Aviso", MessageBoxButtons::OK);
					personaje1->setPlata(-10000);
					bancoDinero = bancoDinero + 10000;
					banco->Text = bancoDinero.ToString();
					casillasJugador1(4);
					this->posicion1 = 4;
					personaje1->setCarcel(true);

					break;
				case 4:
					result = MessageBox::Show("Pague 1000 soles al dueño de la Av. Larco. ", "Aviso", MessageBoxButtons::OK);
					if (pertenece2("Av. Larco")) {
						personaje1->setPlata(-1000);
						personaje2->setPlata(1000);
					}
					else {
						personaje1->setPlata(-1000);
						bancoDinero = bancoDinero + 1000;
					}
					break;
				case 5:
					result = MessageBox::Show("Retroceda 5 espacios.", "Aviso", MessageBoxButtons::OK);
					casillasJugador1(posicion1 - 5);
					posicion1 -= 5;

					break;
				}
				break;
			}
		}
		
		void TurnoComputadora(int posicion2) {
			String^ propPC1;
			String^ propPC2;
			String^ propPC3;
			String^ propPC4;
			String^ propPC5;
			switch (posicion2)
			{
			case 1:
				personaje2->setPlata(10000);
				bancoDinero = bancoDinero - 10000;
				banco->Text = bancoDinero.ToString();
				break;
			case 2:
				propiedadPaga2("Av. Larco", 5000);
				
				if (!pertenece1("Av. Larco") && !pertenece2("Av. Larco")) {
					personaje2->setPlata(-13000);
					oPropiedad = new CPropiedad("Av. Larco", 13000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 10000;
					banco->Text = bancoDinero.ToString();
					propPC1 += "Av. Larco, ";
				this->Ninguno21->Text += propPC1;
				precioProPC += 13000;
				this->AV1->Visible = true;
				this->AV1->Location = System::Drawing::Point(380, 373);
				this->AV1->BringToFront();
				}

				break;
			case 3:
				propiedadPaga2("Av. Arequipa", 5000);
				
				if (!pertenece1("Av. Arequipa") && !pertenece2("Av. Arequipa")) {
					personaje2->setPlata(-10000);
					oPropiedad = new CPropiedad("Av. Arequipa", 10000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 10000;
					banco->Text = bancoDinero.ToString();
					propPC2 += "Av. Arequipa, ";
				this->Ninguno22->Text += propPC2;
				precioProPC += 10000;
				this->AV2->Visible = true;
				this->AV2->Location = System::Drawing::Point(380, 273);
				this->AV2->BringToFront();
				}
				break;
			case 4:
				propiedadPaga2("Paseo la república", 5000);
				
				if (!pertenece1("Paseo la república") && !pertenece2("Paseo la república")) {
					personaje2->setPlata(-90000);
					oPropiedad = new CPropiedad("Paseo la república", 90000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 90000;
					banco->Text = bancoDinero.ToString();
					propPC2 += "Paseo la república, ";
				this->Ninguno22->Text += propPC2;
				precioProPC += 90000;
				this->AV3->Visible = true;
				this->AV3->Location = System::Drawing::Point(380, 173);
				this->AV3->BringToFront();
				}
				break;
			case 5:
			/*	personaje2->setPlata(-10000);
				bancoDinero = bancoDinero + 10000;
				banco->Text = bancoDinero.ToString();*/
				break;
			case 6:
				propiedadPaga2("Jirón de la unión", 5000);
				
				if (!pertenece1("Jirón de la unión") && !pertenece2("Jirón de la unión")) {
					personaje2->setPlata(-15000);
					oPropiedad = new CPropiedad("Jirón de la unión", 15000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 15000;
					banco->Text = bancoDinero.ToString();
					propPC2 += "Jirón de la unión, ";
				this->Ninguno22->Text += propPC2;
				precioProPC += 90000;
				this->AH4->Visible = true;
				this->AH4->Location = System::Drawing::Point(410, 140);
				this->AH4->BringToFront();
				}

				break;
			case 7:
				propiedadPaga2("Plaza San Martín", 5000);
				
				if (!pertenece1("Plaza San Martín") && !pertenece2("Plaza San Martín")) {
					personaje2->setPlata(-14000);
					oPropiedad = new CPropiedad("Plaza San Martín", 14000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 14000;
					banco->Text = bancoDinero.ToString();
					propPC3 += "Plz. San Martín, ";
				this->Ninguno23->Text += propPC3;
				precioProPC += 14000;
				this->AH5->Visible = true;
				this->AH5->Location = System::Drawing::Point(500, 140);
				this->AH5->BringToFront();
				}
				break;
			case 8:
				propiedadPaga1("Centro Cívico", 5000);
				
				if (!pertenece1("Centro Cívico") && !pertenece2("Centro Cívico")) {
					personaje2->setPlata(-5000);
					oPropiedad = new CPropiedad("Centro Cívico", 5000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 5000;
					banco->Text = bancoDinero.ToString();
					propPC3 += "C. Cívico, ";
				this->Ninguno23->Text += propPC3;
				precioProPC += 5000;
				this->AH6->Visible = true;
				this->AH6->Location = System::Drawing::Point(590, 140);
				this->AH6->BringToFront();
				}

				break;
			case 10:
				propiedadPaga2("Av. Bolivar", 5000);
				
				if (!pertenece1("Av. Bolivar") && !pertenece2("Av. Bolivar")) {
					personaje2->setPlata(-17000);
					oPropiedad = new CPropiedad("Av. Bolivar", 17000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 17000;
					banco->Text = bancoDinero.ToString();
					propPC3 += "Av. Bolivar, ";
				this->Ninguno23->Text += propPC3;
				precioProPC += 17000;
				this->AH8->Visible = true;
				this->AH8->Location = System::Drawing::Point(770, 140);
				this->AH8->BringToFront();
				}
				break;
			case 11:case 22:
				
				personaje2->setPlata(-((10 / 100)*precioProT2));
				bancoDinero = bancoDinero + 17000;
				banco->Text = bancoDinero.ToString();
				break;
			case 12:
				break;
			case 13:
				propiedadPaga2("UNMSM", 5000);
				
				if (!pertenece1("UNMSM") && !pertenece2("UNMSM")) {
					personaje2->setPlata(-23000);
					oPropiedad = new CPropiedad("UNMSM", 23000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 23000;
					banco->Text = bancoDinero.ToString();
					propPC4 += "UNMSM, ";
				this->Ninguno24->Text += propPC4;
				precioProPC += 17000;
				this->AV4->Visible = true;
				this->AV4->Location = System::Drawing::Point(950, 173);
				this->AV4->BringToFront();
				}
				break;
			case 14:
				propiedadPaga2("Avenida Venezuela", 5000);
				
				if (!pertenece1("Avenida Venezuela") && !pertenece2("Avenida Venezuela")) {
					personaje2->setPlata(-25000);
					oPropiedad = new CPropiedad("Avenida Venezuela", 25000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 25000;
					banco->Text = bancoDinero.ToString();
					propPC4 += "Av. Venezuela, ";
				this->Ninguno24->Text += propPC4;
				precioProPC += 25000;
				this->AV5->Visible = true;
				this->AV5->Location = System::Drawing::Point(950, 273);
				this->AV5->BringToFront();
				}
				break;
			case 15:
				propiedadPaga1("Avenida la Marina", 5000);
				
				if (!pertenece1("Avenida la Marina")&& !pertenece2("Avenida la Marina")) {
					personaje2->setPlata(-17500);
					oPropiedad = new CPropiedad("Avenida la Marina", 17500);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 17500;
					banco->Text = bancoDinero.ToString();
					propPC4 += "Av. La Marina, ";
				this->Ninguno24->Text += propPC4;
				precioProPC += 17500;
				this->AV6->Visible = true;
				this->AV6->Location = System::Drawing::Point(950, 373);
				this->AV6->BringToFront();
				}
				break;
			case 16:
				personaje2->setPlata(-1000);
				bancoDinero = bancoDinero + 10000;
				banco->Text = bancoDinero.ToString();
				casillasJugador2(4);
				this->posicion2 = 4;
				break;
			case 18:
				propiedadPaga2("Plaza San miguel", 5000);
				if (!pertenece1("Plaza San miguel") && !pertenece2("Plaza San miguel")) {
					personaje2->setPlata(-31000);
					oPropiedad = new CPropiedad("Plaza San miguel", 31000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 31000;
					banco->Text = bancoDinero.ToString();
					propPC5 += "Plaza San miguel, ";
				this->Ninguno25->Text = propPC5;
				precioProPC += 31000;
				this->AH1->Visible = true;
				this->AH1->Location = System::Drawing::Point(770, 473);
				this->AH1->BringToFront();

				}
				break;
			case 19:
				propiedadPaga2("UPC", 5000);
				if (!pertenece1("UPC") && !pertenece2("UPC")) {
					personaje2->setPlata(-27000);
					oPropiedad = new CPropiedad("UPC", 27000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 27000;
					banco->Text = bancoDinero.ToString();
					propPC5 += "UPC, ";
				this->Ninguno25->Text += propPC5;
				precioProPC += 27000;
				this->AH2->Visible = true;
				this->AH2->Location = System::Drawing::Point(680, 473);
				this->AH2->BringToFront();
				}
				break;
			case 20:
				propiedadPaga2("Avenida Primavera", 5000);
				if (!pertenece1("Avenida Primavera") && !pertenece2("Avenida Primavera")) {
					personaje2->setPlata(-25000);
					oPropiedad = new CPropiedad("Avenida Primavera", 25000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 25000;
					banco->Text = bancoDinero.ToString();
					propPC5 += "Av. Primavera, ";
				this->Ninguno25->Text += propPC5;
				precioProPC += 25000;
				this->AH3->Visible = true;
				this->AH3->Location = System::Drawing::Point(590, 473);
				this->AH3->BringToFront();
				}
				break;
			case 21:
				propiedadPaga1("Bembos", 5000);
				if (!pertenece1("Bembos") && !pertenece2("Bembos")) {
					personaje2->setPlata(-39000);
					oPropiedad = new CPropiedad("Bembos", 39000);
					personaje2->agregarPropiedad(oPropiedad);
					bancoDinero = bancoDinero + 39000;
					banco->Text = bancoDinero.ToString();
					propPC5 += "Bembos, ";
					this->Ninguno25->Text += propPC5;
					precioProPC += 39000;
					this->AH7->Visible = true;
					this->AH7->Location = System::Drawing::Point(500, 473);
					this->AH7->BringToFront();
				}
				break;
			case 9: case 17:
				ajjj = r3->Next(1, 6);

				switch (ajjj)
				{
				case 1:
					casillasJugador2(0);
					this->posicion2 = 0;

					break;
				case 2:
					personaje2->setPlata(-2000);
					personaje1->setPlata(2000);

					break;
				case 3:
					personaje2->setPlata(-10000);
					bancoDinero = bancoDinero + 10000;
					banco->Text = bancoDinero.ToString();
					casillasJugador2(4);
					posicion2 = 4;
					personaje2->setCarcel(true);

					break;
				case 4:
					if (pertenece1("Av. Larco")) {
						personaje2->setPlata(-1000);
						personaje1->setPlata(1000);
					}
					else {
						personaje2->setPlata(-1000);
						bancoDinero = bancoDinero + 1000;
					}
					break;
				case 5:
					casillasJugador2(posicion2 - 5);
					posicion2 -= 5;

					break;
				}
				break;
			}
		}
		void TurnoJugador2(int posicion2) {
			String ^propJ1;
			String ^propJ2;
			String ^propJ3;
			String ^propJ4;
			String ^propJ5;
			switch (posicion2)
			{
			case 1:
				personaje2->setPlata(10000);
				bancoDinero = bancoDinero - 10000;
				banco->Text = bancoDinero.ToString();
				break;
			case 2:
				propiedadPaga2("Av. Larco", 13000);
				if (!pertenece1("Av. Larco") && !pertenece2("Av. Larco")) {
				result = MessageBox::Show("¿Deseas comprar la Avenida Larco?", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-13000);
				oPropiedad = new CPropiedad("Av. Larco", 13000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 13000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 13000;
				propJ1 += "Av. Larco, ";
				this->Ninguno21->Text += propJ1;
				this->AV1->Visible = true;
				this->AV1->Location = System::Drawing::Point(380, 373);
				this->AV1->BringToFront();
				}
				}

				break;
			case 3:
				propiedadPaga2("Av. Arequipa", 10000);
					if (!pertenece1("Av. Arequipa") && !pertenece2("Av. Arequipa")) {
				result = MessageBox::Show("¿Deseas comprar la Avenida Arequipa?", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-10000);
				oPropiedad = new CPropiedad("Av. Arequipa", 10000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 10000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 10000;
				propJ2 += "Av. Arequipa, ";
				this->Ninguno22->Text += propJ2;
				this->AV2->Visible = true;
				this->AV2->Location = System::Drawing::Point(380, 273);
				this->AV2->BringToFront();

				}
				}
				break;
			case 4:
				propiedadPaga2("Paseo la república", 90000);
					if (!pertenece1("Paseo la república") && !pertenece2("Paseo la república")) {
				result = MessageBox::Show("¿Deseas comprar Paseo la república? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-90000);
				oPropiedad = new CPropiedad("Paseo la república", 90000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 90000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 90000;
				propJ2 += "Paseo la república, ";
				this->Ninguno22->Text += propJ2;
				this->AV3->Visible = true;
				this->AV3->Location = System::Drawing::Point(380, 173);
				this->AV3->BringToFront();
				}
				}
				break;
			case 5:
				/*result = MessageBox::Show("De visita en Carcel deberás pagar 10000 soles al banco", "Aviso", MessageBoxButtons::OK);
				personaje2->setPlata(-10000);
				bancoDinero = bancoDinero + 10000;
				banco->Text = bancoDinero.ToString();*/
				break;
			case 6:
				propiedadPaga2("Jirón de la unión", 15000);
				if (!pertenece1("Jirón de la unión") && !pertenece2("Jirón de la unión")) {
				result = MessageBox::Show("¿Deseas comprar el Jirón de la unión? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-15000);
				oPropiedad = new CPropiedad("Jirón de la unión", 15000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 15000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 15000;
				propJ2 += "Jirón de la unión, ";
				this->Ninguno22->Text += propJ2;
				this->AH4->Visible = true;
				this->AH4->Location = System::Drawing::Point(410, 140);
				this->AH4->BringToFront();
				}
				}

				break;
			case 7:
				propiedadPaga2("Plaza San Martín", 14000);
				if (!pertenece1("Plaza San Martín") && !pertenece2("Plaza San Martín")) {
				result = MessageBox::Show("¿Deseas comprar la Plaza San Martín? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-14000);
				oPropiedad = new CPropiedad("Plaza San Martín", 14000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 14000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 14000;
				propJ3 += "Plz. San Martín, ";
				this->Ninguno23->Text += propJ3;
				this->AH5->Visible = true;
				this->AH5->Location = System::Drawing::Point(500, 140);
				this->AH5->BringToFront();
				}
				}
				break;
			case 8:
				propiedadPaga1("Centro Cívico", 5000);
				if (!pertenece1("Centro Cívico") && !pertenece2("Centro Cívico")) {
				result = MessageBox::Show("¿Deseas comprar el Centro cívico? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-5000);
				oPropiedad = new CPropiedad("Centro Cívico", 5000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 5000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 5000;
				propJ3 += "C. Cívico, ";
				this->Ninguno23->Text = propJ3;
				this->AH6->Visible = true;
				this->AH6->Location = System::Drawing::Point(590, 140);
				this->AH6->BringToFront();
				}
				}

				break;
			case 10:
				propiedadPaga2("Av. Bolivar", 17000);
				if (!pertenece1("Av. Bolivar") && !pertenece2("Av. Bolivar")) {
				result = MessageBox::Show("¿Deseas comprar la Avenida Bolivar? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-17000);
				oPropiedad = new CPropiedad("Av. Bolivar", 17000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 17000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 17000;
				propJ3 += "Av. Bolivar, ";
				this->Ninguno23->Text += propJ3;
				this->AH8->Visible = true;
				this->AH8->Location = System::Drawing::Point(770, 140);
				this->AH8->BringToFront();
				}
				}
				break;
			case 11:case 22:
				result = MessageBox::Show("Paga Impuestos", "Aviso", MessageBoxButtons::OK);
				personaje2->setPlata(-((10 / 100)*precioProT2));
				bancoDinero = bancoDinero + (0.10*precioProT2);
				banco->Text = bancoDinero.ToString();
				break;
			case 12:
				break;
			case 13:
				propiedadPaga2("UNMSM", 23000);
				if (!pertenece1("UNMSM") && !pertenece2("UNMSM")) {
				result = MessageBox::Show("¿Deseas comprar la Universidad Mayor de San Marcos? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-23000);
				oPropiedad = new CPropiedad("UNMSM", 23000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 23000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 23000;
				propJ4 += "UNMSM, ";
				this->Ninguno24->Text += propJ4;
				this->AV4->Visible = true;
				this->AV4->Location = System::Drawing::Point(950, 173);
				this->AV4->BringToFront();
				}
				}
				break;
			case 14:
				propiedadPaga2("Avenida Venezuela", 25000);
				if (!pertenece1("Avenida Venezuela") && !pertenece2("Avenida Venezuela")) {
				result = MessageBox::Show("¿Deseas comprar la Avenida Venezuela? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-25000);
				oPropiedad = new CPropiedad("Avenida Venezuela", 25000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 25000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 25000;
				propJ4 += "Av. Venezuela, ";
				this->Ninguno14->Text += propJ4;
				this->AV5->Visible = true;
				this->AV5->Location = System::Drawing::Point(950, 273);
				this->AV5->BringToFront();
				}
				}
				break;
			case 15:
				propiedadPaga1("Avenida la Marina", 17500);
				if (!pertenece1("Avenida la Marina")&& !pertenece2("Avenida la Marina")) {
				result = MessageBox::Show("¿Deseas comprar la Avenida la Marina? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-17500);
				oPropiedad = new CPropiedad("Avenida la Marina", 17500);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 17500;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 17500;
				propJ4 += "Av. La Marina, ";
				this->Ninguno24->Text += propJ4;
				this->AV6->Visible = true;
				this->AV6->Location = System::Drawing::Point(950, 373);
				this->AV6->BringToFront();
				}
				}
				break;
			case 16:
				result = MessageBox::Show("Vaya a la carcel, además pagará 1000 soles al banco ", "Aviso", MessageBoxButtons::OK);
				personaje2->setPlata(-1000);
				bancoDinero = bancoDinero + 10000;
				banco->Text = bancoDinero.ToString();
				casillasJugador2(4);
				this->posicion2 = 4;
				break;
			case 18:
				propiedadPaga2("Plaza San miguel", 31000);
				if (!pertenece1("Plaza San miguel") && !pertenece2("Plaza San miguel")) {
				result = MessageBox::Show("¿Deseas comprar la Plaza San miguel? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-31000);
				oPropiedad = new CPropiedad("Plaza San miguel", 31000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 31000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 31000;
				propJ5 += "Plz. San miguel, ";
				this->Ninguno25->Text += propJ5;
				this->AH1->Visible = true;
				this->AH1->Location = System::Drawing::Point(770, 473);
				this->AH1->BringToFront();
				}
				}
				break;
			case 19:
				propiedadPaga2("UPC", 31000);
				if (!pertenece1("UPC") && !pertenece2("UPC")) {
				result = MessageBox::Show("¿Deseas comprar la UPC? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-27000);
				oPropiedad = new CPropiedad("UPC", 27000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 27000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 27000;
				propJ5 += "UPC, ";
				this->Ninguno25->Text += propJ5;
				this->AH2->Visible = true;
				this->AH2->Location = System::Drawing::Point(680, 473);
				this->AH2->BringToFront();
				}
				}
				break;
			case 20:
				propiedadPaga2("Avenida Primavera", 25000);
				if (!pertenece1("Avenida Primavera") && !pertenece2("Avenida Primavera")) {
				result = MessageBox::Show("¿Deseas comprar la Avenida Primavera? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-25000);
				oPropiedad = new CPropiedad("Avenida Primavera", 25000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 25000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 25000;
				propJ5 += "Av. Primavera, ";
				this->Ninguno25->Text += propJ5;
				}
				}
				break;
			case 21:
				propiedadPaga1("Bembos", 39000);
				if (!pertenece1("Bembos") && !pertenece2("Bembos")) {
				result = MessageBox::Show("¿Deseas comprar Bembos? ", "Aviso", MessageBoxButtons::YesNo);
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
				personaje2->setPlata(-39000);
				oPropiedad = new CPropiedad("Bembos", 39000);
				personaje2->agregarPropiedad(oPropiedad);
				bancoDinero = bancoDinero + 39000;
				banco->Text = bancoDinero.ToString();
				precioProT2 += 39000;
				propJ5 += "Bembos, ";
				this->Ninguno25->Text += propJ5;
				this->AH7->Visible = true;
				this->AH7->Location = System::Drawing::Point(500, 473);
				this->AH7->BringToFront();
				}
				}
				break;
			case 9: case 17:
				ajjj = r3->Next(1, 6);

				switch (ajjj)
				{
				case 1:
					result = MessageBox::Show("Avance hasta la entrada", "Aviso", MessageBoxButtons::OK);
					casillasJugador2(0);
					this->posicion2 = 0;

					break;
				case 2:
					result = MessageBox::Show("Pague 2000 soles al otro jugador. ", "Aviso", MessageBoxButtons::OK);
					personaje2->setPlata(-2000);
					personaje1->setPlata(2000);
					break;
				case 3:
					result = MessageBox::Show("Vaya directo a la cárcel, no pase por La entrada", "Aviso", MessageBoxButtons::OK);
					personaje2->setPlata(-10000);
					bancoDinero = bancoDinero + 10000;
					banco->Text = bancoDinero.ToString();
					casillasJugador2(4);
					this->posicion2 = 4;
					personaje2->setCarcel(true);

					break;
				case 4:
					result = MessageBox::Show("Pague 1000 soles al dueño de la Av. Larco. ", "Aviso", MessageBoxButtons::OK);
					if (pertenece1("Av. Larco")) {
						personaje2->setPlata(-1000);
						personaje1->setPlata(1000);
					}
					else {
						personaje2->setPlata(-1000);
						bancoDinero = bancoDinero + 1000;
					}
					break;
				case 5:
					result = MessageBox::Show("Retroceda 5 espacios.", "Aviso", MessageBoxButtons::OK);
					casillasJugador2(posicion2 - 5);
					posicion2 -= 5;

					break;
				}
				break;
			}
		}

		void propiedadPaga2(string propiedad,int plata) {
			if (personaje1->getArregloProp().size() > 0) {
				for (int i = 0; i < personaje1->getArregloProp().size(); i++) {
					if (pertenece1(propiedad)) {
						personaje1->setPlata(plata);
						personaje2->setPlata(-plata);
					}
				}
			}
		}
		
		void propiedadPaga1(string propiedad, int plata) {
			if (personaje2->getArregloProp().size() > 0) {
				for (int i = 0; i < personaje2->getArregloProp().size(); i++) {
					if (pertenece2(propiedad)) {
						personaje2->setPlata(plata);
						personaje1->setPlata(-plata);
					}
				}
			}
			
		}
		bool pertenece1(string propiedad) {
			for (int i = 0; i < personaje1->getArregloProp().size(); i++) {
				if (personaje1->getArregloProp()[i]->GetNombre() == propiedad) {
					return true;
				}
			}
			return false;
		}
		bool pertenece2(string propiedad) {
			for (int i = 0; i < personaje2->getArregloProp().size(); i++) {
				if (personaje2->getArregloProp()[i]->GetNombre() == propiedad) {
					return true;
				}
			}
			return false;
		}

		void Cargar1() {
			ABanco1->Visible = true;
			OtroJug1->Visible = true;

			ABanco1->BringToFront();
			OtroJug1->BringToFront();
		}

		void Vender1(int pos, int adonde) {
			double val = personaje1->getArregloProp().at(pos)->Getprecio();
			double porc;
			switch (adonde)
			{
			case 1:
				porc = 0.8 * val;
				personaje2->agregarPropiedad(personaje1->getArregloProp().at(pos));
				personaje2->setPlata(-porc);
				break;
			case 2:
				porc = 0.6 * val;
				bancoDinero -= porc;
				banco->Text = bancoDinero.ToString();
				break;
			}

			personaje1->setPlata(int(porc));
			personaje1->eliminarPropiedad(personaje1->getArregloProp().at(pos)->GetNombre());
		}

		void Cargar2() {
			ABanco2->Visible = true;
			OtroJug2->Visible = true;
			ABanco2->BringToFront();
			OtroJug2->BringToFront();
		}

		void OcultarListas() {
			ABanco1->Visible = false;
			OtroJug1->Visible = false;
			ABanco2->Visible = false;
			OtroJug2->Visible = false;
		}

		void Vender2(int pos, int adonde) {
			double val = personaje1->getArregloProp().at(pos)->Getprecio();
			double porc;

			switch (adonde)
			{
			case 1:
				porc = 0.8 * val;
				personaje1->agregarPropiedad(personaje2->getArregloProp().at(pos));
				personaje1->setPlata(-porc);
				break;
			case 2:
				porc = 0.6 * val;
				bancoDinero -= porc;
				banco->Text = bancoDinero.ToString();
				break;
			}

			personaje2->setPlata(int(porc));
			personaje2->eliminarPropiedad(personaje2->getArregloProp().at(pos)->GetNombre());
		}

		void ocultarTodo() {
			this->Ninguno11->Visible = false;
			this->Ninguno12->Visible = false;
			this->Ninguno13->Visible = false;
			this->Ninguno14->Visible = false;
			this->Ninguno15->Visible = false;
			this->Ninguno21->Visible = false;
			this->Ninguno22->Visible = false;
			this->Ninguno23->Visible = false;
			this->Ninguno24->Visible = false;
			this->Ninguno25->Visible = false;
			this->puntoAzul->Visible = false;
			this->puntoRojo->Visible = false;
			this->Barco->Visible = false;
			this->Zapato->Visible = false;
			this->banco->Visible = false;
			this->txt1->Visible = false;
			this->Girar->Visible = false;
			this->n2->Visible = false;
			this->dineroJ1->Visible = false;
			this->dineroJ2->Visible = false;
			this->Nombre4->Visible = false;
			this->Nombre1->Visible = false;
			this->Nombre2->Visible = false;
			this->Nombre3->Visible = false;
			this->RH1->Visible = false;
			this->RH2->Visible = false;
			this->RH3->Visible = false;
			this->RH4->Visible = false;
			this->RH5->Visible = false;
			this->RH6->Visible = false;
			this->RH7->Visible = false;
			this->RH8->Visible = false;
			this->RV1->Visible = false;
			this->RV2->Visible = false;
			this->RV3->Visible = false;
			this->RV4->Visible = false;
			this->RV5->Visible = false;
			this->RV6->Visible = false;
			this->AH1->Visible = false;
			this->AH2->Visible = false;
			this->AH3->Visible = false;
			this->AH4->Visible = false;
			this->AH5->Visible = false;
			this->AH6->Visible = false;
			this->AH7->Visible = false;
			this->AH8->Visible = false;
			this->AV1->Visible = false;
			this->AV2->Visible = false;
			this->AV3->Visible = false;
			this->AV4->Visible = false;
			this->AV5->Visible = false;
			this->AV6->Visible = false;
			this->bVender1->Visible = false;
			this->bVender2->Visible = false;
			this->listBox1->Visible = false;
			this->listBox2->Visible = false;

		}


		string propID(int posicion) {
			string a;
			switch (posicion1) {
			case 2:
				a = "Av. Larco";
				return a;
				break;
			case 3:
				a = "Av. Arequipa";
				return a;
				break;
			case 4:
				a = "Paseo de la Republica ";
				return a;
				break;
			case 6:
				a = "Jirón de la unión";
				return a;
				break;
			case 7:
				a = "Plaza San Martín";
				return a;
				break;
			case 8:
				a = "Centro Cívico";
				return a;
				break;
			case 10:
				a = "Av. Bolivar";
				return a;
				break;
			case 13:
				a = "UNMSM";
				return a;
				break;
			case 14:
				a = "Av. Venezuela";
				return a;
				break;
			case 15:
				a = "Av. La Marina";
				return a;
				break;
			case 18:
				a = "Plaza San miguel";
				return a;
				break;
			case 19:
				a = "UPC";
				return a;
				break;
			case 20:
				a = "Av. Primavera";
				return a;
				break;
			case 21:
				a = "Bembos";
				return a;
				break;
			}
		}
	private: System::Void MyForm_Load_1(System::Object^  sender, System::EventArgs^  e) {
		this->InicioMostrar();
	}
private: System::Void btnJugar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->OcultarInicio();
		this->MostrarCubo();
}
private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
}
private: System::Void btnP1vsPC_Click(System::Object^  sender, System::EventArgs^  e) {
		this->ocultarCubo();
		this->P1vsPC(); 
}
private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Cancelar1();
		this->ocultarP1vsPC();
		this->ocultarP1vsP2();
}
private: System::Void btnSalir2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();

}
private: System::Void btnAceptar1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txt1->Text == ""|| txt1->Text == " "|| txt1->Text == "  "||txt1->Text == "  "
		|| txt1->Text == "   " || txt1->Text == "    " || txt1->Text == "      " || txt1->Text == "       "
		|| txt1->Text == "        " || txt1->Text == "         " || txt1->Text == "           "
		|| txt1->Text == "            " || txt1->Text == "            ") {
		MessageBox::Show("VOLVER A INGRESAR NOMBRE");
	}
	else {
		this->tJuego->Enabled = true;
		this->ocultarP1vsPC();
		this->mostrarElegirFigura1();
		

	}
}
private: System::Void btnAceptar2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtJugador1->Text == ""||txtJugador2->Text == ""||txtJugador1->Text == " " || txtJugador2->Text == " " || txtJugador1->Text == "  "
		||txtJugador1->Text == "   " || txtJugador1->Text == "    " || txtJugador1->Text == "      " || txtJugador1->Text == "       "
		||txtJugador1->Text == "        " || txtJugador1->Text == "         " || txtJugador1->Text == "           "
		||txtJugador1->Text == "            " || txtJugador1->Text == "            " || txtJugador2->Text == "  "
		|| txtJugador2->Text == "   " || txtJugador2->Text == "    " || txtJugador2->Text == "      " || txtJugador2->Text == "       "
		|| txtJugador2->Text == "        " || txtJugador2->Text == "         " || txtJugador2->Text == "           "
		|| txtJugador2->Text == "            " || txtJugador2->Text == "            ") {
		MessageBox::Show("VOLVER A INGRESAR NOMBRES");
	}
	else {

		this->tJuego2->Enabled = true;
		this->ocultarP1vsP2();
		this->mostrarElegirFigura2();
	}

}
private: System::Void btnP1vsP2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->ocultarCubo();
		this->P1vsP2();
}
		 int casillasid = 1;
private: System::Void tJuego_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->JuegoMostrar();

		Graphics ^g = this->pJuego->CreateGraphics();
		if (personaje1 != NULL) dineroJ1->Text = personaje1->getPlata().ToString();
		if (personaje2 != NULL) dineroJ2->Text = personaje2->getPlata().ToString();
		int cWidth = (int)g->VisibleClipBounds.Width;
		int cHeight = (int)g->VisibleClipBounds.Height;
		

		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		espacio->MaximumBuffer = System::Drawing::Size(cWidth + 1, cHeight + 1);
		BufferedGraphics ^buffer = espacio->Allocate(g, Drawing::Rectangle(0, 0, cWidth, cHeight));
		buffer->Graphics->Clear(System::Drawing::Color::FromArgb(1, 1, 1));

		Bitmap ^bmpMapa = gcnew Bitmap("Tablero2 - copia.jpg");
		Bitmap ^bmpFinal = gcnew Bitmap("Game Over.jpg");
		Bitmap ^bmpElegir = gcnew Bitmap("Elegir.jpg");
		Bitmap ^bmpFigura1 = gcnew Bitmap("Barco.png");
		Bitmap ^bmpFigura2 = gcnew Bitmap("Bota.png");
		Bitmap ^bmpFigura3 = gcnew Bitmap("caballo.png");
		Bitmap ^bmpFigura4 = gcnew Bitmap("carro.png");
		Bitmap ^bmpFigura5 = gcnew Bitmap("cosa.png");
		Bitmap ^bmpFigura6 = gcnew Bitmap("plancha.png");
		Bitmap ^bmpFigura7 = gcnew Bitmap("sombrero.png");
		Bitmap ^bmpDado1 = gcnew Bitmap("1.jpg");
		Bitmap ^bmpDado2 = gcnew Bitmap("2.jpg");
		Bitmap ^bmpDado3 = gcnew Bitmap("3.jpg");
		Bitmap ^bmpDado4 = gcnew Bitmap("4.jpg");
		Bitmap ^bmpDado5 = gcnew Bitmap("5.jpg");
		Bitmap ^bmpDado6 = gcnew Bitmap("6.jpg");
		Random ^r = gcnew Random();

		int matrizz[5][8] = { { 5,6,7,8,9,10,11,12 },
							  { 4,0,0,0,0,0,0,13 },
							  { 3,0,0,0,0,0,0,14 },
							  { 2,0,0,0,0,0,0,15 },
							  { 1,22,21,20,19,18,17,16 } };
		
			if (indiceMapa == 1) {
				mapa->dibujar2(buffer, bmpElegir);
				personaje1 = new CJugador(758, 225,0,4);//posicion para elegir las fichas
				personaje2 = new CJugador(758, 350,0,4);
				switch (id)
				{
				case 1:
					personaje1->dibujar(buffer, bmpFigura1);//la figura de la ficha 1
					break;
				case 2:
					personaje1->dibujar(buffer, bmpFigura2);// la figura de la ficha 2
					break;
				case 3:
					personaje1->dibujar(buffer, bmpFigura3);
					break;
				case 4:
					personaje1->dibujar(buffer, bmpFigura4);
					break;
				case 5:
					personaje1->dibujar(buffer, bmpFigura5);
					break;
				case 6:
					personaje1->dibujar(buffer, bmpFigura6);
					break;
				case 7:
					personaje1->dibujar(buffer, bmpFigura7);
					break;
				case 8:
					id = 1;// si llega al final de las fichas vuelve a la primera ficha 
					break;
				case 0:
					id = 7;// si retrocede vuele a la última ficha
					break;
				}
				switch (id2)
				{
				case 1:
					personaje2->dibujar(buffer, bmpFigura1);
					break;
				case 2:
					personaje2->dibujar(buffer, bmpFigura2);
					break;
				case 3:
					personaje2->dibujar(buffer, bmpFigura3);
					break;
				case 4:
					personaje2->dibujar(buffer, bmpFigura4);
					break;
				case 5:
					personaje2->dibujar(buffer, bmpFigura5);
					break;
				case 6:
					personaje2->dibujar(buffer, bmpFigura6);
					break;
				case 7:
					personaje2->dibujar(buffer, bmpFigura7);
					break;
				case 0:
					id2 = 7;
					break;
				case 8:
					id2 = 1;
					break;
				}
			}

			else if (indiceMapa == 2) {
					this->Text = personaje1->getArregloProp().size().ToString() + " " + personaje2->getArregloProp().size().ToString();
					matris->dibujarMatriz();
					int a = r->Next(1, 7);
					int asd = r3->Next(1, 7);
					mapa->dibujar(buffer, bmpMapa);
					delete bmpElegir;
					switch (id)
					{
					case 1:
						personaje1->dibujar(buffer, bmpFigura1);//la figura de la ficha 1
						this->Barco->Text = "Barco";
						this->Barco->Visible = true;
						break;
					case 2:
						personaje1->dibujar(buffer, bmpFigura2);// la figura de la ficha 2
						this->Barco->Text = "Bota";
						this->Barco->Visible = true;
						break;
					case 3:
						personaje1->dibujar(buffer, bmpFigura3);
						this->Barco->Text = "Caballo";
						this->Barco->Visible = true;
						break;
					case 4:
						personaje1->dibujar(buffer, bmpFigura4);
						this->Barco->Text = "Carro";
						this->Barco->Visible = true;
						break;
					case 5:
						personaje1->dibujar(buffer, bmpFigura5);
						this->Barco->Text = "Campana";
						this->Barco->Visible = true;
						break;
					case 6:
						personaje1->dibujar(buffer, bmpFigura6);
						this->Barco->Text = "Plancha";
						this->Barco->Visible = true;
						break;
					case 7:
						personaje1->dibujar(buffer, bmpFigura7);
						this->Barco->Text = "Sombrero";
						this->Barco->Visible = true;
						break;
					}
					switch (id2)
					{
					case 1:
						personaje2->dibujar(buffer, bmpFigura1);//la figura de la ficha 1
						this->Zapato->Text = "Barco";
						this->Zapato->Visible = true;
						break;
					case 2:
						personaje2->dibujar(buffer, bmpFigura2);// la figura de la ficha 2
						this->Zapato->Text = "Zapato";
						this->Zapato->Visible = true;
						break;
					case 3:
						personaje2->dibujar(buffer, bmpFigura3);
						this->Zapato->Text = "Perro";
						this->Zapato->Visible = true;
						break;
					case 4:
						personaje2->dibujar(buffer, bmpFigura4);
						this->Zapato->Text = "Carro";
						this->Zapato->Visible = true;
						break;
					case 5:
						personaje2->dibujar(buffer, bmpFigura5);
						this->Zapato->Text = "Campana";
						this->Zapato->Visible = true;
						break;
					case 6:
						personaje2->dibujar(buffer, bmpFigura6);
						this->Zapato->Text = "Plancha";
						this->Zapato->Visible = true;
						break;
					case 7:
						personaje2->dibujar(buffer, bmpFigura7);
						this->Zapato->Text = "Sombrero";
						this->Zapato->Visible = true;
						break;
					}
					if (!inicio) {
						if (iniciotimer1 != 20) {
							iniciotimer1++;
							{
								if (a == 1) {
									daditos->dibujarDado(buffer, bmpDado1);// dibuja los dados
								}
								else if (a == 2) {
									daditos->dibujarDado(buffer, bmpDado2);
								}
								else if (a == 3) {
									daditos->dibujarDado(buffer, bmpDado3);
								}
								else if (a == 4) {
									daditos->dibujarDado(buffer, bmpDado4);
								}
								else if (a == 5) {
									daditos->dibujarDado(buffer, bmpDado5);
								}
								else if (a == 6) {
									daditos->dibujarDado(buffer, bmpDado6);
								}
							}
						}
						else {
							
							if (turnoJ1&&ncasillas1 != 0) {//turno del jugador 1
								
								
								if (b == 1) {//pero debes de hacer un booleano(bandera) para poder verificar si es la pc o el otro jugador
									daditos->dibujarDado(buffer, bmpDado1);
									casillasJugador1(posicion1);
									posicion1++;

								}
								else if (b == 2) {
									daditos->dibujarDado(buffer, bmpDado2);
									casillasJugador1(posicion1);
									posicion1++;
								}
								else if (b == 3) {
									daditos->dibujarDado(buffer, bmpDado3);
									casillasJugador1(posicion1);
									posicion1++;
								}
								else if (b == 4) {
									daditos->dibujarDado(buffer, bmpDado4);
									casillasJugador1(posicion1);
									posicion1++;
								}
								else if (b == 5) {
									daditos->dibujarDado(buffer, bmpDado5);
									casillasJugador1(posicion1);
									posicion1++;
								}
								else if (b == 6) {
									daditos->dibujarDado(buffer, bmpDado6);
									casillasJugador1(posicion1);
									posicion1++;
								}
								ncasillas1--;
								if (ncasillas1 == 0) {
									this->Girar->Enabled = true;
									this->bVender1->Enabled = true;
									this->bVender1->BringToFront();
									TurnoJugador1(posicion1);
									listBox1->Items->Clear();
									for (int i = 0; i < personaje1->getArregloProp().size(); i++)
									{
										sNom = gcnew String(personaje1->getArregloProp().at(i)->GetNombre().c_str());
										listBox1->Items->Add(sNom);
									}
									turnoJ1 = false;
									turnoJ2 = true;
								}
								if (posicion1 > 21) {
									posicion1 = 0;
								}


							}
							else if (turnoJ2&&ncasillas2 != 0) {//turno del jugador 2(POr ahora solo es random por ser la computadora)
								
								if (c == 1) {//pero debes de hacer un booleano(bandera) para poder verificar si es la pc o el otro jugador
									daditos->dibujarDado(buffer, bmpDado1);
									casillasJugador2(posicion2);
									posicion2++;

								}
								else if (c == 2) {
									daditos->dibujarDado(buffer, bmpDado2);
									casillasJugador2(posicion2);
									posicion2++;
								}
								else if (c == 3) {
									daditos->dibujarDado(buffer, bmpDado3);
									casillasJugador2(posicion2);
									posicion2++;
								}
								else if (c == 4) {
									daditos->dibujarDado(buffer, bmpDado4);
									casillasJugador2(posicion2);
									posicion2++;
								}
								else if (c == 5) {
									daditos->dibujarDado(buffer, bmpDado5);
									casillasJugador2(posicion2);
									posicion2++;
								}
								else if (c == 6) {
									daditos->dibujarDado(buffer, bmpDado6);
									casillasJugador2(posicion2);
									posicion2++;
								}
								ncasillas2--;
								if (ncasillas2 == 0) {
									this->Girar->Enabled = true;
									//this->bVender2->BringToFront();
									TurnoComputadora(posicion2);
									listBox2->Items->Clear();
									for (int i = 0; i < personaje2->getArregloProp().size(); i++)
									{
										sNom = gcnew String(personaje2->getArregloProp().at(i)->GetNombre().c_str());
										listBox2->Items->Add(sNom);
									}
									turnoJ2 = false;
									turnoJ1 = true;
								}
								if (posicion2 > 21) {
									posicion2 = 0;
								}

							}
						}
					}
				}
			else if (indiceMapa == 3) {
					
					tJuego->Enabled = false;
					mapa->dibujar3(buffer, bmpFinal);
					if (personaje1->getPlata() < 3000) {
						MessageBox::Show("" + txt1->Text + "ha perdido.");
						ocultarTodo();
					}
					else if (personaje2->getPlata() < 3000) {
						MessageBox::Show("La computadora ha perdido.");
						ocultarTodo();

					}
				}
				
			
		buffer->Render(g);
		delete buffer, espacio, g;
		delete bmpMapa, bmpFigura1, bmpFigura2, bmpFigura3, bmpFigura4, bmpFigura5, bmpFigura6, bmpFigura7, bmpDado1, bmpDado2, bmpDado3, bmpDado4, bmpDado5, bmpDado6;
		
	
}
private: System::Void btnAvanzar_Click(System::Object^  sender, System::EventArgs^  e) {
		inicio = false;
		iniciotimer1 = 0;
		b = r2->Next(1, 7);
		ncasillas1 = b;
		c = r3->Next(1, 7);
		ncasillas2 = c;
		if (personaje1->getPlata() < 3000) {
			indiceMapa = 3;
		}
		else if (personaje2->getPlata() < 3000) {
			indiceMapa = 3;
		}
		this->Girar->Enabled = false;
		this->bVender1->Enabled = false;
		this->bVender2->Enabled = false;
}

private: System::Void btnContinuar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (id == id2) {
		MessageBox::Show("Los items no pueden ser iguales, volver a seleccionarlos");
	}
	else {
		indiceMapa = 2;
		inicio = true;
		this->pbIzquierda1->Visible = false;
		this->pbIzquierda2->Visible = false;
		this->pbDerecha1->Visible = false;
		this->pbDerecha2->Visible = false;
		this->btnContinuar1->Visible = false;
		this->iniciaJuego1();
		personaje1 = new CJugador(265, 530, 0, 4);
		personaje2 = new CJugador(332, 530, 0, 4);
		turnoJ1 = true;
		turnoJ2 = false;
	}
}
private: System::Void pbIzquierda1_Click(System::Object^  sender, System::EventArgs^  e) {
		id--;
}
private: System::Void pbDerecha1_Click(System::Object^  sender, System::EventArgs^  e) {
		id++;
}
private: System::Void pbIzquierda2_Click(System::Object^  sender, System::EventArgs^  e) {
		id2--;
}
private: System::Void pbDerecha2_Click(System::Object^  sender, System::EventArgs^  e) {
		id2++;
}
private: System::Void btnContinuar2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (id == id2) {
		MessageBox::Show("Los items no pueden ser iguales, volver a seleccionarlos");
	}
	else {
		indiceMapa = 2;
		inicio = true;
		this->pbIzquierda1->Visible = false;
		this->pbIzquierda2->Visible = false;
		this->pbDerecha1->Visible = false;
		this->pbDerecha2->Visible = false;
		this->btnContinuar2->Visible = false;
		this->iniciaJuego2();
		personaje1 = new CJugador(265, 530,0,4);
		personaje2 = new CJugador(332, 530,0,4);
		turnoJ1 = true;
		turnoJ2 = false;
		
	}
}
private: System::Void TxtCass_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tJuego2_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->JuegoMostrar();

	Graphics ^g = this->pJuego->CreateGraphics();
	if (personaje1 != NULL) dineroJ1->Text = personaje1->getPlata().ToString();
	if (personaje2 != NULL) dineroJ2->Text = personaje2->getPlata().ToString();
	int cWidth = (int)g->VisibleClipBounds.Width;
	int cHeight = (int)g->VisibleClipBounds.Height;


	BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
	espacio->MaximumBuffer = System::Drawing::Size(cWidth + 1, cHeight + 1);
	BufferedGraphics ^buffer = espacio->Allocate(g, Drawing::Rectangle(0, 0, cWidth, cHeight));
	buffer->Graphics->Clear(System::Drawing::Color::FromArgb(1, 1, 1));

	Bitmap ^bmpMapa = gcnew Bitmap("Tablero2 - copia.jpg");
	Bitmap ^bmpFinal = gcnew Bitmap("Game Over.jpg");
	Bitmap ^bmpElegir = gcnew Bitmap("Elegir.jpg");
	Bitmap ^bmpFigura1 = gcnew Bitmap("Barco.png");
	Bitmap ^bmpFigura2 = gcnew Bitmap("Bota.png");
	Bitmap ^bmpFigura3 = gcnew Bitmap("caballo.png");
	Bitmap ^bmpFigura4 = gcnew Bitmap("carro.png");
	Bitmap ^bmpFigura5 = gcnew Bitmap("cosa.png");
	Bitmap ^bmpFigura6 = gcnew Bitmap("plancha.png");
	Bitmap ^bmpFigura7 = gcnew Bitmap("sombrero.png");
	Bitmap ^bmpDado1 = gcnew Bitmap("1.jpg");
	Bitmap ^bmpDado2 = gcnew Bitmap("2.jpg");
	Bitmap ^bmpDado3 = gcnew Bitmap("3.jpg");
	Bitmap ^bmpDado4 = gcnew Bitmap("4.jpg");
	Bitmap ^bmpDado5 = gcnew Bitmap("5.jpg");
	Bitmap ^bmpDado6 = gcnew Bitmap("6.jpg");
	Random ^r = gcnew Random();

	int matrizz[5][8] = { { 5,6,7,8,9,10,11,12 },
	{ 4,0,0,0,0,0,0,13 },
	{ 3,0,0,0,0,0,0,14 },
	{ 2,0,0,0,0,0,0,15 },
	{ 1,22,21,20,19,18,17,16 } };

	if (indiceMapa == 1) {
		mapa->dibujar2(buffer, bmpElegir);
		personaje1 = new CJugador(758, 225, 0, 4);//posicion para elegir las fichas
		personaje2 = new CJugador(758, 350, 0, 4);
		switch (id)
		{
		case 1:
			personaje1->dibujar(buffer, bmpFigura1);//la figura de la ficha 1
			break;
		case 2:
			personaje1->dibujar(buffer, bmpFigura2);// la figura de la ficha 2
			break;
		case 3:
			personaje1->dibujar(buffer, bmpFigura3);
			break;
		case 4:
			personaje1->dibujar(buffer, bmpFigura4);
			break;
		case 5:
			personaje1->dibujar(buffer, bmpFigura5);
			break;
		case 6:
			personaje1->dibujar(buffer, bmpFigura6);
			break;
		case 7:
			personaje1->dibujar(buffer, bmpFigura7);
			break;
		case 8:
			id = 1;// si llega al final de las fichas vuelve a la primera ficha 
			break;
		case 0:
			id = 7;// si retrocede vuele a la última ficha
			break;
		}
		switch (id2)
		{
		case 1:
			personaje2->dibujar(buffer, bmpFigura1);
			break;
		case 2:
			personaje2->dibujar(buffer, bmpFigura2);
			break;
		case 3:
			personaje2->dibujar(buffer, bmpFigura3);
			break;
		case 4:
			personaje2->dibujar(buffer, bmpFigura4);
			break;
		case 5:
			personaje2->dibujar(buffer, bmpFigura5);
			break;
		case 6:
			personaje2->dibujar(buffer, bmpFigura6);
			break;
		case 7:
			personaje2->dibujar(buffer, bmpFigura7);
			break;
		case 0:
			id2 = 7;
			break;
		case 8:
			id2 = 1;
			break;
		}
	}

	else if (indiceMapa == 2) {
		this->Text = personaje1->getArregloProp().size().ToString() + " " + personaje2->getArregloProp().size().ToString();
		matris->dibujarMatriz();
		int a = r->Next(1, 7);
		int asd = r3->Next(1, 7);
		mapa->dibujar(buffer, bmpMapa);
		delete bmpElegir;
		switch (id)
		{
		case 1:
			personaje1->dibujar(buffer, bmpFigura1);//la figura de la ficha 1
			this->Barco->Text = "Barco";
			this->Barco->Visible = true;
			break;
		case 2:
			personaje1->dibujar(buffer, bmpFigura2);// la figura de la ficha 2
			this->Barco->Text = "Bota";
			this->Barco->Visible = true;
			break;
		case 3:
			personaje1->dibujar(buffer, bmpFigura3);
			this->Barco->Text = "Caballo";
			this->Barco->Visible = true;
			break;
		case 4:
			personaje1->dibujar(buffer, bmpFigura4);
			this->Barco->Text = "Carro";
			this->Barco->Visible = true;
			break;
		case 5:
			personaje1->dibujar(buffer, bmpFigura5);
			this->Barco->Text = "Campana";
			this->Barco->Visible = true;
			break;
		case 6:
			personaje1->dibujar(buffer, bmpFigura6);
			this->Barco->Text = "Plancha";
			this->Barco->Visible = true;
			break;
		case 7:
			personaje1->dibujar(buffer, bmpFigura7);
			this->Barco->Text = "Sombrero";
			this->Barco->Visible = true;
			break;
		}
		switch (id2)
		{
		case 1:
			personaje2->dibujar(buffer, bmpFigura1);//la figura de la ficha 1
			this->Zapato->Text = "Barco";
			this->Zapato->Visible = true;
			break;
		case 2:
			personaje2->dibujar(buffer, bmpFigura2);// la figura de la ficha 2
			this->Zapato->Text = "Zapato";
			this->Zapato->Visible = true;
			break;
		case 3:
			personaje2->dibujar(buffer, bmpFigura3);
			this->Zapato->Text = "Perro";
			this->Zapato->Visible = true;
			break;
		case 4:
			personaje2->dibujar(buffer, bmpFigura4);
			this->Zapato->Text = "Carro";
			this->Zapato->Visible = true;
			break;
		case 5:
			personaje2->dibujar(buffer, bmpFigura5);
			this->Zapato->Text = "Campana";
			this->Zapato->Visible = true;
			break;
		case 6:
			personaje2->dibujar(buffer, bmpFigura6);
			this->Zapato->Text = "Plancha";
			this->Zapato->Visible = true;
			break;
		case 7:
			personaje2->dibujar(buffer, bmpFigura7);
			this->Zapato->Text = "Sombrero";
			this->Zapato->Visible = true;
			break;
		}
		if (!inicio) {
			if (iniciotimer1 != 20) {
				iniciotimer1++;
				{
					if (a == 1) {
						daditos->dibujarDado(buffer, bmpDado1);// dibuja los dados
					}
					else if (a == 2) {
						daditos->dibujarDado(buffer, bmpDado2);
					}
					else if (a == 3) {
						daditos->dibujarDado(buffer, bmpDado3);
					}
					else if (a == 4) {
						daditos->dibujarDado(buffer, bmpDado4);
					}
					else if (a == 5) {
						daditos->dibujarDado(buffer, bmpDado5);
					}
					else if (a == 6) {
						daditos->dibujarDado(buffer, bmpDado6);
					}
				}
			}
			else {

				if (turnoJ1&&ncasillas1 != 0) {//turno del jugador 1


					if (b == 1) {//pero debes de hacer un booleano(bandera) para poder verificar si es la pc o el otro jugador
						daditos->dibujarDado(buffer, bmpDado1);
						casillasJugador1(posicion1);
						posicion1++;

					}
					else if (b == 2) {
						daditos->dibujarDado(buffer, bmpDado2);
						casillasJugador1(posicion1);
						posicion1++;
					}
					else if (b == 3) {
						daditos->dibujarDado(buffer, bmpDado3);
						casillasJugador1(posicion1);
						posicion1++;
					}
					else if (b == 4) {
						daditos->dibujarDado(buffer, bmpDado4);
						casillasJugador1(posicion1);
						posicion1++;
					}
					else if (b == 5) {
						daditos->dibujarDado(buffer, bmpDado5);
						casillasJugador1(posicion1);
						posicion1++;
					}
					else if (b == 6) {
						daditos->dibujarDado(buffer, bmpDado6);
						casillasJugador1(posicion1);
						posicion1++;
					}
					ncasillas1--;
					if (ncasillas1 == 0) {
						this->Girar->Enabled = true;
						this->bVender1->Enabled=true;
						this->bVender1->BringToFront();
						TurnoJugador1(posicion1);
						listBox1->Items->Clear();
						for (int i = 0; i < personaje1->getArregloProp().size(); i++)
						{
							sNom = gcnew String(personaje1->getArregloProp().at(i)->GetNombre().c_str());
							listBox1->Items->Add(sNom);
						}
						turnoJ1 = false;
						turnoJ2 = true;
					}
					if (posicion1 > 21) {
						posicion1 = 0;
					}


				}
				else if (turnoJ2&&ncasillas2 != 0) {//turno del jugador 2(POr ahora solo es random por ser la computadora)

					if (c == 1) {//pero debes de hacer un booleano(bandera) para poder verificar si es la pc o el otro jugador
						daditos->dibujarDado(buffer, bmpDado1);
						casillasJugador2(posicion2);
						posicion2++;

					}
					else if (c == 2) {
						daditos->dibujarDado(buffer, bmpDado2);
						casillasJugador2(posicion2);
						posicion2++;
					}
					else if (c == 3) {
						daditos->dibujarDado(buffer, bmpDado3);
						casillasJugador2(posicion2);
						posicion2++;
					}
					else if (c == 4) {
						daditos->dibujarDado(buffer, bmpDado4);
						casillasJugador2(posicion2);
						posicion2++;
					}
					else if (c == 5) {
						daditos->dibujarDado(buffer, bmpDado5);
						casillasJugador2(posicion2);
						posicion2++;
					}
					else if (c == 6) {
						daditos->dibujarDado(buffer, bmpDado6);
						casillasJugador2(posicion2);
						posicion2++;
					}
					ncasillas2--;
					if (ncasillas2 == 0) {
						this->Girar->Enabled = true;
						this->bVender2->Enabled = true;
						this->bVender2->BringToFront();
						TurnoJugador2(posicion2);
						listBox2->Items->Clear();
						for (int i = 0; i < personaje2->getArregloProp().size(); i++)
						{
							sNom = gcnew String(personaje2->getArregloProp().at(i)->GetNombre().c_str());
							listBox2->Items->Add(sNom);
						}
						turnoJ2 = false;
						turnoJ1 = true;
					}
					if (posicion2 > 21) {
						posicion2 = 0;
					}

				}
			}
		}
	}
	else if (indiceMapa == 3) {

		tJuego2->Enabled = false;
		mapa->dibujar3(buffer, bmpFinal);
		if (personaje1->getPlata() < 3000) {
			MessageBox::Show(""+txtJugador1->Text+ " ha perdido.");
			ocultarTodo();
		}
		else if (personaje2->getPlata() < 3000) {
			MessageBox::Show(" "+ txtJugador2->Text +" ha perdido.");
			ocultarTodo();
			
		}

	}

	buffer->Render(g);
	delete buffer, espacio, g;
	delete bmpMapa, bmpFigura1, bmpFigura2, bmpFigura3, bmpFigura4, bmpFigura5, bmpFigura6, bmpFigura7, bmpDado1, bmpDado2, bmpDado3, bmpDado4, bmpDado5, bmpDado6;

}

private: System::Void OtroJug2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Vender2(listBox2->SelectedIndex, 1);
	listBox2->Items->Clear();
	for (int i = 0; i < personaje2->getArregloProp().size(); i++)
	{
		sNom = gcnew String(personaje2->getArregloProp().at(i)->GetNombre().c_str());
		listBox2->Items->Add(sNom);
	}
	listBox1->Items->Clear();
	for (int i = 0; i < personaje1->getArregloProp().size(); i++)
	{
		sNom = gcnew String(personaje1->getArregloProp().at(i)->GetNombre().c_str());
		listBox1->Items->Add(sNom);
	}
	OcultarListas();
}
private: System::Void OtroJug1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Vender1(listBox1->SelectedIndex, 1);
	listBox1->Items->Clear();
	for (int i = 0; i < personaje1->getArregloProp().size(); i++)
	{
		sNom = gcnew String(personaje1->getArregloProp().at(i)->GetNombre().c_str());
		listBox1->Items->Add(sNom);
	}
	listBox2->Items->Clear();
	for (int i = 0; i < personaje2->getArregloProp().size(); i++)
	{
		sNom = gcnew String(personaje2->getArregloProp().at(i)->GetNombre().c_str());
		listBox2->Items->Add(sNom);
	}
	OcultarListas();
}
private: System::Void ABanco2_Click_1(System::Object^  sender, System::EventArgs^  e) {

	Vender2(listBox2->SelectedIndex, 2);
	listBox2->Items->Clear();
	for (int i = 0; i < personaje2->getArregloProp().size(); i++)
	{
			sNom = gcnew String(personaje2->getArregloProp().at(i)->GetNombre().c_str());
			listBox2->Items->Add(sNom);
				/*switch (posicion2) {
				case 2:
					this->AV1->Visible = false;
					break;
				case 3:
					this->AV2->Visible = false;
					break;
				case 4:
					this->AV3->Visible = false;
					break;
				case 6:
					this->AH4->Visible = false;
					break;
				case 7:
					this->AH5->Visible = false;
					break;
				case 8:
					this->AH6->Visible = false;
					break;
				case 10:
					this->AH8->Visible = false;
					break;
				case 13:
					this->AV4->Visible = false;
					break;
				case 14:
					this->AV5->Visible = false;
					break;
				case 15:
					this->AV6->Visible = false;
					break;
				case 18:
					this->AH1->Visible = false;
					break;
				case 19:
					this->AH2->Visible = false;
					break;
				case 20:
					this->AH3->Visible = false;
					break;
				case 21:
					this->AH7->Visible = false;
					break;
				}
			
		}*/
	}
	listBox1->Items->Clear();
	for (int i = 0; i < personaje1->getArregloProp().size(); i++)
	{
		//if (personaje1->getArregloProp().at(i)->GetNombre() == propID(posicion1)) {
			sNom = gcnew String(personaje1->getArregloProp().at(i)->GetNombre().c_str());
			listBox1->Items->Add(sNom);
			/*if (pertenece1(personaje1->getArregloProp().at(i)->GetNombre())) {
				switch (posicion1) {
				case 2:
					this->RV1->Visible = false;
					break;
				case 3:
					this->RV2->Visible = false;
					break;
				case 4:
					this->RV3->Visible = false;
					break;
				case 6:
					this->RH4->Visible = false;
					break;
				case 7:
					this->RH5->Visible = false;
					break;
				case 8:
					this->RH6->Visible = false;
					break;
				case 10:
					this->RH8->Visible = false;
					break;
				case 13:
					this->RV4->Visible = false;
					break;
				case 14:
					this->RV5->Visible = false;
					break;
				case 15:
					this->RV6->Visible = false;
					break;
				case 18:
					this->RH1->Visible = false;
					break;
				case 19:
					this->RH2->Visible = false;
					break;
				case 20:
					this->RH3->Visible = false;
					break;
				case 21:
					this->RH7->Visible = false;
					break;
				}
			}*/
		//}
	}
	OcultarListas();
}
private: System::Void ABanco1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Vender1(listBox1->SelectedIndex, 2);
	listBox1->Items->Clear();
	for (int i = 0; i < personaje1->getArregloProp().size(); i++)
	{
		sNom = gcnew String(personaje1->getArregloProp().at(i)->GetNombre().c_str());
		listBox1->Items->Add(sNom);
	}
	listBox2->Items->Clear();
	for (int i = 0; i < personaje2->getArregloProp().size(); i++)
	{
		sNom = gcnew String(personaje2->getArregloProp().at(i)->GetNombre().c_str());
		listBox2->Items->Add(sNom);
	}
	OcultarListas();
}
private: System::Void bVender2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (listBox2->SelectedIndex < 0)
	{
		MessageBox::Show("Elija una Propiedad");
		return;
	}
	Cargar2();
}
private: System::Void bVender1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (listBox1->SelectedIndex < 0)
	{
		MessageBox::Show("Elija una Propiedad");
		return;
	}
	Cargar1();
}
};
}
