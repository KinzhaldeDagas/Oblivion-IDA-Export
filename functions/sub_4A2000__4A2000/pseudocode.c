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

  EnterCriticalSection(&CriticalSection);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B353FC;
  dword_B353F8 = CurrentThreadId;
  sub_47D8F0(Str1, FullPath);
  HashFilePAth(FullPath, (int)v11, (int)v10);
  v5 = ArchiveManager_LazyFileLookup(1, (unsigned int *)v11, (unsigned int *)v10, (unsigned int)FullPath);
  v9 = &v7;
  v7 = a3;
  if ( v5 )
  {
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
    sub_6AA3B0(*((_DWORD **)this + 2), v5, v7, v8);
  }
  else
  {
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
    sub_4A1B10(*((_DWORD *)this + 3), (int)FullPath, v7, v8);
  }
  if ( dword_B353FC-- == 1 )
    dword_B353F8 = 0;
  LeaveCriticalSection(&CriticalSection);
}
