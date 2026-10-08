int __thiscall sub_92B420(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx

  v2 = *(this + 4); /*0x92b423*/
  *this = &off_AA1BEC; /*0x92b426*/
  if ( *(_WORD *)(v2 + 4) ) /*0x92b42c*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x92b437*/
      result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x92b442*/
  }
  v4 = *(this + 3); /*0x92b444*/
  if ( *(_WORD *)(v4 + 4) ) /*0x92b447*/
  {
    if ( !--*(_WORD *)(v4 + 6) ) /*0x92b452*/
      result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x92b45d*/
  }
  *this = &hkBaseObject::`vftable'; /*0x92b45f*/
  return result; /*0x92b465*/
}
