NiNode *__thiscall sub_741A50(NiNode *this)
{
  NiNode::NiNode(this, 0);
  this->vtbl = (NiNodeVtbl *)&NiBSPNode::`vftable';
  sub_716DB0((NiFrustumPlanes *)(this + 1));
  sub_716DB0((NiFrustumPlanes *)((char *)this + 0xEC));
  sub_523B10((unsigned __int16 *)&this->members.children, 2u);
  this->members.children.growSize = 0;
  return this;
}
