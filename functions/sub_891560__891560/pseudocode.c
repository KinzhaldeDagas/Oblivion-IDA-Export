bhkCharacterProxy *__thiscall sub_891560(bhkCharacterProxy *this, float *a2)
{
  float *v3; // edi
  __m128 v5; // [esp+10h] [ebp-70h] BYREF
  __m128 v6; // [esp+20h] [ebp-60h] BYREF
  __m128 v7[4]; // [esp+30h] [ebp-50h] BYREF

  sub_6848D0(*((_DWORD **)this + 0xD9), v7);
  sub_88FE00(&v6, v7, (__m128 *)this + 0x34);
  v3 = *((float **)this + 2);
  v5 = _mm_add_ps(*(__m128 *)a2, v6);
  if ( v3 )
    sub_89F570(this);
  sub_8AC080(v3, (int)&v5);
  return (bhkCharacterProxy *)sub_89F570(this);
}
