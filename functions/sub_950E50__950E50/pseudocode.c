__m128 *__thiscall sub_950E50(_DWORD *this, __m128 *a2, __m128 *a3)
{
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  __m128 v7; // xmm0
  signed __int32 v8; // eax
  int v10; // [esp+14h] [ebp-22Ch]
  float v11; // [esp+18h] [ebp-228h]
  float v12; // [esp+1Ch] [ebp-224h]
  __m128 v13; // [esp+20h] [ebp-220h] BYREF
  _BYTE v14[524]; // [esp+30h] [ebp-210h] BYREF

  v4 = 0; /*0x950e70*/
  v5 = 0; /*0x950e72*/
  v11 = -3.4028235e38; /*0x950e76*/
  if ( (int)*(this + 8) > 0 ) /*0x950e7e*/
  {
    v10 = 0; /*0x950e84*/
    do /*0x950f2b*/
    {
      v6 = (*(int (__thiscall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)*(this + 6) + 0x28))( /*0x950ea1*/
             *(this + 6),
             *(_DWORD *)(*(this + 7) + 4 * v4),
             v14);
      (*(void (__thiscall **)(int, __m128 *, __m128 *))(*(_DWORD *)v6 + 0x24))(v6, a2, &v13); /*0x950eb1*/
      v7 = _mm_mul_ps(v13, *a2); /*0x950ec2*/
      v12 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] /*0x950edf*/
          + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
      if ( v12 > (double)v11 ) /*0x950ef0*/
      {
        v8 = v13.m128_i32[3] & 0xC0FFFFFF; /*0x950efd*/
        *a3 = v13; /*0x950f02*/
        v11 = v12; /*0x950f14*/
        v5 = v10 + v8 / 0x10; /*0x950f18*/
      }
      ++v4; /*0x950f21*/
      v10 += 3; /*0x950f27*/
    }
    while ( v4 < *(this + 8) ); /*0x950f2b*/
  }
  a3->m128_i32[3] = v5 | 0x3F000000; /*0x950f41*/
  return a3; /*0x950f34*/
}
