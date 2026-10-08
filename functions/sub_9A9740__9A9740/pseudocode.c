int __thiscall sub_9A9740(_DWORD *this, int a2)
{
  int v2; // ebx
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax

  v2 = a2; /*0x9a9741*/
  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x44))(this, a2); /*0x9a974f*/
  v5 = v4; /*0x9a9751*/
  if ( v4 == 0xFFFFFFFF ) /*0x9a9756*/
  {
    *(this + 9) = 0x80000010; /*0x9a979b*/
    return *(this + 9); /*0x9a97a2*/
  }
  else
  {
    v6 = *(_DWORD *)(*(this + 4) + 4 * v4); /*0x9a975b*/
    if ( v6 ) /*0x9a9760*/
    {
      if ( (*(_DWORD *)(v6 + 0x14) & 0xF0000000) == 0x40000000 ) /*0x9a9771*/
        sub_77CB50(v2); /*0x9a9774*/
    }
    a2 = 0; /*0x9a9785*/
    NiTArray_ConstantMapEntry_SetAt(this + 3, v5, &a2); /*0x9a978d*/
    return *(this + 9); /*0x9a9792*/
  }
}
