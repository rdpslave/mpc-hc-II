/*
 * (C) 2003-2006 Gabest
 * (C) 2006-2013 see Authors.txt
 *
 * This file is part of MPC-HC.
 *
 * MPC-HC is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * MPC-HC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include "CMPCThemeCmdUIDialog.h"
#include "CMPCThemeComboBox.h"

// CFavoriteAddDlg dialog

class CFavoriteAddDlg : public CMPCThemeCmdUIDialog
{
public:
    CFavoriteAddDlg(CString shortname, CString fullname, BOOL bEnableABMarks = FALSE, CWnd* pParent = nullptr);   // standard constructor
    virtual ~CFavoriteAddDlg();

    // Dialog Data
    enum { IDD = IDD_FAVADD };

    CString m_name;

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    virtual BOOL OnInitDialog();
    virtual void OnOK();
    afx_msg void OnUpdateOk(CCmdUI* pCmdUI);
    DECLARE_MESSAGE_MAP()

private:
    CMPCThemeComboBox m_namectrl;
    CString m_shortname, m_fullname;
    BOOL m_bEnableABMarks;
    BOOL m_bRememberPos;
    BOOL m_bRememberABMarks;
    BOOL m_bRelativeDrive;
};
