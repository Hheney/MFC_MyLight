
// MyLightDlg.h: 헤더 파일
//

#pragma once

#include "MyScreen.h"

// CMyLightDlg 대화 상자
class CMyLightDlg : public CDialogEx
{
	// 생성입니다.
public:
	CMyLightDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

	// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYLIGHT_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


	// 구현입니다.
protected:
	HICON m_hIcon;
	MyScreen m_screen;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CMFCColorButton m_btBackColor;
	CMFCColorButton m_btSphereColor;
	CSliderCtrl m_slSphereColor;
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	CMFCColorButton m_btLightAmbient;
	CMFCColorButton m_btLightDiffuse;
	CMFCColorButton m_btLightSpecular;
	CString m_strLightPosX;		//광원위치 : X
	CString m_strLightPosY;		//광원위치 : Y
	CString m_strLightPosZ;		//광원위치 : Z
	BOOL m_checkDirectional;	//직사광/점광원 선택 체크박스
	CMFCColorButton m_btEmission;
	CSliderCtrl m_sliderShine;
};
