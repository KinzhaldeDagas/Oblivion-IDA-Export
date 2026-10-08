_DWORD *__thiscall sub_6AE4B0(float *this, float a2, float a3, float a4, int a5, int a6, float a7, float *a8)
{
  int v10; // eax
  char v11; // cl
  int v12; // ebx
  int v13; // esi
  int v14; // ebx
  _DWORD *v15; // ecx
  char *v16; // eax
  float *v17; // esi
  double v18; // rt0
  double v19; // st7
  int v20; // eax
  double v21; // st7
  _DWORD *v22; // eax
  float v24; // [esp+4h] [ebp-34h]
  float v25; // [esp+8h] [ebp-30h]
  float v26; // [esp+8h] [ebp-30h]
  int v27; // [esp+48h] [ebp+10h]

  if ( !bSoundEnabled_Audio ) /*0x6ae4d9*/
    return 0; /*0x6ae4d9*/
  if ( !a5 ) /*0x6ae4ec*/
    return 0; /*0x6ae4ec*/
  v10 = *(_DWORD *)(a5 + 0x3C); /*0x6ae4fc*/
  v11 = LOBYTE(a7); /*0x6ae503*/
  v12 = v10 & 0x10; /*0x6ae509*/
  if ( LOBYTE(a7) ) /*0x6ae512*/
  {
    v13 = *((_DWORD *)this + 0x2D); /*0x6ae514*/
    *((_DWORD *)this + 0x2D) = v13 + 1; /*0x6ae51d*/
  }
  else
  {
    v13 = a6; /*0x6ae525*/
  }
  v27 = v10 & 0x40; /*0x6ae52c*/
  v14 = (v10 & 0x40) != 0 ? v12 | 1 : v12 | 2;
  if ( (_BYTE)a8 ) /*0x6ae53f*/
    v14 |= 0x2000u; /*0x6ae541*/
  a8 = 0; /*0x6ae54b*/
  if ( !v11 ) /*0x6ae54f*/
  {
    v15 = *((_DWORD **)this + 0xC0); /*0x6ae551*/
    a7 = 0.0; /*0x6ae557*/
    NiTMap_GetAt(v15, v13, &a7); /*0x6ae561*/
    if ( a7 != 0.0 ) /*0x6ae56b*/
      return 0; /*0x6ae56b*/
  }
  v16 = *(char **)(a5 + 0x28); /*0x6ae571*/
  if ( !v16 ) /*0x6ae576*/
    v16 = EmptyString; /*0x6ae578*/
  if ( sub_6AC610(this, (unsigned int **)&a8, v16, v14, v13) ) /*0x6ae587*/
    return 0; /*0x6ae587*/
  v17 = a8; /*0x6ae594*/
  sub_6ACCA0(this, a8, *((_DWORD *)a8 + 3)); /*0x6ae59f*/
  LODWORD(a7) = *(unsigned __int8 *)(a5 + 0x43); /*0x6ae5a8*/
  v18 = dbl_A771C8; /*0x6ae5bb*/
  a7 = (double)SLODWORD(a7) * v18; /*0x6ae5bd*/
  v17[0xB] = a7; /*0x6ae5c5*/
  LODWORD(a7) = *(unsigned __int8 *)(a5 + 0x42); /*0x6ae5cc*/
  a7 = v18 * (double)SLODWORD(a7); /*0x6ae5d6*/
  v17[0xC] = a7; /*0x6ae5de*/
  v19 = v17[0xF]; /*0x6ae5e5*/
  *((_WORD *)v17 + 0x22) = *(_WORD *)(a5 + 0x40); /*0x6ae5e8*/
  v25 = v19; /*0x6ae5ec*/
  sub_6B6F20(v17, v25); /*0x6ae5ef*/
  sub_6B6F20(v17, 1.0); /*0x6ae5fc*/
  if ( !v27 ) /*0x6ae606*/
  {
    v20 = *(unsigned __int8 *)(a5 + 0x38); /*0x6ae614*/
    LODWORD(a7) = 0x64 * *(unsigned __int8 *)(a5 + 0x39); /*0x6ae617*/
    v21 = (double)SLODWORD(a7); /*0x6ae61e*/
    LODWORD(a7) = 5 * v20; /*0x6ae625*/
    v26 = v21; /*0x6ae62b*/
    v24 = (float)(5 * v20); /*0x6ae633*/
    sub_6B6C60((int *)v17, v24, v26); /*0x6ae636*/
    sub_6B6BE0(v17, a2, a3, a4); /*0x6ae657*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0x1E) + 0x44))(*((_DWORD *)this + 0x1E)); /*0x6ae665*/
  }
  LODWORD(a7) = (char)BYTE2(*(_DWORD *)(a5 + 0x38)); /*0x6ae688*/
  a7 = (double)SLODWORD(a7) / fConst_200 + dbl_A2F928; /*0x6ae69c*/
  sub_6B6B20((int)v17, a7); /*0x6ae6c5*/
  sub_6AB540(this, *((_DWORD *)v17 + 3), (v14 & 0x10) != 0); /*0x6ae6da*/
  v22 = (_DWORD *)FormHeapAlloc(4u); /*0x6ae6e1*/
  a7 = *(float *)&v22; /*0x6ae6e9*/
  if ( v22 ) /*0x6ae6f7*/
    return unknown_libname_1(v22, *((_DWORD *)v17 + 3)); /*0x6ae6ff*/
  else
    return 0; /*0x6ae706*/
}
