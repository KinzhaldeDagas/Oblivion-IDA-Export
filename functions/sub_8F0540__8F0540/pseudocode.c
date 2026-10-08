int __thiscall sub_8F0540(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 3); /*0x8f0543*/
  *this = &off_A9B120; /*0x8f0546*/
  if ( *(_WORD *)(v2 + 4) ) /*0x8f054c*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x8f0557*/
      result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x8f0562*/
  }
  *this = &hkBaseObject::`vftable'; /*0x8f0564*/
  return result; /*0x8f056a*/
}
