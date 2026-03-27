int __stdcall sub_8CF190(int a1)
{
  int v1; // eax
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __m128 *v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _DWORD *v7; // ecx
  hkVector4 *v8; // eax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  int result; // eax
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  float v14; // [esp+8h] [ebp-A4h]
  float v15; // [esp+8h] [ebp-A4h]
  __m128 v16; // [esp+Ch] [ebp-A0h]
  __m128 v17; // [esp+Ch] [ebp-A0h]
  __m128 v18; // [esp+1Ch] [ebp-90h] BYREF
  __int128 v19; // [esp+2Ch] [ebp-80h]
  __int128 v20; // [esp+3Ch] [ebp-70h]
  __int128 v21; // [esp+4Ch] [ebp-60h]
  __int128 v22; // [esp+5Ch] [ebp-50h]
  float v23; // [esp+6Ch] [ebp-40h]
  float v24; // [esp+70h] [ebp-3Ch]
  float v25; // [esp+74h] [ebp-38h]
  float v26; // [esp+78h] [ebp-34h]
  float v27; // [esp+7Ch] [ebp-30h]
  __int128 v28; // [esp+8Ch] [ebp-20h]

  v1 = *(_DWORD *)(a1 + 0x1F4);
  v2 = *(_OWORD *)(a1 + 0x2C0);
  v18.m128_f32[0] = *(float *)(a1 + 0x310);
  v3 = *(_OWORD *)(a1 + 0x2E0);
  v23 = *(float *)(a1 + 0x294);
  v4 = (__m128 *)(a1 + 0x2E0);
  v24 = *(float *)(a1 + 0x290);
  v25 = *(float *)(a1 + 0x298);
  v19 = v2;
  v5 = *(_OWORD *)(a1 + 0x2B0);
  v26 = 0.0;
  v22 = v3;
  v6 = *(_OWORD *)(a1 + 0x280);
  v27 = flt_A417B4;
  v20 = v5;
  v28 = v6;
  if ( (v1 & 0x100) != 0 )
    v5 = *(_OWORD *)(a1 + 0x230);
  v21 = v5;
  sub_91F430(&v18, (__m128 *)(a1 + 0x2E0));
  v7 = *(_DWORD **)(a1 + 8);
  v14 = *(float *)(a1 + 0x348) * dbl_A6E700;
  if ( v7 )
    v8 = (hkVector4 *)sub_8AC070(v7);
  else
    v8 = &stru_BA7A40;
  if ( *(float *)(a1 + 0x318) < v8->z + v14 )
  {
    if ( *(float *)(a1 + 0x2E8) > 0.0 )
      *(float *)(a1 + 0x2E8) = 0.0;
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
    v16 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0x20);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
    v9 = 0;
    v9.m128_f32[0] = *(float *)(a1 + 0x328);
    v10 = 0;
    v10.m128_f32[0] = *(float *)(a1 + 0x2D8);
    *v4 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v16), _mm_shuffle_ps(v10, v10, 0)), *v4);
  }
  result = *(_DWORD *)(a1 + 0x2A0);
  if ( !result )
  {
    sub_890720((_DWORD *)a1);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
    v17 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0x20);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1);
    v12 = 0;
    v12.m128_f32[0] = *(float *)(a1 + 0x328);
    v15 = -*(float *)(a1 + 0x2D8) * dbl_A30E48;
    v13 = 0;
    v13.m128_f32[0] = v15;
    *v4 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v17), _mm_shuffle_ps(v13, v13, 0)), *v4);
  }
  return result;
}
