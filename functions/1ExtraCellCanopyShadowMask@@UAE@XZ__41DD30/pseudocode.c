void __thiscall ExtraCellCanopyShadowMask::~ExtraCellCanopyShadowMask(ExtraCellCanopyShadowMask *this)
{
  int v2; // edi
  int v3; // edi

  *(_DWORD *)this = &ExtraCellCanopyShadowMask::`vftable';
  *((_DWORD *)this + 3) = 0;
  nullsub_returnTrue_0arg();
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 4) = 0;
  }
  nullsub_returnTrue_0arg();
  *((_DWORD *)this + 6) = 0;
  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
}
