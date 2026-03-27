void __thiscall SpeedTreeShaderLightingProperty::~SpeedTreeShaderLightingProperty(
        SpeedTreeShaderLightingProperty *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi

  *(_DWORD *)this = &SpeedTreeShaderLightingProperty::`vftable';
  v2 = *((_DWORD *)this + 0x29);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x29) = 0;
  }
  v4 = *((_DWORD *)this + 0x27);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x27) = 0;
  }
  v5 = *((_DWORD *)this + 0x29);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  v6 = *((_DWORD *)this + 0x27);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  BSShaderLightingProperty::~BSShaderLightingProperty(this);
}
