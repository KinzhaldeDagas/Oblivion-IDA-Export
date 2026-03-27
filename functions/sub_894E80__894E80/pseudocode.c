void __thiscall sub_894E80(__m128 *this, float arg0)
{
  __m128 *v2; // edi
  _DWORD *v3; // esi
  __m128 v4; // xmm0
  int v5; // ebx
  int v6; // ebx
  __m128 *v7; // edi
  int v8; // esi
  __m128 v9; // xmm0
  __m128 v11; // [esp+18h] [ebp-1F0h] BYREF
  __m128 a2; // [esp+28h] [ebp-1E0h] BYREF
  float v13; // [esp+38h] [ebp-1D0h]
  float v14; // [esp+3Ch] [ebp-1CCh]
  int v15[4]; // [esp+48h] [ebp-1C0h] BYREF
  char *v16; // [esp+58h] [ebp-1B0h]
  int v17; // [esp+5Ch] [ebp-1ACh]
  unsigned int v18; // [esp+60h] [ebp-1A8h]
  char v19; // [esp+68h] [ebp-1A0h] BYREF
  unsigned int v20; // [esp+204h] [ebp-4h]

  v2 = this;
  if ( (*((_DWORD *)this + 0x7D) & 0x80000) != 0 && *((_DWORD *)this + 0xD9) )
  {
    *(float *)&v15[1] = flt_A965AC;
    v15[0] = (int)&hkAllCdPointCollector::`vftable';
    v16 = &v19;
    v18 = 0x80000008;
    v17 = 0;
    v13 = flt_A965A8;
    v14 = v13;
    v20 = 0;
    sub_891440(this, &v11);
    v3 = (_DWORD *)v2[0x36].m128_i32[1];
    v4 = 0;
    v4.m128_f32[0] = arg0;
    a2 = _mm_add_ps(v11, _mm_mul_ps(v2[0x2E], _mm_shuffle_ps(v4, v4, 0)));
    if ( v3 )
    {
      v5 = v3[2];
      if ( v5 )
      {
        sub_89F570(v3);
        (*(void (__thiscall **)(int, __m128 *, __m128 *, int *, _DWORD))(*(_DWORD *)v5 + 0x30))(v5, &v11, &a2, v15, 0);
        sub_89F570(v3);
      }
    }
    if ( v17 > 0 )
    {
      sub_8AF890(v15);
      v6 = 0;
      if ( v17 > 0 )
      {
        v7 = v2 + 0x1F;
        v8 = 0;
        do
        {
          (*(void (__thiscall **)(__m128 *, char *))(v7->m128_i32[0] + 8))(v7, &v16[v8]);
          ++v6;
          v8 += 0x30;
        }
        while ( v6 < v17 );
        v2 = this;
      }
    }
    sub_891560((bhkCharacterProxy *)v2, a2.m128_f32);
    v20 = 0xFFFFFFFF;
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v15);
  }
  else
  {
    sub_891440(this, &v11);
    v9 = 0;
    v9.m128_f32[0] = arg0;
    v11 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v2[0x2E]), v11);
    sub_891560((bhkCharacterProxy *)v2, v11.m128_f32);
  }
}
