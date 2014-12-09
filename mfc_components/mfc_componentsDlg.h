// mfc_componentsDlg.h : header file
//

#pragma once


// Cmfc_componentsDlg dialog
class Cmfc_componentsDlg : public CDialog
{
// Construction
public:
	Cmfc_componentsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFC_COMPONENTS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	
};
