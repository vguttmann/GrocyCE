// GrocyCEView.cpp : implementation of the CGrocyCEView class
//

#include "stdafx.h"
#include "GrocyCE.h"

#include "GrocyCEDoc.h"
#include "GrocyCEView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGrocyCEView

IMPLEMENT_DYNCREATE(CGrocyCEView, CView)

BEGIN_MESSAGE_MAP(CGrocyCEView, CView)
END_MESSAGE_MAP()

// CGrocyCEView construction/destruction

CGrocyCEView::CGrocyCEView()
{
	// TODO: add construction code here

}

CGrocyCEView::~CGrocyCEView()
{
}

BOOL CGrocyCEView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}


// CGrocyCEView drawing
void CGrocyCEView::OnDraw(CDC* /*pDC*/)
{
	CGrocyCEDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}



// CGrocyCEView diagnostics

#ifdef _DEBUG
void CGrocyCEView::AssertValid() const
{
	CView::AssertValid();
}

CGrocyCEDoc* CGrocyCEView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGrocyCEDoc)));
	return (CGrocyCEDoc*)m_pDocument;
}
#endif //_DEBUG


// CGrocyCEView message handlers
