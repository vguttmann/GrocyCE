// GrocyCEDoc.cpp : implementation of the CGrocyCEDoc class
//

#include "stdafx.h"
#include "GrocyCE.h"

#include "GrocyCEDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGrocyCEDoc

IMPLEMENT_DYNCREATE(CGrocyCEDoc, CDocument)

BEGIN_MESSAGE_MAP(CGrocyCEDoc, CDocument)
END_MESSAGE_MAP()

// CGrocyCEDoc construction/destruction

CGrocyCEDoc::CGrocyCEDoc()
{
	// TODO: add one-time construction code here

}

CGrocyCEDoc::~CGrocyCEDoc()
{
}

BOOL CGrocyCEDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

// CGrocyCEDoc serialization


void CGrocyCEDoc::Serialize(CArchive& ar)
{
	(ar);
}



// CGrocyCEDoc diagnostics

#ifdef _DEBUG
void CGrocyCEDoc::AssertValid() const
{
	CDocument::AssertValid();
}
#endif //_DEBUG


// CGrocyCEDoc commands

