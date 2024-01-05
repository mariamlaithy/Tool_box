#pragma once
#include<opencv2/opencv.hpp>
#include"iostream"
#include <opencv2/core/base.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

//#include <tesseract/baseapi.h>
//#include <tesseract/ocrclass.h>
//#include <leptonica/allheaders.h>#include<opencv2/opencv.hpp>
#include<iostream>
#include <msclr\marshal_cppstd.h>
#include<cmath>
#include <stack>
#include <fstream>

#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/ml/ml.hpp>

#include<iostream>
#include<sstream>
#include<random>
#include <filesystem>
#include <filesystem>
#include <msclr/marshal_cppstd.h>
#include <Windows.h>
#include <vector>
#include<stack>
#include <msclr/marshal_cppstd.h>
#include <opencv2/opencv.hpp>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include <Windows.h>
#include <vcclr.h>

//#include <Windows.Forms.h>


//#include <boost/filesystem.hpp>




std::string srcPicPathSTDString;
// global variables ///////////////////////////////////////////////////////////////////////////////
const int MIN_CONTOUR_AREA = 100;

const int RESIZED_IMAGE_WIDTH = 20;
const int RESIZED_IMAGE_HEIGHT = 30;


class ContourWithData {
public:
	// member variables ///////////////////////////////////////////////////////////////////////////
	std::vector<cv::Point> ptContour;           // contour
	cv::Rect boundingRect;                      // bounding rect for contour
	float fltArea;                              // area of contour

	///////////////////////////////////////////////////////////////////////////////////////////////
	bool checkIfContourIsValid() {                              // obviously in a production grade program
		if (fltArea < MIN_CONTOUR_AREA) return false;           // we would have a much more robust function for
		return true;                                            // identifying if a contour is valid !!
	}

	///////////////////////////////////////////////////////////////////////////////////////////////
	static bool sortByBoundingRectXPosition(const ContourWithData& cwdLeft, const ContourWithData& cwdRight) {      // this function allows us to sort
		return(cwdLeft.boundingRect.x < cwdRight.boundingRect.x);                                                   // the contours from left to right
	}

};


namespace finaalproject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	using namespace std;
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cv;
	// Function to convert System::String^ to std::string
	/*std::string ConvertString2StdString(System::String str) {
		return msclr::interop::marshal_as<std::string>(str);
	}*/
	//namespace fs = boost::filesystem;
	Mat src;
	Mat dst;

	




	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ show_button;
	private: System::Windows::Forms::Button^ eql_button;
	private: System::Windows::Forms::Button^ translation_button;
	private: System::Windows::Forms::TextBox^ y_value;
	private: System::Windows::Forms::TextBox^ x_value;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ angle;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ x3;

	private: System::Windows::Forms::TextBox^ x2;

	private: System::Windows::Forms::TextBox^ x1;
	private: System::Windows::Forms::TextBox^ x4;
	private: System::Windows::Forms::TextBox^ y3;

	private: System::Windows::Forms::TextBox^ y2;

	private: System::Windows::Forms::TextBox^ y1;
	private: System::Windows::Forms::TextBox^ y4;
	private: System::Windows::Forms::Button^ sk_button;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ zooming;
	private: System::Windows::Forms::Button^ flipx_button;
	private: System::Windows::Forms::Button^ flipy_button;
	private: System::Windows::Forms::Button^ flipxy_button;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ negative_button;
	private: System::Windows::Forms::Button^ gray_button;
	private: System::Windows::Forms::Button^ logtrans_button;
	private: System::Windows::Forms::Button^ bitplane_button;
	private: System::Windows::Forms::TextBox^ g_value;
	private: System::Windows::Forms::Button^ gamma_button;
	private: System::Windows::Forms::Button^ blinding_button;
	private: System::Windows::Forms::TextBox^ c1;
	private: System::Windows::Forms::TextBox^ c2;
	private: System::Windows::Forms::TextBox^ MAXX;

	private: System::Windows::Forms::TextBox^ th;
	private: System::Windows::Forms::Button^ thre_button;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ x;
	private: System::Windows::Forms::Button^ median_button;
	private: System::Windows::Forms::Button^ ocr_button;
	private: System::Windows::Forms::Button^ gussian_button;
	private: System::Windows::Forms::Button^ smoothing_button;
	private: System::Windows::Forms::Button^ saltpapper_button;
	private: System::Windows::Forms::Button^ edgedetection_button;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ soble_button;
	private: System::Windows::Forms::Button^ crop_button;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ Chatacter;
	private: System::Windows::Forms::Button^ lap_button;
	private: System::Windows::Forms::Button^ low_button;
	public: System::Windows::Forms::TextBox^ p1;
	private: System::Windows::Forms::TextBox^ d1;
	private: System::Windows::Forms::Button^ high_button;
	private: System::Windows::Forms::TextBox^ d2;
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::Label^ label4;




	public:
	private:















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->flipxy_button = (gcnew System::Windows::Forms::Button());
			this->flipy_button = (gcnew System::Windows::Forms::Button());
			this->flipx_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->zooming = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->sk_button = (gcnew System::Windows::Forms::Button());
			this->y4 = (gcnew System::Windows::Forms::TextBox());
			this->y3 = (gcnew System::Windows::Forms::TextBox());
			this->y2 = (gcnew System::Windows::Forms::TextBox());
			this->y1 = (gcnew System::Windows::Forms::TextBox());
			this->x4 = (gcnew System::Windows::Forms::TextBox());
			this->x3 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->angle = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->y_value = (gcnew System::Windows::Forms::TextBox());
			this->x_value = (gcnew System::Windows::Forms::TextBox());
			this->translation_button = (gcnew System::Windows::Forms::Button());
			this->eql_button = (gcnew System::Windows::Forms::Button());
			this->show_button = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->MAXX = (gcnew System::Windows::Forms::TextBox());
			this->th = (gcnew System::Windows::Forms::TextBox());
			this->thre_button = (gcnew System::Windows::Forms::Button());
			this->c2 = (gcnew System::Windows::Forms::TextBox());
			this->c1 = (gcnew System::Windows::Forms::TextBox());
			this->blinding_button = (gcnew System::Windows::Forms::Button());
			this->g_value = (gcnew System::Windows::Forms::TextBox());
			this->gamma_button = (gcnew System::Windows::Forms::Button());
			this->bitplane_button = (gcnew System::Windows::Forms::Button());
			this->logtrans_button = (gcnew System::Windows::Forms::Button());
			this->gray_button = (gcnew System::Windows::Forms::Button());
			this->negative_button = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->saltpapper_button = (gcnew System::Windows::Forms::Button());
			this->smoothing_button = (gcnew System::Windows::Forms::Button());
			this->gussian_button = (gcnew System::Windows::Forms::Button());
			this->x = (gcnew System::Windows::Forms::TextBox());
			this->median_button = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lap_button = (gcnew System::Windows::Forms::Button());
			this->edgedetection_button = (gcnew System::Windows::Forms::Button());
			this->soble_button = (gcnew System::Windows::Forms::Button());
			this->ocr_button = (gcnew System::Windows::Forms::Button());
			this->crop_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Chatacter = (gcnew System::Windows::Forms::TextBox());
			this->low_button = (gcnew System::Windows::Forms::Button());
			this->d1 = (gcnew System::Windows::Forms::TextBox());
			this->p1 = (gcnew System::Windows::Forms::TextBox());
			this->high_button = (gcnew System::Windows::Forms::Button());
			this->d2 = (gcnew System::Windows::Forms::TextBox());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->flipxy_button);
			this->groupBox1->Controls->Add(this->flipy_button);
			this->groupBox1->Controls->Add(this->flipx_button);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->zooming);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Controls->Add(this->sk_button);
			this->groupBox1->Controls->Add(this->y4);
			this->groupBox1->Controls->Add(this->y3);
			this->groupBox1->Controls->Add(this->y2);
			this->groupBox1->Controls->Add(this->y1);
			this->groupBox1->Controls->Add(this->x4);
			this->groupBox1->Controls->Add(this->x3);
			this->groupBox1->Controls->Add(this->x2);
			this->groupBox1->Controls->Add(this->x1);
			this->groupBox1->Controls->Add(this->angle);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->y_value);
			this->groupBox1->Controls->Add(this->x_value);
			this->groupBox1->Controls->Add(this->translation_button);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 93);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(262, 436);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"operation";
			// 
			// flipxy_button
			// 
			this->flipxy_button->Location = System::Drawing::Point(9, 278);
			this->flipxy_button->Name = L"flipxy_button";
			this->flipxy_button->Size = System::Drawing::Size(75, 50);
			this->flipxy_button->TabIndex = 22;
			this->flipxy_button->Text = L"flip2xy";
			this->flipxy_button->UseVisualStyleBackColor = true;
			this->flipxy_button->Click += gcnew System::EventHandler(this, &MyForm::flipxy_button_Click);
			// 
			// flipy_button
			// 
			this->flipy_button->Location = System::Drawing::Point(90, 278);
			this->flipy_button->Name = L"flipy_button";
			this->flipy_button->Size = System::Drawing::Size(75, 50);
			this->flipy_button->TabIndex = 21;
			this->flipy_button->Text = L"flip2y";
			this->flipy_button->UseVisualStyleBackColor = true;
			this->flipy_button->Click += gcnew System::EventHandler(this, &MyForm::flipy_button_Click);
			// 
			// flipx_button
			// 
			this->flipx_button->Location = System::Drawing::Point(180, 282);
			this->flipx_button->Name = L"flipx_button";
			this->flipx_button->Size = System::Drawing::Size(75, 46);
			this->flipx_button->TabIndex = 20;
			this->flipx_button->Text = L"flip2x";
			this->flipx_button->UseVisualStyleBackColor = true;
			this->flipx_button->Click += gcnew System::EventHandler(this, &MyForm::flipx_button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(1, 343);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 20;
			this->label3->Text = L"zooming";
			// 
			// zooming
			// 
			this->zooming->Location = System::Drawing::Point(93, 346);
			this->zooming->Name = L"zooming";
			this->zooming->Size = System::Drawing::Size(113, 27);
			this->zooming->TabIndex = 18;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(5, 374);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(250, 56);
			this->trackBar1->TabIndex = 17;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// sk_button
			// 
			this->sk_button->Location = System::Drawing::Point(36, 231);
			this->sk_button->Name = L"sk_button";
			this->sk_button->Size = System::Drawing::Size(93, 41);
			this->sk_button->TabIndex = 16;
			this->sk_button->Text = L"skweing";
			this->sk_button->UseVisualStyleBackColor = true;
			this->sk_button->Click += gcnew System::EventHandler(this, &MyForm::sk_button_Click);
			// 
			// y4
			// 
			this->y4->Location = System::Drawing::Point(87, 203);
			this->y4->Name = L"y4";
			this->y4->Size = System::Drawing::Size(73, 27);
			this->y4->TabIndex = 15;
			this->y4->Text = L"y4";
			// 
			// y3
			// 
			this->y3->Location = System::Drawing::Point(87, 175);
			this->y3->Name = L"y3";
			this->y3->Size = System::Drawing::Size(73, 27);
			this->y3->TabIndex = 14;
			this->y3->Text = L"y3";
			// 
			// y2
			// 
			this->y2->Location = System::Drawing::Point(89, 146);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(71, 27);
			this->y2->TabIndex = 13;
			this->y2->Text = L"y2";
			// 
			// y1
			// 
			this->y1->Location = System::Drawing::Point(89, 118);
			this->y1->Name = L"y1";
			this->y1->Size = System::Drawing::Size(71, 27);
			this->y1->TabIndex = 12;
			this->y1->Text = L"y1";
			// 
			// x4
			// 
			this->x4->Location = System::Drawing::Point(7, 204);
			this->x4->Name = L"x4";
			this->x4->Size = System::Drawing::Size(75, 27);
			this->x4->TabIndex = 11;
			this->x4->Text = L"x4";
			// 
			// x3
			// 
			this->x3->Location = System::Drawing::Point(6, 175);
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(76, 27);
			this->x3->TabIndex = 10;
			this->x3->Text = L"x3";
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(6, 147);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(76, 27);
			this->x2->TabIndex = 9;
			this->x2->Text = L"x2";
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(7, 119);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(75, 27);
			this->x1->TabIndex = 8;
			this->x1->Text = L"x1";
			// 
			// angle
			// 
			this->angle->Location = System::Drawing::Point(106, 80);
			this->angle->Name = L"angle";
			this->angle->Size = System::Drawing::Size(48, 27);
			this->angle->TabIndex = 7;
			this->angle->Text = L"angle";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(178, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"y_value";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(107, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"x_value";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Rotation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// y_value
			// 
			this->y_value->Location = System::Drawing::Point(181, 33);
			this->y_value->Name = L"y_value";
			this->y_value->Size = System::Drawing::Size(40, 27);
			this->y_value->TabIndex = 3;
			// 
			// x_value
			// 
			this->x_value->Location = System::Drawing::Point(112, 33);
			this->x_value->Name = L"x_value";
			this->x_value->Size = System::Drawing::Size(42, 27);
			this->x_value->TabIndex = 2;
			this->x_value->Text = L"\r\n";
			// 
			// translation_button
			// 
			this->translation_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->translation_button->Location = System::Drawing::Point(6, 21);
			this->translation_button->Name = L"translation_button";
			this->translation_button->Size = System::Drawing::Size(95, 46);
			this->translation_button->TabIndex = 1;
			this->translation_button->Text = L"Translation";
			this->translation_button->UseVisualStyleBackColor = true;
			this->translation_button->Click += gcnew System::EventHandler(this, &MyForm::translation_button_Click);
			// 
			// eql_button
			// 
			this->eql_button->Location = System::Drawing::Point(68, 141);
			this->eql_button->Name = L"eql_button";
			this->eql_button->Size = System::Drawing::Size(115, 49);
			this->eql_button->TabIndex = 0;
			this->eql_button->Text = L"constract";
			this->eql_button->UseVisualStyleBackColor = true;
			this->eql_button->Click += gcnew System::EventHandler(this, &MyForm::eql_button_Click);
			// 
			// show_button
			// 
			this->show_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show_button->Location = System::Drawing::Point(12, 12);
			this->show_button->Name = L"show_button";
			this->show_button->Size = System::Drawing::Size(75, 49);
			this->show_button->TabIndex = 1;
			this->show_button->Text = L"open";
			this->show_button->UseVisualStyleBackColor = true;
			this->show_button->Click += gcnew System::EventHandler(this, &MyForm::show_button_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->MAXX);
			this->groupBox2->Controls->Add(this->th);
			this->groupBox2->Controls->Add(this->thre_button);
			this->groupBox2->Controls->Add(this->c2);
			this->groupBox2->Controls->Add(this->c1);
			this->groupBox2->Controls->Add(this->blinding_button);
			this->groupBox2->Controls->Add(this->g_value);
			this->groupBox2->Controls->Add(this->gamma_button);
			this->groupBox2->Controls->Add(this->bitplane_button);
			this->groupBox2->Controls->Add(this->logtrans_button);
			this->groupBox2->Controls->Add(this->gray_button);
			this->groupBox2->Controls->Add(this->negative_button);
			this->groupBox2->Controls->Add(this->eql_button);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(291, 98);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(261, 373);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Enhancment";
			// 
			// MAXX
			// 
			this->MAXX->Location = System::Drawing::Point(140, 336);
			this->MAXX->Name = L"MAXX";
			this->MAXX->Size = System::Drawing::Size(105, 27);
			this->MAXX->TabIndex = 11;
			this->MAXX->Text = L"max_value";
			// 
			// th
			// 
			this->th->Location = System::Drawing::Point(138, 308);
			this->th->Name = L"th";
			this->th->Size = System::Drawing::Size(107, 27);
			this->th->TabIndex = 10;
			this->th->Text = L"thre_value";
			// 
			// thre_button
			// 
			this->thre_button->Location = System::Drawing::Point(6, 308);
			this->thre_button->Name = L"thre_button";
			this->thre_button->Size = System::Drawing::Size(105, 54);
			this->thre_button->TabIndex = 9;
			this->thre_button->Text = L"Thresshold";
			this->thre_button->UseVisualStyleBackColor = true;
			this->thre_button->Click += gcnew System::EventHandler(this, &MyForm::thre_button_Click);
			// 
			// c2
			// 
			this->c2->Location = System::Drawing::Point(140, 277);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(105, 27);
			this->c2->TabIndex = 8;
			this->c2->Text = L"image2";
			// 
			// c1
			// 
			this->c1->Location = System::Drawing::Point(139, 248);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(106, 27);
			this->c1->TabIndex = 7;
			this->c1->Text = L"image1";
			// 
			// blinding_button
			// 
			this->blinding_button->Location = System::Drawing::Point(6, 248);
			this->blinding_button->Name = L"blinding_button";
			this->blinding_button->Size = System::Drawing::Size(105, 47);
			this->blinding_button->TabIndex = 6;
			this->blinding_button->Text = L"blinding";
			this->blinding_button->UseVisualStyleBackColor = true;
			this->blinding_button->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// g_value
			// 
			this->g_value->Location = System::Drawing::Point(138, 207);
			this->g_value->Name = L"g_value";
			this->g_value->Size = System::Drawing::Size(105, 27);
			this->g_value->TabIndex = 5;
			this->g_value->Text = L"g_value";
			// 
			// gamma_button
			// 
			this->gamma_button->Location = System::Drawing::Point(6, 196);
			this->gamma_button->Name = L"gamma_button";
			this->gamma_button->Size = System::Drawing::Size(105, 44);
			this->gamma_button->TabIndex = 4;
			this->gamma_button->Text = L"gamma";
			this->gamma_button->UseVisualStyleBackColor = true;
			this->gamma_button->Click += gcnew System::EventHandler(this, &MyForm::gamma_button_Click);
			// 
			// bitplane_button
			// 
			this->bitplane_button->Location = System::Drawing::Point(140, 80);
			this->bitplane_button->Name = L"bitplane_button";
			this->bitplane_button->Size = System::Drawing::Size(105, 50);
			this->bitplane_button->TabIndex = 3;
			this->bitplane_button->Text = L"bitplane";
			this->bitplane_button->UseVisualStyleBackColor = true;
			this->bitplane_button->Click += gcnew System::EventHandler(this, &MyForm::bitplane_button_Click);
			// 
			// logtrans_button
			// 
			this->logtrans_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logtrans_button->Location = System::Drawing::Point(6, 75);
			this->logtrans_button->Name = L"logtrans_button";
			this->logtrans_button->Size = System::Drawing::Size(105, 52);
			this->logtrans_button->TabIndex = 2;
			this->logtrans_button->Text = L"logtransformation";
			this->logtrans_button->UseVisualStyleBackColor = true;
			this->logtrans_button->Click += gcnew System::EventHandler(this, &MyForm::logtrans_button_Click);
			// 
			// gray_button
			// 
			this->gray_button->Location = System::Drawing::Point(140, 19);
			this->gray_button->Name = L"gray_button";
			this->gray_button->Size = System::Drawing::Size(105, 50);
			this->gray_button->TabIndex = 1;
			this->gray_button->Text = L"gray.slicing";
			this->gray_button->UseVisualStyleBackColor = true;
			this->gray_button->Click += gcnew System::EventHandler(this, &MyForm::gray_button_Click);
			// 
			// negative_button
			// 
			this->negative_button->Location = System::Drawing::Point(6, 21);
			this->negative_button->Name = L"negative_button";
			this->negative_button->Size = System::Drawing::Size(105, 48);
			this->negative_button->TabIndex = 0;
			this->negative_button->Text = L"negative";
			this->negative_button->UseVisualStyleBackColor = true;
			this->negative_button->Click += gcnew System::EventHandler(this, &MyForm::negative_button_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->saltpapper_button);
			this->groupBox3->Controls->Add(this->smoothing_button);
			this->groupBox3->Controls->Add(this->gussian_button);
			this->groupBox3->Controls->Add(this->x);
			this->groupBox3->Controls->Add(this->median_button);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(569, 112);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(277, 333);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"filters";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(72, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Smoothing";
			// 
			// saltpapper_button
			// 
			this->saltpapper_button->Location = System::Drawing::Point(6, 78);
			this->saltpapper_button->Name = L"saltpapper_button";
			this->saltpapper_button->Size = System::Drawing::Size(125, 43);
			this->saltpapper_button->TabIndex = 4;
			this->saltpapper_button->Text = L"salt.papper";
			this->saltpapper_button->UseVisualStyleBackColor = true;
			this->saltpapper_button->Click += gcnew System::EventHandler(this, &MyForm::saltpapper_button_Click);
			// 
			// smoothing_button
			// 
			this->smoothing_button->Location = System::Drawing::Point(6, 145);
			this->smoothing_button->Name = L"smoothing_button";
			this->smoothing_button->Size = System::Drawing::Size(125, 45);
			this->smoothing_button->TabIndex = 3;
			this->smoothing_button->Text = L"smoothing";
			this->smoothing_button->UseVisualStyleBackColor = true;
			this->smoothing_button->Click += gcnew System::EventHandler(this, &MyForm::smoothing_button_Click);
			// 
			// gussian_button
			// 
			this->gussian_button->Location = System::Drawing::Point(143, 145);
			this->gussian_button->Name = L"gussian_button";
			this->gussian_button->Size = System::Drawing::Size(128, 45);
			this->gussian_button->TabIndex = 2;
			this->gussian_button->Text = L"gussian";
			this->gussian_button->UseVisualStyleBackColor = true;
			this->gussian_button->Click += gcnew System::EventHandler(this, &MyForm::gussian_button_Click);
			// 
			// x
			// 
			this->x->Location = System::Drawing::Point(153, 34);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(95, 27);
			this->x->TabIndex = 1;
			this->x->Text = L"suitable_value";
			// 
			// median_button
			// 
			this->median_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->median_button->Location = System::Drawing::Point(6, 24);
			this->median_button->Name = L"median_button";
			this->median_button->Size = System::Drawing::Size(125, 49);
			this->median_button->TabIndex = 0;
			this->median_button->Text = L"Rmov_salt&papper";
			this->median_button->UseVisualStyleBackColor = true;
			this->median_button->Click += gcnew System::EventHandler(this, &MyForm::median_button_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->lap_button);
			this->groupBox4->Controls->Add(this->edgedetection_button);
			this->groupBox4->Controls->Add(this->soble_button);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(569, 305);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(277, 140);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"high_Pass_filter=>Sharping";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// lap_button
			// 
			this->lap_button->Location = System::Drawing::Point(6, 76);
			this->lap_button->Name = L"lap_button";
			this->lap_button->Size = System::Drawing::Size(105, 45);
			this->lap_button->TabIndex = 1;
			this->lap_button->Text = L"laplician";
			this->lap_button->UseVisualStyleBackColor = true;
			this->lap_button->Click += gcnew System::EventHandler(this, &MyForm::lap_button_Click);
			// 
			// edgedetection_button
			// 
			this->edgedetection_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->edgedetection_button->Location = System::Drawing::Point(127, 41);
			this->edgedetection_button->Name = L"edgedetection_button";
			this->edgedetection_button->Size = System::Drawing::Size(121, 48);
			this->edgedetection_button->TabIndex = 5;
			this->edgedetection_button->Text = L"edg_detection";
			this->edgedetection_button->UseVisualStyleBackColor = true;
			this->edgedetection_button->Click += gcnew System::EventHandler(this, &MyForm::edgedetection_button_Click);
			// 
			// soble_button
			// 
			this->soble_button->Location = System::Drawing::Point(6, 21);
			this->soble_button->Name = L"soble_button";
			this->soble_button->Size = System::Drawing::Size(105, 47);
			this->soble_button->TabIndex = 0;
			this->soble_button->Text = L"soble";
			this->soble_button->UseVisualStyleBackColor = true;
			this->soble_button->Click += gcnew System::EventHandler(this, &MyForm::soble_button_Click);
			// 
			// ocr_button
			// 
			this->ocr_button->Location = System::Drawing::Point(852, 172);
			this->ocr_button->Name = L"ocr_button";
			this->ocr_button->Size = System::Drawing::Size(75, 56);
			this->ocr_button->TabIndex = 4;
			this->ocr_button->Text = L"OCR";
			this->ocr_button->UseVisualStyleBackColor = true;
			this->ocr_button->Click += gcnew System::EventHandler(this, &MyForm::ocr_button_Click);
			// 
			// crop_button
			// 
			this->crop_button->Location = System::Drawing::Point(852, 120);
			this->crop_button->Name = L"crop_button";
			this->crop_button->Size = System::Drawing::Size(75, 46);
			this->crop_button->TabIndex = 5;
			this->crop_button->Text = L"crop";
			this->crop_button->UseVisualStyleBackColor = true;
			this->crop_button->Click += gcnew System::EventHandler(this, &MyForm::crop_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(1044, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(316, 477);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// Chatacter
			// 
			this->Chatacter->Location = System::Drawing::Point(942, 190);
			this->Chatacter->Name = L"Chatacter";
			this->Chatacter->Size = System::Drawing::Size(76, 22);
			this->Chatacter->TabIndex = 7;
			// 
			// low_button
			// 
			this->low_button->Location = System::Drawing::Point(575, 451);
			this->low_button->Name = L"low_button";
			this->low_button->Size = System::Drawing::Size(125, 49);
			this->low_button->TabIndex = 8;
			this->low_button->Text = L"lowpass_filter";
			this->low_button->UseVisualStyleBackColor = true;
			this->low_button->Click += gcnew System::EventHandler(this, &MyForm::low_button_Click);
			// 
			// d1
			// 
			this->d1->Location = System::Drawing::Point(739, 464);
			this->d1->Name = L"d1";
			this->d1->Size = System::Drawing::Size(107, 22);
			this->d1->TabIndex = 9;
			this->d1->Text = L"freq_value";
			// 
			// p1
			// 
			this->p1->AcceptsReturn = true;
			this->p1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->p1->Location = System::Drawing::Point(99, 23);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(100, 22);
			this->p1->TabIndex = 10;
			this->p1->TextChanged += gcnew System::EventHandler(this, &MyForm::p1_TextChanged);
			// 
			// high_button
			// 
			this->high_button->Location = System::Drawing::Point(575, 506);
			this->high_button->Name = L"high_button";
			this->high_button->Size = System::Drawing::Size(125, 54);
			this->high_button->TabIndex = 11;
			this->high_button->Text = L"highpass_filter";
			this->high_button->UseVisualStyleBackColor = true;
			this->high_button->Click += gcnew System::EventHandler(this, &MyForm::high_button_Click);
			// 
			// d2
			// 
			this->d2->Location = System::Drawing::Point(739, 523);
			this->d2->Name = L"d2";
			this->d2->Size = System::Drawing::Size(107, 22);
			this->d2->TabIndex = 12;
			this->d2->Text = L"freq_value";
			// 
			// reset_button
			// 
			this->reset_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_button->Location = System::Drawing::Point(1234, 506);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(116, 54);
			this->reset_button->TabIndex = 13;
			this->reset_button->Text = L"Reset";
			this->reset_button->UseVisualStyleBackColor = true;
			this->reset_button->Click += gcnew System::EventHandler(this, &MyForm::reset_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1362, 572);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->d2);
			this->Controls->Add(this->high_button);
			this->Controls->Add(this->p1);
			this->Controls->Add(this->d1);
			this->Controls->Add(this->low_button);
			this->Controls->Add(this->Chatacter);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->crop_button);
			this->Controls->Add(this->ocr_button);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->show_button);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
	}

	private: System::Void show_button_Click(System::Object^ sender, System::EventArgs^ e) {
		
		System::String^ userInput = p1->Text;

		// Convert the String to a standard C++ string
		std::string userInputString = msclr::interop::marshal_as<std::string>(userInput);

		// Load the image using OpenCV
		Mat image = imread(userInputString);

		// Check if the image was successfully loaded
		if (!image.empty())
		{
			// Assuming 'src' is a Mat variable declared earlier
			src = image.clone();
		}
		namedWindow("show", 0);
		imshow("show", src);
		
		

		// for undo
		//for (int i = 0; i < 2500; ++i) {
		//	 dst[i] = src.clone(); // Use clone() to create a copy
		//}
	}
	

		  

	private: System::Void eql_button_Click(System::Object^ sender, System::EventArgs^ e) {
		equalizeHist(src, src);
		namedWindow("show", 0);
		imshow("show", src);

	}
private: System::Void translation_button_Click(System::Object^ sender, System::EventArgs^ e) {
	int tx = Convert::ToInt32(x_value->Text);
	int ty = Convert::ToInt32(y_value->Text);
	Mat tr = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
	warpAffine(src, src, tr, src.size());
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int angl = Convert::ToInt32(angle->Text);
	Mat R = getRotationMatrix2D(Point2f(src.rows / 2, src.cols / 2), angl, 1);
	warpAffine(src, src, R, src.size());
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void sk_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Point2f src_p[3], dst_p[3];

	src_p[0] = Point2f(Convert::ToSingle(x1->Text), Convert::ToSingle(y1->Text));
	src_p[1] = Point2f(src.rows - 1, Convert::ToSingle(y2->Text));
	src_p[2] = Point2f(Convert::ToSingle(x2->Text), src.cols - 1);

	dst_p[0] = Point2f(Convert::ToSingle(x3->Text), Convert::ToSingle(y3->Text));
	dst_p[1] = Point2f(src.rows - 1, Convert::ToSingle(y4->Text));
	dst_p[2] = Point2f(Convert::ToSingle(x4->Text), src.cols - 1);

	Mat SM = getAffineTransform(src_p, dst_p);

	warpAffine(src, src, SM, src.size());

	namedWindow("show", 0);
	imshow("show", src);

}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	double zoomFactor = (double)trackBar1->Value / 10.0; // Assuming the trackBar range is from 0 to 20
	zooming->Text = System::Convert::ToString(zoomFactor);

	if (zoomFactor < 0.1) { // Handle very small zoom factors
		zoomFactor = 0.1; // Set a minimum zoom factor
	}
	else if (zoomFactor > 5.0) { // Handle very large zoom factors
		zoomFactor = 5.0; // Set a maximum zoom factor
	}

	Mat zoomed;
	resize(src, zoomed, cv::Size(), zoomFactor, zoomFactor, INTER_LINEAR);

	namedWindow("show", 0);
	imshow("show", zoomed);
}
private: System::Void flipx_button_Click(System::Object^ sender, System::EventArgs^ e) {
	flip(src, src, 0);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void flipy_button_Click(System::Object^ sender, System::EventArgs^ e) {
	flip(src, src, 1);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void flipxy_button_Click(System::Object^ sender, System::EventArgs^ e) {
	flip(src, src, 0);
	namedWindow("show", -1);
	imshow("show", src);
}
private: System::Void negative_button_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			src.at<uchar>(i, j) = 255 - src.at<uchar>(i, j);

		}
	}
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void gray_button_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			if (src.at<uchar>(i, j) > 130 && src.at<uchar>(i, j) < 200)
				src.at<uchar>(i, j) = 255;
			else src.at<uchar>(i, j) = src.at<uchar>(i, j);


		}
	}
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void logtrans_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat dst(src.rows, src.cols, CV_32FC1);

	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {

			dst.at<float>(i, j) = log(src.at<uchar>(i, j) + 1);

		}
	}
	normalize(dst, dst, 0, 255, NORM_MINMAX);
	convertScaleAbs(dst, dst);
	dst.copyTo(src);
	namedWindow("show", 0);
	imshow("show", src);

}
private: System::Void bitplane_button_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			if (src.at<uchar>(i, j) & 64)
				src.at<uchar>(i, j) = 255;
			else src.at<uchar>(i, j) = 0;


		}
	}
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void gamma_button_Click(System::Object^ sender, System::EventArgs^ e) {
	double ga = Convert::ToDouble(g_value->Text);

	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			src.at<float>(i, j) = powf(src.at<uchar>(i, j), ga);

		}
	}
	normalize(src, src, 0, 255, NORM_MINMAX);
	convertScaleAbs(src, src);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat dst = imread("61284b34d3935.jpg", 0);
	Mat blind(src.rows, src.cols, CV_8UC1);
	resize(dst, dst, cv::Size(src.rows, src.cols), 0, 0, 0);

	double c1_value = Convert::ToDouble(c1->Text);
	double c2_value = Convert::ToDouble(c2->Text);
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			blind.at<uchar>(i, j) = src.at<uchar>(i, j) * c1_value + dst.at<uchar>(i, j) * c2_value;



		}
	}
	blind.copyTo(src);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void thre_button_Click(System::Object^ sender, System::EventArgs^ e) {
	double thre_value = Convert::ToDouble(th->Text);
	double max = Convert::ToDouble(MAXX->Text);

	threshold(src, src, thre_value, max, THRESH_BINARY);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void median_button_Click(System::Object^ sender, System::EventArgs^ e) {
	double x_value = Convert::ToDouble(x->Text);
	medianBlur(src, src, x_value);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void gussian_button_Click(System::Object^ sender, System::EventArgs^ e) {
	GaussianBlur(src, src, cv::Size(3, 3), 0);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void smoothing_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat kernel_G = (Mat_<float>(3, 3) << 1, 2, 1, 2, 4, 2, 1, 2, 1);
	kernel_G = kernel_G / 16;
	filter2D(src, src, CV_8UC1, kernel_G);
	namedWindow("show", 0);
	imshow("show", src);

}
private: System::Void saltpapper_button_Click(System::Object^ sender, System::EventArgs^ e) {
	double noiseRatio = 0.02;
	Mat noise = Mat::zeros(src.size(), src.type());
	randu(noise, 0, 255);

	Mat salt = noise > 255 * (1 - noiseRatio);
	Mat pepper = noise < 255 * noiseRatio;

	src.setTo(255, salt);
	src.setTo(0, pepper);

	namedWindow("show", 0);
	imshow("show", src);

}
private: System::Void edgedetection_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat kernel_L = (Mat_<float>(3, 3) << -1, -1, -1, -1, 8, -1, -1, -1, -1);
	filter2D(src, src, CV_8UC1, kernel_L);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void soble_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat dst_12, dst_13, dst_14, dst_15, dst_16, dst_17;
	Mat kernel_TH = (Mat_<int>(3, 3) << -1, -2, -1, 0, 0, 0, 1, 2, 1);
	filter2D(src, dst_12, CV_8UC1, kernel_TH);

	Mat kernel_TV = (Mat_<int>(3, 3) << -1, 0, 1, -2, 0, 2, -1, 0, 1);
	filter2D(src, dst_14, CV_8UC1, kernel_TV);

	Mat kernel_Td = (Mat_<int>(3, 3) << 2, 1, 0, 1, 0, -1, 0, -1, -2);
	filter2D(src, dst_15, CV_8UC1, kernel_Td);

	addWeighted(dst_12, 1, dst_14, 1, 0, dst_13);
	addWeighted(dst_15, 1, dst_13, 1, 0, dst_16);
	dst_16.copyTo(src);
	namedWindow("show", 0);
	imshow("show", src);

}
private: System::Void crop_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (src.empty()) {
		MessageBox::Show("Error loading image", "Eror Massage", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Rect roi;
	roi = selectROI("Edited.jpg", src);



	if (!roi.empty())
	{
		imwrite("edited.jpg", src(roi));
		src = src(roi);
		//src(roi).copyTo(src);
		destroyWindow("Edited.jpg");
		pictureBox1->ImageLocation = L"./Edited.jpg";
		

	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void ocr_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
	std::vector<ContourWithData> allContoursWithData;           // declare empty vectors,
	std::vector<ContourWithData> validContoursWithData;         // we will fill these shortly

	// read in training classifications ///////////////////////////////////////////////////

	cv::Mat matClassificationInts;      // we will read the classification numbers into this variable as though it is a vector

	cv::FileStorage fsClassifications("classifications.xml", cv::FileStorage::READ);        // open the classifications file

	if (fsClassifications.isOpened() == false) {                                                    // if the file was not opened successfully
		std::cout << "error, unable to open training classifications file, exiting program\n\n";    // show error message
		return;                                                                                  // and exit program
	}

	fsClassifications["classifications"] >> matClassificationInts;      // read classifications section into Mat classifications variable
	fsClassifications.release();                                        // close the classifications file

	// read in training images ////////////////////////////////////////////////////////////

	cv::Mat matTrainingImagesAsFlattenedFloats;         // we will read multiple images into this single image variable as though it is a vector

	cv::FileStorage fsTrainingImages("images.xml", cv::FileStorage::READ);          // open the training images file

	if (fsTrainingImages.isOpened() == false) {                                                 // if the file was not opened successfully
		std::cout << "error, unable to open training images file, exiting program\n\n";         // show error message
		return;                                                                              // and exit program
	}

	fsTrainingImages["images"] >> matTrainingImagesAsFlattenedFloats;           // read images section into Mat training images variable
	fsTrainingImages.release();                                                 // close the traning images file

	// train //////////////////////////////////////////////////////////////////////////////

	cv::Ptr<cv::ml::KNearest>  kNearest(cv::ml::KNearest::create());            // instantiate the KNN object

	// finally we get to the call to train, note that both parameters have to be of type Mat (a single Mat)
	// even though in reality they are multiple images / numbers
	kNearest->train(matTrainingImagesAsFlattenedFloats, cv::ml::ROW_SAMPLE, matClassificationInts);

	// test ///////////////////////////////////////////////////////////////////////////////

	cv::Mat matTestingNumbers = src;            // read in the test numbers image

	if (matTestingNumbers.empty()) {                                // if unable to open image
		std::cout << "error: image not read from file\n\n";         // show error message on command line
		return;                                                  // and exit program
	}

	cv::Mat matGrayscale;           //
	cv::Mat matBlurred;             // declare more image variables
	cv::Mat matThresh;              //
	cv::Mat matThreshCopy;          //

	//  cv::cvtColor(matTestingNumbers, matGrayscale, CV_BGR2GRAY);         // convert to grayscale
	matGrayscale = matTestingNumbers;
	// blur
	cv::GaussianBlur(matGrayscale,              // input image
		matBlurred,                // output image
		cv::Size(5, 5),            // smoothing window width and height in pixels
		0);                        // sigma value, determines how much the image will be blurred, zero makes function choose the sigma value

	// filter image from grayscale to black and white
	cv::adaptiveThreshold(matBlurred,                           // input image
		matThresh,                            // output image
		255,                                  // make pixels that pass the threshold full white
		cv::ADAPTIVE_THRESH_GAUSSIAN_C,       // use gaussian rather than mean, seems to give better results
		cv::THRESH_BINARY_INV,                // invert so foreground will be white, background will be black
		11,                                   // size of a pixel neighborhood used to calculate threshold value
		2);                                   // constant subtracted from the mean or weighted mean

	matThreshCopy = matThresh.clone();              // make a copy of the thresh image, this in necessary b/c findContours modifies the image

	std::vector<std::vector<cv::Point> > ptContours;        // declare a vector for the contours
	std::vector<cv::Vec4i> v4iHierarchy;                    // declare a vector for the hierarchy (we won't use this in this program but this may be helpful for reference)

	cv::findContours(matThreshCopy,             // input image, make sure to use a copy since the function will modify this image in the course of finding contours
		ptContours,                             // output contours
		v4iHierarchy,                           // output hierarchy
		cv::RETR_EXTERNAL,                      // retrieve the outermost contours only
		cv::CHAIN_APPROX_SIMPLE);               // compress horizontal, vertical, and diagonal segments and leave only their end points

	for (int i = 0; i < ptContours.size(); i++) {               // for each contour
		ContourWithData contourWithData;                                                    // instantiate a contour with data object
		contourWithData.ptContour = ptContours[i];                                          // assign contour to contour with data
		contourWithData.boundingRect = cv::boundingRect(contourWithData.ptContour);         // get the bounding rect
		contourWithData.fltArea = cv::contourArea(contourWithData.ptContour);               // calculate the contour area
		allContoursWithData.push_back(contourWithData);                                     // add contour with data object to list of all contours with data
	}

	for (int i = 0; i < allContoursWithData.size(); i++) {                      // for all contours
		if (allContoursWithData[i].checkIfContourIsValid()) {                   // check if valid
			validContoursWithData.push_back(allContoursWithData[i]);            // if so, append to valid contour list
		}
	}
	// sort contours from left to right
	std::sort(validContoursWithData.begin(), validContoursWithData.end(), ContourWithData::sortByBoundingRectXPosition);

	std::string strFinalString;         // declare final string, this will have the final number sequence by the end of the program

	for (int i = 0; i < validContoursWithData.size(); i++) {            // for each contour

		// draw a green rect around the current char
		cv::rectangle(matTestingNumbers,                            // draw rectangle on original image
			validContoursWithData[i].boundingRect,        // rect to draw
			cv::Scalar(0, 255, 0),                        // green
			2);                                           // thickness

		cv::Mat matROI = matThresh(validContoursWithData[i].boundingRect);          // get ROI image of bounding rect

		cv::Mat matROIResized;
		cv::resize(matROI, matROIResized, cv::Size(RESIZED_IMAGE_WIDTH, RESIZED_IMAGE_HEIGHT));     // resize image, this will be more consistent for recognition and storage

		cv::Mat matROIFloat;
		matROIResized.convertTo(matROIFloat, CV_32FC1);             // convert Mat to float, necessary for call to find_nearest

		cv::Mat matROIFlattenedFloat = matROIFloat.reshape(1, 1);

		cv::Mat matCurrentChar(0, 0, CV_32F);

		kNearest->findNearest(matROIFlattenedFloat, 1, matCurrentChar);     // finally we can call find_nearest !!!

		float fltCurrentChar = (float)matCurrentChar.at<float>(0, 0);

		strFinalString = strFinalString + char(int(fltCurrentChar));        // append current char to full string
	}

	//std::cout << "\n\n" << "numbers read = " << strFinalString << "\n\n";       // show the full string
	Chatacter->Text = gcnew System::String(strFinalString.c_str());

	cv::imshow("matTestingNumbers", matTestingNumbers);     // show input image with green boxes drawn around found digits

	cv::waitKey(0);                                         // wait for user key press

	return;
}

private: System::Void lap_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat kernel_L = (Mat_<int>(3, 3) << 0, -1, 0, -1, 4, -1, 0, -1, 0);
	filter2D(src, src, CV_8UC1, kernel_L);
	Laplacian(src, src, CV_8UC1);
	namedWindow("show", 0);
	imshow("show", src);
}
private: System::Void p1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ userInput = p1->Text;

	// Convert the String to a standard C++ string
	std::string userInputString = msclr::interop::marshal_as<std::string>(userInput);

	
}
private: System::Void low_button_Click(System::Object^ sender, System::EventArgs^ e) {
	int m = getOptimalDFTSize(src.rows);
	int n = getOptimalDFTSize(src.cols);
	Mat padded;
	copyMakeBorder(src, padded, 0, m - src.rows, 0, n - src.cols, 0, Scalar(0));
	padded.convertTo(padded, CV_32FC1, 1.0 / 255.0);
	Mat planes[2] = { padded,Mat::zeros(padded.size(),CV_32FC1) };
	Mat complexI;
	merge(planes, 2, complexI);
	dft(complexI, complexI);
	split(complexI, planes);
	int cx = complexI.cols / 2;
	int cy = complexI.rows / 2;
	Mat p1(complexI, Rect(0, 0, cx, cy));
	Mat p2(complexI, Rect(cx, 0, cx, cy));
	Mat p3(complexI, Rect(0, cy, cx, cy));
	Mat p4(complexI, Rect(cx, cy, cx, cy));
	Mat temp;
	p1.copyTo(temp);
	p4.copyTo(p1);
	temp.copyTo(p4);
	p2.copyTo(temp);
	p3.copyTo(p2);
	temp.copyTo(p3);
	split(complexI, planes);
	int d0 = Convert::ToInt32(d1->Text);

	Mat Lfilter(complexI.size(), CV_32FC1);
	for (int i = 0; i < Lfilter.rows; i++)
		for (int j = 0; j < Lfilter.cols; j++)
		{
			double z1 = i - Lfilter.rows / 2;
			double z2 = j - Lfilter.cols / 2;
			if (sqrt(pow(z1, 2) + pow(z2, 2)) < d0)
				Lfilter.at<float>(i, j) = 1;
			else
				Lfilter.at<float>(i, j) = 0;
		}

	Mat outR, outI;
	multiply(planes[0], Lfilter, outR);
	multiply(planes[1], Lfilter, outI);
	Mat out_planes[2] = { outR,outI };
	Mat out_complexI;
	merge(out_planes, 2, out_complexI);
	idft(out_complexI, out_complexI);
	split(out_complexI, planes);
	Mat out;
	magnitude(planes[0], planes[1], out);
	normalize(out, out, 1, 0, CV_MINMAX);
	out.copyTo(src);
	namedWindow("show", 0);
	imshow("show", src);


}

private: System::Void high_button_Click(System::Object^ sender, System::EventArgs^ e) {
	int m = getOptimalDFTSize(src.rows);
	int n = getOptimalDFTSize(src.cols);
	Mat padded;
	copyMakeBorder(src, padded, 0, m - src.rows, 0, n - src.cols, 0, Scalar(0));
	padded.convertTo(padded, CV_32FC1, 1.0 / 255.0);
	Mat planes[2] = { padded,Mat::zeros(padded.size(),CV_32FC1) };
	Mat complexI;
	merge(planes, 2, complexI);
	dft(complexI, complexI);
	split(complexI, planes);
	int cx = complexI.cols / 2;
	int cy = complexI.rows / 2;
	Mat p1(complexI, Rect(0, 0, cx, cy));
	Mat p2(complexI, Rect(cx, 0, cx, cy));
	Mat p3(complexI, Rect(0, cy, cx, cy));
	Mat p4(complexI, Rect(cx, cy, cx, cy));
	Mat temp;
	p1.copyTo(temp);
	p4.copyTo(p1);
	temp.copyTo(p4);
	p2.copyTo(temp);
	p3.copyTo(p2);
	temp.copyTo(p3);
	split(complexI, planes);
	int d0 = Convert::ToInt32(d2->Text);

	Mat Hfilter(complexI.size(), CV_32FC1);
	for (int i = 0; i < Hfilter.rows; i++)
		for (int j = 0; j < Hfilter.cols; j++)
		{
			double z1 = i - Hfilter.rows / 2;
			double z2 = j - Hfilter.cols / 2;
			if (sqrt(pow(z1, 2) + pow(z2, 2)) > d0)
				Hfilter.at<float>(i, j) = 1;
			else
				Hfilter.at<float>(i, j) = 0;
		}

	Mat outR, outI;
	multiply(planes[0], Hfilter, outR);
	multiply(planes[1], Hfilter, outI);
	Mat out_planes[2] = { outR,outI };
	Mat out_complexI;
	merge(out_planes, 2, out_complexI);
	idft(out_complexI, out_complexI);
	split(out_complexI, planes);
	Mat out;
	magnitude(planes[0], planes[1], out);
	normalize(out, out, 1, 0, CV_MINMAX);
	out.copyTo(src);
	namedWindow("show", 0);
	imshow("show", src);



}
private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ userInput = p1->Text;

// Convert the String to a standard C++ string
std::string userInputString = msclr::interop::marshal_as<std::string>(userInput);

// Load the image using OpenCV
Mat image = imread(userInputString);

// Check if the image was successfully loaded
if (!image.empty())
{
	// Assuming 'src' is a Mat variable declared earlier
	src = image.clone();
}
namedWindow("show", 0);
imshow("show", src);

}
};
}
