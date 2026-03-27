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

  *(_DWORD *)this = &LowProcess::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0xD);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = *((TESPackage **)this + 2);
  if ( v3 )
  {
    if ( sub_5660A0(v3) )
    {
      if ( sub_45A500(SaveLoad_CurrentSavegame) )
      {
        sub_45C7A0((char *)SaveLoad_CurrentSavegame, *((TESForm **)this + 2));
      }
      else
      {
        v4 = *((_DWORD *)this + 2);
        if ( v4 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x10))(v4, 1);
      }
    }
  }
  v5 = *((_DWORD *)this + 0x11);
  *((_DWORD *)this + 2) = 0;
  if ( v5 )
  {
    if ( *((_DWORD *)this + 0x12) == v5 )
      *((_DWORD *)this + 0x12) = 0;
    FormHeapFree(v5);
    *((_DWORD *)this + 0x11) = 0;
  }
  if ( *((_DWORD *)this + 0x12) )
  {
    FormHeapFree(*((_DWORD *)this + 0x12));
    *((_DWORD *)this + 0x12) = 0;
  }
  v6 = (int *)((char *)this + 0x3C);
  while ( *((_DWORD *)this + 0x10) || *v6 )
  {
    v7 = *v6;
    BSSimpleList_Remove((_DWORD *)this + 0xF, *v6);
    if ( v7 )
      FormHeapFree(v7);
  }
  if ( *((_DWORD *)this + 0x14) )
  {
    do
    {
      v8 = *(_DWORD *)(*((_DWORD *)this + 0x14) + 4);
      FormHeapFree(*((_DWORD *)this + 0x14));
      *((_DWORD *)this + 0x14) = v8;
    }
    while ( v8 );
  }
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0xC) = 0;
  v9 = (int *)((char *)this + 0x54);
  while ( *((_DWORD *)this + 0x16) || *v9 )
  {
    v10 = *v9;
    BSSimpleList_Remove((_DWORD *)this + 0x15, *v9);
    if ( v10 )
      FormHeapFree(v10);
  }
  if ( *((_DWORD *)this + 0x18) )
  {
    do
    {
      v11 = *(_DWORD *)(*((_DWORD *)this + 0x18) + 4);
      FormHeapFree(*((_DWORD *)this + 0x18));
      *((_DWORD *)this + 0x18) = v11;
    }
    while ( v11 );
  }
  *((_DWORD *)this + 0x17) = 0;
  v12 = *((_DWORD *)this + 0x19);
  if ( v12 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x10))(v12, 1);
  AVCollection_destr((_DWORD *)this + 0x1C);
  sub_60CDA0(this);
}
