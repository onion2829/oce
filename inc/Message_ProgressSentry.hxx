// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_ProgressSentry_HeaderFile
#define _Message_ProgressSentry_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Message_ProgressIndicator.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_CString.hxx>
#include <Standard_Real.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class Message_ProgressIndicator;
class TCollection_HAsciiString;


//! This class is a tool allowing to manage opening/closing
//! scopes in the ProgressIndicator in convenient and safe way.
//!
//! Its main features are:
//! - Set all parameters for the current scale on the given
//! ProgressIndicator and open a new scope at one line
//! - Iterator-like interface to opening next scopes and
//! check for user break
//! - Automatic scope closing in destructor
//! - Safe for NULL ProgressIndicator (just does nothing)
class Message_ProgressSentry 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Message_ProgressSentry(const Handle(Message_ProgressIndicator)& PI, const Standard_CString name, const Standard_Real min, const Standard_Real max, const Standard_Real step, const Standard_Boolean isInf = Standard_False, const Standard_Real newScopeSpan = 0.0);
  
  //! Creates an instance of ProgressSentry attaching it to
  //! the specified ProgressIndicator, selects parameters of
  //! the current scale, and opens a new scope with specified
  //! span (equal to step by default)
  Standard_EXPORT Message_ProgressSentry(const Handle(Message_ProgressIndicator)& PI, const Handle(TCollection_HAsciiString)& name, const Standard_Real min, const Standard_Real max, const Standard_Real step, const Standard_Boolean isInf = Standard_False, const Standard_Real newScopeSpan = 0.0);
  
  //! Moves progress indicator to the end of the current scale
  //! and relieves sentry from its duty. Methods other than Show()
  //! will do nothing after this one is called.
      void Relieve() ;
~Message_ProgressSentry()
{
  Relieve();
}
  
      void Next (const Standard_CString name = 0)  const;
  
      void Next (const Standard_Real span, const Standard_CString name = 0)  const;
  
  //! Closes current scope and opens next one
  //! with either specified or default span
      void Next (const Standard_Real span, const Handle(TCollection_HAsciiString)& name)  const;
  
  //! Returns False if ProgressIndicator signals UserBreak
      Standard_Boolean More()  const;
  
  //! Forces update of progress indicator display
      void Show()  const;




protected:





private:



  Handle(Message_ProgressIndicator) myProgress;
  Standard_Boolean myActive;


};


#include <Message_ProgressSentry.lxx>





#endif // _Message_ProgressSentry_HeaderFile
