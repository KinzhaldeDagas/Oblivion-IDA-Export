void __fastcall MiddleHighProcess::~MiddleHighProcess(#554 *this, int a2)
{
  _DWORD *v3; // edi
  unsigned int v4; // edi
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // edi
  LONG (__stdcall *v8)(volatile LONG *); // ebp
  int v9; // edi
  bool v10; // al
  int v11; // ecx
  _DWORD *v12; // ecx
  unsigned int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi

  *(_DWORD *)this = &MiddleHighProcess::`vftable'; /*0x651f9b*/
  v3 = *((_DWORD **)this + 0x5D); /*0x651fa1*/
  if ( v3 ) /*0x651fb3*/
  {
    do /*0x651fc8*/
    {
      if ( !*v3 ) /*0x651fb5*/
        break; /*0x651fb9*/
      (**(void (__thiscall ***)(_DWORD, int))*v3)(*v3, 1); /*0x651fc1*/
      v3 = (_DWORD *)v3[1]; /*0x651fc3*/
    }
    while ( v3 ); /*0x651fc8*/
    BSSimpleList_Clear(*((_DWORD **)this + 0x5D)); /*0x651fd0*/
    FormHeapFree(*((_DWORD *)this + 0x5D)); /*0x651fdc*/
  }
  v4 = *((_DWORD *)this + 0x39); /*0x651fe4*/
  if ( v4 ) /*0x651fec*/
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0x39), a2); /*0x651ff0*/
    FormHeapFree(v4); /*0x651ff6*/
  }
  v5 = *((_DWORD *)this + 0x3A); /*0x651ffe*/
  if ( v5 ) /*0x652006*/
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0x3A), a2); /*0x65200a*/
    FormHeapFree(v5); /*0x652010*/
  }
  v6 = *((_DWORD *)this + 0x3B); /*0x652018*/
  if ( v6 ) /*0x652020*/
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0x3B), a2); /*0x652024*/
    FormHeapFree(v6); /*0x65202a*/
  }
  v7 = *((_DWORD *)this + 0x3C); /*0x652032*/
  if ( v7 ) /*0x65203a*/
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0x3C), a2); /*0x65203e*/
    FormHeapFree(v7); /*0x652044*/
  }
  v8 = InterlockedDecrement; /*0x65204c*/
  *((_DWORD *)this + 0x39) = 0; /*0x652052*/
  *((_DWORD *)this + 0x3A) = 0; /*0x652058*/
  *((_DWORD *)this + 0x3B) = 0; /*0x65205e*/
  *((_DWORD *)this + 0x3C) = 0; /*0x652064*/
  v9 = *((_DWORD *)this + 0x46); /*0x65206a*/
  if ( v9 ) /*0x652072*/
  {
    if ( !v8((volatile LONG *)(v9 + 4)) ) /*0x652078*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x65208a*/
    *((_DWORD *)this + 0x46) = 0; /*0x65208c*/
  }
  if ( *((_DWORD *)this + 0x30) ) /*0x652092*/
  {
    v10 = sub_45A500(g_TESSaveLoadGame); /*0x6520a0*/
    v11 = *((_DWORD *)this + 0x30); /*0x6520a7*/
    if ( v10 ) /*0x6520ad*/
    {
      TESSaveLoadGame_DeleteForm(g_TESSaveLoadGame, *((TESForm **)this + 0x30)); /*0x6520b6*/
    }
    else if ( v11 ) /*0x6520bf*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x10))(v11, 1); /*0x6520c8*/
    }
  }
  v12 = (_DWORD *)((char *)this + 0xA8); /*0x6520d0*/
  if ( *((_DWORD *)this + 0x2B) || *v12 ) /*0x6520d8*/
    BSSimpleList_Clear(v12); /*0x6520dc*/
  v13 = *((_DWORD *)this + 0x5F); /*0x6520e1*/
  if ( v13 ) /*0x6520e9*/
  {
    DisposeActorAnimData(*((ActorAnimData **)this + 0x5F)); /*0x6520ed*/
    FormHeapFree(v13); /*0x6520f3*/
  }
  *((_DWORD *)this + 0x5F) = 0; /*0x6520fb*/
  v14 = *((_DWORD *)this + 0x61); /*0x652101*/
  if ( v14 ) /*0x652109*/
  {
    if ( !v8((volatile LONG *)(v14 + 4)) ) /*0x65210f*/
      (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x652121*/
    *((_DWORD *)this + 0x61) = 0; /*0x652123*/
  }
  if ( *((_DWORD *)this + 0x2D) ) /*0x652129*/
  {
    do /*0x65214b*/
    {
      v15 = *(_DWORD *)(*((_DWORD *)this + 0x2D) + 4); /*0x652137*/
      FormHeapFree(*((_DWORD *)this + 0x2D)); /*0x65213b*/
      *((_DWORD *)this + 0x2D) = v15; /*0x652145*/
    }
    while ( v15 ); /*0x65214b*/
  }
  *((_DWORD *)this + 0x2C) = 0; /*0x65214d*/
  v16 = *((_DWORD *)this + 0x5C); /*0x652153*/
  if ( v16 ) /*0x65215b*/
  {
    do /*0x652179*/
    {
      if ( !*(_DWORD *)(v16 + 4) && !*(_DWORD *)v16 ) /*0x652165*/
        break; /*0x652167*/
      if ( *(_DWORD *)v16 ) /*0x652169*/
        sub_607730(*(_DWORD **)v16); /*0x65216f*/
      v16 = *(_DWORD *)(v16 + 4); /*0x652174*/
    }
    while ( v16 ); /*0x652179*/
    BSSimpleList_Clear(*((_DWORD **)this + 0x5C)); /*0x652181*/
    FormHeapFree(*((_DWORD *)this + 0x5C)); /*0x65218d*/
  }
  *((_DWORD *)this + 0x5C) = 0; /*0x652195*/
  v17 = *((_DWORD *)this + 0x61); /*0x65219b*/
  if ( v17 ) /*0x6521a8*/
  {
    if ( !v8((volatile LONG *)(v17 + 4)) ) /*0x6521ae*/
      (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x6521c0*/
  }
  v18 = *((_DWORD *)this + 0x46); /*0x6521c2*/
  if ( v18 ) /*0x6521ce*/
  {
    if ( !v8((volatile LONG *)(v18 + 4)) ) /*0x6521d4*/
      (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x6521e6*/
  }
  MiddleLowProcess::~MiddleLowProcess(this); /*0x6521f2*/
}
