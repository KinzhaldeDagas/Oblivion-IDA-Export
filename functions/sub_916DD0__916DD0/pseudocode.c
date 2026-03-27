_DWORD *__userpurge sub_916DD0@<eax>(_DWORD *result@<eax>, int a2@<ecx>, unsigned __int16 *a3, int a4, _DWORD *a5)
{
  int v7; // esi
  int v8; // esi
  int v9; // edx
  int v10; // edi
  int v11; // esi
  int v12; // edx
  int v13; // edi
  int v14; // esi
  int v15; // edx
  int v16; // edi
  int v17; // esi
  int v18; // edx
  int v19; // edi
  bool v20; // zf
  int v21; // edx
  int v22; // eax
  int v23; // esi
  int v24; // [esp+10h] [ebp-4h]
  int v25; // [esp+1Ch] [ebp+8h]
  unsigned int v26; // [esp+20h] [ebp+Ch]
  _DWORD *v27; // [esp+20h] [ebp+Ch]

  v7 = a4 - 1;
  v24 = a2;
  if ( a4 >= 4 )
  {
    v26 = (unsigned int)a4 >> 2;
    result = a5 + 6;
    v25 = v7 - 4 * ((unsigned int)a4 >> 2);
    do
    {
      v8 = *a3;
      v9 = *(_DWORD *)(a2 + 0x30) + 0x30 * (v8 >> 2);
      v10 = *a3 & 3;
      *a5 = *(_DWORD *)(v9 + 4 * v10);
      result[0xFFFFFFFB] = *(_DWORD *)(v9 + 4 * v10 + 0x10);
      result[0xFFFFFFFC] = *(_DWORD *)(v9 + 4 * v10 + 0x20);
      result[0xFFFFFFFD] = v8 | 0x3F000000;
      v11 = a3[1];
      v12 = *(_DWORD *)(v24 + 0x30) + 0x30 * (v11 >> 2);
      v13 = a3[1] & 3;
      result[0xFFFFFFFE] = *(_DWORD *)(v12 + 4 * v13);
      result[0xFFFFFFFF] = *(_DWORD *)(v12 + 4 * v13 + 0x10);
      *result = *(_DWORD *)(v12 + 4 * v13 + 0x20);
      result[1] = v11 | 0x3F000000;
      v14 = a3[2];
      v15 = *(_DWORD *)(v24 + 0x30) + 0x30 * (v14 >> 2);
      v16 = a3[2] & 3;
      result[2] = *(_DWORD *)(v15 + 4 * v16);
      result[3] = *(_DWORD *)(v15 + 4 * v16 + 0x10);
      result[4] = *(_DWORD *)(v15 + 4 * v16 + 0x20);
      result[5] = v14 | 0x3F000000;
      v17 = a3[3];
      v18 = *(_DWORD *)(v24 + 0x30) + 0x30 * (v17 >> 2);
      v19 = a3[3] & 3;
      result[6] = *(_DWORD *)(v18 + 4 * v19);
      result[7] = *(_DWORD *)(v18 + 4 * v19 + 0x10);
      result[8] = *(_DWORD *)(v18 + 4 * v19 + 0x20);
      result[9] = v17 | 0x3F000000;
      a3 += 4;
      a5 += 0x10;
      result += 0x10;
      v20 = v26-- == 1;
      a2 = v24;
    }
    while ( !v20 );
    v7 = v25;
  }
  if ( v7 >= 0 )
  {
    v27 = (_DWORD *)(v7 + 1);
    do
    {
      v21 = *a3;
      v22 = *(_DWORD *)(a2 + 0x30) + 0x30 * (v21 >> 2);
      v23 = *a3 & 3;
      *a5 = *(_DWORD *)(v22 + 4 * v23);
      a5[1] = *(_DWORD *)(v22 + 4 * v23 + 0x10);
      a5[2] = *(_DWORD *)(v22 + 4 * v23 + 0x20);
      a5[3] = v21 | 0x3F000000;
      ++a3;
      a5 += 4;
      result = (_DWORD *)((char *)v27 + 0xFFFFFFFF);
      v27 = result;
    }
    while ( result );
  }
  return result;
}
