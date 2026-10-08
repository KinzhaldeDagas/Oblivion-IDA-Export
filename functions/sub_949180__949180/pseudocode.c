_DWORD *__thiscall sub_949180(_DWORD *this)
{
  int *v2; // ecx
  _DWORD *result; // eax
  int v4; // ecx

  v2 = (int *)*(this + 9); /*0x949183*/
  result = this + 8; /*0x949188*/
  *this = &off_AA2BBC; /*0x94918b*/
  *(this + 2) = &off_AA2BA4; /*0x949191*/
  *(this + 8) = off_A9D250; /*0x949198*/
  if ( v2 ) /*0x94919e*/
  {
    result = (_DWORD *)sub_8CAF40(v2, (int)(this + 8)); /*0x9491a1*/
    v4 = *(this + 9); /*0x9491a6*/
    if ( *(_WORD *)(v4 + 4) ) /*0x9491a9*/
    {
      if ( !--*(_WORD *)(v4 + 6) ) /*0x9491b4*/
        result = (_DWORD *)(**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x9491bf*/
    }
    *(this + 9) = 0; /*0x9491c1*/
  }
  *(this + 2) = &off_A9D1C0; /*0x9491c8*/
  *this = &hkBaseObject::`vftable'; /*0x9491cf*/
  return result; /*0x9491d5*/
}
