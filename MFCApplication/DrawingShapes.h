#pragma once
#include "afxdialogex.h"


// DrawingShapes 대화 상자

class DrawingShapes : public CDialogEx
{
	DECLARE_DYNAMIC(DrawingShapes)

public:
	DrawingShapes(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~DrawingShapes();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	virtual BOOL OnInitDialog();

private:
	CPoint cpStartPos;
};
