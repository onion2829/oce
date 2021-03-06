// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DataMapNodeOfTransientPersistentMap_HeaderFile
#define _PTColStd_DataMapNodeOfTransientPersistentMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_PTColStd_DataMapNodeOfTransientPersistentMap.hxx>

#include <Handle_Standard_Transient.hxx>
#include <Handle_Standard_Persistent.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class Standard_Transient;
class Standard_Persistent;
class TColStd_MapTransientHasher;
class PTColStd_TransientPersistentMap;
class PTColStd_DataMapIteratorOfTransientPersistentMap;



class PTColStd_DataMapNodeOfTransientPersistentMap : public TCollection_MapNode
{

public:

  
    PTColStd_DataMapNodeOfTransientPersistentMap(const Handle(Standard_Transient)& K, const Handle(Standard_Persistent)& I, const TCollection_MapNodePtr& n);
  
      Handle(Standard_Transient)& Key()  const;
  
      Handle(Standard_Persistent)& Value()  const;




  DEFINE_STANDARD_RTTI(PTColStd_DataMapNodeOfTransientPersistentMap)

protected:




private: 


  Handle(Standard_Transient) myKey;
  Handle(Standard_Persistent) myValue;


};

#define TheKey Handle(Standard_Transient)
#define TheKey_hxx <Standard_Transient.hxx>
#define TheItem Handle(Standard_Persistent)
#define TheItem_hxx <Standard_Persistent.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode PTColStd_DataMapNodeOfTransientPersistentMap
#define TCollection_DataMapNode_hxx <PTColStd_DataMapNodeOfTransientPersistentMap.hxx>
#define TCollection_DataMapIterator PTColStd_DataMapIteratorOfTransientPersistentMap
#define TCollection_DataMapIterator_hxx <PTColStd_DataMapIteratorOfTransientPersistentMap.hxx>
#define Handle_TCollection_DataMapNode Handle_PTColStd_DataMapNodeOfTransientPersistentMap
#define TCollection_DataMapNode_Type_() PTColStd_DataMapNodeOfTransientPersistentMap_Type_()
#define TCollection_DataMap PTColStd_TransientPersistentMap
#define TCollection_DataMap_hxx <PTColStd_TransientPersistentMap.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _PTColStd_DataMapNodeOfTransientPersistentMap_HeaderFile
