ExtraHavok *__thiscall ExtraHavok::ExtraHavok(ExtraHavok *this, int a2)
{
  int v3; // edi
  int v4; // edi

  *((_BYTE *)this + 4) = 2;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraHavok::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v3 = *((_DWORD *)this + 3);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *((_DWORD *)this + 3) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 4) = 0;
  }
  return this;
}
