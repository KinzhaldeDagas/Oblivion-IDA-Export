Archive *__cdecl ArchiveManager_LoadArchive(const char *a1, __int16 a2, char a3)
{
  Archive *v3; // eax
  Archive *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  char v8[260]; // [esp+14h] [ebp-114h] BYREF
  unsigned int v9; // [esp+124h] [ebp-4h]

  if ( !bUseArchives_Archive ) /*0x42f506*/
    return 0; /*0x42f506*/
  if ( !MEMORY[0xB33A04] ) /*0x42f514*/
    return 0; /*0x42f514*/
  if ( !MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], a1, (UInt32)v8, 1, 0xFFFFFFFF) ) /*0x42f529*/
    return 0; /*0x42f529*/
  v3 = (Archive *)FormHeapAlloc(0x280u); /*0x42f538*/
  v9 = 0; /*0x42f546*/
  v4 = v3 ? Archive::Archive(v3, v8, 0x40000, 0, a3) : 0;
  v9 = 0xFFFFFFFF; /*0x42f574*/
  if ( !v4 ) /*0x42f57f*/
    return 0; /*0x42f57f*/
  if ( !*((_BYTE *)v4 + 0x24) || (*((_BYTE *)v4 + 0x194) & 1) != 0 ) /*0x42f58e*/
  {
    (**(void (__thiscall ***)(Archive *, int))v4)(v4, 1); /*0x42f5e7*/
    return 0; /*0x42f5e9*/
  }
  v5 = (_DWORD *)MEMORY[0xB338E0]; /*0x42f590*/
  if ( !MEMORY[0xB338E0] ) /*0x42f598*/
  {
    v6 = (_DWORD *)FormHeapAlloc(8u); /*0x42f59c*/
    if ( v6 ) /*0x42f5a6*/
    {
      *v6 = 0; /*0x42f5a8*/
      v6[1] = 0; /*0x42f5ae*/
    }
    else
    {
      v6 = 0; /*0x42f5b7*/
    }
    v5 = v6; /*0x42f5b9*/
    MEMORY[0xB338E0] = (int)v6; /*0x42f5bb*/
  }
  BSSimpleList_PushBack(v5, (int)v4); /*0x42f5c2*/
  if ( a2 ) /*0x42f5d2*/
    *((_WORD *)v4 + 0xBA) = a2; /*0x42f5d4*/
  return v4; /*0x42f5eb*/
}
