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

  v14 = 0; /*0x8b656c*/
  v15 = 0; /*0x8b6571*/
  v16 = 0; /*0x8b6576*/
  v10 = 0; /*0x8b657f*/
  v11 = 0; /*0x8b6584*/
  v12 = 0; /*0x8b6589*/
  v13 = 0; /*0x8b658e*/
  v9.m128_u64[0] = 0; /*0x8b659b*/
  v14.m128_i32[0] = 0x3F800000; /*0x8b65a3*/
  DWORD1(v15) = 0x3F800000; /*0x8b65ab*/
  DWORD2(v16) = 0x3F800000; /*0x8b65b6*/
  v17 = 0; /*0x8b65c1*/
  sub_8B5E20(a1, a2, &v14, &v9); /*0x8b65c9*/
  if ( v9.m128_f32[0] != *(float *)&SrcStr ) /*0x8b65e2*/
  {
    v4 = a3 / v9.m128_f32[0]; /*0x8b65ee*/
    v9.m128_f32[1] = v9.m128_f32[1] * v4; /*0x8b65fd*/
    *(float *)&v8 = v4; /*0x8b6601*/
    v18 = (__m128)v8; /*0x8b660b*/
    sub_8D2A60(&v11, &v18); /*0x8b6613*/
    v5 = v10; /*0x8b661f*/
    *(float *)a4 = v9.m128_f32[0]; /*0x8b6624*/
    v6 = v9.m128_i32[1]; /*0x8b6626*/
    *(_OWORD *)(a4 + 0x10) = v5; /*0x8b662a*/
    v7 = v11; /*0x8b662e*/
    *(_DWORD *)(a4 + 4) = v6; /*0x8b6633*/
    *(__m128 *)(a4 + 0x20) = v7; /*0x8b6636*/
    *(__int128 *)(a4 + 0x30) = v12; /*0x8b663f*/
    *(__int128 *)(a4 + 0x40) = v13; /*0x8b6648*/
  }
}
