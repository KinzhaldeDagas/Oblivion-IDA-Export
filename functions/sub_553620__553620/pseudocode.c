Ni2DBuffer *__cdecl sub_553620(int a1, int ArgList, int a3, int a4, char a5, char a6)
{
  Ni2DBuffer *v6; // edi
  BSFaceGenModelMap *v7; // esi
  int v9; // eax
  BSFaceGenModelMap *v10; // eax
  bool v11; // zf
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  UInt32 v15; // esi
  BSFaceGenModel *v16; // eax
  Ni2DBuffer *v17; // eax
  int v18; // esi
  UInt32 v19; // [esp+14h] [ebp-10h] BYREF
  unsigned int v20; // [esp+20h] [ebp-4h]

  v6 = 0;
  v7 = 0;
  v19 = 0;
  v20 = 0;
  if ( !a1 && !a4 )
    return 0;
  v9 = dword_B39B80;
  if ( !dword_B39B80 )
  {
    sub_553550();
    v9 = dword_B39B80;
  }
  if ( !*(_DWORD *)(v9 + 0xDAC) )
  {
    v10 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u);
    LOBYTE(v20) = 1;
    if ( v10 )
      v7 = BSFaceGenModelMap::BSFaceGenModelMap(v10);
    v11 = dword_B39B80 == 0;
    LOBYTE(v20) = 0;
    if ( v11 )
      sub_553550();
    *(_DWORD *)(dword_B39B80 + 0xDAC) = v7;
    v12 = *(_DWORD *)(dword_B39B80 + 0xDAC);
    *(_DWORD *)(v12 + 0x18) = dword_B120EC;
    sub_5506B0((char *)v12, 0);
    v13 = dword_B120F4;
    if ( !dword_B39B80 )
      sub_553550();
    v14 = *(_DWORD *)(dword_B39B80 + 0xDAC);
    *(_DWORD *)(v14 + 0x1C) = v13;
    sub_5506B0((char *)v14, 0);
    v9 = dword_B39B80;
  }
  if ( a1 )
  {
    if ( !v9 )
    {
      sub_553550();
      v9 = dword_B39B80;
    }
    if ( sub_5515B0(*(char **)(v9 + 0xDAC), a1, (int *)&v19) )
    {
      v15 = v19;
      if ( !*(_DWORD *)(v19 + 8) )
        sub_559B50((_DWORD *)v19, a1, ArgList, a3, a4, a6);
LABEL_20:
      v20 = 0xFFFFFFFF;
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1);
      return (Ni2DBuffer *)v15;
    }
LABEL_29:
    v6 = (Ni2DBuffer *)v19;
    goto LABEL_30;
  }
  if ( a4 )
  {
    if ( !v9 )
    {
      sub_553550();
      v9 = dword_B39B80;
    }
    if ( sub_5515B0(*(char **)(v9 + 0xDAC), a4, (int *)&v19) )
    {
      v15 = v19;
      if ( !*(_DWORD *)(v19 + 8) )
        sub_559B50((_DWORD *)v19, 0, ArgList, a3, a4, a6);
      goto LABEL_20;
    }
    goto LABEL_29;
  }
LABEL_30:
  if ( a5 )
  {
    v16 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu);
    LOBYTE(v20) = 2;
    if ( v16 )
      v17 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v16);
    else
      v17 = 0;
    LOBYTE(v20) = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)&v19, v17);
    v6 = (Ni2DBuffer *)v19;
    if ( sub_559B50((_DWORD *)v19, a1, ArgList, a3, a4, a6) )
    {
      v18 = a1;
      if ( !a1 )
        v18 = a4;
      if ( !dword_B39B80 )
        sub_553550();
      sub_551450(*(char **)(dword_B39B80 + 0xDAC), v18, v6);
    }
    else if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1);
      v6 = 0;
    }
  }
  v20 = 0xFFFFFFFF;
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v6->members) )
      (*(void (__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1);
  }
  return v6;
}
