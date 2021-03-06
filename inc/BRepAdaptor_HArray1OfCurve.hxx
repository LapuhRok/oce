// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_HArray1OfCurve_HeaderFile
#define _BRepAdaptor_HArray1OfCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_BRepAdaptor_HArray1OfCurve.hxx>

#include <BRepAdaptor_Array1OfCurve.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class BRepAdaptor_Curve;
class BRepAdaptor_Array1OfCurve;



class BRepAdaptor_HArray1OfCurve : public MMgt_TShared
{

public:

  
    BRepAdaptor_HArray1OfCurve(const Standard_Integer Low, const Standard_Integer Up);
  
    BRepAdaptor_HArray1OfCurve(const Standard_Integer Low, const Standard_Integer Up, const BRepAdaptor_Curve& V);
  
      void Init (const BRepAdaptor_Curve& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const BRepAdaptor_Curve& Value) ;
  
     const  BRepAdaptor_Curve& Value (const Standard_Integer Index)  const;
  
      BRepAdaptor_Curve& ChangeValue (const Standard_Integer Index) ;
  
     const  BRepAdaptor_Array1OfCurve& Array1()  const;
  
      BRepAdaptor_Array1OfCurve& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(BRepAdaptor_HArray1OfCurve)

protected:




private: 


  BRepAdaptor_Array1OfCurve myArray;


};

#define ItemHArray1 BRepAdaptor_Curve
#define ItemHArray1_hxx <BRepAdaptor_Curve.hxx>
#define TheArray1 BRepAdaptor_Array1OfCurve
#define TheArray1_hxx <BRepAdaptor_Array1OfCurve.hxx>
#define TCollection_HArray1 BRepAdaptor_HArray1OfCurve
#define TCollection_HArray1_hxx <BRepAdaptor_HArray1OfCurve.hxx>
#define Handle_TCollection_HArray1 Handle_BRepAdaptor_HArray1OfCurve
#define TCollection_HArray1_Type_() BRepAdaptor_HArray1OfCurve_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _BRepAdaptor_HArray1OfCurve_HeaderFile
