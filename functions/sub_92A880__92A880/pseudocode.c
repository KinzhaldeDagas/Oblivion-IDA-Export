int __thiscall sub_92A880(__m128 *this, int a2, __m128 *a3)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, int, __m128 *))(**((_DWORD **)this + 4) + 0x24))(
             *((_DWORD *)this + 4),
             a2,
             a3);
  *a3 = _mm_add_ps(*a3, *(this + 2));
  return result;
}
