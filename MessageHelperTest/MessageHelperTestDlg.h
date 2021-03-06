
// MessageHelperTestDlg.h: 헤더 파일
//
#pragma once

#include <thread>
#include <vector>
#include "afxwin.h"
#include "resource.h"
#define WMH_ID_TEST WM_USER + 10


#define TIMER_THROUGHT 1

// CMessageHelperTestDlg 대화 상자
class CMessageHelperTestDlg : public CDialog
{
// 생성입니다.
public:
	CMessageHelperTestDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MESSAGEHELPERTEST_DIALOG };
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


	afx_msg LRESULT OnWindowsMessageHelperTest(WPARAM wParam, LPARAM lParam);

public:
	afx_msg void OnBnClickedButtonTest();
	afx_msg void OnClose();


private:
	std::vector<std::thread*>	m_vThreadList;
	bool		 m_bExitThread;

	unsigned long		m_lRecvCount;
	unsigned long		m_lRecvIdx;
	long long			m_llLastElapsedMicroSeconds;
public:
	afx_msg void OnBnClickedButtonTestStop();
	CEdit m_editLog;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	int m_nThreadCount;
};
