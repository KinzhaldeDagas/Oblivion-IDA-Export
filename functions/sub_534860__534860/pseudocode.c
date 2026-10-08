int __stdcall sub_534860(const char *a1, int a2, const char *a3, const char *a4, int a5)
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

  v5 = *(_DWORD *)&MEMORY[0xB33E90][0xF00]; /*0x534861*/
  v23 = 0; /*0x534870*/
  v6 = sub_494410(v5, &v23); /*0x534883*/
  v7 = strlen(a4) + 1; /*0x53488e*/
  v8 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x53489d*/
  while ( *++v8 ) /*0x5348a8*/
    ; /*0x5348a0*/
  qmemcpy(v8, a4, v7); /*0x5348af*/
  *(_DWORD *)(v6 + 8) += strlen(a4); /*0x5348cb*/
  *(_DWORD *)(v6 + 8) += _sprintf((char *)(*(_DWORD *)(v6 + 8) + v6 + 0x10), "%c", 0x3A); /*0x5348e6*/
  *(_DWORD *)(v6 + 8) += _sprintf((char *)(*(_DWORD *)(v6 + 8) + v6 + 0x10), "%d", a5); /*0x5348fc*/
  v10 = *(_DWORD *)(v6 + 8) + v6 + 0xF; /*0x534909*/
  while ( *(_BYTE *)++v10 ) /*0x534918*/
    ; /*0x534910*/
  *(_WORD *)v10 = word_A56274; /*0x534925*/
  *(_BYTE *)(v10 + 2) = byte_A56276; /*0x53492e*/
  *(_DWORD *)(v6 + 8) += 2; /*0x534931*/
  v12 = strlen(a1) + 1; /*0x53494d*/
  v13 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x534951*/
  while ( *++v13 ) /*0x53495c*/
    ; /*0x534954*/
  qmemcpy(v13, a1, v12); /*0x534963*/
  *(_DWORD *)(v6 + 8) += strlen(a1); /*0x53497c*/
  v15 = (_DWORD *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x534986*/
  do /*0x534998*/
  {
    v16 = *((_BYTE *)v15 + 1); /*0x534990*/
    v15 = (_DWORD *)((char *)v15 + 1); /*0x534993*/
  }
  while ( v16 ); /*0x534998*/
  *v15 = dword_A5626C; /*0x5349a3*/
  *(_DWORD *)(v6 + 8) += 3; /*0x5349a5*/
  v17 = strlen(a3) + 1; /*0x5349bd*/
  v18 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x5349c1*/
  while ( *++v18 ) /*0x5349cc*/
    ; /*0x5349c4*/
  qmemcpy(v18, a3, v17); /*0x5349d3*/
  *(_DWORD *)(v6 + 8) += strlen(a3); /*0x5349ec*/
  v20 = (_WORD *)(*(_DWORD *)(v6 + 8) + v6 + 0xF); /*0x5349f6*/
  do /*0x534a08*/
  {
    v21 = *((_BYTE *)v20 + 1); /*0x534a00*/
    v20 = (_WORD *)((char *)v20 + 1); /*0x534a03*/
  }
  while ( v21 ); /*0x534a08*/
  *v20 = *(_WORD *)word_A56270; /*0x534a15*/
  ++*(_DWORD *)(v6 + 8); /*0x534a18*/
  result = sub_533D30(0, (char *)(v6 + 0x10)); /*0x534a1e*/
  *(_BYTE *)(v6 + 0x10) = 0; /*0x534a27*/
  *(_DWORD *)(v6 + 0xC) = result; /*0x534a2b*/
  *(_DWORD *)(v6 + 8) = 0; /*0x534a2e*/
  return result; /*0x534a26*/
}
