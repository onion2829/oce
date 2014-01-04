// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TCollection_HExtendedString_HeaderFile
#define _TCollection_HExtendedString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TCollection_HExtendedString_HeaderFile
#include <Handle_TCollection_HExtendedString.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_ExtString_HeaderFile
#include <Standard_ExtString.hxx>
#endif
#ifndef _Standard_ExtCharacter_HeaderFile
#include <Standard_ExtCharacter.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_NullObject;
class Standard_OutOfRange;
class Standard_NumericError;
class Standard_NegativeValue;
class TCollection_ExtendedString;
class TCollection_HAsciiString;


//! A variable-length sequence of "extended" <br>
//! (UNICODE) characters (16-bit character <br>
//! type). It provides editing operations with <br>
//! built-in memory management to make <br>
//! ExtendedString objects easier to use than <br>
//! ordinary extended character arrays. <br>
//! HExtendedString objects are handles to strings. <br>
//! - HExtendedString strings may be shared by several objects. <br>
//! - You may use an ExtendedString object to get the actual string. <br>
//!   Note: HExtendedString objects use an <br>
//! ExtendedString string as a field. <br>
class TCollection_HExtendedString : public MMgt_TShared {

public:

  //! Initializes a HExtendedString to an empty ExtendedString. <br>
  Standard_EXPORT   TCollection_HExtendedString();
  //! Initializes a HExtendedString with a CString. <br>
  Standard_EXPORT   TCollection_HExtendedString(const Standard_CString message);
  //! Initializes a HExtendedString with an ExtString. <br>
  Standard_EXPORT   TCollection_HExtendedString(const Standard_ExtString message);
  //! Initializes a HExtendedString with a single character. <br>
  Standard_EXPORT   TCollection_HExtendedString(const Standard_ExtCharacter aChar);
  //! Initializes a HExtendedString with <length> space allocated. <br>
//! and filled with <filler>.This is usefull for buffers. <br>
  Standard_EXPORT   TCollection_HExtendedString(const Standard_Integer length,const Standard_ExtCharacter filler);
  //! Initializes a HExtendedString with a HExtendedString. <br>
  Standard_EXPORT   TCollection_HExtendedString(const TCollection_ExtendedString& aString);
  //! Initializes a HExtendedString with an HAsciiString. <br>
  Standard_EXPORT   TCollection_HExtendedString(const Handle(TCollection_HAsciiString)& aString);
  //! Initializes a HExtendedString with a HExtendedString. <br>
  Standard_EXPORT   TCollection_HExtendedString(const Handle(TCollection_HExtendedString)& aString);
  //! Appends <other>  to me. <br>
  Standard_EXPORT     void AssignCat(const Handle(TCollection_HExtendedString)& other) ;
  //! Returns a string appending <other>  to me. <br>
  Standard_EXPORT     Handle_TCollection_HExtendedString Cat(const Handle(TCollection_HExtendedString)& other) const;
  //! Substitutes all the characters equal to aChar by NewChar <br>
//! in the string <me>. <br>
  Standard_EXPORT     void ChangeAll(const Standard_ExtCharacter aChar,const Standard_ExtCharacter NewChar) ;
  //! Removes all characters contained in <me>. <br>
//! This produces an empty ExtendedString. <br>
  Standard_EXPORT     void Clear() ;
  //!  Returns True if the string <me> contains zero character <br>
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  //! Insert a ExtCharacter at position <where>. <br>
//! Example: <br>
//!    aString contains "hy not ?" <br>
//!    aString.Insert(1,'W'); gives "Why not ?" <br>
//!    aString contains "Wh" <br>
//!    aString.Insert(3,'y'); gives "Why" <br>
//!    aString contains "Way" <br>
//!    aString.Insert(2,'h'); gives "Why" <br>
  Standard_EXPORT     void Insert(const Standard_Integer where,const Standard_ExtCharacter what) ;
  //! Insert a HExtendedString at position <where>. <br>
  Standard_EXPORT     void Insert(const Standard_Integer where,const Handle(TCollection_HExtendedString)& what) ;
  //! Returns TRUE if <me> is less than <other>. <br>
  Standard_EXPORT     Standard_Boolean IsLess(const Handle(TCollection_HExtendedString)& other) const;
  //! Returns TRUE if <me> is greater than <other>. <br>
  Standard_EXPORT     Standard_Boolean IsGreater(const Handle(TCollection_HExtendedString)& other) const;
  //! Returns True if the string contains only "Ascii Range"  characters <br>
  Standard_EXPORT     Standard_Boolean IsAscii() const;
  //! Returns number of characters in <me>. <br>
//! This is the same functionality as 'strlen' in C. <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Erases <ahowmany> characters from position <where>, <br>
//! <where> included. <br>
//! Example: <br>
//!   aString contains "Hello" <br>
//!   aString.Erase(2,2) erases 2 characters from position 1 <br>
//!   This gives "Hlo". <br>
  Standard_EXPORT     void Remove(const Standard_Integer where,const Standard_Integer ahowmany = 1) ;
  //! Removes every <what> characters from <me>. <br>
  Standard_EXPORT     void RemoveAll(const Standard_ExtCharacter what) ;
  //! Replaces one character in the string at position <where>. <br>
//! If <where> is less than zero or greater than the length of <me> <br>
//! an exception is raised. <br>
//! Example: <br>
//!   aString contains "Garbake" <br>
//!   astring.Replace(6,'g')  gives <me> = "Garbage" <br>
  Standard_EXPORT     void SetValue(const Standard_Integer where,const Standard_ExtCharacter what) ;
  //! Replaces a part of <me> by another string. <br>
  Standard_EXPORT     void SetValue(const Standard_Integer where,const Handle(TCollection_HExtendedString)& what) ;
  //! Splits a ExtendedString into two sub-strings. <br>
//! Example: <br>
//!   aString contains "abcdefg" <br>
//!   aString.Split(3) gives <me> = "abc" and returns "defg" <br>
  Standard_EXPORT     Handle_TCollection_HExtendedString Split(const Standard_Integer where) ;
  //! Searches a String in <me> from the beginning <br>
//! and returns position of first item <what> matching. <br>
//! It returns -1 if not found. <br>
  Standard_EXPORT     Standard_Integer Search(const Handle(TCollection_HExtendedString)& what) const;
  //! Searches a ExtendedString in another ExtendedString from the end <br>
//! and returns position of first item <what> matching. <br>
//! It returns -1 if not found. <br>
  Standard_EXPORT     Standard_Integer SearchFromEnd(const Handle(TCollection_HExtendedString)& what) const;
  //! Returns pointer to ExtString <br>
  Standard_EXPORT    Standard_ExtString ToExtString() const;
  //! Extracts <whichone> token from <me>. <br>
//! By default, the <separators> is set to space and tabulation. <br>
//! By default, the token extracted is the first one (whichone = 1). <br>
//! <separators> contains all separators you need. <br>
//! If no token indexed by <whichone> is found, it returns an empty String. <br>
//! Example: <br>
//!    aString contains "This is a     message" <br>
//!    aString.Token()  returns "This" <br>
//!    aString.Token(" ",4) returns "message" <br>
//!    aString.Token(" ",2) returns "is" <br>
//!    aString.Token(" ",9) returns "" <br>
//! Other separators than space character and tabulation are allowed <br>
//!    aString contains "1234; test:message   , value" <br>
//!    aString.Token("; :,",4) returns "value" <br>
//!    aString.Token("; :,",2) returns "test" <br>
  Standard_EXPORT     Handle_TCollection_HExtendedString Token(const Standard_ExtString separators,const Standard_Integer whichone = 1) const;
  //! Truncates <me> to <ahowmany> characters. <br>
//! Example:  me = "Hello Dolly" -> Trunc(3) -> me = "Hel" <br>
  Standard_EXPORT     void Trunc(const Standard_Integer ahowmany) ;
  //! Returns ExtCharacter at position <where> in <me>. <br>
//! If <where> is less than zero or greater than the length of <br>
//! <me>, an exception is raised. <br>
//! Example: <br>
//!   aString contains "Hello" <br>
//!   aString.Value(2) returns 'e' <br>
  Standard_EXPORT     Standard_ExtCharacter Value(const Standard_Integer where) const;
  //! Returns the field myString <br>
  Standard_EXPORT    const TCollection_ExtendedString& String() const;
  //! Displays <me> . <br>
  Standard_EXPORT     void Print(Standard_OStream& astream) const;
  
  Standard_EXPORT     Handle_TCollection_HExtendedString ShallowCopy() const;
  
  Standard_EXPORT     void ShallowDump(Standard_OStream& s) const;
  
  Standard_EXPORT     Standard_Boolean IsSameState(const Handle(TCollection_HExtendedString)& other) const;




  DEFINE_STANDARD_RTTI(TCollection_HExtendedString)

protected:




private: 

  //! Returns the field myString <br>
  Standard_EXPORT     TCollection_ExtendedString& ChangeString() const;

TCollection_ExtendedString myString;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Handle_TCollection_HExtendedString ShallowCopy(const Handle_TCollection_HExtendedString& me) {
 return me->ShallowCopy();
}



#endif
