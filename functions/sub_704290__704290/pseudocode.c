char __thiscall sub_704290(_DWORD *this, int a2)
{
  int v3; // ecx
  float *v4; // ecx

  v3 = *(this + 2); /*0x704293*/
  if ( v3 ) /*0x70429d*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x2C))(v3, *(_DWORD *)(a2 + 8)) ) /*0x7042b2*/
      goto LABEL_5; /*0x7042b6*/
    return 0; /*0x7042de*/
  }
  if ( *(_DWORD *)(a2 + 8) ) /*0x70429f*/
    return 0; /*0x7042a3*/
LABEL_5:
  if ( *((_WORD *)this + 2) != *(_WORD *)(a2 + 4) ) /*0x7042c0*/
    return 0; /*0x7042c0*/
  v4 = (float *)*(this + 3); /*0x7042c2*/
  if ( v4 ) /*0x7042c7*/
  {
    if ( *(_DWORD *)(a2 + 0xC) ) /*0x7042c9*/
    {
      if ( sub_72FD80(v4, *(_DWORD *)(a2 + 0xC)) ) /*0x7042d1*/
        return 0; /*0x7042d8*/
    }
    else if ( !*(_DWORD *)(a2 + 0xC) ) /*0x7042f3*/
    {
      return 0; /*0x7042f3*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0xC) ) /*0x7042e5*/
  {
    return 0; /*0x7042e9*/
  }
  return 1; /*0x7042da*/
}
