#pragma once
#include "afxdialogex.h"


// AutoClicker 대화 상자

class AutoClicker : public CDialogEx
{
	DECLARE_DYNAMIC(AutoClicker)

public:
	AutoClicker(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~AutoClicker();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	int iTestCount;
	bool bClickStart;
	
	afx_msg void OnBnClickedButton_TestClick();
	afx_msg void OnBnClickedButton_SetStartKey();
	afx_msg void OnBnClickedButton_SetStopKey();
	afx_msg void OnBnClickedButton_SetTurnOn();
	afx_msg void OnBnClickedButton_SetTurnOff();
};
