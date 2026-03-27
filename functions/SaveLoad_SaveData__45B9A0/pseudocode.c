void *__userpurge SaveLoad_SaveData@<eax>(int a1@<ecx>, void *Src, size_t Size)
{
  UInt32 mainThreadID; // edi
  int v5; // eax
  void *result; // eax
  size_t v7; // [esp-4h] [ebp-Ch]

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v5) = *(_BYTE *)(a1 + 0x18);
  else
    v5 = *(_DWORD *)(a1 + 0x18) >> 0x12;
  if ( (v5 & 1) != 0 )
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
      dword_B34D90,
      "Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
  LODWORD(v7) = Size;
  result = memcpy(*(void **)(a1 + 0x14), Src, v7);
  *(_DWORD *)(a1 + 0x14) += Size;
  return result;
}
