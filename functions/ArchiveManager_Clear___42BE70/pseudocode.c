void ArchiveManager_Clear_()
{
  _DWORD *v0; // esi
  int v1; // ecx
  unsigned int i; // esi
  int v3; // ecx
  unsigned int j; // esi

  if ( ArchiveList )
  {
    v0 = (_DWORD *)ArchiveList;
    do
    {
      if ( *v0 )
        (**(void (__thiscall ***)(_DWORD, int))*v0)(*v0, 1);
      v0 = (_DWORD *)v0[1];
    }
    while ( v0 );
    BSSimpleList_Clear((_DWORD *)ArchiveList);
    FormHeapFree(ArchiveList);
    ArchiveList = 0;
  }
  v1 = ArchiveInvalidateFilenames;
  if ( ArchiveInvalidateFilenames )
  {
    for ( i = 0; i < *(unsigned __int16 *)(ArchiveInvalidateFilenames + 0xA); ++i )
    {
      FormHeapFree(*(_DWORD *)(*(_DWORD *)(v1 + 4) + 4 * i));
      v1 = ArchiveInvalidateFilenames;
    }
    (**(void (__thiscall ***)(int, int))v1)(v1, 1);
  }
  v3 = ArchiveInvalidatedDirPAths;
  if ( ArchiveInvalidatedDirPAths )
  {
    for ( j = 0; j < *(unsigned __int16 *)(ArchiveInvalidatedDirPAths + 0xA); ++j )
    {
      FormHeapFree(*(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * j));
      v3 = ArchiveInvalidatedDirPAths;
    }
    (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  FirstLoadedArchiveByType = 0;
  dword_B3390C[0] = 0;
  dword_B338EC = 0;
  dword_B33910 = 0;
  dword_B338F0 = 0;
  dword_B33914 = 0;
  dword_B338F4 = 0;
  dword_B33918 = 0;
  dword_B338F8 = 0;
  dword_B3391C = 0;
  dword_B338FC = 0;
  dword_B33920 = 0;
  dword_B33900 = 0;
  dword_B33924 = 0;
  dword_B33904 = 0;
  dword_B33928 = 0;
  dword_B33908 = 0;
  dword_B3392C = 0;
}
