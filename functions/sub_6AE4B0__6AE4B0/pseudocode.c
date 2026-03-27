_DWORD *__thiscall sub_6AE4B0(float *this, float a2, float a3, float a4, int a5, int a6, float a7, _DWORD *a8)
{
  int v10; // eax
  char v11; // cl
  int v12; // ebx
  int v13; // esi
  int v14; // ebx
  _DWORD *v15; // ecx
  char *v16; // eax
  int v17; // esi
  double v18; // rt0
  double v19; // st7
  int v20; // eax
  double v21; // st7
  _DWORD *v22; // eax
  float v24; // [esp+4h] [ebp-34h]
  float v25; // [esp+8h] [ebp-30h]
  float v26; // [esp+8h] [ebp-30h]
  int v27; // [esp+48h] [ebp+10h]

  if ( !bSoundEnabled_Audio )
    return 0;
  if ( !a5 )
    return 0;
  v10 = *(_DWORD *)(a5 + 0x3C);
  v11 = LOBYTE(a7);
  v12 = v10 & 0x10;
  if ( LOBYTE(a7) )
  {
    v13 = *((_DWORD *)this + 0x2D);
    *((_DWORD *)this + 0x2D) = v13 + 1;
  }
  else
  {
    v13 = a6;
  }
  v27 = v10 & 0x40;
  v14 = (v10 & 0x40) != 0 ? v12 | 1 : v12 | 2;
  if ( (_BYTE)a8 )
    v14 |= 0x2000u;
  a8 = 0;
  if ( !v11 )
  {
    v15 = *((_DWORD **)this + 0xC0);
    a7 = 0.0;
    NiTMap_GetAt(v15, v13, &a7);
    if ( a7 != 0.0 )
      return 0;
  }
  v16 = *(char **)(a5 + 0x28);
  if ( !v16 )
    v16 = EmptyString;
  if ( sub_6AC610(this, &a8, v16, v14, v13) )
    return 0;
  v17 = (int)a8;
  sub_6ACCA0(this, a8, a8[3]);
  LODWORD(a7) = *(unsigned __int8 *)(a5 + 0x43);
  v18 = dbl_A771C8;
  a7 = (double)SLODWORD(a7) * v18;
  *(float *)(v17 + 0x2C) = a7;
  LODWORD(a7) = *(unsigned __int8 *)(a5 + 0x42);
  a7 = v18 * (double)SLODWORD(a7);
  *(float *)(v17 + 0x30) = a7;
  v19 = *(float *)(v17 + 0x3C);
  *(_WORD *)(v17 + 0x44) = *(_WORD *)(a5 + 0x40);
  v25 = v19;
  sub_6B6F20((float *)v17, v25);
  sub_6B6F20((float *)v17, 1.0);
  if ( !v27 )
  {
    v20 = *(unsigned __int8 *)(a5 + 0x38);
    LODWORD(a7) = 0x64 * *(unsigned __int8 *)(a5 + 0x39);
    v21 = (double)SLODWORD(a7);
    LODWORD(a7) = 5 * v20;
    v26 = v21;
    v24 = (float)(5 * v20);
    sub_6B6C60((int *)v17, v24, v26);
    sub_6B6BE0((float *)v17, a2, a3, a4);
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0x1E) + 0x44))(*((_DWORD *)this + 0x1E));
  }
  LODWORD(a7) = (char)BYTE2(*(_DWORD *)(a5 + 0x38));
  a7 = (double)SLODWORD(a7) / fConst_200 + dbl_A2F928;
  sub_6B6B20(v17, a7);
  sub_6AB540(this, *(_DWORD *)(v17 + 0xC), (v14 & 0x10) != 0);
  v22 = (_DWORD *)FormHeapAlloc(4u);
  a7 = *(float *)&v22;
  if ( v22 )
    return unknown_libname_1(v22, *(_DWORD *)(v17 + 0xC));
  else
    return 0;
}
