unsigned int __thiscall sub_556800(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int i; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = *(this + 1); /*0x556805*/
  if ( v2 ) /*0x55680b*/
    v3 = (*(this + 2) - v2) / 0xC; /*0x556824*/
  else
    v3 = 0; /*0x55680d*/
  v4 = 0; /*0x556826*/
  for ( i = 0; ; i += 0x30 ) /*0x556828*/
  {
    v6 = *(this + 0x25); /*0x556830*/
    if ( !v6 || v4 >= (*(this + 0x26) - v6) / 0x30 ) /*0x556859*/
      break; /*0x556859*/
    v7 = *(this + 0x25); /*0x55685b*/
    if ( !v7 || v4 >= (*(this + 0x26) - v7) / 0x30 ) /*0x556880*/
      _invalid_parameter_noinfo(); /*0x556882*/
    v8 = *(this + 0x25); /*0x556887*/
    if ( *(_DWORD *)(v8 + i + 0x1C) < v3 ) /*0x556891*/
    {
      if ( !v8 || v4 >= (*(this + 0x26) - v8) / 0x30 ) /*0x5568b2*/
        _invalid_parameter_noinfo(); /*0x5568b4*/
      v3 = *(_DWORD *)(*(this + 0x25) + i + 0x1C); /*0x5568bf*/
    }
    ++v4; /*0x5568c3*/
  }
  return v3; /*0x5568ce*/
}
