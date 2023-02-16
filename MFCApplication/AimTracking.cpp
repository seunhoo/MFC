// AimTracking.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication.h"
#include "afxdialogex.h"
#include "AimTracking.h"


// AimTracking 대화 상자

IMPLEMENT_DYNAMIC(AimTracking, CDialogEx)

AimTracking::AimTracking(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
    , uiTimerID(0)
{

}

AimTracking::~AimTracking()
{
}

void AimTracking::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AimTracking, CDialogEx)
    ON_BN_CLICKED(IDC_BUTTON1, &AimTracking::OnBnClickedButton_Start)
    ON_WM_TIMER()
END_MESSAGE_MAP()


// AimTracking 메시지 처리기


BOOL AimTracking::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	//int x = GetSystemMetrics(SM_CXSCREEN); int y = GetSystemMetrics(SM_CYSCREEN);
	//this->MoveWindow(x / 4, y / 4, x / 2, y / 2);
    CRect desktopRect;
    SystemParametersInfo(SPI_GETWORKAREA, 0, &desktopRect, 0);

    CRect dialogRect;
    GetWindowRect(&dialogRect);

    SetWindowPos(&wndTop, desktopRect.left, desktopRect.top, desktopRect.Width(), desktopRect.Height(), SWP_SHOWWINDOW);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void AimTracking::OnBnClickedButton_Start()
{
    // TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
    uiTimerID = SetTimer(1, 1000, nullptr);
    CButton* pStartButton = (CButton*)GetDlgItem(IDC_BUTTON1);
    pStartButton->DestroyWindow();

    //CButton* pStartButton = (CButton*)GetDlgItem(IDC_BUTTON1);
    //pStartButton->DestroyWindow();
    //CButton* pStartButton = (CButton*)GetDlgItem(IDC_BUTTON1);
    //pStartButton->DestroyWindow();
}


void AimTracking::OnTimer(UINT_PTR nIDEvent)
{
    if (nIDEvent == uiTimerID) {
        CRect rectClient;
        GetClientRect(&rectClient);

        // 버튼 생성
        CButton* pButton = new CButton;
        pButton->Create(_T("Click me"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
            CRect(rand() % (1920 - 50), rand() % (1080 - 50), 50, 50), this, 0);

        aButtons.Add(pButton);
    }
    CDialogEx::OnTimer(nIDEvent);
}

BOOL AimTracking::PreTranslateMessage(MSG* pMsg)
{
    //if (pMsg->message == WM_LBUTTONDOWN) {
    //    for (int i = 0; i < aButtons.GetCount(); ++i)
    //    {
    //        CButton* pButton = aButtons.GetAt(i);
    //        if (pButton->GetSafeHwnd() && ::IsWindow(pButton->GetSafeHwnd())) 
    //        {
    //            CRect rc;
    //            pButton->GetWindowRect(&rc);
    //            ScreenToClient(&rc);

    //            if (rc.PtInRect(pMsg->pt))
    //            {
    //                pButton->DestroyWindow();
    //                aButtons.RemoveAt(i);
    //                delete pButton;
    //            }
    //        }
    //    }
    //}
    return CDialogEx::PreTranslateMessage(pMsg);
}

