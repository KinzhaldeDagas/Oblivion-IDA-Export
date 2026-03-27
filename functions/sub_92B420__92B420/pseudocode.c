int __thiscall sub_92B420(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx

  v2 = *(this + 4);
  *this = &off_AA1BEC;
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
  *this = &hkBaseObject::`vftable';
  return result;
}
