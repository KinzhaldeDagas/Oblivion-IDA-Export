// positive sp value has been detected, the output may be wrong!
int *__userpurge def_578AF3@<eax>(
        unsigned __int8 a1@<al>,
        signed int a2@<ebx>,
        int a3@<ebp>,
        BSStringT *a4@<edi>,
        int a5@<esi>,
        char a6,
        int *a7)
{
  float *v7; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  int v11; // ebx
  _DWORD *i; // eax
  _DWORD *v13; // ecx
  int v14; // ecx
  int v16[17]; // [esp-44h] [ebp-44h] BYREF

  if ( a1 != *(char *)(a5 + 0x18) && (a1 == 9 || a1 >= 0x20u) )
  {
    sub_577120(v16, a6);
    v7 = sub_577060(v16);
    sub_577B40(a7, v7, a2, 0);
  }
  if ( a3 + 1 < BSStringT_GetLen(a4) )
    JUMPOUT(0x578AD4);
  *(_BYTE *)(a5 + 0x34) = 0;
  *(_DWORD *)(a5 + 0x2C) = 0;
  *(_DWORD *)(a5 + 0x1C) = 0;
  *(_DWORD *)(a5 + 0x20) = 0;
  *(_DWORD *)(a5 + 0x30) = 0;
  if ( a7 )
  {
    *(_DWORD *)(a5 + 0x2C) = a7[3];
    if ( a7[3] )
    {
      v8 = (_DWORD *)a7[1];
      v9 = a7[6];
      if ( v8 )
      {
        while ( v9-- )
        {
          v8 = (_DWORD *)*v8;
          if ( !v8 )
            goto LABEL_18;
        }
        v11 = v8[2];
        if ( v11 )
        {
          *(_DWORD *)(a5 + 0x20) = 0;
          *(_DWORD *)(a5 + 0x1C) = 0;
          for ( i = *(_DWORD **)(v11 + 4); i; *(_DWORD *)(a5 + 0x1C) = v14 )
          {
            v13 = (_DWORD *)i[2];
            i = (_DWORD *)*i;
            *(_DWORD *)(a5 + 0x20) += v13[6] + v13[8];
            v14 = v13[4];
            if ( *(_DWORD *)(a5 + 0x1C) > v14 )
              v14 = *(_DWORD *)(a5 + 0x1C);
          }
          *(_DWORD *)(a5 + 0x30) = *(_DWORD *)(v11 + 0xC);
        }
      }
    }
  }
LABEL_18:
  FormHeapFree(v16[7]);
  return a7;
}
