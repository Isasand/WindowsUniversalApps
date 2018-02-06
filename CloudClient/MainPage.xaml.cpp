//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <stdio.h>
using namespace App2;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}

void App2::MainPage::aws_button(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) {
	String^ a_accessKey = accesskey->Text;
	String^ a_deviceID = aws_deviceID->Text;
	String^ a_message = aws_message->Text;
	if (a_accessKey == "" || a_deviceID == "" || a_message == "") {
		aw_outputText->Text = "Please fill in all the required boxes";
	}
	else {
		aw_outputText->Text = "Message sent";
	}
}

void App2::MainPage::azure_button(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e) {
	String^ az_connectionString = connectionString->Text; 
	String^ az_deviceID = azure_deviceID->Text; 
	String^ az_message = azure_message->Text;
	if (az_connectionString == "" || az_deviceID == "" || az_message == "") {
		az_outputText->Text = "Please fill in all the required boxes";
	}
	else {
		az_outputText->Text = "Message sent";
	}
}