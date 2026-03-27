void __thiscall DistantLODShaderProperty::~DistantLODShaderProperty(DistantLODShaderProperty *this)
{
  int v2; // edi

  *(_DWORD *)this = &DistantLODShaderProperty::`vftable';
  *((_DWORD *)this + 0x27) = 0;
  v2 = *((_DWORD *)this + 0x28);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  BSShaderLightingProperty::~BSShaderLightingProperty(this);
}
