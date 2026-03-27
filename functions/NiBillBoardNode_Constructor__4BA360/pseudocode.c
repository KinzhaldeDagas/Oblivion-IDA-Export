NiNode *__thiscall NiBillBoardNode_Constructor(NiNode *this)
{
  NiNode::NiNode(this, 0);
  *((float *)this + 0x38) = 0.0;
  this->vtbl = (NiNodeVtbl *)&NiBillboardNode::`vftable';
  *((_WORD *)this + 0x6E) = 9;
  return this;
}
