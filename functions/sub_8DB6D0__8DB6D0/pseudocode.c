unsigned __int16 __thiscall sub_8DB6D0(int this, int a2, int a3, int a4, __m128 *a5)
{
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int i; // ecx
  int v10; // edi
  int v11; // eax
  int j; // ecx
  int v13; // ebx
  int v14; // eax
  _RTL_CRITICAL_SECTION_0 *v15; // ecx
  int v16; // eax
  __m128 v17; // xmm0
  __m128 *v18; // eax
  long double v19; // st7
  __m128 v20; // xmm0
  _WORD *v21; // esi
  int v22; // eax
  unsigned __int16 result; // ax
  int v24; // [esp+18h] [ebp-68h] BYREF
  int v25; // [esp+1Ch] [ebp-64h]
  float v26; // [esp+20h] [ebp-60h] BYREF
  float v27; // [esp+24h] [ebp-5Ch]
  float v28; // [esp+28h] [ebp-58h]
  int v29; // [esp+2Ch] [ebp-54h]
  __m128 v30; // [esp+30h] [ebp-50h] BYREF
  __m128 v31; // [esp+40h] [ebp-40h] BYREF
  _DWORD v32[7]; // [esp+58h] [ebp-28h] BYREF
  int v33; // [esp+74h] [ebp-Ch]
  int v34; // [esp+78h] [ebp-8h]
  __int16 v35; // [esp+7Ch] [ebp-4h]
  __int16 v36; // [esp+7Eh] [ebp-2h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  v6 = *(_DWORD *)(this + 0x4C);
  v7 = v6 + *(unsigned __int16 *)(this + 0xC);
  v29 = this;
  if ( v7 > 0xFE )
    return 0xFFFF;
  v8 = a2;
  for ( i = *(_DWORD *)(a2 + 0xC); i; i = *(_DWORD *)(i + 0xC) )
    v8 = i;
  v10 = v8 + *(_DWORD *)(v8 + 0x10);
  v11 = a3;
  for ( j = *(_DWORD *)(a3 + 0xC); j; j = *(_DWORD *)(j + 0xC) )
    v11 = j;
  v13 = v11 + *(_DWORD *)(v11 + 0x10);
  if ( !v6 )
  {
    v14 = *(_DWORD *)(this + 8);
    v15 = *(_RTL_CRITICAL_SECTION_0 **)(v14 + 0xA0);
    if ( v15 )
    {
      sub_8A7720(v15);
      sub_8CB450((int)&savedregs, *(_DWORD *)(this + 8), (_DWORD *)(this + 0x74), 1);
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)(*(_DWORD *)(this + 8) + 0xA0));
    }
    else
    {
      sub_8CB450((int)&savedregs, v14, (_DWORD *)(this + 0x74), 1);
    }
  }
  v16 = sub_925AE0((_DWORD *)(this + 0x10), (int *)&v26, &v24);
  v17 = *a5;
  v25 = v16;
  v18 = (__m128 *)LODWORD(v26);
  *(_OWORD *)LODWORD(v26) = v17;
  v18[1] = a5[1];
  sub_8ABCE0((_DWORD *)v10, a5, &v31);
  sub_8ABCE0((_DWORD *)v13, a5, &v30);
  v19 = sqrt(*(float *)(v13 + 0x5C) * *(float *)(v10 + 0x5C));
  v20 = _mm_mul_ps(_mm_sub_ps(v31, v30), a5[1]);
  v28 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  v26 = v19 * flt_A3F458;
  LODWORD(v27) = (int)v26;
  *(_WORD *)(v24 + 0xC) = LOWORD(v27);
  v27 = sqrt(*(float *)(v13 + 0x60) * *(float *)(v10 + 0x60)) * flt_A2FFE8;
  LODWORD(v26) = (int)v27;
  *(_BYTE *)(v24 + 0xE) = LOBYTE(v26);
  *(_DWORD *)v24 = 0;
  v32[0] = a2;
  v32[1] = a3;
  v32[4] = a5;
  v21 = (_WORD *)v29;
  v32[5] = v24 + 8;
  v32[2] = 1;
  *(float *)&v32[6] = v28;
  v34 = v29;
  v33 = 0;
  v35 = v25;
  v36 = 0;
  sub_8DC800((int)v32, *(_DWORD *)(v29 + 8), (int)v32);
  v22 = *(_DWORD *)(v10 + 0x98);
  if ( v22 )
    sub_8DBF80(v22, v10, (int)v32);
  if ( *(_DWORD *)(v13 + 0x98) )
    sub_8DBF80((int)v32, v13, (int)v32);
  if ( v33 == 1 )
  {
    (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v21 + 0x10))(v21, v25);
    return 0xFFFF;
  }
  result = v25;
  v21[7] = v36;
  return result;
}
