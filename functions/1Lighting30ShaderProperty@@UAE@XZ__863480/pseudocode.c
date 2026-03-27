void __thiscall Lighting30ShaderProperty::~Lighting30ShaderProperty(Lighting30ShaderProperty *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &Lighting30ShaderProperty::`vftable';
  v2 = *((_DWORD *)this + 0x41);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x41) = 0;
  }
  v4 = *((_DWORD *)this + 0x41);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  BSShaderPPLightingProperty::~BSShaderPPLightingProperty(this);
}
