void __thiscall DistantLODShaderProperty::~DistantLODShaderProperty(BSShaderLightingPropertyLayout_t *this)
{
  int v2; // edi

  this->base.vtbl = &DistantLODShaderProperty::`vftable'; /*0x7b2359*/
  *((_DWORD *)this + 0x27) = 0; /*0x7b235f*/
  v2 = *((_DWORD *)this + 0x28); /*0x7b2369*/
  if ( v2 ) /*0x7b2379*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7b237f*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7b2395*/
  }
  BSShaderLightingProperty::~BSShaderLightingProperty(this); /*0x7b23a1*/
}
