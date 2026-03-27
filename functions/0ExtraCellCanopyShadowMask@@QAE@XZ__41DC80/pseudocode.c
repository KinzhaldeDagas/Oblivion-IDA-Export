ExtraCellCanopyShadowMask *__thiscall ExtraCellCanopyShadowMask::ExtraCellCanopyShadowMask(
        ExtraCellCanopyShadowMask *this,
        int a2,
        int a3)
{
  int v4; // edi

  *((_BYTE *)this + 4) = 0xF;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraCellCanopyShadowMask::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = a2;
  v4 = *((_DWORD *)this + 4);
  if ( v4 != a3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 4) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  *((_DWORD *)this + 6) = 0;
  return this;
}
