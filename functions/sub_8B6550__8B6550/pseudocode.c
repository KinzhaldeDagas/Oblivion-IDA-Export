void __usercall sub_8B6550(int a1@<edi>, float *a2, float a3, int a4)
{
  double v4; // st7
  __int128 v5; // xmm0
  __int32 v6; // ecx
  __m128 v7; // xmm0
  unsigned int v8; // [esp+Ch] [ebp-A4h]
  __m128 v9; // [esp+10h] [ebp-A0h] BYREF
  __int128 v10; // [esp+20h] [ebp-90h]
  __m128 v11; // [esp+30h] [ebp-80h] BYREF
  __int128 v12; // [esp+40h] [ebp-70h]
  __int128 v13; // [esp+50h] [ebp-60h]
  __m128 v14; // [esp+60h] [ebp-50h] BYREF
  __int128 v15; // [esp+70h] [ebp-40h]
  __int128 v16; // [esp+80h] [ebp-30h]
  __int128 v17; // [esp+90h] [ebp-20h]
  __m128 v18; // [esp+A0h] [ebp-10h] BYREF

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v9.m128_u64[0] = 0;
  v14.m128_i32[0] = 0x3F800000;
  DWORD1(v15) = 0x3F800000;
  DWORD2(v16) = 0x3F800000;
  v17 = 0;
  sub_8B5E20(a1, a2, &v14, &v9);
  if ( v9.m128_f32[0] != *(float *)&SrcStr )
  {
    v4 = a3 / v9.m128_f32[0];
    v9.m128_f32[1] = v9.m128_f32[1] * v4;
    *(float *)&v8 = v4;
    v18 = (__m128)v8;
    sub_8D2A60(&v11, &v18);
    v5 = v10;
    *(float *)a4 = v9.m128_f32[0];
    v6 = v9.m128_i32[1];
    *(_OWORD *)(a4 + 0x10) = v5;
    v7 = v11;
    *(_DWORD *)(a4 + 4) = v6;
    *(__m128 *)(a4 + 0x20) = v7;
    *(__int128 *)(a4 + 0x30) = v12;
    *(__int128 *)(a4 + 0x40) = v13;
  }
}
