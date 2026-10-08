int __thiscall sub_8BC000(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 2); /*0x8bc003*/
  *this = &off_A98328; /*0x8bc008*/
  if ( v2 ) /*0x8bc00e*/
  {
    if ( *(_WORD *)(v2 + 4) ) /*0x8bc010*/
    {
      if ( !--*(_WORD *)(v2 + 6) ) /*0x8bc01b*/
        result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x8bc026*/
    }
  }
  *this = &hkBaseObject::`vftable'; /*0x8bc028*/
  return result; /*0x8bc02e*/
}
