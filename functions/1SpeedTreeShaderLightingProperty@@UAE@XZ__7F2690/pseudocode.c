void __thiscall SpeedTreeShaderLightingProperty::~SpeedTreeShaderLightingProperty(
        BSShaderLightingPropertyLayout_t *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi

  this->base.vtbl = &SpeedTreeShaderLightingProperty::`vftable'; /*0x7f26ba*/
  v2 = *((_DWORD *)this + 0x29); /*0x7f26c0*/
  v3 = InterlockedDecrement; /*0x7f26c8*/
  if ( v2 ) /*0x7f26d6*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7f26dc*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7f26ee*/
    *((_DWORD *)this + 0x29) = 0; /*0x7f26f0*/
  }
  v4 = *((_DWORD *)this + 0x27); /*0x7f26fa*/
  if ( v4 ) /*0x7f2702*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7f2708*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7f271a*/
    *((_DWORD *)this + 0x27) = 0; /*0x7f271c*/
  }
  v5 = *((_DWORD *)this + 0x29); /*0x7f2726*/
  if ( v5 ) /*0x7f2733*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x7f2739*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7f274b*/
  }
  v6 = *((_DWORD *)this + 0x27); /*0x7f274d*/
  if ( v6 ) /*0x7f275a*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x7f2760*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7f2772*/
  }
  BSShaderLightingProperty::~BSShaderLightingProperty(this); /*0x7f277e*/
}
