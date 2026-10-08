int __thiscall sub_957980(int this, int i, unsigned int **a3, int a4, int a5)
{
  unsigned int **v5; // edi
  int v8; // ebp
  int v9; // edx
  _DWORD *v10; // eax
  bool v11; // zf
  int v12; // ecx
  int v13; // edx
  int v14; // ebx
  int *v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // ebx
  double v21; // st7
  unsigned int **v22; // ebx
  int v23; // eax
  bool v24; // cc
  unsigned int **v25; // eax
  int v26; // ebx
  int v27; // [esp+34h] [ebp-34h]
  signed int v28; // [esp+38h] [ebp-30h] BYREF
  int v29; // [esp+3Ch] [ebp-2Ch] BYREF
  int v30[3]; // [esp+44h] [ebp-24h] BYREF
  int *v31[3]; // [esp+50h] [ebp-18h] BYREF
  unsigned int *v32[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v5 = a3; /*0x957985*/
  if ( a3[1] == (unsigned int *)1 ) /*0x95798f*/
  {
    if ( !*(_DWORD *)(this + 0x1C) ) /*0x957991*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 0x24) + 0x10))( /*0x9579a7*/
        *(_DWORD *)(this + 0x24),
        *(_DWORD *)(this + 0x2C),
        this,
        0x800);
    return sub_9573A0((_DWORD *)this, i, v5); /*0x9579b2*/
  }
  else
  {
    if ( !*(_DWORD *)(this + 0x14) ) /*0x9579bf*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 0x24) + 0x10))( /*0x9579d9*/
        *(_DWORD *)(this + 0x24),
        *(_DWORD *)(this + 0x2C),
        this,
        0x800);
    v8 = *(_DWORD *)(this + 0x10); /*0x9579dc*/
    v9 = *(_DWORD *)(this + 0x14); /*0x9579e2*/
    *(_DWORD *)(this + 0x10) = *(_DWORD *)v8; /*0x9579e5*/
    *(_DWORD *)(this + 0x14) = v9 - 1; /*0x9579eb*/
    sub_956980((_DWORD *)v8); /*0x9579ee*/
    v10 = (_DWORD *)i; /*0x9579f3*/
    v11 = i == 0; /*0x9579f7*/
    *(_BYTE *)(v8 + 4) = 0; /*0x9579f9*/
    *(_DWORD *)(v8 + 0xC4) = 0x49742400; /*0x9579fd*/
    *(_DWORD *)(v8 + 0xBC) = 0x501502F9; /*0x957a07*/
    *(_DWORD *)(v8 + 0xEC) = 0; /*0x957a11*/
    *(_DWORD *)(v8 + 0xF0) = 0; /*0x957a17*/
    *(_DWORD *)(v8 + 0xF4) = v5[1]; /*0x957a20*/
    *(_DWORD *)v8 = v10; /*0x957a26*/
    if ( v11 ) /*0x957a29*/
    {
      *(_DWORD *)(this + 0x2C) = v8; /*0x957a2b*/
    }
    else
    {
      if ( a4 ) /*0x957a34*/
        v10[0x3C] = v8; /*0x957a3e*/
      else
        v10[0x3B] = v8; /*0x957a36*/
      *(_DWORD *)(v8 + 0xC) = v10[3]; /*0x957a4c*/
      *(_DWORD *)(v8 + 0x10) = v10[4]; /*0x957a51*/
      *(_DWORD *)(v8 + 0x14) = v10[5]; /*0x957a57*/
      *(_DWORD *)(v8 + 0x18) = v10[6]; /*0x957a5d*/
      *(_DWORD *)(v8 + 0x1C) = v10[7]; /*0x957a63*/
      *(_DWORD *)(v8 + 0x20) = v10[8]; /*0x957a69*/
    }
    a3 = 0; /*0x957a7b*/
    sub_956E90((_DWORD *)this, (int)v10, &v28, (int)v30); /*0x957a7f*/
    v12 = 0; /*0x957a84*/
    for ( i = 0; ; v12 = i ) /*0x957a86*/
    {
      v13 = *(&v28 + v12); /*0x957a90*/
      v14 = *(_DWORD *)(this + 0x34) + 0x20 * v13; /*0x957aa4*/
      if ( *(float *)&v30[v12] + *(float *)(v14 + 0x10) > *(float *)(v8 + 0xC4) ) /*0x957ab1*/
        break; /*0x957ab1*/
      v15 = *(int **)(this + 0x28); /*0x957ab3*/
      v16 = v8 + 8 * v13 + 0xC; /*0x957ab6*/
      v17 = *v15; /*0x957aba*/
      a4 = v16; /*0x957abc*/
      (*(void (__thiscall **)(int *, int, unsigned int *, unsigned int *, int, int))(v17 + 0x10))( /*0x957ad1*/
        v15,
        v14,
        *v5,
        v5[1],
        v16,
        v16 + 4);
      v18 = (int)v5[1]; /*0x957ad4*/
      LOBYTE(v27) = 0; /*0x957ada*/
      if ( v18 > 1 ) /*0x957adf*/
        sub_957460((int)*v5, 0, v18 - 1, v27); /*0x957aed*/
      a3 = (unsigned int **)v14; /*0x957b04*/
      sub_957040((_DWORD *)this, v8, v14, v5, (float *)a4, a5); /*0x957b08*/
      if ( ++i >= 3 ) /*0x957b19*/
        goto LABEL_23; /*0x957b19*/
    }
    while ( 1 ) /*0x957b34*/
    {
      (*(void (__thiscall **)(_DWORD, int, unsigned int *, unsigned int *, int, int))(**(_DWORD **)(this + 0x28) + 0x14))( /*0x957b55*/
        *(_DWORD *)(this + 0x28),
        *(_DWORD *)(this + 0x34) + 0x20 * *(&v28 + v12),
        *v5,
        v5[1],
        v8 + 8 * *(&v28 + v12) + 0xC,
        v8 + 8 * *(&v28 + v12) + 0x10);
      if ( ++i >= 3 ) /*0x957b64*/
        break; /*0x957b64*/
      v12 = i; /*0x957b28*/
    }
LABEL_23:
    v19 = *(_DWORD *)(this + 0x30); /*0x957b66*/
    a4 = 3; /*0x957b70*/
    if ( v19 > 3 ) /*0x957b74*/
    {
      i = 0x60; /*0x957b7a*/
      do /*0x957c08*/
      {
        v20 = *(_DWORD *)(this + 0x34); /*0x957b86*/
        v21 = *(float *)(v20 + i + 0x10); /*0x957b89*/
        v22 = (unsigned int **)(i + v20); /*0x957b8d*/
        if ( v21 > *(float *)(v8 + 0xC4) ) /*0x957b9a*/
          break; /*0x957b9a*/
        (*(void (__thiscall **)(_DWORD, unsigned int **, unsigned int *, unsigned int *, signed int *, int *))(**(_DWORD **)(this + 0x28) + 0x10))( /*0x957bb3*/
          *(_DWORD *)(this + 0x28),
          v22,
          *v5,
          v5[1],
          &v28,
          &v29);
        v23 = (int)v5[1]; /*0x957bb6*/
        LOBYTE(v27) = 0; /*0x957bbc*/
        if ( v23 > 1 ) /*0x957bc1*/
          sub_957460((int)*v5, 0, v23 - 1, v27); /*0x957bcf*/
        a3 = v22; /*0x957be6*/
        sub_957040((_DWORD *)this, v8, (int)v22, v5, (float *)&v28, a5); /*0x957bea*/
        v24 = ++a4 < *(_DWORD *)(this + 0x30); /*0x957bfe*/
        i += 0x20; /*0x957c04*/
      }
      while ( v24 ); /*0x957c08*/
    }
    sub_956DD0((_DWORD **)this, v5, (_DWORD *)v8); /*0x957c12*/
    v25 = *(unsigned int ***)(v8 + 0xB8); /*0x957c17*/
    if ( a3 != v25 ) /*0x957c21*/
      (*(void (__thiscall **)(_DWORD, unsigned int **, unsigned int *, unsigned int *, unsigned int ***, int *))(**(_DWORD **)(this + 0x28) + 0x10))( /*0x957c3a*/
        *(_DWORD *)(this + 0x28),
        v25,
        *v5,
        v5[1],
        &a3,
        &i);
    v26 = a5; /*0x957c3d*/
    sub_9577F0((int **)this, (int **)v5, (int *)v8, a5, (int *)v32, v31); /*0x957c50*/
    *(_DWORD *)(v8 + 0xF0) = sub_957980(this, v8, (unsigned int **)v31, 1, v26 + 1); /*0x957c69*/
    *(_DWORD *)(v8 + 0xEC) = sub_957980(this, v8, v32, 0, v26 + 1); /*0x957c7e*/
    return v8; /*0x957c84*/
  }
}
