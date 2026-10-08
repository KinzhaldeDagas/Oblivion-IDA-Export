__m128 *__thiscall sub_92A8C0(__m128 *this, int a2, int a3, __m128 *a4)
{
  int v4; // edi
  __m128 *result; // eax

  v4 = a3; /*0x92a8d0*/
  result = (__m128 *)(*(int (__thiscall **)(_DWORD, int, int, __m128 *))(**((_DWORD **)this + 4) + 0x28))( /*0x92a8dd*/
                       *((_DWORD *)this + 4),
                       a2,
                       a3,
                       a4);
  if ( a3 > 0 ) /*0x92a8e2*/
  {
    result = a4; /*0x92a8e4*/
    do /*0x92a8f7*/
    {
      *result = _mm_add_ps(*result, *(this + 2)); /*0x92a8f0*/
      ++result; /*0x92a8f3*/
      --v4; /*0x92a8f6*/
    }
    while ( v4 ); /*0x92a8f7*/
  }
  return result; /*0x92a8f9*/
}
