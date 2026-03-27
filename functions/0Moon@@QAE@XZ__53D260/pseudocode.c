Moon *__thiscall Moon::Moon(Moon *this, const char *ArgList, float a3, float a4, float a5, float a6, float a7, int a8)
{
  LONG (__stdcall *v9)(volatile LONG *); // ebx
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi

  SkyObject::SkyObject((SkyObject *)this);
  *(_DWORD *)this = &Moon::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  ArrayConstructor((char *)this + 0x18, 8u, 8, (int)BSStringT_constr, (void (__thiscall *)(void *))BSStringT_Clear);
  BSStringT_Static_Format((BSStringT *)this + 6, "\\Textures\\Sky\\%s_%s.dds", ArgList, "one_wan");
  BSStringT_Static_Format((BSStringT *)this + 8, "\\Textures\\Sky\\%s_%s.dds", ArgList, "one_wax");
  BSStringT_Static_Format((BSStringT *)this + 5, "\\Textures\\Sky\\%s_%s.dds", ArgList, "half_wan");
  BSStringT_Static_Format((BSStringT *)this + 9, "\\Textures\\Sky\\%s_%s.dds", ArgList, "half_wax");
  BSStringT_Static_Format((BSStringT *)this + 4, "\\Textures\\Sky\\%s_%s.dds", ArgList, "three_wan");
  BSStringT_Static_Format((BSStringT *)this + 0xA, "\\Textures\\Sky\\%s_%s.dds", ArgList, "three_wax");
  BSStringT_Static_Format((BSStringT *)this + 3, "\\Textures\\Sky\\%s_%s.dds", ArgList, "full");
  *((float *)this + 0x16) = a3;
  *((float *)this + 0x17) = a4;
  *((_DWORD *)this + 0x1B) = a8;
  *((float *)this + 0x18) = a5;
  *((float *)this + 0x19) = a6;
  *((float *)this + 0x1A) = a7;
  *((float *)this + 0x1D) = 0.0;
  v9 = InterlockedDecrement;
  *((float *)this + 0x1E) = flt_A32048;
  v10 = *((_DWORD *)this + 2);
  if ( v10 )
  {
    if ( !v9((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    *((_DWORD *)this + 2) = 0;
  }
  v11 = *((_DWORD *)this + 3);
  if ( v11 )
  {
    if ( !v9((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    *((_DWORD *)this + 3) = 0;
  }
  v12 = *((_DWORD *)this + 4);
  if ( v12 )
  {
    if ( !v9((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    *((_DWORD *)this + 4) = 0;
  }
  v13 = *((_DWORD *)this + 5);
  if ( v13 )
  {
    if ( !v9((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    *((_DWORD *)this + 5) = 0;
  }
  *((_DWORD *)this + 0x1C) = 0;
  return this;
}
