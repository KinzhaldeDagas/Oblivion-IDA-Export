void __thiscall sub_94CC50(int this, __m128 *a2, const void **a3)
{
  __m128 v3; // [esp+0h] [ebp-40h] BYREF
  __int128 v4; // [esp+10h] [ebp-30h]
  __int128 v5; // [esp+20h] [ebp-20h]
  __int128 v6; // [esp+30h] [ebp-10h]

  *(_DWORD *)(this + 0xC) = 0;
  a3[1] = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v3.m128_i32[0] = 0x3F800000;
  DWORD1(v4) = 0x3F800000;
  DWORD2(v5) = 0x3F800000;
  v6 = 0;
  sub_94BE00((float *)this, a2, &v3, a3);
}
