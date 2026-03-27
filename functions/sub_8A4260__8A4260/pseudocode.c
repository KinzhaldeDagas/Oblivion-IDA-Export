void __fastcall sub_8A4260(int *a1, int a2, int a3)
{
  int v3; // ebx
  char v4; // al
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int (__stdcall ***v8)(signed int); // edi
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

  v15 = a1;
  if ( a3 )
  {
    v3 = 8;
    if ( flt_A97404 >= (double)*(float *)(a3 + 0xCC) || *(float *)(a3 + 0xCC) > dbl_A38538 )
      *(float *)(a3 + 0xCC) = flt_A57F50;
    if ( *(float *)(a3 + 0xC4) < dbl_A529C0 )
      *(float *)(a3 + 0xC4) = flt_A2FE78;
    if ( *(float *)(a3 + 0xC0) >= dbl_A464C8 )
      *(float *)(a3 + 0xC0) = flt_A97454;
    if ( 0.0 == *(float *)(a3 + 0xB0) )
    {
      if ( *(_BYTE *)(a3 + 0xD0) == 7 )
        *(_BYTE *)(a3 + 0xD3) = 1;
    }
    else
    {
      v4 = *(_BYTE *)(a3 + 0xD0);
      if ( v4 < 6 )
      {
        if ( !*(_BYTE *)(a3 + 0xD3) )
          *(_BYTE *)(a3 + 0xD3) = 4;
      }
      else
      {
        v3 = v4;
        *(_BYTE *)(a3 + 0xD0) = 1;
        *(_BYTE *)(a3 + 0xD3) = 4;
      }
    }
    v5 = *(_DWORD *)(a3 + 4);
    *(_DWORD *)(a3 + 0x20) = *(_DWORD *)a3;
    *(_DWORD *)(a3 + 0x24) = v5;
    v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC4, 0x2A);
    *(_WORD *)(v6 + 4) = 0xC4;
    v7 = sub_8A9F50((char *)v6, a3 + 0x20);
    v8 = (int (__stdcall ***)(signed int))v7;
    v18 = 0xFFFFFFFF;
    if ( v3 != 8 )
    {
      *(_BYTE *)(a3 + 0xD0) = v3;
      sub_8A9AB0(v7, (int)&savedregs, a3, v3, 1, 0);
    }
    (*(void (__thiscall **)(int *, int (__stdcall ***)(signed int)))(*v15 + 0x4C))(v15, v8);
    sub_8BC730(v8);
    v9 = *(_BYTE *)(a3 + 0xD0);
    if ( v9 < 6 && v9 > 0 )
    {
      v10 = v15[2];
      if ( v10 )
      {
        v11 = v10 + 0x14;
        if ( v10 != 0xFFFFFFEC )
        {
          sub_8A3E00(v15, v17);
          v12 = _mm_sub_ps(v17[1], v17[0]);
          v16 = v12;
          if ( v12.m128_f32[1] >= (double)v12.m128_f32[0] )
          {
            if ( v16.m128_f32[2] >= (double)v12.m128_f32[0] )
              v13 = 0;
            else
              v13 = 2;
          }
          else if ( v16.m128_f32[2] >= (double)v12.m128_f32[1] )
          {
            v13 = 1;
          }
          else
          {
            v13 = 2;
          }
          if ( flt_BA791C < (double)v16.m128_f32[v13] || (v14 = flt_BA7920, v14 > sub_8A31B0((_DWORD ***)v15)) )
          {
            *(_WORD *)(v11 + 0x1A) = 3;
            *(_BYTE *)(a3 + 0xD3) = 3;
          }
          else if ( *(_BYTE *)(a3 + 0xD3) == 3 )
          {
            *(_WORD *)(v11 + 0x1A) = 4;
            *(_BYTE *)(a3 + 0xD3) = 4;
          }
        }
      }
    }
    (*(void (__thiscall **)(int *, int))(*v15 + 0x7C))(v15, a3);
  }
}
