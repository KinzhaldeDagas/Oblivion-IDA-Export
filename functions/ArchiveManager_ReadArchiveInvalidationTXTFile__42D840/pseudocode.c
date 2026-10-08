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
  void *v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // eax
  NiTArray_NiTexturingPropertyMap *v13; // edi
  int v14; // eax
  int v15; // esi
  void *v16; // eax
  void *v17; // eax
  unsigned int v18; // edx
  int v19; // [esp+14h] [ebp-11Ch] BYREF
  char v20; // [esp+1Bh] [ebp-115h] BYREF
  char Str; // [esp+1Ch] [ebp-114h] BYREF
  char v22; // [esp+1Dh] [ebp-113h] BYREF
  int v23; // [esp+12Ch] [ebp-4h]

  result = FileFinder_LoadBSFile(a1, 0, 0x2800); /*0x42d88b*/
  v2 = result; /*0x42d890*/
  if ( result ) /*0x42d897*/
  {
    v3 = (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*result + 0x18))(result, 0, 0) == 0; /*0x42d8a8*/
    v4 = *v2; /*0x42d8aa*/
    if ( !v3 ) /*0x42d8ac*/
    {
      if ( (*(int (__thiscall **)(_DWORD *, char *, int, int))(v4 + 0x28))(v2, &Str, 0x104, 0xD) ) /*0x42d8c3*/
      {
        do /*0x42dad2*/
        {
          v5 = (void (__cdecl *)(_DWORD *, char *, int, int *, int))v2[1]; /*0x42d8d0*/
          v19 = 1; /*0x42d8e5*/
          v5(v2, &v20, 1, &v19, 1); /*0x42d8e9*/
          if ( strstr(&Str, SubStr) ) /*0x42d8f5*/
          {
            if ( !MEMORY[0xB33934] ) /*0x42d90b*/
            {
              v6 = FormHeapAlloc(0x10u); /*0x42d90f*/
              v7 = v6; /*0x42d914*/
              v19 = v6; /*0x42d919*/
              v23 = 0; /*0x42d91f*/
              if ( v6 ) /*0x42d926*/
              {
                *(_WORD *)(v6 + 8) = 5; /*0x42d92f*/
                *(_DWORD *)v6 = &NiTArray<BSHash *>::`vftable'; /*0x42d93d*/
                *(_WORD *)(v6 + 0xE) = 1; /*0x42d943*/
                *(_WORD *)(v6 + 0xA) = 0; /*0x42d947*/
                *(_WORD *)(v6 + 0xC) = 0; /*0x42d94b*/
                *(_DWORD *)(v6 + 4) = FormHeapAlloc(0x14u); /*0x42d95c*/
              }
              else
              {
                v7 = 0; /*0x42d961*/
              }
              v23 = 0xFFFFFFFF; /*0x42d963*/
              MEMORY[0xB33934] = v7; /*0x42d96e*/
            }
            p_Str = &Str; /*0x42d979*/
            if ( Str == 0x5C ) /*0x42d97d*/
              p_Str = &v22; /*0x42d97f*/
            v9 = (void *)FormHeapAlloc(8u); /*0x42d985*/
            v19 = (int)v9; /*0x42d98d*/
            v23 = 1; /*0x42d993*/
            if ( v9 ) /*0x42d99a*/
              v10 = BSHash_constr(v9, p_Str, 1); /*0x42d9a0*/
            else
              v10 = 0; /*0x42d9a7*/
            v11 = *(unsigned __int16 *)(MEMORY[0xB33934] + 0xA); /*0x42d9af*/
            v19 = (int)v10; /*0x42d9b3*/
            v12 = *(unsigned __int16 *)(MEMORY[0xB33934] + 8); /*0x42d9b7*/
            v23 = 0xFFFFFFFF; /*0x42d9bd*/
            v13 = (NiTArray_NiTexturingPropertyMap *)MEMORY[0xB33934]; /*0x42d9c8*/
            if ( v11 >= v12 ) /*0x42d9ca*/
              NiTArray_SetSize( /*0x42d9d3*/
                (unsigned __int16 *)MEMORY[0xB33934],
                v11 + *(unsigned __int16 *)(MEMORY[0xB33934] + 0xE));
          }
          else
          {
            if ( !MEMORY[0xB33930] ) /*0x42d9e8*/
            {
              v14 = FormHeapAlloc(0x10u); /*0x42d9ec*/
              v15 = v14; /*0x42d9f1*/
              v19 = v14; /*0x42d9f6*/
              v23 = 2; /*0x42d9fc*/
              if ( v14 ) /*0x42da07*/
              {
                *(_WORD *)(v14 + 8) = 5; /*0x42da10*/
                *(_DWORD *)v14 = &NiTArray<BSHash *>::`vftable'; /*0x42da1e*/
                *(_WORD *)(v14 + 0xE) = 1; /*0x42da24*/
                *(_WORD *)(v14 + 0xA) = 0; /*0x42da28*/
                *(_WORD *)(v14 + 0xC) = 0; /*0x42da2c*/
                *(_DWORD *)(v14 + 4) = FormHeapAlloc(0x14u); /*0x42da3d*/
              }
              else
              {
                v15 = 0; /*0x42da42*/
              }
              v23 = 0xFFFFFFFF; /*0x42da44*/
              MEMORY[0xB33930] = v15; /*0x42da4f*/
            }
            v16 = (void *)FormHeapAlloc(8u); /*0x42da57*/
            v19 = (int)v16; /*0x42da5f*/
            v23 = 3; /*0x42da65*/
            if ( v16 ) /*0x42da70*/
              v17 = BSHash_constr(v16, &Str, 0); /*0x42da7a*/
            else
              v17 = 0; /*0x42da81*/
            v11 = *(unsigned __int16 *)(MEMORY[0xB33930] + 0xA); /*0x42da89*/
            v18 = *(unsigned __int16 *)(MEMORY[0xB33930] + 8); /*0x42da8d*/
            v23 = 0xFFFFFFFF; /*0x42da93*/
            v19 = (int)v17; /*0x42da9e*/
            v13 = (NiTArray_NiTexturingPropertyMap *)MEMORY[0xB33930]; /*0x42daa2*/
            if ( v11 >= v18 ) /*0x42daa4*/
              NiTArray_SetSize( /*0x42daad*/
                (unsigned __int16 *)MEMORY[0xB33930],
                v11 + *(unsigned __int16 *)(MEMORY[0xB33930] + 0xE));
          }
          NiTArray_SetAt(v13, v11, &v19); /*0x42daba*/
        }
        while ( (*(int (__thiscall **)(_DWORD *, char *, int, int))(*v2 + 0x28))(v2, &Str, 0x104, 0xD) ); /*0x42dad2*/
      }
      v4 = *v2; /*0x42dadc*/
    }
    return (*(_DWORD *(__thiscall **)(_DWORD *, int))v4)(v2, 1); /*0x42dae4*/
  }
  return result; /*0x42dae6*/
}
