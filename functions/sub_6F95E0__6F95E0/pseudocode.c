LONG __thiscall sub_6F95E0(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (dword_B3F388 & 1) == 0 )
  {
    dword_B3F388 |= 1u;
    dword_B3F384 = 0;
    atexit(sub_A268D0);
  }
  result = a2;
  if ( a2 < *((unsigned __int16 *)this + 5) )
  {
    v5 = dword_B3F384;
    v6 = *(this + 1);
    if ( *a3 == dword_B3F384 )
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 )
        --*((_WORD *)this + 6);
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 )
    {
      ++*((_WORD *)this + 6);
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1;
    if ( *a3 != dword_B3F384 )
      ++*((_WORD *)this + 6);
  }
  v7 = *(this + 1);
  v8 = *(_DWORD *)(v7 + 4 * a2);
  v9 = (_DWORD *)(v7 + 4 * a2);
  if ( v8 != *a3 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    result = *a3;
    v10 = *a3 == 0;
    *v9 = *a3;
    if ( !v10 )
      return InterlockedIncrement((volatile LONG *)(result + 4));
  }
  return result;
}
