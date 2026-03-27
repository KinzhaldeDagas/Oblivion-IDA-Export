__m128 *__thiscall sub_92A8C0(__m128 *this, int a2, int a3, __m128 *a4)
{
  int v4; // edi
  __m128 *result; // eax

  v4 = a3;
  result = (__m128 *)(*(int (__thiscall **)(_DWORD, int, int, __m128 *))(**((_DWORD **)this + 4) + 0x28))(
                       *((_DWORD *)this + 4),
                       a2,
                       a3,
                       a4);
  if ( a3 > 0 )
  {
    result = a4;
    do
    {
      *result = _mm_add_ps(*result, *(this + 2));
      ++result;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
