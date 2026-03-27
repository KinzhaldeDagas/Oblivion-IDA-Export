_DWORD *__cdecl sub_42DB50(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4, _BYTE *a5, char **a6, const char *a7)
{
  _RTL_CRITICAL_SECTION_0 *v7; // esi
  char **v8; // esi
  _DWORD *v9; // ebx
  unsigned int v10; // edi
  char *v11; // ebp
  void *v12; // eax
  int v13; // eax
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

  v7 = (_RTL_CRITICAL_SECTION_0 *)(a1 + 0x200);
  v32 = (_RTL_CRITICAL_SECTION_0 *)(a1 + 0x200);
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 0x200), (int)&aArchivemanager);
  if ( Archive_ContainsFolder(a1, a4, (signed int *)&v30, 0) )
  {
    if ( !a3 )
    {
      if ( a2 )
      {
        v8 = a6;
        v9 = (_DWORD *)FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
        v10 = 0;
        a3 = v9;
        do
        {
          v11 = *v8;
          v12 = (void *)FormHeapAlloc(8u);
          v31 = (int)v12;
          v34 = 0;
          if ( v12 )
            v13 = BSHash_constr(v12, v11, 0);
          else
            v13 = 0;
          v9[v10] = v13;
          v8 = (char **)v8[1];
          ++v10;
          v34 = 0xFFFFFFFF;
        }
        while ( v10 < a2 );
        sub_42BFB0((int)v9, 0, a2 - 1);
      }
    }
    v14 = *(_DWORD *)(a1 + 0x178) + 0x10 * v30;
    v15 = *(_DWORD *)(v14 + 8) == 0;
    v31 = v14;
    v28 = 0;
    if ( !v15 )
    {
      v29 = 0;
      do
      {
        v16 = (_DWORD *)(v29 + *(_DWORD *)(v14 + 0xC));
        if ( (((*(_BYTE *)(a1 + 0x194) >> 3) ^ ((int)v16[3] < 0)) & 1) == 0 && (v16[3] & 0x7FFFFFFF) != 0 )
        {
          v17 = sub_42BC50(a5, v29 + *(_DWORD *)(v14 + 0xC));
          if ( !v17 )
          {
            v18 = a2;
            if ( !a2 )
            {
LABEL_23:
              v25 = (const char *)sub_42CC00((_DWORD *)a1, v30, v28);
              v26 = (char *)FormHeapAlloc(strlen(v25) + strlen(a7) + 1);
              strcpy(v26, a7);
              strcat(v26, v25);
              BSSimpleList_PushFront(a6, (int)v26);
              goto LABEL_27;
            }
            v19 = v16[1];
            v20 = 0;
            LODWORD(v33) = *v16;
            HIDWORD(v33) = v19;
            while ( 1 )
            {
              v21 = (v18 - v20) >> 1;
              v22 = (unsigned int *)a3[v21 + v20];
              v23 = *v22;
              v24 = v22[1];
              if ( v33 < __PAIR64__(v24, v23) )
              {
                v18 = v21 + v20;
              }
              else
              {
                if ( v33 <= __PAIR64__(v24, v23) )
                {
                  v14 = v31;
                  goto LABEL_27;
                }
                v20 += v21;
              }
              if ( !v21 )
              {
                v14 = v31;
                goto LABEL_23;
              }
            }
          }
          if ( v17 < 0 )
            break;
        }
LABEL_27:
        v29 += 0x10;
        ++v28;
      }
      while ( v28 < *(_DWORD *)(v14 + 8) );
    }
    v7 = v32;
  }
  NiLeaveCriticalSection_0(v7);
  return a3;
}
