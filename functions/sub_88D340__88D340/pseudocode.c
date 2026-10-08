int __thiscall sub_88D340(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 2); /*0x88d343*/
  *this = &off_A96248; /*0x88d346*/
  if ( *(_WORD *)(v2 + 4) ) /*0x88d34c*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x88d357*/
      result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x88d362*/
  }
  *this = &hkBaseObject::`vftable'; /*0x88d364*/
  return result; /*0x88d36a*/
}
