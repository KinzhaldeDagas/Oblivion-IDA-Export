void __thiscall ExtraHavok::~ExtraHavok(ExtraHavok *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  int v5; // edi

  *(_DWORD *)this = &ExtraHavok::`vftable';
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 4) = 0;
  }
  v3 = *((_DWORD *)this + 3);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 3) = 0;
  }
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
}
