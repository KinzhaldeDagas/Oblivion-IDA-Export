TallGrassShaderProperty *__thiscall TallGrassShaderProperty::TallGrassShaderProperty(TallGrassShaderProperty *this)
{
  int v2; // edi

  BSShaderLightingProperty::BSShaderLightingProperty(this);
  *(_DWORD *)this = &TallGrassShaderProperty::`vftable';
  *((_DWORD *)this + 0x28) = 0;
  *((_DWORD *)this + 0x29) = 0;
  v2 = *((_DWORD *)this + 0x28);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x28) = 0;
  }
  *((_DWORD *)this + 0x27) = 0;
  return this;
}
