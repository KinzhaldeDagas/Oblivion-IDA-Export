_DWORD *__thiscall sub_8DF080(_DWORD *this, const void **a2, int a3)
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

  *((_WORD *)this + 3) = 1; /*0x8df093*/
  *(this + 2) = &off_A99B50; /*0x8df099*/
  *(this + 3) = &hkPhantomOverlapListener::`vftable'; /*0x8df09f*/
  v4 = *((_WORD *)this + 2) == 0; /*0x8df0a6*/
  *this = &off_A9A574; /*0x8df0b2*/
  *(this + 2) = &off_A9A56C; /*0x8df0b8*/
  *(this + 3) = off_A9A560; /*0x8df0be*/
  *(this + 4) = a2; /*0x8df0c4*/
  *(this + 0xB) = a3; /*0x8df0c7*/
  if ( !v4 ) /*0x8df0ca*/
    ++*((_WORD *)this + 3); /*0x8df0cc*/
  sub_899DA0(a2, (int)(this + 2)); /*0x8df0d3*/
  v5 = (unsigned int *)*(this + 4); /*0x8df0d8*/
  *(_DWORD *)v28 = v5[0xA0]; /*0x8df0e3*/
  *(_QWORD *)&v28[4] = *(_QWORD *)(v5 + 0xA1); /*0x8df0ea*/
  v5 += 0xA4; /*0x8df0f8*/
  v25 = *v5; /*0x8df106*/
  v26 = v5[1]; /*0x8df10d*/
  v27 = v5[2]; /*0x8df118*/
  *((_QWORD *)&v29 + 1) = *(unsigned int *)&v28[8]; /*0x8df130*/
  v31 = v26; /*0x8df138*/
  v6 = unk_BA7D98; /*0x8df13c*/
  *(_QWORD *)&v29 = __PAIR64__(*(unsigned int *)&v28[4], v25); /*0x8df144*/
  v30 = v25; /*0x8df150*/
  v32 = v27; /*0x8df154*/
  v33 = 0; /*0x8df158*/
  v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 0x10))(v6, 0xA0, 0x2E); /*0x8df167*/
  *(_WORD *)(v7 + 4) = 0xA0; /*0x8df173*/
  v19 = sub_8CDCB0((char *)v7, &v29, 0); /*0x8df181*/
  sub_8DE750((const void **)v19, (int)(this + 3)); /*0x8df185*/
  *(this + 5) = v19; /*0x8df191*/
  sub_899A50(a2, (int *)v19); /*0x8df194*/
  *(_QWORD *)((char *)&v29 + 4) = *(_QWORD *)&v28[4]; /*0x8df1ad*/
  v32 = v27; /*0x8df1b5*/
  v8 = unk_BA7D98; /*0x8df1b9*/
  LODWORD(v29) = *(_DWORD *)v28; /*0x8df1c1*/
  HIDWORD(v29) = 0; /*0x8df1c5*/
  v30 = *(_DWORD *)v28; /*0x8df1cd*/
  v31 = v26; /*0x8df1d1*/
  v33 = 0; /*0x8df1d5*/
  v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x10))(v8, 0xA0, 0x2E); /*0x8df1e4*/
  *(_WORD *)(v9 + 4) = 0xA0; /*0x8df1f0*/
  v20 = sub_8CDCB0((char *)v9, &v29, 0); /*0x8df1fb*/
  sub_8DE750((const void **)v20, (int)(this + 3)); /*0x8df202*/
  *(this + 6) = v20; /*0x8df20e*/
  sub_899A50(a2, (int *)v20); /*0x8df211*/
  LODWORD(v29) = *(_DWORD *)v28; /*0x8df22a*/
  v32 = v27; /*0x8df232*/
  v10 = unk_BA7D98; /*0x8df236*/
  *(_QWORD *)((char *)&v29 + 4) = __PAIR64__(*(unsigned int *)&v28[8], v26); /*0x8df23e*/
  HIDWORD(v29) = 0; /*0x8df242*/
  v30 = v25; /*0x8df24a*/
  v31 = v26; /*0x8df24e*/
  v33 = 0; /*0x8df252*/
  v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 0x10))(v10, 0xA0, 0x2E); /*0x8df261*/
  *(_WORD *)(v11 + 4) = 0xA0; /*0x8df26d*/
  v21 = sub_8CDCB0((char *)v11, &v29, 0); /*0x8df27b*/
  sub_8DE750((const void **)v21, (int)(this + 3)); /*0x8df27f*/
  *(this + 7) = v21; /*0x8df28b*/
  sub_899A50(a2, (int *)v21); /*0x8df28e*/
  LODWORD(v29) = *(_DWORD *)v28; /*0x8df2a7*/
  v32 = v27; /*0x8df2af*/
  v12 = unk_BA7D98; /*0x8df2b3*/
  *(_QWORD *)((char *)&v29 + 4) = *(_QWORD *)&v28[4]; /*0x8df2bb*/
  HIDWORD(v29) = 0; /*0x8df2bf*/
  v30 = v25; /*0x8df2c7*/
  v31 = *(_DWORD *)&v28[4]; /*0x8df2cb*/
  v33 = 0; /*0x8df2cf*/
  v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 0x10))(v12, 0xA0, 0x2E); /*0x8df2de*/
  *(_WORD *)(v13 + 4) = 0xA0; /*0x8df2ea*/
  v22 = sub_8CDCB0((char *)v13, &v29, 0); /*0x8df2f8*/
  sub_8DE750((const void **)v22, (int)(this + 3)); /*0x8df2fc*/
  *(this + 8) = v22; /*0x8df308*/
  sub_899A50(a2, (int *)v22); /*0x8df30b*/
  *(_QWORD *)&v29 = *(_QWORD *)v28; /*0x8df31c*/
  *((_QWORD *)&v29 + 1) = v27; /*0x8df328*/
  v32 = v27; /*0x8df338*/
  v14 = unk_BA7D98; /*0x8df33c*/
  v30 = v25; /*0x8df344*/
  v31 = v26; /*0x8df348*/
  v33 = 0; /*0x8df34c*/
  v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 0x10))(v14, 0xA0, 0x2E); /*0x8df35b*/
  *(_WORD *)(v15 + 4) = 0xA0; /*0x8df367*/
  v23 = sub_8CDCB0((char *)v15, &v29, 0); /*0x8df375*/
  sub_8DE750((const void **)v23, (int)(this + 3)); /*0x8df379*/
  *(this + 9) = v23; /*0x8df385*/
  sub_899A50(a2, (int *)v23); /*0x8df388*/
  *(_QWORD *)&v29 = *(_QWORD *)v28; /*0x8df399*/
  *((_QWORD *)&v29 + 1) = *(unsigned int *)&v28[8]; /*0x8df3a9*/
  v32 = *(_DWORD *)&v28[8]; /*0x8df3ad*/
  v16 = unk_BA7D98; /*0x8df3b1*/
  v30 = v25; /*0x8df3c1*/
  v31 = v26; /*0x8df3c5*/
  v33 = 0; /*0x8df3c9*/
  v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 0x10))(v16, 0xA0, 0x2E); /*0x8df3d8*/
  *(_WORD *)(v17 + 4) = 0xA0; /*0x8df3e4*/
  v24 = sub_8CDCB0((char *)v17, &v29, 0); /*0x8df3f2*/
  sub_8DE750((const void **)v24, (int)(this + 3)); /*0x8df3f6*/
  *(this + 0xA) = v24; /*0x8df402*/
  sub_899A50(a2, (int *)v24); /*0x8df405*/
  return this; /*0x8df40a*/
}
