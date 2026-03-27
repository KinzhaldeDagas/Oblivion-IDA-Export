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

  *(_DWORD *)this = &MiddleHighProcess::`vftable';
  v3 = *((_DWORD **)this + 0x5D);
  if ( v3 )
  {
    do
    {
      if ( !*v3 )
        break;
      (**(void (__thiscall ***)(_DWORD, int))*v3)(*v3, 1);
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
    BSSimpleList_Clear(*((_DWORD **)this + 0x5D));
    FormHeapFree(*((_DWORD *)this + 0x5D));
  }
  v4 = *((_DWORD *)this + 0x39);
  if ( v4 )
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0x39), a2);
    FormHeapFree(v4);
  }
  v5 = *((_DWORD *)this + 0x3A);
  if ( v5 )
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0x3A), a2);
    FormHeapFree(v5);
  }
  v6 = *((_DWORD *)this + 0x3B);
  if ( v6 )
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0x3B), a2);
    FormHeapFree(v6);
  }
  v7 = *((_DWORD *)this + 0x3C);
  if ( v7 )
  {
    ContainerEntryExtraData_DestroyDataTable(*((unsigned int **)this + 0x3C), a2);
    FormHeapFree(v7);
  }
  v8 = InterlockedDecrement;
  *((_DWORD *)this + 0x39) = 0;
  *((_DWORD *)this + 0x3A) = 0;
  *((_DWORD *)this + 0x3B) = 0;
  *((_DWORD *)this + 0x3C) = 0;
  v9 = *((_DWORD *)this + 0x46);
  if ( v9 )
  {
    if ( !v8((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    *((_DWORD *)this + 0x46) = 0;
  }
  if ( *((_DWORD *)this + 0x30) )
  {
    v10 = sub_45A500(SaveLoad_CurrentSavegame);
    v11 = *((_DWORD *)this + 0x30);
    if ( v10 )
    {
      sub_45C7A0((char *)SaveLoad_CurrentSavegame, *((TESForm **)this + 0x30));
    }
    else if ( v11 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x10))(v11, 1);
    }
  }
  v12 = (_DWORD *)((char *)this + 0xA8);
  if ( *((_DWORD *)this + 0x2B) || *v12 )
    BSSimpleList_Clear(v12);
  v13 = *((_DWORD *)this + 0x5F);
  if ( v13 )
  {
    DisposeActorAnimData(*((ActorAnimData **)this + 0x5F));
    FormHeapFree(v13);
  }
  *((_DWORD *)this + 0x5F) = 0;
  v14 = *((_DWORD *)this + 0x61);
  if ( v14 )
  {
    if ( !v8((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    *((_DWORD *)this + 0x61) = 0;
  }
  if ( *((_DWORD *)this + 0x2D) )
  {
    do
    {
      v15 = *(_DWORD *)(*((_DWORD *)this + 0x2D) + 4);
      FormHeapFree(*((_DWORD *)this + 0x2D));
      *((_DWORD *)this + 0x2D) = v15;
    }
    while ( v15 );
  }
  *((_DWORD *)this + 0x2C) = 0;
  v16 = *((_DWORD *)this + 0x5C);
  if ( v16 )
  {
    do
    {
      if ( !*(_DWORD *)(v16 + 4) && !*(_DWORD *)v16 )
        break;
      if ( *(_DWORD *)v16 )
        sub_607730(*(_DWORD **)v16);
      v16 = *(_DWORD *)(v16 + 4);
    }
    while ( v16 );
    BSSimpleList_Clear(*((_DWORD **)this + 0x5C));
    FormHeapFree(*((_DWORD *)this + 0x5C));
  }
  *((_DWORD *)this + 0x5C) = 0;
  v17 = *((_DWORD *)this + 0x61);
  if ( v17 )
  {
    if ( !v8((volatile LONG *)(v17 + 4)) )
      (**(void (__thiscall ***)(int, int))v17)(v17, 1);
  }
  v18 = *((_DWORD *)this + 0x46);
  if ( v18 )
  {
    if ( !v8((volatile LONG *)(v18 + 4)) )
      (**(void (__thiscall ***)(int, int))v18)(v18, 1);
  }
  MiddleLowProcess::~MiddleLowProcess(this);
}
