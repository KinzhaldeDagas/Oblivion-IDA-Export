_DWORD *__userpurge sub_916DD0@<eax>(
        _DWORD *result@<eax>,
        int a2@<ecx>,
        unsigned __int16 *a3,
        unsigned int a4,
        _DWORD *a5)
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

  v7 = a4 - 1; /*0x916de0*/
  v24 = a2; /*0x916de8*/
  if ( (int)a4 >= 4 ) /*0x916dec*/
  {
    v26 = a4 >> 2; /*0x916df5*/
    result = a5 + 6; /*0x916dfe*/
    v25 = v7 - 4 * (a4 >> 2); /*0x916e01*/
    do /*0x916efd*/
    {
      v8 = *a3; /*0x916e08*/
      v9 = *(_DWORD *)(a2 + 0x30) + 0x30 * (v8 >> 2); /*0x916e16*/
      v10 = *a3 & 3; /*0x916e1a*/
      *a5 = *(_DWORD *)(v9 + 4 * v10); /*0x916e20*/
      result[0xFFFFFFFB] = *(_DWORD *)(v9 + 4 * v10 + 0x10); /*0x916e27*/
      result[0xFFFFFFFC] = *(_DWORD *)(v9 + 4 * v10 + 0x20); /*0x916e2e*/
      result[0xFFFFFFFD] = v8 | 0x3F000000; /*0x916e3b*/
      v11 = a3[1]; /*0x916e3e*/
      v12 = *(_DWORD *)(v24 + 0x30) + 0x30 * (v11 >> 2); /*0x916e50*/
      v13 = a3[1] & 3; /*0x916e54*/
      result[0xFFFFFFFE] = *(_DWORD *)(v12 + 4 * v13); /*0x916e5a*/
      result[0xFFFFFFFF] = *(_DWORD *)(v12 + 4 * v13 + 0x10); /*0x916e61*/
      *result = *(_DWORD *)(v12 + 4 * v13 + 0x20); /*0x916e68*/
      result[1] = v11 | 0x3F000000; /*0x916e74*/
      v14 = a3[2]; /*0x916e77*/
      v15 = *(_DWORD *)(v24 + 0x30) + 0x30 * (v14 >> 2); /*0x916e89*/
      v16 = a3[2] & 3; /*0x916e8d*/
      result[2] = *(_DWORD *)(v15 + 4 * v16); /*0x916e93*/
      result[3] = *(_DWORD *)(v15 + 4 * v16 + 0x10); /*0x916e9a*/
      result[4] = *(_DWORD *)(v15 + 4 * v16 + 0x20); /*0x916ea5*/
      result[5] = v14 | 0x3F000000; /*0x916eae*/
      v17 = a3[3]; /*0x916eb1*/
      v18 = *(_DWORD *)(v24 + 0x30) + 0x30 * (v17 >> 2); /*0x916ec3*/
      v19 = a3[3] & 3; /*0x916ec7*/
      result[6] = *(_DWORD *)(v18 + 4 * v19); /*0x916ecd*/
      result[7] = *(_DWORD *)(v18 + 4 * v19 + 0x10); /*0x916ed4*/
      result[8] = *(_DWORD *)(v18 + 4 * v19 + 0x20); /*0x916ee5*/
      result[9] = v17 | 0x3F000000; /*0x916ee8*/
      a3 += 4; /*0x916eeb*/
      a5 += 0x10; /*0x916eee*/
      result += 0x10; /*0x916ef1*/
      v20 = v26-- == 1; /*0x916ef4*/
      a2 = v24; /*0x916ef9*/
    }
    while ( !v20 ); /*0x916efd*/
    v7 = v25; /*0x916f03*/
  }
  if ( v7 >= 0 ) /*0x916f09*/
  {
    v27 = (_DWORD *)(v7 + 1); /*0x916f0c*/
    do /*0x916f54*/
    {
      v21 = *a3; /*0x916f10*/
      v22 = *(_DWORD *)(a2 + 0x30) + 0x30 * (v21 >> 2); /*0x916f21*/
      v23 = *a3 & 3; /*0x916f25*/
      *a5 = *(_DWORD *)(v22 + 4 * v23); /*0x916f2b*/
      a5[1] = *(_DWORD *)(v22 + 4 * v23 + 0x10); /*0x916f32*/
      a5[2] = *(_DWORD *)(v22 + 4 * v23 + 0x20); /*0x916f39*/
      a5[3] = v21 | 0x3F000000; /*0x916f46*/
      ++a3; /*0x916f49*/
      a5 += 4; /*0x916f4c*/
      result = (_DWORD *)((char *)v27 + 0xFFFFFFFF); /*0x916f4f*/
      v27 = result; /*0x916f50*/
    }
    while ( result ); /*0x916f54*/
  }
  return result; /*0x916f56*/
}
