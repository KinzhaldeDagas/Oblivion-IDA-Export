void __userpurge MagicItemObject_LoadForm_::LoadAdditionalData(
        int a1@<eax>,
        int *a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        int a6)
{
  int v6; // eax
  char *v7; // eax
  int v8; // [esp-4h] [ebp-4h]
  unsigned int v9; // [esp-4h] [ebp-4h]

  if ( *(_DWORD *)(a3 - 8) == a1 )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x2C))(a5);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x28))(a5);
    _memset(v6, 0, v8);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x2C))(a5);
    v7 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x28))(a5);
    TESFile_GetChunkData((Data *)a2, v7, v9);
  }
  MagicItemObject_LoadForm_::ChunkLoopContinue(a4, a2, a3, a6);
}
