Archive *__cdecl ArchiveManager_LoadArchive(const char *a1, __int16 a2, char a3)
{
  Archive *v3; // eax
  Archive *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  char v8[260]; // [esp+14h] [ebp-114h] BYREF
  unsigned int v9; // [esp+124h] [ebp-4h]

  if ( !bUseArchives_Archive )
    return 0;
  if ( !OBSE_g_FileFinder )
    return 0;
  if ( !OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, a1, (UInt32)v8, 1, 0xFFFFFFFF) )
    return 0;
  v3 = (Archive *)FormHeapAlloc(0x280u);
  v9 = 0;
  v4 = v3 ? Archive::Archive(v3, v8, 0x40000, 0, a3) : 0;
  v9 = 0xFFFFFFFF;
  if ( !v4 )
    return 0;
  if ( !*((_BYTE *)v4 + 0x24) || (*((_BYTE *)v4 + 0x194) & 1) != 0 )
  {
    (**(void (__thiscall ***)(Archive *, int))v4)(v4, 1);
    return 0;
  }
  v5 = (_DWORD *)ArchiveList;
  if ( !ArchiveList )
  {
    v6 = (_DWORD *)FormHeapAlloc(8u);
    if ( v6 )
    {
      *v6 = 0;
      v6[1] = 0;
    }
    else
    {
      v6 = 0;
    }
    v5 = v6;
    ArchiveList = (int)v6;
  }
  BSSimpleList_PushBack(v5, (int)v4);
  if ( a2 )
    *((_WORD *)v4 + 0xBA) = a2;
  return v4;
}
