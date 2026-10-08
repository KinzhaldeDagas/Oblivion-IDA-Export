unsigned int __thiscall NiRenderer_RegisterOnDeviceLostCallback(NiDX9Renderer *this, int a2, int a3)
{
  unsigned int end; // esi
  unsigned __int16 *p_unkA98; // edi

  end = this->member.unkA98.end; /*0x40c1b4*/
  p_unkA98 = (unsigned __int16 *)&this->member.unkA98; /*0x40c1c5*/
  if ( end >= this->member.unkA98.capacity ) /*0x40c1cb*/
    NiTArray_SetSize(p_unkA98, end + this->member.unkA98.growSize); /*0x40c1d6*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)p_unkA98, end, &a2); /*0x40c1e3*/
  if ( end >= this->member.unkAA8.capacity ) /*0x40c1f7*/
    NiTArray_SetSize((unsigned __int16 *)&this->member.unkAA8, end + this->member.unkAA8.growSize); /*0x40c202*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&this->member.unkAA8, end, &a3); /*0x40c20f*/
  return end; /*0x40c214*/
}
