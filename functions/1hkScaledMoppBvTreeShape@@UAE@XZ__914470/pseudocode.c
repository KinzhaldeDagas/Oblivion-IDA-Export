void __thiscall hkScaledMoppBvTreeShape::~hkScaledMoppBvTreeShape(hkScaledMoppBvTreeShape *this)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *((_DWORD *)this + 4); /*0x914473*/
  *(_DWORD *)this = &off_A9CE84; /*0x914476*/
  if ( *(_WORD *)(v2 + 4) ) /*0x91447c*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x914487*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x914492*/
  }
  v3 = *((_DWORD *)this + 3); /*0x914494*/
  *(_DWORD *)this = &off_A9B120; /*0x914497*/
  if ( *(_WORD *)(v3 + 4) ) /*0x91449d*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x9144a8*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x9144b3*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x9144b5*/
}
