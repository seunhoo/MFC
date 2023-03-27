#pragma once
#include "afxdialogex.h"


// MFCApplicationMainDialog 대화 상자

class MFCApplicationMainDialog : public CDialogEx
{
	DECLARE_DYNAMIC(MFCApplicationMainDialog)

public:
	MFCApplicationMainDialog(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~MFCApplicationMainDialog();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton7();
};
