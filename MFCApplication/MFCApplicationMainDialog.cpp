// MFCApplicationMainDialog.cpp: 구현 파일
//

#include "pch.h"
#include "afxdialogex.h"
#include "MFCApplication.h"
#include "MFCApplicationMainDialog.h"

#include "DrawingLotsDlg.h"
#include "AutoClicker.h"
#include "AimTracking.h"

// MFCApplicationMainDialog 대화 상자

IMPLEMENT_DYNAMIC(MFCApplicationMainDialog, CDialogEx)

MFCApplicationMainDialog::MFCApplicationMainDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MFCApplicationMainDialog::~MFCApplicationMainDialog()
{
}

void MFCApplicationMainDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MFCApplicationMainDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MFCApplicationMainDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &MFCApplicationMainDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDOK, &MFCApplicationMainDialog::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON3, &MFCApplicationMainDialog::OnBnClickedButton3)
END_MESSAGE_MAP()


// MFCApplicationMainDialog 메시지 처리기


void MFCApplicationMainDialog::OnBnClickedButton1()
{
	DrawingLotsDlg dlg;
	dlg.DoModal();
}


BOOL MFCApplicationMainDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);
	this->MoveWindow(x / 4, y / 4, x / 2, y / 2);



	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void MFCApplicationMainDialog::OnBnClickedButton2()
{
	AutoClicker dlg;
	dlg.DoModal();
}


void MFCApplicationMainDialog::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void MFCApplicationMainDialog::OnBnClickedButton3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	AimTracking dlg;
	dlg.DoModal();
}
