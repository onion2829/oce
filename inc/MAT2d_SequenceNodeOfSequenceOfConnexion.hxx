// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_SequenceNodeOfSequenceOfConnexion_HeaderFile
#define _MAT2d_SequenceNodeOfSequenceOfConnexion_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MAT2d_SequenceNodeOfSequenceOfConnexion.hxx>

#include <Handle_MAT2d_Connexion.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class MAT2d_Connexion;
class MAT2d_SequenceOfConnexion;



class MAT2d_SequenceNodeOfSequenceOfConnexion : public TCollection_SeqNode
{

public:

  
    MAT2d_SequenceNodeOfSequenceOfConnexion(const Handle(MAT2d_Connexion)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(MAT2d_Connexion)& Value()  const;




  DEFINE_STANDARD_RTTI(MAT2d_SequenceNodeOfSequenceOfConnexion)

protected:




private: 


  Handle(MAT2d_Connexion) myValue;


};

#define SeqItem Handle(MAT2d_Connexion)
#define SeqItem_hxx <MAT2d_Connexion.hxx>
#define TCollection_SequenceNode MAT2d_SequenceNodeOfSequenceOfConnexion
#define TCollection_SequenceNode_hxx <MAT2d_SequenceNodeOfSequenceOfConnexion.hxx>
#define Handle_TCollection_SequenceNode Handle_MAT2d_SequenceNodeOfSequenceOfConnexion
#define TCollection_SequenceNode_Type_() MAT2d_SequenceNodeOfSequenceOfConnexion_Type_()
#define TCollection_Sequence MAT2d_SequenceOfConnexion
#define TCollection_Sequence_hxx <MAT2d_SequenceOfConnexion.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _MAT2d_SequenceNodeOfSequenceOfConnexion_HeaderFile
