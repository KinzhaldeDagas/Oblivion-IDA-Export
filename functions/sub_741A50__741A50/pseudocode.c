NiNode *__thiscall sub_741A50(NiNode *this)
{
  NiNode::NiNode(this, 0); /*0x741a7a*/
  this->vtbl = (NiNodeVtbl *)&NiBSPNode::`vftable'; /*0x741a8d*/
  sub_716DB0((NiFrustumPlanes *)(this + 1)); /*0x741a93*/
  sub_716DB0((NiFrustumPlanes *)((char *)this + 0xEC)); /*0x741a9e*/
  NiTObjectArray_Resize16((MEF_RefPointerArray16 *)&this->members.children, 2u); /*0x741aab*/
  this->members.children.growSize = 0; /*0x741ab0*/
  return this; /*0x741abb*/
}
