int __thiscall sub_918180(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 2); /*0x918183*/
  *this = &off_A9D1B8; /*0x918186*/
  if ( *(_WORD *)(v2 + 4) ) /*0x91818c*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x918197*/
      result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x9181a2*/
  }
  *this = &hkBaseObject::`vftable'; /*0x9181a4*/
  return result; /*0x9181aa*/
}
