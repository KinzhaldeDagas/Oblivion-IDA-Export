unsigned __int8 __thiscall sub_470CB0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  unsigned __int8 result; // al

  v2 = *(_DWORD **)(*(this + 1) + 4);
  result = 0;
  if ( !v2 )
    return 0xFF;
  while ( a2 != v2[2] )
  {
    v2 = (_DWORD *)*v2;
    ++result;
    if ( !v2 )
      return 0xFF;
  }
  return result;
}
