signed int __thiscall sub_9523F0(int this, __m128 *a2)
{
  float v4; // [esp+Ch] [ebp-44h] BYREF
  __m128 v5[4]; // [esp+10h] [ebp-40h] BYREF

  sub_951DF0((__m128 *)this, a2, *(__m128 **)(this + 0x68), v5, &v4);
  if ( v4 < (double)*(float *)(this + 0x40) )
    return 1;
  *(__m128 *)(0x10 * **(_DWORD **)(this + 0x6C) + *(_DWORD *)(this + 0x68)) = v5[0];
  *(__m128 *)(*(_DWORD *)(this + 0x60) + 0x10 * **(_DWORD **)(this + 0x6C)) = v5[1];
  *(__m128 *)(*(_DWORD *)(this + 0x64) + 0x10 * (**(_DWORD **)(this + 0x6C))++) = v5[2];
  return 0;
}
