_DWORD *__cdecl ArchiveManager_ReadArchiveInvalidationTXTFile(const char *a1)
{
  _DWORD *result; // eax
  _DWORD *v2; // ebx
  bool v3; // zf
  int v4; // eax
  void (__cdecl *v5)(_DWORD *, char *, int, int *, int); // edx
  int v6; // eax
  int v7; // esi
  char *p_Str; // esi
  void *v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // eax
  NiTArray_NiTexturingPropertyMap *v13; // edi
  int v14; // eax
  int v15; // esi
  void *v16; // eax
  int v17; // eax
  unsigned int v18; // edx
  int v19; // [esp+14h] [ebp-11Ch] BYREF
  char v20; // [esp+1Bh] [ebp-115h] BYREF
  char Str; // [esp+1Ch] [ebp-114h] BYREF
  char v22; // [esp+1Dh] [ebp-113h] BYREF
  int v23; // [esp+12Ch] [ebp-4h]

  result = (_DWORD *)FileFinder_LoadBSFile(a1, 0, 0x2800);
  v2 = result;
  if ( result )
  {
    v3 = (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*result + 0x18))(result, 0, 0) == 0;
    v4 = *v2;
    if ( !v3 )
    {
      if ( (*(int (__thiscall **)(_DWORD *, char *, int, int))(v4 + 0x28))(v2, &Str, 0x104, 0xD) )
      {
        do
        {
          v5 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v2[1];
          v19 = 1;
          v5(v2, &v20, 1, &v19, 1);
          if ( strstr(&Str, SubStr) )
          {
            if ( !ArchiveInvalidatedDirPAths )
            {
              v6 = FormHeapAlloc(0x10u);
              v7 = v6;
              v19 = v6;
              v23 = 0;
              if ( v6 )
              {
                *(_WORD *)(v6 + 8) = 5;
                *(_DWORD *)v6 = &NiTArray<BSHash *>::`vftable';
                *(_WORD *)(v6 + 0xE) = 1;
                *(_WORD *)(v6 + 0xA) = 0;
                *(_WORD *)(v6 + 0xC) = 0;
                *(_DWORD *)(v6 + 4) = FormHeapAlloc(0x14u);
              }
              else
              {
                v7 = 0;
              }
              v23 = 0xFFFFFFFF;
              ArchiveInvalidatedDirPAths = v7;
            }
            p_Str = &Str;
            if ( Str == 0x5C )
              p_Str = &v22;
            v9 = (void *)FormHeapAlloc(8u);
            v19 = (int)v9;
            v23 = 1;
            if ( v9 )
              v10 = BSHash_constr(v9, p_Str, 1);
            else
              v10 = 0;
            v11 = *(unsigned __int16 *)(ArchiveInvalidatedDirPAths + 0xA);
            v19 = v10;
            v12 = *(unsigned __int16 *)(ArchiveInvalidatedDirPAths + 8);
            v23 = 0xFFFFFFFF;
            v13 = (NiTArray_NiTexturingPropertyMap *)ArchiveInvalidatedDirPAths;
            if ( v11 >= v12 )
              NiTArray_SetSize(
                (unsigned __int16 *)ArchiveInvalidatedDirPAths,
                v11 + *(unsigned __int16 *)(ArchiveInvalidatedDirPAths + 0xE));
          }
          else
          {
            if ( !ArchiveInvalidateFilenames )
            {
              v14 = FormHeapAlloc(0x10u);
              v15 = v14;
              v19 = v14;
              v23 = 2;
              if ( v14 )
              {
                *(_WORD *)(v14 + 8) = 5;
                *(_DWORD *)v14 = &NiTArray<BSHash *>::`vftable';
                *(_WORD *)(v14 + 0xE) = 1;
                *(_WORD *)(v14 + 0xA) = 0;
                *(_WORD *)(v14 + 0xC) = 0;
                *(_DWORD *)(v14 + 4) = FormHeapAlloc(0x14u);
              }
              else
              {
                v15 = 0;
              }
              v23 = 0xFFFFFFFF;
              ArchiveInvalidateFilenames = v15;
            }
            v16 = (void *)FormHeapAlloc(8u);
            v19 = (int)v16;
            v23 = 3;
            if ( v16 )
              v17 = BSHash_constr(v16, &Str, 0);
            else
              v17 = 0;
            v11 = *(unsigned __int16 *)(ArchiveInvalidateFilenames + 0xA);
            v18 = *(unsigned __int16 *)(ArchiveInvalidateFilenames + 8);
            v23 = 0xFFFFFFFF;
            v19 = v17;
            v13 = (NiTArray_NiTexturingPropertyMap *)ArchiveInvalidateFilenames;
            if ( v11 >= v18 )
              NiTArray_SetSize(
                (unsigned __int16 *)ArchiveInvalidateFilenames,
                v11 + *(unsigned __int16 *)(ArchiveInvalidateFilenames + 0xE));
          }
          NiTArray_SetAt(v13, v11, &v19);
        }
        while ( (*(int (__thiscall **)(_DWORD *, char *, int, int))(*v2 + 0x28))(v2, &Str, 0x104, 0xD) );
      }
      v4 = *v2;
    }
    return (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))v4)(v2, 1);
  }
  return result;
}
