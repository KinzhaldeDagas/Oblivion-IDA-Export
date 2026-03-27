int __thiscall sub_917A10(__m128 *this, __m128 *a2, int a3, int a4)
{
  __m128 v6[4]; // [esp+10h] [ebp-40h] BYREF

  sub_8B1F70(v6, a2, this + 2);
  return (*(int (__thiscall **)(_DWORD, __m128 *, int, int))(**((_DWORD **)this + 4) + 0xC))(
           *((_DWORD *)this + 4),
           v6,
           a3,
           a4);
}
