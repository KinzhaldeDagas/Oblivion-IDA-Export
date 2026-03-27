_DWORD *__thiscall sub_949180(_DWORD *this)
{
  int *v2; // ecx
  _DWORD *result; // eax
  int v4; // ecx

  v2 = (int *)*(this + 9);
  result = this + 8;
  *this = &off_AA2BBC;
  *(this + 2) = &off_AA2BA4;
  *(this + 8) = off_A9D250;
  if ( v2 )
  {
    result = (_DWORD *)sub_8CAF40(v2, (int)(this + 8));
    v4 = *(this + 9);
    if ( *(_WORD *)(v4 + 4) )
    {
      if ( !--*(_WORD *)(v4 + 6) )
        result = (_DWORD *)(**(int (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(this + 9) = 0;
  }
  *(this + 2) = &off_A9D1C0;
  *this = &hkBaseObject::`vftable';
  return result;
}
