================================================================================
    MICROSOFT FOUNDATION CLASS LIBRARY : GrocyCE Project Overview
===============================================================================

The application wizard has created this GrocyCE application for 
you.  This application not only demonstrates the basics of using the Microsoft 
Foundation Classes but is also a starting point for writing your application.

This file contains a summary of what you will find in each of the files that
make up your GrocyCE application.

GrocyCE.vcproj
    This is the main project file for VC++ projects generated using an application wizard. 
    It contains information about the version of Visual C++ that generated the file, and 
    information about the platforms, configurations, and project features selected with the
    application wizard.

GrocyCE.h
    This is the main header file for the application.  It includes other
    project specific headers and declares the CGrocyCEApp application class.

GrocyCE.cpp
    This is the main application source file that contains the application
    class CGrocyCEApp.


GrocyCEppc.rc
    This is the project's main resource file listing of all of the Microsoft Windows
    resources that the project uses when compiling for the Pocket PC platform, or a
    platform that supports the same user interface model.  It includes the icons,
    bitmaps, and cursors that are stored in the RES subdirectory.  This file can be 
    directly edited in Microsoft Visual C++. Your project resources are in 
    1033. When the .rc file is persisted, the defines in the data section
    are persisted as the hexadecimal version of the numeric value they are defined to
    rather than the friendly name of the define.

res\GrocyCEppc.rc2
    This file contains resources that are not edited by Microsoft 
    Visual C++. You should place all resources not editable by
    the resource editor in this file.


res\GrocyCE.ico
    This is an icon file, which is used as the application's icon.  This
    icon is included by the main resource file.


/////////////////////////////////////////////////////////////////////////////

For the main frame window:
    The project includes a standard MFC interface.

MainFrm.h, MainFrm.cpp
    These files contain the frame class CMainFrame, which is derived from
    CFrameWnd and controls all SDI frame features.

res\Cmdbar.bmp
    This bitmap file is used to create tiled images for the command bar.
    The initial command bar is constructed in the CMainFrame class. 
    Edit this cmdbar bitmap along with the array in MainFrm.cpp
    to add more command bar buttons.

/////////////////////////////////////////////////////////////////////////////

The application wizard creates one document type and one view:

GrocyCEDoc.h, GrocyCEDoc.cpp - the document
    These files contain your CGrocyCEDoc class.  Edit these files to
    add your special document data and to implement file saving and loading
    (via CGrocyCEDoc::Serialize).

GrocyCEView.h, GrocyCEView.cpp - the view of the document
    These files contain your CGrocyCEView class.
    CGrocyCEView objects are used to view CGrocyCEDoc objects.




/////////////////////////////////////////////////////////////////////////////

Other Features:
   Menu bar in main frame with menu, buttons, and adornments

Windows Sockets
    The application has support for establishing communications over TCP/IP networks.

/////////////////////////////////////////////////////////////////////////////

Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named GrocyCE.pch and a precompiled types file named StdAfx.obj.

Resourceppc.h
    This is the standard header file, which defines new resource IDs.
    Microsoft Visual C++ reads and updates this file.

/////////////////////////////////////////////////////////////////////////////

Other notes:

The application wizard uses "TODO:" to indicate parts of the source code you
should add to or customize.

If your application uses MFC in a shared DLL, and your application is in a 
language other than the operating system's current language, you will need 
to copy the corresponding localized resources MFC90XXX.DLL to your application
directory ("XXX" stands for the language abbreviation.  For example,
MFC90DEU.DLL contains resources translated to German.)  If you don't do this,
some of the UI elements of your application will remain in the language of the
operating system.

/////////////////////////////////////////////////////////////////////////////
