int __thiscall sub_93EE40(_WORD *this, int *a2, int *a3, __m128 *a4)
{
  int v5; // eax
  __m128 v6; // xmm1
  int v7; // eax
  int result; // eax
  __m128 v9; // [esp+10h] [ebp-70h] BYREF
  __m128 v10; // [esp+20h] [ebp-60h] BYREF
  __m128 v11; // [esp+30h] [ebp-50h] BYREF
  __m128 v12; // [esp+40h] [ebp-40h] BYREF
  __m128 v13; // [esp+50h] [ebp-30h] BYREF
  __m128 v14; // [esp+60h] [ebp-20h] BYREF
  _BYTE v15[12]; // [esp+70h] [ebp-10h] BYREF
  __int16 v16; // [esp+7Ch] [ebp-4h]

  (*(void (__thiscall **)(int *, __m128 *))(*a2 + 0x2C))(a2, &v14); /*0x93ee5a*/
  (*(void (__thiscall **)(int *, __m128 *))(*a3 + 0x2C))(a3, &v13); /*0x93ee69*/
  hkTransform_TransformPosition(&v12, a4, &v13); /*0x93ee79*/
  v5 = *a2; /*0x93ee88*/
  v9 = _mm_sub_ps(v12, v14); /*0x93ee99*/
  (*(void (__thiscall **)(int *, __m128 *, __m128 *))(v5 + 0x24))(a2, &v9, &v11); /*0x93ee9e*/
  v6 = _mm_sub_ps(v12, v11); /*0x93eeb8*/
  *this = v11.m128_i16[6]; /*0x93eec0*/
  v9 = v6; /*0x93eec3*/
  hkBasis_ProjectVector(&v10, a4, &v9); /*0x93eec8*/
  v7 = *a3; /*0x93eed9*/
  v10 = _mm_xor_ps(v10, (__m128)xmmword_A965C0); /*0x93eeea*/
  (*(void (__thiscall **)(int *, __m128 *, _BYTE *))(v7 + 0x24))(a3, &v10, v15); /*0x93eeef*/
  *(this + 1) = v16; /*0x93eef7*/
  *(this + 2) = 0xFFFF; /*0x93ef00*/
  *(this + 3) = 0xFFFF; /*0x93ef04*/
  *((_BYTE *)this + 8) = 1; /*0x93ef0a*/
  *((_BYTE *)this + 9) = 1; /*0x93ef0d*/
  *((_BYTE *)this + 0xA) = (*(int (__thiscall **)(int *))(*a2 + 0x30))(a2); /*0x93ef17*/
  result = (*(int (__thiscall **)(int *))(*a3 + 0x30))(a3); /*0x93ef1e*/
  *((_BYTE *)this + 0xB) = result; /*0x93ef22*/
  return result; /*0x93ef21*/
}
