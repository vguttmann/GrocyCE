// GrocyCEView.h : interface of the CGrocyCEView class
//


#pragma once

class CGrocyCEView : public CView
{
protected: // create from serialization only
	CGrocyCEView();
	DECLARE_DYNCREATE(CGrocyCEView)

// Attributes
public:
	CGrocyCEDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

protected:

// Implementation
public:
	virtual ~CGrocyCEView();
#ifdef _DEBUG
	virtual void AssertValid() const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in GrocyCEView.cpp
inline CGrocyCEDoc* CGrocyCEView::GetDocument() const
   { return reinterpret_cast<CGrocyCEDoc*>(m_pDocument); }
#endif

