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

  v9 = 0; /*0x4a1dc2*/
  v13 = 0; /*0x4a1dd0*/
  sub_47D8F0(Str1, FullPath); /*0x4a1ddb*/
  HashFilePAth(FullPath, (int)v11, (int)v10); /*0x4a1def*/
  v4 = ArchiveManager_LazyFileLookup(1, (unsigned int *)v11, (unsigned int *)v10, (unsigned int)FullPath); /*0x4a1e12*/
  EnterCriticalSection(&MEMORY[0xB35380]); /*0x4a1e14*/
  CurrentThreadId = GetCurrentThreadId(); /*0x4a1e1a*/
  ++unk_B353FC; /*0x4a1e20*/
  unk_B353F8 = CurrentThreadId; /*0x4a1e29*/
  if ( v4 ) /*0x4a1e2e*/
    sub_4A1AB0(*(this + 2), v4, &v9); /*0x4a1e39*/
  else
    sub_4A1AB0(*(this + 3), (int)FullPath, &v9); /*0x4a1e4d*/
  if ( unk_B353FC-- == 1 ) /*0x4a1e52*/
    unk_B353F8 = 0; /*0x4a1e5b*/
  LeaveCriticalSection(&MEMORY[0xB35380]); /*0x4a1e6a*/
  v7 = (void (__thiscall ***)(_DWORD, int))v9; /*0x4a1e70*/
  v13 = 0xFFFFFFFF; /*0x4a1e76*/
  if ( v9 ) /*0x4a1e81*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x4a1e87*/
      (**v7)(v7, 1); /*0x4a1e99*/
  }
  return v7; /*0x4a1e9d*/
}
