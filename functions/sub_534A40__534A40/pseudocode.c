int __stdcall sub_534A40(const char *a1, int a2, const char *a3, const char *a4, int a5)
{
  int v5; // ecx
  int v6; // ebp
  unsigned int v7; // edx
  char *v8; // edi
  int v10; // eax
  unsigned int v12; // eax
  char *v13; // edi
  _DWORD *v15; // edi
  char v16; // al
  unsigned int v17; // eax
  char *v18; // edi
  _WORD *v20; // edi
  char v21; // al
  int result; // eax
  int v23; // [esp+10h] [ebp-4h] BYREF

  v5 = *(_DWORD *)&MEMORY[0xB33E90][0xF00]; /*0x534a41*/
  v23 = 0; /*0x534a50*/
  v6 = sub_494410(v5, &v23); /*0x534a63*/
  v7 = strlen(a4) + 1; /*0x534a6e*/
  v8 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x534a7d*/
  while ( *++v8 ) /*0x534a88*/
    ; /*0x534a80*/
  qmemcpy(v8, a4, v7); /*0x534a8f*/
  *(_DWORD *)(v6 + 8) += strlen(a4); /*0x534aab*/
  *(_DWORD *)(v6 + 8) += _sprintf((char *)(*(_DWORD *)(v6 + 8) + v6 + 0x10), "%c", 0x3A); /*0x534ac6*/
  *(_DWORD *)(v6 + 8) += _sprintf((char *)(*(_DWORD *)(v6 + 8) + v6 + 0x10), "%d", a5); /*0x534adc*/
  v10 = *(_DWORD *)(v6 + 8) + v6 + 0xF; /*0x534ae9*/
  while ( *(_BYTE *)++v10 ) /*0x534af8*/
    ; /*0x534af0*/
  *(_WORD *)v10 = word_A56274; /*0x534b05*/
  *(_BYTE *)(v10 + 2) = byte_A56276; /*0x534b0e*/
  *(_DWORD *)(v6 + 8) += 2; /*0x534b11*/
  v12 = strlen(a1) + 1; /*0x534b2d*/
  v13 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x534b31*/
  while ( *++v13 ) /*0x534b3c*/
    ; /*0x534b34*/
  qmemcpy(v13, a1, v12); /*0x534b43*/
  *(_DWORD *)(v6 + 8) += strlen(a1); /*0x534b5c*/
  v15 = (_DWORD *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x534b66*/
  do /*0x534b78*/
  {
    v16 = *((_BYTE *)v15 + 1); /*0x534b70*/
    v15 = (_DWORD *)((char *)v15 + 1); /*0x534b73*/
  }
  while ( v16 ); /*0x534b78*/
  *v15 = dword_A5626C; /*0x534b83*/
  *(_DWORD *)(v6 + 8) += 3; /*0x534b85*/
  v17 = strlen(a3) + 1; /*0x534b9d*/
  v18 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x534ba1*/
  while ( *++v18 ) /*0x534bac*/
    ; /*0x534ba4*/
  qmemcpy(v18, a3, v17); /*0x534bb3*/
  *(_DWORD *)(v6 + 8) += strlen(a3); /*0x534bcc*/
  v20 = (_WORD *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x534bd6*/
  do /*0x534be8*/
  {
    v21 = *((_BYTE *)v20 + 1); /*0x534be0*/
    v20 = (_WORD *)((char *)v20 + 1); /*0x534be3*/
  }
  while ( v21 ); /*0x534be8*/
  *v20 = *(_WORD *)word_A56270; /*0x534bf5*/
  ++*(_DWORD *)(v6 + 8); /*0x534bf8*/
  result = sub_533D30(1, (char *)(v6 + 0x10)); /*0x534bfe*/
  *(_BYTE *)(v6 + 0x10) = 0; /*0x534c07*/
  *(_DWORD *)(v6 + 0xC) = result; /*0x534c0b*/
  *(_DWORD *)(v6 + 8) = 0; /*0x534c0e*/
  return result; /*0x534c06*/
}
