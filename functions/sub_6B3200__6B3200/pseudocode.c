char __thiscall sub_6B3200(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  char v3; // dl
  unsigned int v4; // eax

  if ( *(this + 4) >= (unsigned int)(*(this + 3) - 1) ) /*0x6b320a*/
    return 0; /*0x6b3237*/
  v1 = *(this + 2); /*0x6b320c*/
  while ( 1 ) /*0x6b3210*/
  {
    v2 = *(this + 4); /*0x6b3210*/
    if ( *(_BYTE *)(v1 + v2) == 0xFF ) /*0x6b3217*/
    {
      v3 = *(_BYTE *)(v1 + v2 + 1); /*0x6b3219*/
      if ( v3 == (char)0xFB || v3 == (char)0xFA ) /*0x6b3225*/
        break; /*0x6b3225*/
    }
    v4 = v2 + 1; /*0x6b3227*/
    *(this + 4) = v4; /*0x6b322a*/
    if ( v4 >= *(this + 3) - 1 ) /*0x6b3235*/
      return 0; /*0x6b3235*/
  }
  return 1; /*0x6b3239*/
}
