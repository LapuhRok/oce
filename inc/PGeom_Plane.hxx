// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_Plane_HeaderFile
#define _PGeom_Plane_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PGeom_Plane.hxx>

#include <PGeom_ElementarySurface.hxx>
class gp_Ax3;


class PGeom_Plane : public PGeom_ElementarySurface
{

public:

  
  //! Create a plane with default values.
  Standard_EXPORT PGeom_Plane();
  
  //! Creates a Plane with these field values.
  Standard_EXPORT PGeom_Plane(const gp_Ax3& aPosition);

PGeom_Plane(const Storage_stCONSTclCOM& a) : PGeom_ElementarySurface(a)
{
  
}



  DEFINE_STANDARD_RTTI(PGeom_Plane)

protected:




private: 




};







#endif // _PGeom_Plane_HeaderFile
