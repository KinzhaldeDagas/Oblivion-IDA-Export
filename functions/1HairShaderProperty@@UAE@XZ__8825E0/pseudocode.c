void __thiscall HairShaderProperty::~HairShaderProperty(HairShaderProperty *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi

  *(_DWORD *)this = &HairShaderProperty::`vftable'; /*0x88260b*/
  v2 = *((_DWORD *)this + 0x5A); /*0x882611*/
  v3 = InterlockedDecrement; /*0x882617*/
  if ( v2 ) /*0x882629*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x88262f*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x882641*/
    *((_DWORD *)this + 0x5A) = 0; /*0x882643*/
  }
  v4 = *((_DWORD *)this + 0x3C); /*0x882649*/
  if ( v4 ) /*0x882651*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x882657*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x882669*/
    *((_DWORD *)this + 0x3C) = 0; /*0x88266b*/
  }
  v5 = *((_DWORD *)this + 0x3D); /*0x882671*/
  if ( v5 ) /*0x882679*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x88267f*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x882691*/
    *((_DWORD *)this + 0x3D) = 0; /*0x882693*/
  }
  *((_DWORD *)this + 0x3E) = LODWORD(g_zeroNiPoint3.x); /*0x8826a1*/
  *((_DWORD *)this + 0x3F) = LODWORD(g_zeroNiPoint3.y); /*0x8826ad*/
  *((_DWORD *)this + 0x40) = LODWORD(g_zeroNiPoint3.z); /*0x8826b8*/
  *((float *)this + 0x47) = 0.0; /*0x8826be*/
  *((_DWORD *)this + 0x41) = LODWORD(g_zeroNiPoint3.x); /*0x8826ca*/
  *((_DWORD *)this + 0x42) = LODWORD(g_zeroNiPoint3.y); /*0x8826d6*/
  *((_DWORD *)this + 0x43) = LODWORD(g_zeroNiPoint3.z); /*0x8826e1*/
  *((float *)this + 0x48) = 0.0; /*0x8826e7*/
  *((_DWORD *)this + 0x44) = LODWORD(g_zeroNiPoint3.x); /*0x8826f3*/
  *((_DWORD *)this + 0x45) = LODWORD(g_zeroNiPoint3.y); /*0x8826ff*/
  *((_DWORD *)this + 0x46) = LODWORD(g_zeroNiPoint3.z); /*0x88270a*/
  *((float *)this + 0x49) = 0.0; /*0x882710*/
  v6 = *((_DWORD *)this + 0x5B); /*0x882716*/
  if ( v6 ) /*0x882723*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x882729*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x88273b*/
  }
  v7 = *((_DWORD *)this + 0x5A); /*0x88273d*/
  if ( v7 ) /*0x88274a*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x882750*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x882762*/
  }
  v8 = *((_DWORD *)this + 0x3D); /*0x882764*/
  if ( v8 ) /*0x882771*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x882777*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x882789*/
  }
  v9 = *((_DWORD *)this + 0x3C); /*0x88278b*/
  if ( v9 ) /*0x882797*/
  {
    if ( !v3((volatile LONG *)(v9 + 4)) ) /*0x88279d*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8827af*/
  }
  BSShaderPPLightingProperty::~BSShaderPPLightingProperty(this); /*0x8827bb*/
}
