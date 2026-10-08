unsigned int __thiscall sub_435F10(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // ecx
  unsigned int result; // eax

  while ( 1 ) /*0x435f62*/
  {
    do /*0x435f62*/
    {
      v5 = (_DWORD *)(4 * a2 + *(_DWORD *)(*this + 0xC)); /*0x435f2b*/
      *(this + 4) = v5; /*0x435f2d*/
      *(this + 5) = *v5; /*0x435f34*/
      *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE; /*0x435f40*/
      result = *(_DWORD *)*(this + 4); /*0x435f5a*/
    }
    while ( result != (*(this + 5) & 0xFFFFFFFE) ); /*0x435f62*/
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x435f6d*/
      break; /*0x435f6d*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x20))(*this, *a3); /*0x435f79*/
    *a3 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x24))( /*0x435f8d*/
            *this,
            *(_DWORD *)(*(this + 5) & 0xFFFFFFFE));
    result = *(this + 5) & 0xFFFFFFFE; /*0x435f92*/
    *a4 = *(_DWORD *)(result + 4); /*0x435f98*/
    LOBYTE(result) = 1; /*0x435fa3*/
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x435fa7*/
      goto LABEL_6; /*0x435fa7*/
  }
  LOBYTE(result) = 0; /*0x435faf*/
LABEL_6:
  *(_DWORD *)*(this + 1) = 0; /*0x435fb1*/
  *(_DWORD *)*(this + 2) = 0; /*0x435fbe*/
  *(_DWORD *)*(this + 3) = 0; /*0x435fc9*/
  return result; /*0x435fbd*/
}
