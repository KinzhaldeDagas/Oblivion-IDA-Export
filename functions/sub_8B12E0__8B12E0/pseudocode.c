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

  v4 = *this;
  --*(this + 1);
  *(_DWORD *)(v4 + 8 * a2) = 0;
  *(_DWORD *)(v4 + 8 * a2 + 4) = 0;
  HIDWORD(v7) = *(this + 2) >> 0x1F;
  v21 = a2;
  v5 = *(this + 2);
  v6 = v5 & (a2 + v5);
  for ( LODWORD(v7) = HIDWORD(v7) & ((v7 + __PAIR64__(a2 >> 0x1F, v5)) >> 0x20);
        *(_QWORD *)(*this + 8 * v6);
        LODWORD(v7) = v25 )
  {
    v25 = HIDWORD(v7) & ((__PAIR64__(HIDWORD(v7), v6) + __PAIR64__(v7, v5)) >> 0x20);
    v6 = v5 & (v6 + v5);
  }
  LODWORD(v7) = (__PAIR64__(v7, v6) + 1) >> 0x20;
  LODWORD(v23) = v5 & (v6 + 1);
  v20 = v21;
  v8 = v5 & (v21 + 1);
  v22 = HIDWORD(v7) & ((v21 + 1) >> 0x20);
  result = *this;
  for ( HIDWORD(v23) = HIDWORD(v7) & v7; *(_QWORD *)(*this + 8 * v8); v22 = HIDWORD(v7) & HIDWORD(v19) )
  {
    v26 = *this;
    v24 = *(_DWORD *)(*this + 8 * v8 + 4);
    v10 = 0x9E3779B1LL * (*(_QWORD *)(*this + 8 * v8) >> 4);
    HIDWORD(v11) = HIDWORD(v7) & HIDWORD(v10);
    LODWORD(v11) = v5 & v10;
    if ( __PAIR64__(v22, v8) < v23 )
    {
      v12 = HIDWORD(v20);
      v13 = v20;
    }
    else
    {
      v12 = HIDWORD(v20);
      if ( HIDWORD(v11) > HIDWORD(v20) )
        goto LABEL_18;
      v13 = v20;
      if ( HIDWORD(v11) >= HIDWORD(v20) && (unsigned int)v11 > (unsigned int)v20 )
        goto LABEL_18;
    }
    if ( (v22 > v12 || v22 >= v12 && v8 >= v13 || v11 <= __PAIR64__(v12, v13) && v11 > __PAIR64__(v22, v8))
      && (v11 <= __PAIR64__(v12, v13) || v11 >= v23) )
    {
      *(_DWORD *)(v26 + 8 * v13) = *(_DWORD *)(v26 + 8 * v8);
      *(_DWORD *)(v26 + 8 * v13 + 4) = v24;
      v14 = *(this + 2);
      v15 = *this;
      v16 = v14 + v8;
      v17 = v13 + v14;
      *(_DWORD *)(v15 + 8 * v17 + 8) = *(_DWORD *)(*this + 8 * v16 + 8);
      *(_DWORD *)(v15 + 8 * v17 + 0xC) = *(_DWORD *)(v15 + 8 * v16 + 0xC);
      v18 = *this;
      *(_DWORD *)(v18 + 8 * v8) = 0;
      *(_DWORD *)(v18 + 8 * v8 + 4) = 0;
      v20 = __PAIR64__(v22, v8);
    }
LABEL_18:
    v19 = __PAIR64__(v22, v8) + 1;
    HIDWORD(v7) = *(this + 2) >> 0x1F;
    v5 = *(this + 2);
    result = *this;
    v8 = v5 & (v8 + 1);
  }
  return result;
}
