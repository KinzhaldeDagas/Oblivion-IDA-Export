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

  v11 = *(_DWORD **)(a1[0x12] + 0x34); /*0x5d38dc*/
  while ( v11 ) /*0x5d38e2*/
  {
    v12 = (void (__thiscall ***)(_DWORD, int))v11[2]; /*0x5d38e4*/
    v11 = (_DWORD *)*v11; /*0x5d38ec*/
    if ( v12 ) /*0x5d38ee*/
      (**v12)(v12, 1); /*0x5d38f6*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(a1[0x12] + 0x30)); /*0x5d3902*/
  SaveMenu_AddSaveRow(a1, a2, a3, a4, a5, a6, a7, a8, a9, "New Save", 0, 0, 0); /*0x5d3914*/
  if ( a10 ) /*0x5d3921*/
  {
    sub_459400(g_TESSaveLoadGame, v13); /*0x5d3929*/
    TESSaveLoadGame_EnumerateSaveFiles(g_TESSaveLoadGame, v14); /*0x5d3934*/
  }
  v15 = (int *)g_TESSaveLoadGame[1].unk01C[0]; /*0x5d393f*/
  v16 = 0; /*0x5d3942*/
  a1[0x13] = v15; /*0x5d3946*/
  v17 = 1; /*0x5d3949*/
  v18 = v15; /*0x5d394e*/
  if ( v15 ) /*0x5d3950*/
  {
    do /*0x5d395e*/
    {
      if ( *v18 ) /*0x5d3952*/
        ++v16; /*0x5d3957*/
      v18 = (int *)v18[1]; /*0x5d3959*/
    }
    while ( v18 ); /*0x5d395e*/
    do /*0x5d397d*/
    {
      if ( !*v15 ) /*0x5d3960*/
        break; /*0x5d3964*/
      SaveMenu_AddSaveRow(a1, a2, a3, a4, a5, a6, a7, a8, a9, v19, v17, *v15, v16); /*0x5d3970*/
      v15 = (int *)v15[1]; /*0x5d3975*/
      ++v17; /*0x5d3978*/
    }
    while ( v15 ); /*0x5d397d*/
  }
}
