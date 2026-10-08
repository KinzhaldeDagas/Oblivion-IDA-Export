void __fastcall sub_8A4260(int *a1, int a2, int a3)
{
  int v3; // ebx
  char v4; // al
  int v5; // ecx
  int v6; // eax
  char *v7; // eax
  int (__thiscall ***v8)(int (__stdcall ***)(signed int), int); // edi
  char v9; // al
  int v10; // eax
  int v11; // edi
  __m128 v12; // xmm0
  int v13; // eax
  double v14; // st6
  int *v15; // [esp+1Ch] [ebp-58h]
  __m128 v16; // [esp+24h] [ebp-50h]
  __m128 v17[2]; // [esp+34h] [ebp-40h] BYREF
  unsigned int v18; // [esp+70h] [ebp-4h]
  int savedregs; // [esp+74h] [ebp+0h] BYREF

  v15 = a1; /*0x8a429c*/
  if ( a3 ) /*0x8a42a0*/
  {
    v3 = 8; /*0x8a42ac*/
    if ( flt_A97404 >= (double)*(float *)(a3 + 0xCC) || *(float *)(a3 + 0xCC) > dbl_A38538 ) /*0x8a42cf*/
      *(float *)(a3 + 0xCC) = flt_A57F50; /*0x8a42d7*/
    if ( *(float *)(a3 + 0xC4) < dbl_A529C0 ) /*0x8a42ee*/
      *(float *)(a3 + 0xC4) = flt_A2FE78; /*0x8a42f6*/
    if ( *(float *)(a3 + 0xC0) >= dbl_A464C8 ) /*0x8a430d*/
      *(float *)(a3 + 0xC0) = flt_A97454; /*0x8a4315*/
    if ( 0.0 == *(float *)(a3 + 0xB0) ) /*0x8a4328*/
    {
      if ( *(_BYTE *)(a3 + 0xD0) == 7 ) /*0x8a4360*/
        *(_BYTE *)(a3 + 0xD3) = 1; /*0x8a4362*/
    }
    else
    {
      v4 = *(_BYTE *)(a3 + 0xD0); /*0x8a432a*/
      if ( v4 < 6 ) /*0x8a4332*/
      {
        if ( !*(_BYTE *)(a3 + 0xD3) ) /*0x8a4347*/
          *(_BYTE *)(a3 + 0xD3) = 4; /*0x8a4350*/
      }
      else
      {
        v3 = v4; /*0x8a4334*/
        *(_BYTE *)(a3 + 0xD0) = 1; /*0x8a4337*/
        *(_BYTE *)(a3 + 0xD3) = 4; /*0x8a433e*/
      }
    }
    v5 = *(_DWORD *)(a3 + 4); /*0x8a436b*/
    *(_DWORD *)(a3 + 0x20) = *(_DWORD *)a3; /*0x8a436e*/
    *(_DWORD *)(a3 + 0x24) = v5; /*0x8a4374*/
    v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC4, 0x2A); /*0x8a4389*/
    *(_WORD *)(v6 + 4) = 0xC4; /*0x8a438b*/
    v7 = sub_8A9F50((char *)v6, a3 + 0x20); /*0x8a43a0*/
    v8 = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))v7; /*0x8a43a8*/
    v18 = 0xFFFFFFFF; /*0x8a43aa*/
    if ( v3 != 8 ) /*0x8a43b2*/
    {
      *(_BYTE *)(a3 + 0xD0) = v3; /*0x8a43bb*/
      sub_8A9AB0((int)v7, (int)&savedregs, a3, v3, 1, 0); /*0x8a43c1*/
    }
    (*(void (__thiscall **)(int *, int (__thiscall ***)(int (__stdcall ***)(signed int), int)))(*v15 + 0x4C))(v15, v8); /*0x8a43d2*/
    sub_8BC730(v8); /*0x8a43d6*/
    v9 = *(_BYTE *)(a3 + 0xD0); /*0x8a43db*/
    if ( v9 < 6 && v9 > 0 ) /*0x8a43eb*/
    {
      v10 = v15[2]; /*0x8a43f1*/
      if ( v10 ) /*0x8a43f6*/
      {
        v11 = v10 + 0x14; /*0x8a43fc*/
        if ( v10 != 0xFFFFFFEC ) /*0x8a4401*/
        {
          sub_8A3E00(v15, v17); /*0x8a440e*/
          v12 = _mm_sub_ps(v17[1], v17[0]); /*0x8a441d*/
          v16 = v12; /*0x8a4420*/
          if ( v12.m128_f32[1] >= (double)v12.m128_f32[0] ) /*0x8a4434*/
          {
            if ( v16.m128_f32[2] >= (double)v12.m128_f32[0] ) /*0x8a4460*/
              v13 = 0; /*0x8a4469*/
            else
              v13 = 2; /*0x8a4462*/
          }
          else if ( v16.m128_f32[2] >= (double)v12.m128_f32[1] ) /*0x8a4443*/
          {
            v13 = 1; /*0x8a444c*/
          }
          else
          {
            v13 = 2; /*0x8a4445*/
          }
          if ( unk_BA791C < (double)v16.m128_f32[v13] || (v14 = unk_BA7920, v14 > sub_8A31B0((_DWORD ***)v15)) ) /*0x8a449a*/
          {
            *(_WORD *)(v11 + 0x1A) = 3; /*0x8a44b9*/
            *(_BYTE *)(a3 + 0xD3) = 3; /*0x8a44bd*/
          }
          else if ( *(_BYTE *)(a3 + 0xD3) == 3 ) /*0x8a44a3*/
          {
            *(_WORD *)(v11 + 0x1A) = 4; /*0x8a44a5*/
            *(_BYTE *)(a3 + 0xD3) = 4; /*0x8a44ab*/
          }
        }
      }
    }
    (*(void (__thiscall **)(int *, int))(*v15 + 0x7C))(v15, a3); /*0x8a44cb*/
  }
}
