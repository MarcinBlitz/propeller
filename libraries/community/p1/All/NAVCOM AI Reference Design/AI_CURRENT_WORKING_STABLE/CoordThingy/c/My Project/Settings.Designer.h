//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:2.0.50727.832
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------



#pragma once

//INSTANT C++ NOTE: Formerly VB.NET project-level imports:
using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;

namespace WindowsApplication1
{
	namespace Properties
	{

//ORIGINAL LINE: friend Partial NotInheritable Class MySettings
//TODO: INSTANT C++ TODO TASK: C++ does not support 'partial' types. You must manually combine the entire MySettings type in one place.
		[System::Runtime::CompilerServices::CompilerGeneratedAttribute(), System::CodeDom::Compiler::GeneratedCodeAttribute("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "8.0.0.0"), System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
		private ref class MySettings sealed : System::Configuration::ApplicationSettingsBase
		{

		private:
			static MySettings ^defaultInstance = safe_cast<MySettings^>(System::Configuration::ApplicationSettingsBase::Synchronized(gcnew MySettings()));

	#pragma region My.Settings Auto-Save Functionality
//INSTANT C++ WARNING: This conditional compilation directive cannot be used in C++:
//	#if _MyType == "WindowsForms"
			static bool addedHandler;

			static System::Object ^addedHandlerLockObject = gcnew System::Object();

			[System::Diagnostics::DebuggerNonUserCodeAttribute(), System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
			static void AutoSaveSettings(System::Object ^sender, System::EventArgs ^e);
//#endif
	#pragma endregion

		public:
			static property MySettings ^Default
			{
				MySettings ^get();
			}
		};
	}

//INSTANT C++ NOTE: This block was only required to support 'My.Settings' in VB. 'Properties.Settings' is used in C++:
//Namespace My
//
//	<Microsoft.VisualBasic.HideModuleNameAttribute(), System.Diagnostics.DebuggerNonUserCodeAttribute(), System.Runtime.CompilerServices.CompilerGeneratedAttribute()> Friend Module MySettingsProperty
//
//		<System.ComponentModel.Design.HelpKeywordAttribute("My.Settings")> Friend ReadOnly Property Settings() As WindowsApplication1.My.MySettings
//			Get
//				return WindowsApplication1.My.MySettings.Default
//			End Get
//		End Property
//	End Module
//End Namespace

} //end of root namespace