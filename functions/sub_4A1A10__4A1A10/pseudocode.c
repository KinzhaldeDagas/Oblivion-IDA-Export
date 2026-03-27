char __thiscall sub_4A1A10(_DWORD **this, char *Str1)
{
  int v3; // eax
  int v5[2]; // [esp+4h] [ebp-114h] BYREF
  int v6[2]; // [esp+Ch] [ebp-10Ch] BYREF
  char FullPath[256]; // [esp+14h] [ebp-104h] BYREF

  sub_47D8F0(Str1, FullPath);
  HashFilePAth(FullPath, (int)v5, (int)v6);
  v3 = ArchiveManager_LazyFileLookup(1, (unsigned int *)v5, (unsigned int *)v6, (unsigned int)FullPath);
  if ( v3 )
    return NiTMap_RemoveAt(*(this + 2), v3);
  else
    return NiTMap_RemoveAt(*(this + 3), (int)FullPath);
}
