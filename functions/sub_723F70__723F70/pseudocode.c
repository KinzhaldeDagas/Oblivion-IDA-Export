NiNode *__thiscall sub_723F70(NiNode *this)
{
  NiNode::NiNode(this, 0); /*0x723f9c*/
  *((float *)this + 0x39) = 0.0; /*0x723fa3*/
  this->vtbl = (NiNodeVtbl *)&NiSwitchNode::`vftable'; /*0x723fa9*/
  *((_WORD *)this + 0x6E) = 0; /*0x723faf*/
  *((_DWORD *)this + 0x38) = 0xFFFFFFFF; /*0x723fb6*/
  *((_DWORD *)this + 0x3A) = 1; /*0x723fc5*/
  *((_WORD *)this + 0x7A) = 1; /*0x723fcd*/
  *((_WORD *)this + 0x7D) = 1; /*0x723fd4*/
  *((_DWORD *)this + 0x3B) = &NiTArray<unsigned int>::`vftable'; /*0x723fe9*/
  *((_WORD *)this + 0x7B) = 0; /*0x723ff3*/
  *((_WORD *)this + 0x7C) = 0; /*0x723ffa*/
  *((_DWORD *)this + 0x3C) = FormHeapAlloc(4u); /*0x72400b*/
  *((_WORD *)this + 0x6E) |= 3u; /*0x724014*/
  return this; /*0x72401e*/
}
