SpeedTreeShaderPPLightingProperty *__thiscall SpeedTreeShaderPPLightingProperty::SpeedTreeShaderPPLightingProperty(
        SpeedTreeShaderPPLightingProperty *this,
        int a2)
{
  int v3; // edi

  BSShaderPPLightingProperty::BSShaderPPLightingProperty(this);
  *(_DWORD *)this = &SpeedTreeShaderPPLightingProperty::`vftable';
  *((_DWORD *)this + 0x3C) = 0;
  v3 = *((_DWORD *)this + 0x3C);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *((_DWORD *)this + 0x3C) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  return this;
}
