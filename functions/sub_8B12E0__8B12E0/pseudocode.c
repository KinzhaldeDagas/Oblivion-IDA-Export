int __thiscall sub_8B12E0(int *this, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebp
  int result; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  unsigned __int64 v19; // kr28_8
  unsigned __int64 v20; // [esp+10h] [ebp-20h]
  unsigned __int64 v21; // [esp+18h] [ebp-18h]
  unsigned int v22; // [esp+1Ch] [ebp-14h]
  unsigned __int64 v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-4h]
  int v25; // [esp+34h] [ebp+4h]
  int v26; // [esp+34h] [ebp+4h]

  v4 = *this; /*0x8b12ef*/
  --*(this + 1); /*0x8b12f2*/
  *(_DWORD *)(v4 + 8 * a2) = 0; /*0x8b12f5*/
  *(_DWORD *)(v4 + 8 * a2 + 4) = 0; /*0x8b12fc*/
  HIDWORD(v7) = *(this + 2) >> 0x1F; /*0x8b130a*/
  v21 = a2; /*0x8b130e*/
  v5 = *(this + 2); /*0x8b1312*/
  v6 = v5 & (a2 + v5); /*0x8b131a*/
  for ( LODWORD(v7) = HIDWORD(v7) & ((v7 + __PAIR64__(a2 >> 0x1F, v5)) >> 0x20); /*0x8b1320*/
        *(_QWORD *)(*this + 8 * v6);
        LODWORD(v7) = v25 )
  {
    v25 = HIDWORD(v7) & ((__PAIR64__(HIDWORD(v7), v6) + __PAIR64__(v7, v5)) >> 0x20); /*0x8b133c*/
    v6 = v5 & (v6 + v5); /*0x8b1340*/
  }
  LODWORD(v7) = (__PAIR64__(v7, v6) + 1) >> 0x20; /*0x8b1358*/
  LODWORD(v23) = v5 & (v6 + 1); /*0x8b135d*/
  v20 = v21; /*0x8b1367*/
  v8 = v5 & (v21 + 1); /*0x8b1377*/
  v22 = HIDWORD(v7) & ((v21 + 1) >> 0x20); /*0x8b1379*/
  result = *this; /*0x8b137d*/
  for ( HIDWORD(v23) = HIDWORD(v7) & v7; *(_QWORD *)(*this + 8 * v8); v22 = HIDWORD(v7) & HIDWORD(v19) ) /*0x8b1387*/
  {
    v26 = *this; /*0x8b1397*/
    v24 = *(_DWORD *)(*this + 8 * v8 + 4); /*0x8b139f*/
    v10 = 0x9E3779B1LL * (*(_QWORD *)(*this + 8 * v8) >> 4); /*0x8b13b3*/
    HIDWORD(v11) = HIDWORD(v7) & HIDWORD(v10); /*0x8b13bc*/
    LODWORD(v11) = v5 & v10; /*0x8b13c2*/
    if ( __PAIR64__(v22, v8) < v23 ) /*0x8b13ce*/
    {
      v12 = HIDWORD(v20); /*0x8b13f0*/
      v13 = v20; /*0x8b13f0*/
    }
    else
    {
      v12 = HIDWORD(v20); /*0x8b13d0*/
      if ( HIDWORD(v11) > HIDWORD(v20) ) /*0x8b13d6*/
        goto LABEL_18; /*0x8b13d6*/
      v13 = v20; /*0x8b13dc*/
      if ( HIDWORD(v11) >= HIDWORD(v20) && (unsigned int)v11 > (unsigned int)v20 ) /*0x8b13e4*/
        goto LABEL_18; /*0x8b13e4*/
    }
    if ( (v22 > v12 || v22 >= v12 && v8 >= v13 || v11 <= __PAIR64__(v12, v13) && v11 > __PAIR64__(v22, v8)) /*0x8b142a*/
      && (v11 <= __PAIR64__(v12, v13) || v11 >= v23) )
    {
      *(_DWORD *)(v26 + 8 * v13) = *(_DWORD *)(v26 + 8 * v8); /*0x8b1437*/
      *(_DWORD *)(v26 + 8 * v13 + 4) = v24; /*0x8b143a*/
      v14 = *(this + 2); /*0x8b143e*/
      v15 = *this; /*0x8b1441*/
      v16 = v14 + v8; /*0x8b1443*/
      v17 = v13 + v14; /*0x8b1446*/
      *(_DWORD *)(v15 + 8 * v17 + 8) = *(_DWORD *)(*this + 8 * v16 + 8); /*0x8b144c*/
      *(_DWORD *)(v15 + 8 * v17 + 0xC) = *(_DWORD *)(v15 + 8 * v16 + 0xC); /*0x8b1454*/
      v18 = *this; /*0x8b1458*/
      *(_DWORD *)(v18 + 8 * v8) = 0; /*0x8b145e*/
      *(_DWORD *)(v18 + 8 * v8 + 4) = 0; /*0x8b1465*/
      v20 = __PAIR64__(v22, v8); /*0x8b146d*/
    }
LABEL_18:
    v19 = __PAIR64__(v22, v8) + 1; /*0x8b1475*/
    HIDWORD(v7) = *(this + 2) >> 0x1F; /*0x8b1483*/
    v5 = *(this + 2); /*0x8b1485*/
    result = *this; /*0x8b1487*/
    v8 = v5 & (v8 + 1); /*0x8b148b*/
  }
  return result; /*0x8b149e*/
}
