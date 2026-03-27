NiNode *__thiscall NiNode::NiNode(NiNode *this, unsigned __int16 a2)
{
  NiAVObject::NiAVObject((NiAVObject *)this);
  this->vtbl = (NiNodeVtbl *)&NiNode::`vftable';
  sub_4B2D30(&this->members.children, a2, 1);
  this->members.effects.numItems = 0;
  this->members.effects.head = 0;
  this->members.effects.end = 0;
  this->members.effects.vtlb = &NiTPointerList<NiDynamicEffect *>::`vftable';
  return this;
}
