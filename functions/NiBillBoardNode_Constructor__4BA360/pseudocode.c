NiNode *__thiscall NiBillBoardNode_Constructor(NiNode *this)
{
  NiNode::NiNode(this, 0); /*0x4ba365*/
  *((float *)this + 0x38) = 0.0; /*0x4ba36c*/
  this->vtbl = (NiNodeVtbl *)&NiBillboardNode::`vftable'; /*0x4ba372*/
  *((_WORD *)this + 0x6E) = 9; /*0x4ba378*/
  return this; /*0x4ba383*/
}
