unsigned int __thiscall sub_724700(NiNode *this, NiAVObject *child, int firstAvailableSlot)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  NiTArray_NiTexturingPropertyMap *v6; // esi

  NiNode::AddObject(this, child, firstAvailableSlot); /*0x724710*/
  *((_DWORD *)this + 0x3A) = 1; /*0x724715*/
  v4 = *((unsigned __int16 *)this + 0x7B); /*0x72471f*/
  v5 = *((unsigned __int16 *)this + 0x7A); /*0x724726*/
  v6 = (NiTArray_NiTexturingPropertyMap *)((char *)this + 0xEC); /*0x72472d*/
  firstAvailableSlot = 0; /*0x724735*/
  if ( v4 >= v5 ) /*0x72473d*/
    NiTArray_SetSize((unsigned __int16 *)v6, v4 + v6->growSize); /*0x724748*/
  return NiTArray_SetAt(v6, v4, &firstAvailableSlot); /*0x72475a*/
}
