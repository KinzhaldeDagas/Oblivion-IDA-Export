unsigned int __thiscall sub_482530(_DWORD *this, int a2)
{
  unsigned int result; // eax
  unsigned int i; // ebx
  unsigned int j; // edi

  result = *(this + 3); /*0x482534*/
  for ( i = 0; i < result; ++i ) /*0x48253b*/
  {
    for ( j = 0; j < result; ++j ) /*0x482547*/
    {
      if ( *(_DWORD *)(*(this + 4) + 8 * (j + i * result)) == a2 ) /*0x48255b*/
        (*(void (__thiscall **)(_DWORD *, unsigned int, unsigned int))(*this + 0x1C))(this, i, j); /*0x482566*/
      result = *(this + 3); /*0x482568*/
    }
    result = *(this + 3); /*0x482572*/
  }
  return result; /*0x48257e*/
}
