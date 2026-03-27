int __thiscall sub_9431A0(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  v2 = *(this + 2);
  *this = &off_AA2768;
  if ( *(_WORD *)(v2 + 4) )
  {
    if ( !--*(_WORD *)(v2 + 6) )
      result = (**(int (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v4 = *(this + 3);
  if ( *(_WORD *)(v4 + 4) )
  {
    if ( !--*(_WORD *)(v4 + 6) )
      result = (**(int (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v5 = *(this + 4);
  if ( *(_WORD *)(v5 + 4) )
  {
    if ( !--*(_WORD *)(v5 + 6) )
      result = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
  }
  *this = &hkBaseObject::`vftable';
  return result;
}
