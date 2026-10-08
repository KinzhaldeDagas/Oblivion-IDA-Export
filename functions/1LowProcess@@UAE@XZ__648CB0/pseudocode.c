void __thiscall LowProcess::~LowProcess(#553 *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  TESPackage *v3; // ecx
  int v4; // ecx
  unsigned int v5; // eax
  int *v6; // edi
  unsigned int v7; // ebp
  int v8; // edi
  int *v9; // edi
  unsigned int v10; // ebp
  int v11; // edi
  int v12; // ecx

  *(_DWORD *)this = &LowProcess::`vftable'; /*0x648cdb*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0xD); /*0x648ce1*/
  if ( v2 ) /*0x648cf0*/
    (**v2)(v2, 1); /*0x648cf8*/
  v3 = *((TESPackage **)this + 2); /*0x648cfa*/
  if ( v3 ) /*0x648cff*/
  {
    if ( TESPackage_IsRuntimePackage(v3) ) /*0x648d01*/
    {
      if ( sub_45A500(g_TESSaveLoadGame) ) /*0x648d10*/
      {
        TESSaveLoadGame_DeleteForm(g_TESSaveLoadGame, *((TESForm **)this + 2)); /*0x648d23*/
      }
      else
      {
        v4 = *((_DWORD *)this + 2); /*0x648d2a*/
        if ( v4 ) /*0x648d2f*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x10))(v4, 1); /*0x648d38*/
      }
    }
  }
  v5 = *((_DWORD *)this + 0x11); /*0x648d3a*/
  *((_DWORD *)this + 2) = 0; /*0x648d3f*/
  if ( v5 ) /*0x648d42*/
  {
    if ( *((_DWORD *)this + 0x12) == v5 ) /*0x648d47*/
      *((_DWORD *)this + 0x12) = 0; /*0x648d49*/
    FormHeapFree(v5); /*0x648d4d*/
    *((_DWORD *)this + 0x11) = 0; /*0x648d55*/
  }
  if ( *((_DWORD *)this + 0x12) ) /*0x648d58*/
  {
    FormHeapFree(*((_DWORD *)this + 0x12)); /*0x648d60*/
    *((_DWORD *)this + 0x12) = 0; /*0x648d68*/
  }
  v6 = (int *)((char *)this + 0x3C); /*0x648d6b*/
  while ( *((_DWORD *)this + 0x10) || *v6 ) /*0x648d75*/
  {
    v7 = *v6; /*0x648d77*/
    BSSimpleList_Remove((int *)this + 0xF, *v6); /*0x648d7c*/
    if ( v7 ) /*0x648d83*/
      FormHeapFree(v7); /*0x648d86*/
  }
  if ( *((_DWORD *)this + 0x14) ) /*0x648d90*/
  {
    do /*0x648da9*/
    {
      v8 = *(_DWORD *)(*((_DWORD *)this + 0x14) + 4); /*0x648d98*/
      FormHeapFree(*((_DWORD *)this + 0x14)); /*0x648d9c*/
      *((_DWORD *)this + 0x14) = v8; /*0x648da6*/
    }
    while ( v8 ); /*0x648da9*/
  }
  *((_DWORD *)this + 0x13) = 0; /*0x648dab*/
  *((_DWORD *)this + 0xC) = 0; /*0x648dae*/
  v9 = (int *)((char *)this + 0x54); /*0x648db1*/
  while ( *((_DWORD *)this + 0x16) || *v9 ) /*0x648dbb*/
  {
    v10 = *v9; /*0x648dbd*/
    BSSimpleList_Remove((int *)this + 0x15, *v9); /*0x648dc2*/
    if ( v10 ) /*0x648dc9*/
      FormHeapFree(v10); /*0x648dcc*/
  }
  if ( *((_DWORD *)this + 0x18) ) /*0x648dd6*/
  {
    do /*0x648df4*/
    {
      v11 = *(_DWORD *)(*((_DWORD *)this + 0x18) + 4); /*0x648de3*/
      FormHeapFree(*((_DWORD *)this + 0x18)); /*0x648de7*/
      *((_DWORD *)this + 0x18) = v11; /*0x648df1*/
    }
    while ( v11 ); /*0x648df4*/
  }
  *((_DWORD *)this + 0x17) = 0; /*0x648df6*/
  v12 = *((_DWORD *)this + 0x19); /*0x648df9*/
  if ( v12 ) /*0x648dfe*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x10))(v12, 1); /*0x648e07*/
  AVCollection_destr((AVCollection *)((char *)this + 0x70)); /*0x648e10*/
  sub_60CDA0(this); /*0x648e1f*/
}
