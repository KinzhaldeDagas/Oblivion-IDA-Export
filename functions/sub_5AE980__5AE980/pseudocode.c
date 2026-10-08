// Destroys and rebuilds LoadgameMenu rows. CharacterSpecificSaves v4 uses it for deferred character opening and Back, with focus cleared first; each enumeration recomputes exact-name counts and ordering.
BSStringT *__usercall LoadgameMenu_RebuildRows@<eax>(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>)
{
  _DWORD *v10; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // edx
  int v13; // edx
  UInt32 v14; // esi
  signed int v15; // edi
  int v16; // ebp
  _DWORD *v17; // eax
  BSStringT *result; // eax
  char v19[300]; // [esp+10h] [ebp-130h] BYREF

  v10 = *(_DWORD **)(*(_DWORD *)(a1 + 0x48) + 0x34); /*0x5ae99c*/
  while ( v10 ) /*0x5ae9a2*/
  {
    v11 = (void (__thiscall ***)(_DWORD, int))v10[2]; /*0x5ae9a4*/
    v10 = (_DWORD *)*v10; /*0x5ae9ac*/
    if ( v11 ) /*0x5ae9ae*/
      (**v11)(v11, 1); /*0x5ae9b6*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(a1 + 0x48) + 0x30)); /*0x5ae9c2*/
  sub_459400(g_TESSaveLoadGame, v12); /*0x5ae9cd*/
  TESSaveLoadGame_EnumerateSaveFiles(g_TESSaveLoadGame, v13);// CharacterSpecificSaves v4 hook: after native enumeration, overview reorders only saveFile payloads A-Z by exact character name (newest first within name); detail filters exact name and deterministically sorts newest-first. /*0x5ae9d8*/
  v14 = g_TESSaveLoadGame[1].unk01C[0]; /*0x5ae9e3*/
  v15 = 0; /*0x5ae9e6*/
  v16 = 0; /*0x5ae9e8*/
  *(_DWORD *)(a1 + 0x54) = v14; /*0x5ae9ec*/
  v17 = (_DWORD *)v14; /*0x5ae9ef*/
  if ( !v14 ) /*0x5ae9f1*/
    return LoadgameMenu_AddSaveRow(a1, a2, a3, a4, a5, a6, a7, a8, a9, v19, 0, 0, 0); /*0x5ae9f1*/
  do /*0x5ae9ff*/
  {
    if ( *v17 ) /*0x5ae9f3*/
      ++v16; /*0x5ae9f7*/
    v17 = (_DWORD *)v17[1]; /*0x5ae9fa*/
  }
  while ( v17 ); /*0x5ae9ff*/
  if ( !v16 ) /*0x5aea03*/
    return LoadgameMenu_AddSaveRow(a1, a2, a3, a4, a5, a6, a7, a8, a9, v19, 0, 0, 0); /*0x5aea12*/
  do /*0x5aea3d*/
  {
    result = *(BSStringT **)v14; /*0x5aea20*/
    if ( !*(_DWORD *)v14 ) /*0x5aea20*/
      break; /*0x5aea24*/
    result = LoadgameMenu_AddSaveRow(a1, a2, a3, a4, a5, a6, a7, a8, a9, v19, v15, (int)result, v16);// CharacterSpecificSaves v4 AddSaveRow hook emits one overview row per exact character name and labels it Name (total save count); duplicate name saves are suppressed as rows but retained for the detail view. /*0x5aea30*/
    v14 = *(_DWORD *)(v14 + 4); /*0x5aea35*/
    ++v15; /*0x5aea38*/
  }
  while ( v14 ); /*0x5aea3d*/
  return result; /*0x5aea3f*/
}
