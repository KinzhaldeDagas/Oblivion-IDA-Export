void __thiscall PrecipitationShaderProperty::~PrecipitationShaderProperty(BSShaderProperty *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi

  this->vtbl = &PrecipitationShaderProperty::`vftable';
  v2 = InterlockedDecrement;
  *((_DWORD *)this + 0x1B) = 0;
  v3 = *((_DWORD *)this + 0x27);
  if ( v3 )
  {
    if ( !v2((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x27) = 0;
  }
  v4 = *((_DWORD *)this + 0x27);
  if ( v4 )
  {
    if ( !v2((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  BSShaderProperty::~BSShaderProperty(this);
}
