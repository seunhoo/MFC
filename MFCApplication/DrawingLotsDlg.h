
// MFCApplicationDlg.h: 헤더 파일
//

#pragma once


// CMFCApplicationDlg 대화 상자
class DrawingLotsDlg : public CDialogEx
{
// 생성입니다.
public:
	DrawingLotsDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit1();
	int iPersonCount;
	int iCount;
	int iMaxCount;
	afx_msg void OnBnClickedButton2();
	CString sName;
	afx_msg void OnBnClickedButton3();

	afx_msg void OnLbnSelchangeList5();
	CListBox cListName;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnEnChangeEdit2();
	CString sResultName;
};
