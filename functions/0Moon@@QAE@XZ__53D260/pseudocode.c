Moon *__thiscall Moon::Moon(Moon *this, const char *ArgList, float a3, float a4, float a5, float a6, float a7, int a8)
{
  LONG (__stdcall *v9)(volatile LONG *); // ebx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi

  SkyObject::SkyObject((SkyObject *)this); /*0x53d28b*/
  *(_DWORD *)this = &Moon::`vftable'; /*0x53d292*/
  *((_DWORD *)this + 2) = 0; /*0x53d29c*/
  *((_DWORD *)this + 3) = 0; /*0x53d29f*/
  *((_DWORD *)this + 4) = 0; /*0x53d2a2*/
  *((_DWORD *)this + 5) = 0; /*0x53d2a5*/
  ArrayConstructor( /*0x53d2bf*/
    (char *)this + 0x18,
    8u,
    8,
    (void (__thiscall *)(char *))BSStringT_constr,
    (void (__thiscall *)(void *))BSStringT_Clear);
  BSStringT_Static_Format((BSStringT *)this + 6, "\\Textures\\Sky\\%s_%s.dds", ArgList, "one_wan"); /*0x53d2dc*/
  BSStringT_Static_Format((BSStringT *)this + 8, "\\Textures\\Sky\\%s_%s.dds", ArgList, "one_wax"); /*0x53d2f0*/
  BSStringT_Static_Format((BSStringT *)this + 5, "\\Textures\\Sky\\%s_%s.dds", ArgList, "half_wan"); /*0x53d304*/
  BSStringT_Static_Format((BSStringT *)this + 9, "\\Textures\\Sky\\%s_%s.dds", ArgList, "half_wax"); /*0x53d318*/
  BSStringT_Static_Format((BSStringT *)this + 4, "\\Textures\\Sky\\%s_%s.dds", ArgList, "three_wan"); /*0x53d32f*/
  BSStringT_Static_Format((BSStringT *)this + 0xA, "\\Textures\\Sky\\%s_%s.dds", ArgList, "three_wax"); /*0x53d343*/
  BSStringT_Static_Format((BSStringT *)this + 3, "\\Textures\\Sky\\%s_%s.dds", ArgList, "full"); /*0x53d354*/
  *((float *)this + 0x16) = a3; /*0x53d361*/
  *((float *)this + 0x17) = a4; /*0x53d36b*/
  *((_DWORD *)this + 0x1B) = a8; /*0x53d36e*/
  *((float *)this + 0x18) = a5; /*0x53d375*/
  *((float *)this + 0x19) = a6; /*0x53d37c*/
  *((float *)this + 0x1A) = a7; /*0x53d383*/
  *((float *)this + 0x1D) = 0.0; /*0x53d388*/
  v9 = InterlockedDecrement; /*0x53d391*/
  *((float *)this + 0x1E) = flt_A32048; /*0x53d397*/
  v10 = *((_DWORD *)this + 2); /*0x53d39a*/
  if ( v10 ) /*0x53d39f*/
  {
    if ( !v9((volatile LONG *)(v10 + 4)) ) /*0x53d3a5*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x53d3b7*/
    *((_DWORD *)this + 2) = 0; /*0x53d3b9*/
  }
  v11 = *((_DWORD *)this + 3); /*0x53d3bc*/
  if ( v11 ) /*0x53d3c1*/
  {
    if ( !v9((volatile LONG *)(v11 + 4)) ) /*0x53d3c7*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x53d3d9*/
    *((_DWORD *)this + 3) = 0; /*0x53d3db*/
  }
  v12 = *((_DWORD *)this + 4); /*0x53d3de*/
  if ( v12 ) /*0x53d3e3*/
  {
    if ( !v9((volatile LONG *)(v12 + 4)) ) /*0x53d3e9*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x53d3fb*/
    *((_DWORD *)this + 4) = 0; /*0x53d3fd*/
  }
  v13 = *((_DWORD *)this + 5); /*0x53d400*/
  if ( v13 ) /*0x53d405*/
  {
    if ( !v9((volatile LONG *)(v13 + 4)) ) /*0x53d40b*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x53d41d*/
    *((_DWORD *)this + 5) = 0; /*0x53d41f*/
  }
  *((_DWORD *)this + 0x1C) = 0; /*0x53d424*/
  return this; /*0x53d427*/
}
