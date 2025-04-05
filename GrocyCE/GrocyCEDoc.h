// GrocyCEDoc.h : interface of the CGrocyCEDoc class
//


#pragma once

class CGrocyCEDoc : public CDocument
{
protected: // create from serialization only
	CGrocyCEDoc();
	DECLARE_DYNCREATE(CGrocyCEDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();

	virtual void Serialize(CArchive& ar);


// Implementation
public:
	virtual ~CGrocyCEDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


