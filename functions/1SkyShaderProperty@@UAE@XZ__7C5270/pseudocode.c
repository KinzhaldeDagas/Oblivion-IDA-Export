void __thiscall SkyShaderProperty::~SkyShaderProperty(BSShaderProperty *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi

  this->vtbl = &SkyShaderProperty::`vftable';
  v2 = *((_DWORD *)this + 0x1F);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x1F) = 0;
  }
  *((_DWORD *)this + 0x22) = 8;
  *((float *)this + 0x20) = 0.0;
  *((_WORD *)this + 0x42) = 0;
  v4 = *((_DWORD *)this + 0x1F);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  BSShaderProperty::~BSShaderProperty(this);
}
