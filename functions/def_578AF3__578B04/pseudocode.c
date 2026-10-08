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

  if ( a1 != *(char *)(a5 + 0x18) && (a1 == 9 || a1 >= 0x20u) ) /*0x578b1a*/
  {
    sub_577120(v16, a6); /*0x578b25*/
    v7 = sub_577060(v16); /*0x578b31*/
    sub_577B40(a7, (signed int *)v7, a2, 0); /*0x578b3b*/
  }
  if ( a3 + 1 < BSStringT_GetLen(a4) ) /*0x578b4e*/
    JUMPOUT(0x578AD4); /*0x578ad4*/
  *(_BYTE *)(a5 + 0x34) = 0; /*0x578b58*/
  *(_DWORD *)(a5 + 0x2C) = 0; /*0x578b5c*/
  *(_DWORD *)(a5 + 0x1C) = 0; /*0x578b5f*/
  *(_DWORD *)(a5 + 0x20) = 0; /*0x578b62*/
  *(_DWORD *)(a5 + 0x30) = 0; /*0x578b65*/
  if ( a7 ) /*0x578b68*/
  {
    *(_DWORD *)(a5 + 0x2C) = a7[3]; /*0x578b6d*/
    if ( a7[3] ) /*0x578b70*/
    {
      v8 = (_DWORD *)a7[1]; /*0x578b75*/
      v9 = a7[6]; /*0x578b7a*/
      if ( v8 ) /*0x578b7d*/
      {
        while ( v9-- ) /*0x578b80*/
        {
          v8 = (_DWORD *)*v8; /*0x578b89*/
          if ( !v8 ) /*0x578b8d*/
            goto LABEL_18; /*0x578b8d*/
        }
        v11 = v8[2]; /*0x578b95*/
        if ( v11 ) /*0x578b9a*/
        {
          *(_DWORD *)(a5 + 0x20) = 0; /*0x578b9c*/
          *(_DWORD *)(a5 + 0x1C) = 0; /*0x578b9f*/
          for ( i = *(_DWORD **)(v11 + 4); i; *(_DWORD *)(a5 + 0x1C) = v14 ) /*0x578ba7*/
          {
            v13 = (_DWORD *)i[2]; /*0x578bb3*/
            i = (_DWORD *)*i; /*0x578bbb*/
            *(_DWORD *)(a5 + 0x20) += v13[6] + v13[8]; /*0x578bbd*/
            v14 = v13[4]; /*0x578bc3*/
            if ( *(_DWORD *)(a5 + 0x1C) > v14 ) /*0x578bc8*/
              v14 = *(_DWORD *)(a5 + 0x1C); /*0x578bca*/
          }
          *(_DWORD *)(a5 + 0x30) = *(_DWORD *)(v11 + 0xC); /*0x578bd6*/
        }
      }
    }
  }
LABEL_18:
  FormHeapFree(v16[7]); /*0x578bd9*/
  return a7; /*0x578bfb*/
}
