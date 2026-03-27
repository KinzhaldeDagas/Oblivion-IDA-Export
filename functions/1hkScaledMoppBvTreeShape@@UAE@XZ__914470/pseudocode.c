void __thiscall hkScaledMoppBvTreeShape::~hkScaledMoppBvTreeShape(hkScaledMoppBvTreeShape *this)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *((_DWORD *)this + 4);
  *(_DWORD *)this = &off_A9CE84;
  if ( *(_WORD *)(v2 + 4) )
  {
    if ( !--*(_WORD *)(v2 + 6) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_A9B120;
  if ( *(_WORD *)(v3 + 4) )
  {
    if ( !--*(_WORD *)(v3 + 6) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
