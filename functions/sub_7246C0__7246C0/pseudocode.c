NiBSPNode *__thiscall sub_7246C0(NiBSPNode *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x3C);
  *((_DWORD *)this + 0x3B) = &NiTArray<unsigned int>::`vftable';
  FormHeapFree(v4);
  NiBSPNode::~NiBSPNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
