/* ****************************************************************************

 * eID Middleware Project.
 * Copyright (C) 2008-2009 FedICT.
 * Copyright (C) 2019 Caixa Magica Software.
 * Copyright (C) 2011 Vasco Silva - <vasco.silva@caixamagica.pt>
 * Copyright (C) 2018 André Guerreiro - <aguerreiro1985@gmail.com>
 * Copyright (C) 2019-2020 Miguel Figueira - <miguelblcfigueira@gmail.com>
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License version
 * 3.0 as published by the Free Software Foundation.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this software; if not, see
 * http://www.gnu.org/licenses/.

**************************************************************************** */

#include "stdafx.h"
#include "../dialogs.h"
#include <vector>
#include "components\pteidControls.h"

#pragma once

using namespace std;
using namespace eIDMW;

class Win32Dialog
{
public:
	Win32Dialog(const wchar_t *appName);
	virtual ~Win32Dialog();
	virtual LRESULT ProcecEvent
					(	UINT		uMsg,			// Message For This Window
						WPARAM		wParam,			// Additional Message Information
						LPARAM		lParam );		// Additional Message Information

	bool exec();
	void show();
	void close();
	bool isFriend( HWND f_hWnd );
	
	eIDMW::DlgRet dlgResult;

protected: 
	void CreateBitapMask( HBITMAP & BmpSource, HBITMAP & BmpMask );
	static HWND Active_hWnd;
	static Win32Dialog *Active_lpWnd;
	static LRESULT CALLBACK WndProc
					(	HWND		hWnd,			// Handle For This Window
						UINT		uMsg,			// Message For This Window
						WPARAM		wParam,			// Additional Message Information
						LPARAM		lParam );		// Additional Message Information
	bool CreateWnd( const wchar_t* title, int width, int height, int Icon = 0 , HWND Parent = NULL );
	void KillWindow( );
	virtual void Destroy();
	void ScaleDimensions(int *width, int *height);

protected:
	HDC			m_hDC;					// Private GDI Device Context
	HWND		m_hWnd;					// Holds Our Window Handle
	HWND		m_parent;				// Holds Our Parent Window Handle
	HINSTANCE	m_hInstance;			// Instance to our Module(DLL)
	bool		m_ModalHold;			// Wheither it's modal or not


private:
	wchar_t*	m_appName;				// Name of the Window Class
	std::vector<HANDLE>		m_fonthandle;

};

typedef map< HWND, Win32Dialog* > TD_WNDMAP;
typedef pair< HWND, Win32Dialog* > TD_WNDPAIR;
