ArchiveFile *__thiscall sub_434650(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  char *v5; // ecx

  v3 = *(this + 9);
  if ( v3 )
    return sub_42EBC0(a2, v3, 0xFFFFFFFF, 0);
  v5 = (char *)*(this + 8);
  if ( v5 )
    return ArchiveManager_FindFileInBSA(v5, 0xFFFFFFFF, a3);
  else
    return 0;
}
