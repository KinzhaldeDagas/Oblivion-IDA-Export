// [Verified] TESSaveLoadGame_LoadTempEffectsList version-gates the Temp Effects List chunk and calls ActorProcessManager_LoadTempEffects for save versions >=0x5E; earlier versions skip the chunk body.
unsigned __int8 __userpurge TESSaveLoadGame_LoadTempEffectsList@<al>(int a1@<ecx>, char a2@<bpl>, int a3@<edi>, int a4)
{
  TESSaveLoadGame_SerializationView *v4; // eax
  unsigned __int8 result; // al
  int v7; // edi
  void (__cdecl *v8)(int, int *, int, int *, int); // eax
  void (__cdecl *v9)(int, int *, int, int *, int); // ecx
  _DWORD *v10; // ecx
  FreeEntry *v11; // eax
  char *v12; // ebp
  void (__cdecl *v13)(int, char *, int, int *, int); // eax
  int v14; // eax
  int v15; // [esp-18h] [ebp-20h]
  int v17; // [esp+4h] [ebp-4h] BYREF

  v4 = g_TESSaveLoadGame; /*0x45fc61*/
  v17 = 0; /*0x45fc66*/
  result = v4->currentVersion; /*0x45fc6d*/
  if ( result >= 0x25u ) /*0x45fc75*/
  {
    v7 = a4; /*0x45fc7e*/
    if ( result >= 0x27u ) /*0x45fc82*/
    {
      v8 = *(void (__cdecl **)(int, int *, int, int *, int))(a4 + 4); /*0x45fc84*/
      v15 = a4; /*0x45fc95*/
      a4 = 1; /*0x45fc96*/
      v8(v15, &v17, 4, &a4, 1); /*0x45fc9e*/
    }
    if ( g_TESSaveLoadGame->currentVersion < 0x27u ) /*0x45fcad*/
    {
      v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 4); /*0x45fcaf*/
      v17 = 0; /*0x45fcc1*/
      a4 = 1; /*0x45fcc9*/
      v9(v7, &v17, 2, &a4, 1); /*0x45fcd1*/
    }
    result = v17; /*0x45fcd6*/
    if ( v17 ) /*0x45fcdc*/
    {
      v10 = *(_DWORD **)(a1 + 0x40); /*0x45fce2*/
      if ( v10 ) /*0x45fce7*/
        sub_4531B0(v10, a2, v17, "Temp Effects List"); /*0x45fcef*/
      v11 = j_MemoryHeap_Alloc(&FormHeap, a2, (unsigned int)v17 | 0x100000000LL, a3); /*0x45fd00*/
      *(_DWORD *)(a1 + 0x14) = v11; /*0x45fd07*/
      if ( !v11 ) /*0x45fd0a*/
        sub_404EC0("Could not create save buffer, out of memory."); /*0x45fd11*/
      v12 = *(char **)(a1 + 0x14); /*0x45fd23*/
      if ( g_TESSaveLoadGame->currentVersion >= 0x5Eu ) /*0x45fd26*/
      {
        v13 = *(void (__cdecl **)(int, char *, int, int *, int))(v7 + 4); /*0x45fd2c*/
        a4 = 1; /*0x45fd39*/
        v13(v7, v12, v17, &a4, 1); /*0x45fd41*/
        ActorProcessManager_LoadTempEffects((int *)&qword_B3BB2C[0x75]);// Verified call-chain anchor: TESSaveLoadGame_LoadGame invokes ActorProcessManager_LoadTempEffects after loading the Temp Effects List buffer when save version is at least 0x5E. /*0x45fd4b*/
      }
      v14 = v17; /*0x45fd5a*/
      if ( g_TESSaveLoadGame->currentVersion < 0x5Eu ) /*0x45fd5e*/
        *(_DWORD *)(a1 + 0x14) += v17; /*0x45fd60*/
      if ( &v12[v14] != *(char **)(a1 + 0x14) ) /*0x45fd69*/
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45fd7b*/
          *(_DWORD *)&MEMORY[0xB33E90][0xF00],
          "LoadTempEffectsList() call did not properly empty buffer.  See Warnings.txt for more info.");
      result = MemoryHeap_Free_checked(v12); /*0x45fd83*/
      *(_DWORD *)(a1 + 0x14) = 0; /*0x45fd88*/
    }
  }
  return result; /*0x45fd91*/
}
