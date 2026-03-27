_DWORD *__thiscall sub_8DF080(_DWORD *this, _DWORD *a2, int a3)
{
  bool v4; // zf
  unsigned int *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  char *v19; // [esp+30h] [ebp-44h]
  char *v20; // [esp+30h] [ebp-44h]
  char *v21; // [esp+30h] [ebp-44h]
  char *v22; // [esp+30h] [ebp-44h]
  char *v23; // [esp+30h] [ebp-44h]
  char *v24; // [esp+30h] [ebp-44h]
  unsigned int v25; // [esp+34h] [ebp-40h]
  unsigned int v26; // [esp+38h] [ebp-3Ch]
  unsigned int v27; // [esp+3Ch] [ebp-38h]
  _BYTE v28[12]; // [esp+44h] [ebp-30h]
  __int128 v29; // [esp+54h] [ebp-20h] BYREF
  unsigned int v30; // [esp+64h] [ebp-10h]
  unsigned int v31; // [esp+68h] [ebp-Ch]
  unsigned int v32; // [esp+6Ch] [ebp-8h]
  int v33; // [esp+70h] [ebp-4h]

  *((_WORD *)this + 3) = 1;
  *(this + 2) = &off_A99B50;
  *(this + 3) = &hkPhantomOverlapListener::`vftable';
  v4 = *((_WORD *)this + 2) == 0;
  *this = &off_A9A574;
  *(this + 2) = &off_A9A56C;
  *(this + 3) = off_A9A560;
  *(this + 4) = a2;
  *(this + 0xB) = a3;
  if ( !v4 )
    ++*((_WORD *)this + 3);
  sub_899DA0(a2, (int)(this + 2));
  v5 = (unsigned int *)*(this + 4);
  *(_DWORD *)v28 = v5[0xA0];
  *(_QWORD *)&v28[4] = *(_QWORD *)(v5 + 0xA1);
  v5 += 0xA4;
  v25 = *v5;
  v26 = v5[1];
  v27 = v5[2];
  *((_QWORD *)&v29 + 1) = *(unsigned int *)&v28[8];
  v31 = v26;
  v6 = dword_BA7D98;
  *(_QWORD *)&v29 = __PAIR64__(*(unsigned int *)&v28[4], v25);
  v30 = v25;
  v32 = v27;
  v33 = 0;
  v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 0x10))(v6, 0xA0, 0x2E);
  *(_WORD *)(v7 + 4) = 0xA0;
  v19 = sub_8CDCB0((char *)v7, &v29, 0);
  sub_8DE750((const void **)v19, (int)(this + 3));
  *(this + 5) = v19;
  sub_899A50(a2, (int *)v19);
  *(_QWORD *)((char *)&v29 + 4) = *(_QWORD *)&v28[4];
  v32 = v27;
  v8 = dword_BA7D98;
  LODWORD(v29) = *(_DWORD *)v28;
  HIDWORD(v29) = 0;
  v30 = *(_DWORD *)v28;
  v31 = v26;
  v33 = 0;
  v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x10))(v8, 0xA0, 0x2E);
  *(_WORD *)(v9 + 4) = 0xA0;
  v20 = sub_8CDCB0((char *)v9, &v29, 0);
  sub_8DE750((const void **)v20, (int)(this + 3));
  *(this + 6) = v20;
  sub_899A50(a2, (int *)v20);
  LODWORD(v29) = *(_DWORD *)v28;
  v32 = v27;
  v10 = dword_BA7D98;
  *(_QWORD *)((char *)&v29 + 4) = __PAIR64__(*(unsigned int *)&v28[8], v26);
  HIDWORD(v29) = 0;
  v30 = v25;
  v31 = v26;
  v33 = 0;
  v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 0x10))(v10, 0xA0, 0x2E);
  *(_WORD *)(v11 + 4) = 0xA0;
  v21 = sub_8CDCB0((char *)v11, &v29, 0);
  sub_8DE750((const void **)v21, (int)(this + 3));
  *(this + 7) = v21;
  sub_899A50(a2, (int *)v21);
  LODWORD(v29) = *(_DWORD *)v28;
  v32 = v27;
  v12 = dword_BA7D98;
  *(_QWORD *)((char *)&v29 + 4) = *(_QWORD *)&v28[4];
  HIDWORD(v29) = 0;
  v30 = v25;
  v31 = *(_DWORD *)&v28[4];
  v33 = 0;
  v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 0x10))(v12, 0xA0, 0x2E);
  *(_WORD *)(v13 + 4) = 0xA0;
  v22 = sub_8CDCB0((char *)v13, &v29, 0);
  sub_8DE750((const void **)v22, (int)(this + 3));
  *(this + 8) = v22;
  sub_899A50(a2, (int *)v22);
  *(_QWORD *)&v29 = *(_QWORD *)v28;
  *((_QWORD *)&v29 + 1) = v27;
  v32 = v27;
  v14 = dword_BA7D98;
  v30 = v25;
  v31 = v26;
  v33 = 0;
  v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 0x10))(v14, 0xA0, 0x2E);
  *(_WORD *)(v15 + 4) = 0xA0;
  v23 = sub_8CDCB0((char *)v15, &v29, 0);
  sub_8DE750((const void **)v23, (int)(this + 3));
  *(this + 9) = v23;
  sub_899A50(a2, (int *)v23);
  *(_QWORD *)&v29 = *(_QWORD *)v28;
  *((_QWORD *)&v29 + 1) = *(unsigned int *)&v28[8];
  v32 = *(_DWORD *)&v28[8];
  v16 = dword_BA7D98;
  v30 = v25;
  v31 = v26;
  v33 = 0;
  v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 0x10))(v16, 0xA0, 0x2E);
  *(_WORD *)(v17 + 4) = 0xA0;
  v24 = sub_8CDCB0((char *)v17, &v29, 0);
  sub_8DE750((const void **)v24, (int)(this + 3));
  *(this + 0xA) = v24;
  sub_899A50(a2, (int *)v24);
  return this;
}
