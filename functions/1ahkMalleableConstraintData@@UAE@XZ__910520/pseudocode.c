void __thiscall ahkMalleableConstraintData::~ahkMalleableConstraintData(ahkMalleableConstraintData *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &hkMalleableConstraintData::`vftable';
  if ( *(_WORD *)(v2 + 4) )
  {
    if ( !--*(_WORD *)(v2 + 6) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
