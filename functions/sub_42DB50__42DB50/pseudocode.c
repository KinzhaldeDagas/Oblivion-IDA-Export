_DWORD *__cdecl sub_42DB50(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4, _BYTE *a5, char **a6, const char *a7)
{
  _RTL_CRITICAL_SECTION_0 *v7; // esi
  char **v8; // esi
  _DWORD *v9; // ebx
  unsigned int v10; // edi
  char *v11; // ebp
  void *v12; // eax
  void *v13; // eax
  int v14; // ebp
  bool v15; // zf
  _DWORD *v16; // esi
  signed int v17; // eax
  unsigned int v18; // ebx
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  unsigned int *v22; // ecx
  unsigned int v23; // ebp
  unsigned int v24; // ecx
  const char *v25; // ebx
  char *v26; // eax
  unsigned int v28; // [esp+14h] [ebp-28h]
  int v29; // [esp+18h] [ebp-24h]
  unsigned int v30; // [esp+1Ch] [ebp-20h] BYREF
  int v31; // [esp+20h] [ebp-1Ch]
  _RTL_CRITICAL_SECTION_0 *v32; // [esp+24h] [ebp-18h]
  unsigned __int64 v33; // [esp+28h] [ebp-14h]
  unsigned int v34; // [esp+38h] [ebp-4h]

  v7 = (_RTL_CRITICAL_SECTION_0 *)(a1 + 0x200); /*0x42db7b*/
  v32 = (_RTL_CRITICAL_SECTION_0 *)(a1 + 0x200); /*0x42db88*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 0x200), (int)&aArchivemanager); /*0x42db8c*/
  if ( Archive_ContainsFolder(a1, a4, (signed int *)&v30, 0) )
  {
    if ( !a3 )
    {
      if ( a2 )
      {
        v8 = a6; /*0x42dbdb*/
        v9 = (_DWORD *)FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
        v10 = 0; /*0x42dbe4*/
        a3 = v9; /*0x42dbe8*/
        do /*0x42dc2f*/
        {
          v11 = *v8; /*0x42dbf0*/
          v12 = (void *)FormHeapAlloc(8u); /*0x42dbf4*/
          v31 = (int)v12; /*0x42dbfc*/
          v34 = 0; /*0x42dc02*/
          if ( v12 ) /*0x42dc0a*/
            v13 = BSHash_constr(v12, v11, 0); /*0x42dc11*/
          else
            v13 = 0; /*0x42dc18*/
          v9[v10] = v13; /*0x42dc1a*/
          v8 = (char **)v8[1]; /*0x42dc1d*/
          ++v10; /*0x42dc20*/
          v34 = 0xFFFFFFFF; /*0x42dc27*/
        }
        while ( v10 < a2 ); /*0x42dc2f*/
        sub_42BFB0((int)v9, 0, a2 - 1); /*0x42dc3c*/
      }
    }
    v14 = *(_DWORD *)(a1 + 0x178) + 0x10 * v30; /*0x42dc4f*/
    v15 = *(_DWORD *)(v14 + 8) == 0; /*0x42dc57*/
    v31 = v14; /*0x42dc5a*/
    v28 = 0; /*0x42dc5e*/
    if ( !v15 ) /*0x42dc62*/
    {
      v29 = 0; /*0x42dc68*/
      do /*0x42dc6f*/
      {
        v16 = (_DWORD *)(v29 + *(_DWORD *)(v14 + 0xC)); /*0x42dc6f*/
        if ( (((*(_BYTE *)(a1 + 0x194) >> 3) ^ ((int)v16[3] < 0)) & 1) == 0 && (v16[3] & 0x7FFFFFFF) != 0 ) /*0x42dc98*/
        {
          v17 = sub_42BC50(a5, v29 + *(_DWORD *)(v14 + 0xC)); /*0x42dca3*/
          if ( !v17 ) /*0x42dcaa*/
          {
            v18 = a2; /*0x42dcb0*/
            if ( !a2 ) /*0x42dcb6*/
            {
LABEL_23:
              v25 = (const char *)Archive_GetFileNameByFolderAndIndex((_DWORD *)a1, v30, v28); /*0x42dd0e*/
              v26 = (char *)FormHeapAlloc(strlen(v25) + strlen(a7) + 1); /*0x42dd52*/
              strcpy(v26, a7); /*0x42dd5c*/
              strcat(v26, v25); /*0x42dd91*/
              BSSimpleList_PushFront(a6, (int)v26); /*0x42dd9f*/
              goto LABEL_27; /*0x42dda4*/
            }
            v19 = v16[1]; /*0x42dcba*/
            v20 = 0; /*0x42dcbd*/
            LODWORD(v33) = *v16; /*0x42dcbf*/
            HIDWORD(v33) = v19; /*0x42dcc3*/
            while ( 1 ) /*0x42dccf*/
            {
              v21 = (v18 - v20) >> 1; /*0x42dccf*/
              v22 = (unsigned int *)a3[v21 + v20]; /*0x42dcd4*/
              v23 = *v22; /*0x42dcd7*/
              v24 = v22[1]; /*0x42dcd9*/
              if ( v33 < __PAIR64__(v24, v23) ) /*0x42dce8*/
              {
                v18 = v21 + v20; /*0x42dd04*/
              }
              else
              {
                if ( v33 <= __PAIR64__(v24, v23) ) /*0x42dcfa*/
                {
                  v14 = v31; /*0x42ddaa*/
                  goto LABEL_27; /*0x42ddaa*/
                }
                v20 += v21; /*0x42dd00*/
              }
              if ( !v21 ) /*0x42dd08*/
              {
                v14 = v31; /*0x42dd0a*/
                goto LABEL_23; /*0x42dd0a*/
              }
            }
          }
          if ( v17 < 0 ) /*0x42dda6*/
            break; /*0x42dda6*/
        }
LABEL_27:
        v29 += 0x10; /*0x42ddae*/
        ++v28; /*0x42ddbd*/
      }
      while ( v28 < *(_DWORD *)(v14 + 8) ); /*0x42dc6f*/
    }
    v7 = v32; /*0x42ddc7*/
  }
  NiLeaveCriticalSection_0(v7); /*0x42ddcd*/
  return a3; /*0x42ddd6*/
}
