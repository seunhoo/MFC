// AutoClicker.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication.h"
#include "afxdialogex.h"
#include "AutoClicker.h"


// AutoClicker 대화 상자

IMPLEMENT_DYNAMIC(AutoClicker, CDialogEx)

AutoClicker::AutoClicker(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, iTestCount()
{

}

AutoClicker::~AutoClicker()
{
}

void AutoClicker::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, iTestCount);
}


BEGIN_MESSAGE_MAP(AutoClicker, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON6, &AutoClicker::OnBnClickedButton_TestClick)
	ON_BN_CLICKED(IDC_BUTTON2, &AutoClicker::OnBnClickedButton_SetStartKey)
	ON_BN_CLICKED(IDC_BUTTON5, &AutoClicker::OnBnClickedButton_SetStopKey)
	ON_BN_CLICKED(IDC_BUTTON3, &AutoClicker::OnBnClickedButton_SetTurnOn)
	ON_BN_CLICKED(IDC_BUTTON4, &AutoClicker::OnBnClickedButton_SetTurnOff)
END_MESSAGE_MAP()


// AutoClicker 메시지 처리기


BOOL AutoClicker::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	this->MoveWindow(x / 4, y / 4, x / 2, y / 2);

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void AutoClicker::OnBnClickedButton_TestClick()
{
	// 테스트 컨트롤 버튼
	UpdateData(TRUE);
	iTestCount++;
	UpdateData(FALSE);

}

void AutoClicker::OnBnClickedButton_SetStartKey()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void AutoClicker::OnBnClickedButton_SetStopKey()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void AutoClicker::OnBnClickedButton_SetTurnOn()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	bClickStart = true;
}


void AutoClicker::OnBnClickedButton_SetTurnOff()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	bClickStart = false;
}
