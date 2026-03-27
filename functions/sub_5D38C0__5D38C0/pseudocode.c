void __userpurge sub_5D38C0(
        _DWORD *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        char a10)
{
  _DWORD *v11; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  int v13; // edx
  int v14; // edx
  int *v15; // esi
  int v16; // ebx
  signed int v17; // edi
  int *v18; // eax
  char v19[300]; // [esp+10h] [ebp-130h] BYREF

  v11 = *(_DWORD **)(a1[0x12] + 0x34);
  while ( v11 )
  {
    v12 = (void (__thiscall ***)(_DWORD, int))v11[2];
    v11 = (_DWORD *)*v11;
    if ( v12 )
      (**v12)(v12, 1);
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(a1[0x12] + 0x30));
  sub_5D3650(a1, a2, a3, a4, a5, a6, a7, a8, a9, "New Save", 0, 0, 0);
  if ( a10 )
  {
    sub_459400(SaveLoad_CurrentSavegame, v13);
    sub_45D450(SaveLoad_CurrentSavegame, v14);
  }
  v15 = (int *)SaveLoad_CurrentSavegame[1].unk01C[0];
  v16 = 0;
  a1[0x13] = v15;
  v17 = 1;
  v18 = v15;
  if ( v15 )
  {
    do
    {
      if ( *v18 )
        ++v16;
      v18 = (int *)v18[1];
    }
    while ( v18 );
    do
    {
      if ( !*v15 )
        break;
      sub_5D3650(a1, a2, a3, a4, a5, a6, a7, a8, a9, v19, v17, *v15, v16);
      v15 = (int *)v15[1];
      ++v17;
    }
    while ( v15 );
  }
}
