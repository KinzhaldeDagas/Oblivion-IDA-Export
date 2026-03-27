SpeedTreeLeafShaderProperty *__thiscall SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(
        SpeedTreeLeafShaderProperty *this,
        __int16 a2,
        int a3,
        int a4)
{
  int v5; // edi

  SpeedTreeShaderLightingProperty::SpeedTreeShaderLightingProperty(this, a3);
  *(_DWORD *)this = &SpeedTreeLeafShaderProperty::`vftable';
  *((_DWORD *)this + 0x2A) = 0;
  v5 = *((_DWORD *)this + 0x2A);
  if ( v5 == a4 )
  {
    *((_WORD *)this + 0x56) = a2;
  }
  else
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *((_DWORD *)this + 0x2A) = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    *((_WORD *)this + 0x56) = a2;
  }
  return this;
}
