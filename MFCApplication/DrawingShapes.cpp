// DrawingShapes.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication.h"
#include "afxdialogex.h"
#include "DrawingShapes.h"


// DrawingShapes 대화 상자

IMPLEMENT_DYNAMIC(DrawingShapes, CDialogEx)

DrawingShapes::DrawingShapes(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{

}

DrawingShapes::~DrawingShapes()
{
}

void DrawingShapes::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DrawingShapes, CDialogEx)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()


// DrawingShapes 메시지 처리기


void DrawingShapes::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	cpStartPos = point;
	CDialogEx::OnLButtonDown(nFlags, point);
}


void DrawingShapes::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CClientDC dc(this);
	CPen cpMyPen(PS_SOLID, 5, RGB(0, 0, 255));
	dc.SelectObject(&cpMyPen);
	SelectObject(dc, GetStockObject(NULL_BRUSH));

	if (nFlags & MK_CONTROL)
	{
		dc.Ellipse(cpStartPos.x, cpStartPos.y, point.x, point.y);
	}
	else
	{
		dc.Rectangle(cpStartPos.x, cpStartPos.y, point.x, point.y);
	}

	CDialogEx::OnLButtonUp(nFlags, point);
}


BOOL DrawingShapes::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	this->MoveWindow(x / 4, y / 4, x / 2, y / 2);
	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}
