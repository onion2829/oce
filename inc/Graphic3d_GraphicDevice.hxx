// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_GraphicDevice_HeaderFile
#define _Graphic3d_GraphicDevice_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_GraphicDevice_HeaderFile
#include <Handle_Graphic3d_GraphicDevice.hxx>
#endif

#ifndef _Handle_Graphic3d_GraphicDriver_HeaderFile
#include <Handle_Graphic3d_GraphicDriver.hxx>
#endif
#ifndef _Xw_GraphicDevice_HeaderFile
#include <Xw_GraphicDevice.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Xw_TypeOfMapping_HeaderFile
#include <Xw_TypeOfMapping.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_Display_HeaderFile
#include <Aspect_Display.hxx>
#endif
#ifndef _Handle_Aspect_GraphicDriver_HeaderFile
#include <Handle_Aspect_GraphicDriver.hxx>
#endif
class Graphic3d_GraphicDriver;
class Aspect_GraphicDeviceDefinitionError;
class Aspect_GraphicDriver;
class TCollection_AsciiString;


//! This class allows the definition of the Advanced <br>
//!	    Graphic Device <br>
//! Warning: An Graphic Device is defined by a connexion <br>
//!	    "host:server.screen" <br>
class Graphic3d_GraphicDevice : public Xw_GraphicDevice {

public:

  //! Creates a GraphicDevice <br>
  Standard_EXPORT   Graphic3d_GraphicDevice(const Standard_CString Connexion,const Xw_TypeOfMapping Mapping = Xw_TOM_COLORCUBE,const Standard_Integer Ncolors = 0,const Standard_Boolean UseDefault = Standard_True);
  //! Creates a GraphicDevice from the Display structure <br>
  Standard_EXPORT   Graphic3d_GraphicDevice(const Aspect_Display DisplayHandle);
  //! Deletes the GraphicDevice <me>. <br>
  Standard_EXPORT     void Destroy() ;
~Graphic3d_GraphicDevice()
{
  Destroy();
}
  //! Returns the GraphicDriver. <br>
  Standard_EXPORT     Handle_Aspect_GraphicDriver GraphicDriver() const;



  DEFINE_STANDARD_RTTI(Graphic3d_GraphicDevice)

protected:




private: 

  //! Sets the GraphicDriver. <br>
  Standard_EXPORT     void SetGraphicDriver() ;
  //! Returns the environment string for loading shared graphics library. <br>
//!	    The string can be defined in environment by corresponding variables, <br>
//!      or default value will be used for loading from system library path <br>
//!	    Environment variables : CSF_GraphicShr <br>
  Standard_EXPORT     TCollection_AsciiString ShrEnvString() const;

Handle_Graphic3d_GraphicDriver MyGraphicDriver;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif