// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_ReferenceList_HeaderFile
#define _PDataStd_ReferenceList_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PDataStd_ReferenceList.hxx>

#include <Handle_PCollection_HExtendedString.hxx>
#include <Standard_Integer.hxx>
#include <Handle_PColStd_HArray1OfExtendedString.hxx>
#include <PDF_Attribute.hxx>
class PCollection_HExtendedString;
class PColStd_HArray1OfExtendedString;


class PDataStd_ReferenceList : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_ReferenceList();
  
  Standard_EXPORT   void Init (const Standard_Integer lower, const Standard_Integer upper) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer index, const Handle(PCollection_HExtendedString)& value) ;
  
  Standard_EXPORT   Handle(PCollection_HExtendedString) Value (const Standard_Integer index)  const;
  
  Standard_EXPORT   Standard_Integer Lower()  const;
  
  Standard_EXPORT   Standard_Integer Upper()  const;

PDataStd_ReferenceList(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_ReferenceListmyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_ReferenceListmyValue(const Handle(PColStd_HArray1OfExtendedString)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_ReferenceList)

protected:




private: 


  Handle(PColStd_HArray1OfExtendedString) myValue;


};







#endif // _PDataStd_ReferenceList_HeaderFile
