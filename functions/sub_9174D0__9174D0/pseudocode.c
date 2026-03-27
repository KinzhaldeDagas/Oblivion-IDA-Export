_OWORD *__thiscall sub_9174D0(_DWORD *this, _OWORD *a2)
{
  _DWORD *v2; // edx
  _OWORD *v3; // ebx
  int v4; // eax
  _OWORD *v5; // esi
  int v6; // ebx
  _OWORD *v7; // esi
  _OWORD *v8; // edi
  _OWORD *v9; // edi
  _OWORD *v10; // edi
  __int64 v11; // rax
  __int128 v13; // [esp+10h] [ebp-10h]
  __int128 v14; // [esp+10h] [ebp-10h]
  __int128 v15; // [esp+10h] [ebp-10h]
  __int128 v16; // [esp+10h] [ebp-10h]

  v2 = (_DWORD *)*(this + 0xC);
  v3 = a2;
  v4 = *(this + 0xF) - 1;
  v5 = a2;
  if ( v4 >= 3 )
  {
    v6 = *(this + 0xF) >> 2;
    v4 = *(this + 0xF) - 1 - 4 * v6;
    do
    {
      LODWORD(v13) = *v2;
      DWORD1(v13) = v2[4];
      DWORD2(v13) = v2[8];
      HIDWORD(v13) = *(this + 3);
      *v5 = v13;
      LODWORD(v13) = v2[1];
      DWORD1(v13) = v2[5];
      DWORD2(v13) = v2[9];
      HIDWORD(v13) = *(this + 3);
      v7 = v5 + 1;
      *v7 = v13;
      LODWORD(v13) = v2[2];
      DWORD1(v13) = v2[6];
      DWORD2(v13) = v2[0xA];
      HIDWORD(v13) = *(this + 3);
      *++v7 = v13;
      LODWORD(v13) = v2[3];
      DWORD1(v13) = v2[7];
      DWORD2(v13) = v2[0xB];
      HIDWORD(v13) = *(this + 3);
      v8 = v7 + 1;
      v5 = v7 + 2;
      v2 += 0xC;
      --v6;
      *v8 = v13;
    }
    while ( v6 );
    v3 = a2;
  }
  if ( v4 >= 0 )
  {
    LODWORD(v14) = *v2;
    DWORD1(v14) = v2[4];
    DWORD2(v14) = v2[8];
    HIDWORD(v14) = *(this + 3);
    v9 = v5++;
    *v9 = v14;
  }
  if ( v4 >= 1 )
  {
    LODWORD(v15) = v2[1];
    DWORD1(v15) = v2[5];
    DWORD2(v15) = v2[9];
    HIDWORD(v15) = *(this + 3);
    v10 = v5++;
    *v10 = v15;
  }
  if ( v4 >= 2 )
  {
    LODWORD(v16) = v2[2];
    LODWORD(v11) = v2[6];
    HIDWORD(v11) = v2[0xA];
    *(_QWORD *)((char *)&v16 + 4) = v11;
    HIDWORD(v16) = *(this + 3);
    *v5 = v16;
  }
  return v3;
}
