LONG __thiscall sub_8BCD40(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // edi
  bool v8; // zf

  result = a2;
  if ( a2 < *(this + 3) )
  {
    v4 = *(this + 1);
    if ( *a3 )
    {
      if ( !*(_DWORD *)(v4 + 4 * a2) )
        ++*(this + 4);
    }
    else if ( *(_DWORD *)(v4 + 4 * a2) )
    {
      --*(this + 4);
    }
  }
  else
  {
    *(this + 3) = a2 + 1;
    if ( *a3 )
      ++*(this + 4);
  }
  v5 = *(this + 1);
  v6 = *(_DWORD *)(v5 + 4 * a2);
  v7 = (_DWORD *)(v5 + 4 * a2);
  if ( v6 != *a3 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    result = *a3;
    v8 = *a3 == 0;
    *v7 = *a3;
    if ( !v8 )
      return InterlockedIncrement((volatile LONG *)(result + 4));
  }
  return result;
}
