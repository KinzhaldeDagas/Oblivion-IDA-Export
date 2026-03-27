LONG __thiscall sub_9A9670(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  _DWORD *v8; // edi
  bool v9; // zf

  if ( (dword_BAAA94 & 1) == 0 )
  {
    dword_BAAA94 |= 1u;
    dword_BAAA90 = 0;
    atexit(sub_A27C10);
  }
  result = a2;
  if ( a2 < *((unsigned __int16 *)this + 5) )
  {
    v5 = *(this + 1);
    if ( *a3 == dword_BAAA90 )
    {
      if ( *(_DWORD *)(v5 + 4 * a2) != dword_BAAA90 )
        --*((_WORD *)this + 6);
    }
    else if ( *(_DWORD *)(v5 + 4 * a2) == dword_BAAA90 )
    {
      ++*((_WORD *)this + 6);
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1;
    if ( *a3 != dword_BAAA90 )
      ++*((_WORD *)this + 6);
  }
  v6 = *(this + 1);
  v7 = *(_DWORD *)(v6 + 4 * a2);
  v8 = (_DWORD *)(v6 + 4 * a2);
  if ( v7 != *a3 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    result = *a3;
    v9 = *a3 == 0;
    *v8 = *a3;
    if ( !v9 )
      return InterlockedIncrement((volatile LONG *)(result + 4));
  }
  return result;
}
