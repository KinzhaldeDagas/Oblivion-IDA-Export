NiNode *__thiscall sub_723F70(NiNode *this)
{
  NiNode::NiNode(this, 0);
  *((float *)this + 0x39) = 0.0;
  this->vtbl = (NiNodeVtbl *)&NiSwitchNode::`vftable';
  *((_WORD *)this + 0x6E) = 0;
  *((_DWORD *)this + 0x38) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x3A) = 1;
  *((_WORD *)this + 0x7A) = 1;
  *((_WORD *)this + 0x7D) = 1;
  *((_DWORD *)this + 0x3B) = &NiTArray<unsigned int>::`vftable';
  *((_WORD *)this + 0x7B) = 0;
  *((_WORD *)this + 0x7C) = 0;
  *((_DWORD *)this + 0x3C) = FormHeapAlloc(4u);
  *((_WORD *)this + 0x6E) |= 3u;
  return this;
}
