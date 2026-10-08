char __thiscall sub_4A1A10(_DWORD **this, char *Str1)
{
  int v3; // eax
  int v5[2]; // [esp+4h] [ebp-114h] BYREF
  int v6[2]; // [esp+Ch] [ebp-10Ch] BYREF
  char FullPath[256]; // [esp+14h] [ebp-104h] BYREF

  sub_47D8F0(Str1, FullPath); /*0x4a1a34*/
  HashFilePAth(FullPath, (int)v5, (int)v6); /*0x4a1a48*/
  v3 = ArchiveManager_LazyFileLookup(1, (unsigned int *)v5, (unsigned int *)v6, (unsigned int)FullPath); /*0x4a1a5e*/
  if ( v3 ) /*0x4a1a68*/
    return NiTMap_RemoveAt(*(this + 2), v3); /*0x4a1a6e*/
  else
    return NiTMap_RemoveAt(*(this + 3), (int)FullPath); /*0x4a1a93*/
}
