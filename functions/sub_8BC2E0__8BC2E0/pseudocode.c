_DWORD **__thiscall sub_8BC2E0(_DWORD *this)
{
  _DWORD **result; // eax
  _DWORD *v3; // ecx

  result = (_DWORD **)*(this + 4);
  *this = &off_A98330;
  if ( !result )
  {
    v3 = (_DWORD *)*(this + 2);
    if ( v3 )
      result = sub_8BC310(v3, 1);
  }
  *this = &hkBaseObject::`vftable';
  return result;
}
