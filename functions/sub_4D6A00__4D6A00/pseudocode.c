int __thiscall sub_4D6A00(void *this, float *a2)
{
  __m128 v4; // [esp+10h] [ebp-20h] BYREF

  v4.m128_f32[0] = a2[1]; /*0x4d6a1b*/
  v4.m128_f32[1] = a2[2]; /*0x4d6a28*/
  v4.m128_f32[2] = a2[3]; /*0x4d6a2f*/
  v4.m128_f32[3] = *a2; /*0x4d6a35*/
  hkQuaternion_Normalize(&v4); /*0x4d6a39*/
  return (*(int (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x98))(this, &v4); /*0x4d6a4f*/
}
