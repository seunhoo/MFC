#pragma once
#include "afxdialogex.h"


// AimTracking 대화 상자

class AimTracking : public CDialogEx
{
	DECLARE_DYNAMIC(AimTracking)

public:
	AimTracking(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~AimTracking();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	DECLARE_MESSAGE_MAP();

	CArray<CButton*> aButtons;
	UINT_PTR uiTimerID;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton_Start();
	afx_msg BOOL PreTranslateMessage(MSG* pMsg);

};
