NiBSPNode *__thiscall sub_7246C0(NiBSPNode *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x3C); /*0x7246c9*/
  *((_DWORD *)this + 0x3B) = &NiTArray<unsigned int>::`vftable'; /*0x7246ca*/
  FormHeapFree(v4); /*0x7246d4*/
  NiBSPNode::~NiBSPNode(this); /*0x7246de*/
  if ( (a2 & 1) != 0 ) /*0x7246e8*/
    FormHeapFree((unsigned int)this); /*0x7246eb*/
  return this; /*0x7246f5*/
}
