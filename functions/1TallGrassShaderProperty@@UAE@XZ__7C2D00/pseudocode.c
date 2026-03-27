void __thiscall TallGrassShaderProperty::~TallGrassShaderProperty(TallGrassShaderProperty *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi

  *(_DWORD *)this = &TallGrassShaderProperty::`vftable';
  v2 = *((_DWORD *)this + 0x28);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x28) = 0;
  }
  *((_DWORD *)this + 0x27) = 0;
  v4 = *((_DWORD *)this + 0x29);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v5 = *((_DWORD *)this + 0x28);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  BSShaderLightingProperty::~BSShaderLightingProperty(this);
}
