void __thiscall ahkBreakableConstraintData::~ahkBreakableConstraintData(ahkBreakableConstraintData *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 3); /*0x9105c3*/
  *(_DWORD *)this = &hkBreakableConstraintData::`vftable'; /*0x9105c6*/
  if ( *(_WORD *)(v2 + 4) ) /*0x9105cc*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x9105d7*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x9105e2*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x9105e4*/
}
