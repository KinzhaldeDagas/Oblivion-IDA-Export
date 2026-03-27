int __thiscall sub_4D6A00(void *this, float *a2)
{
  __m128 v4; // [esp+10h] [ebp-20h] BYREF

  v4.m128_f32[0] = a2[1];
  v4.m128_f32[1] = a2[2];
  v4.m128_f32[2] = a2[3];
  v4.m128_f32[3] = *a2;
  sub_4D6830(&v4);
  return (*(int (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x98))(this, &v4);
}
