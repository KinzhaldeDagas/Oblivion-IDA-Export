int __thiscall sub_8F0630(void *this, __m128 *a2, __m128 *a3, unsigned int a4, int a5)
{
  __m128 v7[2]; // [esp+10h] [ebp-20h] BYREF

  sub_8CDF30(a2, a3, a4, v7);
  return (*(int (__thiscall **)(void *, __m128 *, int))(*(_DWORD *)this + 0x24))(this, v7, a5);
}
