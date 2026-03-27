int __thiscall sub_94F610(__m128 *this, int a2, int a3, int a4)
{
  __m128 *v4; // edi
  __m128 v7[4]; // [esp+20h] [ebp-80h] BYREF
  __m128 v8[4]; // [esp+60h] [ebp-40h] BYREF

  v4 = *(__m128 **)(a2 + 0xC);
  sub_958600((_DWORD *)this + 0x30, a3);
  sub_94D100(this, a2, v7, v8);
  sub_88FCC0(this + 5, v7, v4 + 2);
  sub_88FCC0(this + 4, v8, v4 + 1);
  sub_94CF30((int *)this, a4);
  sub_94CF80(this, a4);
  return (*(int (__thiscall **)(int, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)a3 + 0x1C))(
           a3,
           this + 4,
           this + 5,
           0xFFFF0000,
           a4);
}
