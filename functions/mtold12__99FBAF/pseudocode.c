unsigned int *__cdecl __mtold12(char *a1, int a2, unsigned int *a3)
{
  unsigned int *result; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // edi
  int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // esi
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // esi
  unsigned int v20; // edi
  unsigned int v21; // ecx
  __int16 v22; // [esp+Ch] [ebp-18h]
  int v23; // [esp+10h] [ebp-14h]
  int v24; // [esp+10h] [ebp-14h]
  unsigned int v25; // [esp+18h] [ebp-Ch]
  unsigned int v26; // [esp+1Ch] [ebp-8h]

  result = a3; /*0x99fbbf*/
  v22 = 0x404E; /*0x99fbca*/
  *a3 = 0; /*0x99fbd1*/
  a3[1] = 0; /*0x99fbd3*/
  for ( a3[2] = 0; a2; ++a1 ) /*0x99fbd9*/
  {
    v25 = a3[1]; /*0x99fbea*/
    v26 = a3[2]; /*0x99fbeb*/
    v23 = 0; /*0x99fc0a*/
    v4 = __SPAIR64__(*(_QWORD *)(a3 + 1) >> 0x1F, *(__int64 *)a3 >> 0x1F) >> 0x1F; /*0x99fc18*/
    v5 = *a3; /*0x99fc1a*/
    v6 = (2LL * *(_QWORD *)a3) >> 0x1F; /*0x99fc21*/
    v7 = 5 * *a3; /*0x99fc23*/
    *a3 *= 4; /*0x99fc28*/
    a3[1] = v6; /*0x99fc2a*/
    a3[2] = v4; /*0x99fc2d*/
    if ( 5 * v5 < 4 * v5 || v7 < v5 ) /*0x99fc34*/
      v23 = 1; /*0x99fc36*/
    v8 = 0; /*0x99fc3d*/
    *a3 = v7; /*0x99fc42*/
    if ( v23 ) /*0x99fc44*/
    {
      if ( v6 + 1 < v6 || v6 == 0xFFFFFFFF ) /*0x99fc50*/
        v8 = 1; /*0x99fc54*/
      a3[1] = v6 + 1; /*0x99fc57*/
      if ( v8 ) /*0x99fc5a*/
        a3[2] = v4 + 1; /*0x99fc5d*/
    }
    v9 = a3[1]; /*0x99fc60*/
    v10 = v9 + v25; /*0x99fc66*/
    v11 = 0; /*0x99fc69*/
    if ( v9 + v25 < v9 || v10 < v25 ) /*0x99fc71*/
      v11 = 1; /*0x99fc75*/
    a3[1] = v10; /*0x99fc78*/
    if ( v11 ) /*0x99fc7b*/
      ++a3[2]; /*0x99fc7d*/
    a3[2] += v26; /*0x99fc83*/
    v24 = 0; /*0x99fc86*/
    v12 = 2 * v7; /*0x99fc8a*/
    v13 = (v7 >> 0x1F) | (2 * v10); /*0x99fc95*/
    v14 = (v10 >> 0x1F) | (2 * a3[2]); /*0x99fca5*/
    *a3 = v12; /*0x99fca7*/
    a3[1] = v13; /*0x99fca9*/
    a3[2] = v14; /*0x99fcac*/
    v15 = *a1; /*0x99fcaf*/
    v16 = v12 + v15; /*0x99fcb2*/
    if ( v12 + v15 < v12 || v16 < v15 ) /*0x99fcbe*/
      v24 = 1; /*0x99fcc0*/
    *a3 = v16; /*0x99fccb*/
    if ( v24 ) /*0x99fccd*/
    {
      v17 = 0; /*0x99fcd2*/
      if ( v13 + 1 < v13 || v13 == 0xFFFFFFFF ) /*0x99fcdb*/
        v17 = 1; /*0x99fcdf*/
      a3[1] = v13 + 1; /*0x99fce2*/
      if ( v17 ) /*0x99fce5*/
        a3[2] = v14 + 1; /*0x99fce8*/
    }
    --a2; /*0x99fceb*/
  }
  while ( !a3[2] ) /*0x99fd28*/
  {
    v18 = a3[1]; /*0x99fcff*/
    a3[2] = HIWORD(v18); /*0x99fd07*/
    v22 -= 0x10; /*0x99fd19*/
    *(_QWORD *)a3 = __PAIR64__(v18, *a3) << 0x10; /*0x99fd23*/
  }
  if ( (a3[2] & 0x8000) == 0 ) /*0x99fd32*/
  {
    do /*0x99fd62*/
    {
      v19 = *a3; /*0x99fd34*/
      v20 = a3[1]; /*0x99fd36*/
      --v22; /*0x99fd39*/
      *a3 *= 2; /*0x99fd47*/
      v21 = (v20 >> 0x1F) | (2 * a3[2]); /*0x99fd58*/
      a3[1] = (v19 >> 0x1F) | (2 * v20); /*0x99fd5c*/
      a3[2] = v21; /*0x99fd5f*/
    }
    while ( (v21 & 0x8000) == 0 ); /*0x99fd62*/
  }
  *((_WORD *)a3 + 5) = v22; /*0x99fd68*/
  return result; /*0x99fd6c*/
}
