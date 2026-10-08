void __thiscall sub_4A2000(void *this, char *Str1, int a3)
{
  DWORD CurrentThreadId; // eax
  int v5; // esi
  int v7; // [esp-4h] [ebp-124h] BYREF
  int v8; // [esp+0h] [ebp-120h]
  int *v9; // [esp+8h] [ebp-118h]
  int v10[2]; // [esp+Ch] [ebp-114h] BYREF
  int v11[2]; // [esp+14h] [ebp-10Ch] BYREF
  char FullPath[256]; // [esp+1Ch] [ebp-104h] BYREF

  EnterCriticalSection(&MEMORY[0xB35380]); /*0x4a2024*/
  CurrentThreadId = GetCurrentThreadId(); /*0x4a202a*/
  ++unk_B353FC; /*0x4a2030*/
  unk_B353F8 = CurrentThreadId; /*0x4a2037*/
  sub_47D8F0(Str1, FullPath); /*0x4a2042*/
  HashFilePAth(FullPath, (int)v11, (int)v10); /*0x4a2056*/
  v5 = ArchiveManager_LazyFileLookup(1, (unsigned int *)v11, (unsigned int *)v10, (unsigned int)FullPath); /*0x4a2075*/
  v9 = &v7; /*0x4a2082*/
  v7 = a3; /*0x4a2086*/
  if ( v5 ) /*0x4a2088*/
  {
    if ( a3 ) /*0x4a208c*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x4a2092*/
    sub_6AA3B0(*((_DWORD **)this + 2), v5, v7, v8); /*0x4a209c*/
  }
  else
  {
    if ( a3 ) /*0x4a20a5*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x4a20ab*/
    sub_4A1B10(*((_DWORD *)this + 3), (int)FullPath, v7, v8); /*0x4a20b9*/
  }
  if ( unk_B353FC-- == 1 ) /*0x4a20be*/
    unk_B353F8 = 0; /*0x4a20c7*/
  LeaveCriticalSection(&MEMORY[0xB35380]); /*0x4a20d6*/
}
