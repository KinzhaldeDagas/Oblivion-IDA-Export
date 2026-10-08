int __cdecl __BuildCatchObjectHelper(int a1, int *a2, int *a3, int a4)
{
  int v4; // ecx
  int v5; // ecx
  int *v6; // esi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v11; // [esp-8h] [ebp-34h]
  unsigned int v12; // [esp-4h] [ebp-30h]
  int v13; // [esp+10h] [ebp-1Ch]

  v13 = 0; /*0x98b33e*/
  v4 = a3[1]; /*0x98b344*/
  if ( v4 ) /*0x98b349*/
  {
    if ( *(_BYTE *)(v4 + 8) ) /*0x98b34f*/
    {
      v5 = a3[2]; /*0x98b358*/
      if ( v5 || *a3 < 0 ) /*0x98b365*/
      {
        v6 = a2; /*0x98b36d*/
        if ( *a3 >= 0 ) /*0x98b372*/
          v6 = (int *)((char *)a2 + v5 + 0xC); /*0x98b374*/
        if ( (*a3 & 8) != 0 ) /*0x98b381*/
        {
          if ( unknown_libname_193(*(_DWORD *)(a1 + 0x18)) && unknown_libname_193((int)v6) ) /*0x98b39a*/
          {
            v7 = *(_DWORD *)(a1 + 0x18); /*0x98b3a9*/
            *v6 = v7; /*0x98b3ac*/
            v8 = __AdjustPointer(v7, (_DWORD *)(a4 + 8)); /*0x98b3b6*/
LABEL_11:
            *v6 = v8; /*0x98b3bb*/
            return v13; /*0x98b499*/
          }
        }
        else
        {
          v11 = *(_DWORD *)(a1 + 0x18); /*0x98b3ca*/
          if ( (*(_BYTE *)a4 & 1) != 0 ) /*0x98b3cf*/
          {
            if ( unknown_libname_193(v11) && unknown_libname_193((int)v6) ) /*0x98b3e2*/
            {
              unknown_libname_16((unsigned int)v6, *(_DWORD *)(a1 + 0x18), *(_DWORD *)(a4 + 0x14)); /*0x98b3fb*/
              if ( *(_DWORD *)(a4 + 0x14) != 4 || !*v6 ) /*0x98b40d*/
                return v13; /*0x98b411*/
              v8 = __AdjustPointer(*v6, (_DWORD *)(a4 + 8)); /*0x98b417*/
              goto LABEL_11; /*0x98b417*/
            }
          }
          else if ( *(_DWORD *)(a4 + 0x18) ) /*0x98b419*/
          {
            if ( unknown_libname_193(v11) && unknown_libname_193((int)v6) && unknown_libname_193(*(_DWORD *)(a4 + 0x18)) ) /*0x98b471*/
              return ((*(_BYTE *)a4 & 4) != 0) + 1; /*0x98b488*/
          }
          else if ( unknown_libname_193(v11) && unknown_libname_193((int)v6) ) /*0x98b42b*/
          {
            v12 = *(_DWORD *)(a4 + 0x14); /*0x98b436*/
            v9 = __AdjustPointer(*(_DWORD *)(a1 + 0x18), (_DWORD *)(a4 + 8)); /*0x98b443*/
            unknown_libname_16((unsigned int)v6, v9, v12); /*0x98b44c*/
            return v13; /*0x98b454*/
          }
        }
        _inconsistency(); /*0x98b48a*/
      }
    }
  }
  return 0; /*0x98b4a9*/
}
