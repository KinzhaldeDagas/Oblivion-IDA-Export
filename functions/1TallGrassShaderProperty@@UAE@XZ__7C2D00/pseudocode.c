void __thiscall TallGrassShaderProperty::~TallGrassShaderProperty(BSShaderLightingPropertyLayout_t *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi

  this->base.vtbl = &TallGrassShaderProperty::`vftable'; /*0x7c2d2a*/
  v2 = *((_DWORD *)this + 0x28); /*0x7c2d30*/
  v3 = InterlockedDecrement; /*0x7c2d38*/
  if ( v2 ) /*0x7c2d46*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7c2d4c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7c2d5e*/
    *((_DWORD *)this + 0x28) = 0; /*0x7c2d60*/
  }
  *((_DWORD *)this + 0x27) = 0; /*0x7c2d6a*/
  v4 = *((_DWORD *)this + 0x29); /*0x7c2d74*/
  if ( v4 ) /*0x7c2d81*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7c2d87*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7c2d99*/
  }
  v5 = *((_DWORD *)this + 0x28); /*0x7c2d9b*/
  if ( v5 ) /*0x7c2da8*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x7c2dae*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7c2dc0*/
  }
  BSShaderLightingProperty::~BSShaderLightingProperty(this); /*0x7c2dcc*/
}
