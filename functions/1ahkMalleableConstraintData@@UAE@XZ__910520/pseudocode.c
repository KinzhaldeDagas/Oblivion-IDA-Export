void __thiscall ahkMalleableConstraintData::~ahkMalleableConstraintData(ahkMalleableConstraintData *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 3); /*0x910523*/
  *(_DWORD *)this = &hkMalleableConstraintData::`vftable'; /*0x910526*/
  if ( *(_WORD *)(v2 + 4) ) /*0x91052c*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x910537*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x910542*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x910544*/
}
