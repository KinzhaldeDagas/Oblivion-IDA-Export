void (__thiscall ***__thiscall sub_4A1D80(_DWORD **this, char *Str1, int a3))(_DWORD, signed int)
{
  int v4; // esi
  DWORD CurrentThreadId; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v9; // [esp+Ch] [ebp-124h] BYREF
  int v10[2]; // [esp+10h] [ebp-120h] BYREF
  int v11[2]; // [esp+18h] [ebp-118h] BYREF
  char FullPath[256]; // [esp+20h] [ebp-110h] BYREF
  unsigned int v13; // [esp+12Ch] [ebp-4h]

  v9 = 0;
  v13 = 0;
  sub_47D8F0(Str1, FullPath);
  HashFilePAth(FullPath, (int)v11, (int)v10);
  v4 = ArchiveManager_LazyFileLookup(1, (unsigned int *)v11, (unsigned int *)v10, (unsigned int)FullPath);
  EnterCriticalSection(&CriticalSection);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B353FC;
  dword_B353F8 = CurrentThreadId;
  if ( v4 )
    sub_4A1AB0(*(this + 2), v4, &v9);
  else
    sub_4A1AB0(*(this + 3), (int)FullPath, &v9);
  if ( dword_B353FC-- == 1 )
    dword_B353F8 = 0;
  LeaveCriticalSection(&CriticalSection);
  v7 = (void (__thiscall ***)(_DWORD, int))v9;
  v13 = 0xFFFFFFFF;
  if ( v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
      (**v7)(v7, 1);
  }
  return v7;
}
