SpeedTreeShaderLightingProperty *__thiscall SpeedTreeShaderLightingProperty::SpeedTreeShaderLightingProperty(
        SpeedTreeShaderLightingProperty *this,
        int a2)
{
  int v3; // edi

  BSShaderLightingProperty::BSShaderLightingProperty(this);
  *(_DWORD *)this = &SpeedTreeShaderLightingProperty::`vftable';
  *((_DWORD *)this + 0x27) = 0;
  *((_DWORD *)this + 0x29) = 0;
  if ( a2 )
  {
    *((_DWORD *)this + 0x29) = a2;
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v3 = *((_DWORD *)this + 0x27);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x27) = 0;
  }
  *((_DWORD *)this + 0x28) = 1;
  return this;
}
