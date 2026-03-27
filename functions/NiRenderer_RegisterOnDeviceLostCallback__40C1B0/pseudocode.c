unsigned int __thiscall NiRenderer_RegisterOnDeviceLostCallback(NiDX9Renderer *this, int a2, int a3)
{
  unsigned int end; // esi
  unsigned __int16 *p_unkA98; // edi

  end = this->member.unkA98.end;
  p_unkA98 = (unsigned __int16 *)&this->member.unkA98;
  if ( end >= this->member.unkA98.capacity )
    NiTArray_SetSize(p_unkA98, end + this->member.unkA98.growSize);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)p_unkA98, end, &a2);
  if ( end >= this->member.unkAA8.capacity )
    NiTArray_SetSize((unsigned __int16 *)&this->member.unkAA8, end + this->member.unkAA8.growSize);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&this->member.unkAA8, end, &a3);
  return end;
}
