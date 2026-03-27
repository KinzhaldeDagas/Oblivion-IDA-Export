int __thiscall sub_92A910(__m128 *this, __m128 *a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, __m128 *))(**((_DWORD **)this + 4) + 0x2C))(*((_DWORD *)this + 4), a2);
  *a2 = _mm_add_ps(*a2, *(this + 2));
  return result;
}
