
// studyPE_win32.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CstudyPE_win32App: 
// �йش����ʵ�֣������ studyPE_win32.cpp
//

class CstudyPE_win32App : public CWinApp
{
public:
	CstudyPE_win32App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CstudyPE_win32App theApp;