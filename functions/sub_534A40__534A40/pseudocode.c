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

  v5 = dword_B34D90;
  v23 = 0;
  v6 = sub_494410(v5, &v23);
  v7 = strlen(a4) + 1;
  v8 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF);
  while ( *++v8 )
    ;
  qmemcpy(v8, a4, v7);
  *(_DWORD *)(v6 + 8) += strlen(a4);
  *(_DWORD *)(v6 + 8) += _sprintf((char *)(*(_DWORD *)(v6 + 8) + v6 + 0x10), "%c", 0x3A);
  *(_DWORD *)(v6 + 8) += _sprintf((char *)(*(_DWORD *)(v6 + 8) + v6 + 0x10), "%d", a5);
  v10 = *(_DWORD *)(v6 + 8) + v6 + 0xF;
  while ( *(_BYTE *)++v10 )
    ;
  *(_WORD *)v10 = word_A56274;
  *(_BYTE *)(v10 + 2) = byte_A56276;
  *(_DWORD *)(v6 + 8) += 2;
  v12 = strlen(a1) + 1;
  v13 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF);
  while ( *++v13 )
    ;
  qmemcpy(v13, a1, v12);
  *(_DWORD *)(v6 + 8) += strlen(a1);
  v15 = (_DWORD *)(*(_DWORD *)(v6 + 8) + v6 + 0xF);
  do
  {
    v16 = *((_BYTE *)v15 + 1);
    v15 = (_DWORD *)((char *)v15 + 1);
  }
  while ( v16 );
  *v15 = dword_A5626C;
  *(_DWORD *)(v6 + 8) += 3;
  v17 = strlen(a3) + 1;
  v18 = (char *)(*(_DWORD *)(v6 + 8) + v6 + 0xF);
  while ( *++v18 )
    ;
  qmemcpy(v18, a3, v17);
  *(_DWORD *)(v6 + 8) += strlen(a3);
  v20 = (_WORD *)(*(_DWORD *)(v6 + 8) + v6 + 0xF);
  do
  {
    v21 = *((_BYTE *)v20 + 1);
    v20 = (_WORD *)((char *)v20 + 1);
  }
  while ( v21 );
  *v20 = word_A56270;
  ++*(_DWORD *)(v6 + 8);
  result = sub_533D30(1, (char *)(v6 + 0x10));
  *(_BYTE *)(v6 + 0x10) = 0;
  *(_DWORD *)(v6 + 0xC) = result;
  *(_DWORD *)(v6 + 8) = 0;
  return result;
}
