void __userpurge MagicItemForm_LoadForm_::LoadAdditionalData(
        int *a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5)
{
  int v5; // eax
  char *v6; // eax
  int v7; // [esp-4h] [ebp-4h]
  unsigned int v8; // [esp-4h] [ebp-4h]

  if ( *(_DWORD *)(a2 - 8) == (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x24))(a4) )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x2C))(a4);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x28))(a4);
    _memset(v5, 0, v7);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x2C))(a4);
    v6 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x28))(a4);
    TESFile_GetChunkData((Data *)a1, v6, v8);
  }
  MagicItemForm_LoadForm_::ChunkLoopContinue(a3, a1, a2, a5);
}
