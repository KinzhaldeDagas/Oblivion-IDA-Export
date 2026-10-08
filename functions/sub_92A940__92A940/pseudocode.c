__m128 *__thiscall sub_92A940(__m128 *this, __m128 *a2)
{
  __m128 *v2; // ebx
  __m128 *v4; // edi
  int v5; // eax
  int v7; // [esp+18h] [ebp-8h] BYREF

  v2 = a2; /*0x92a94a*/
  v4 = (__m128 *)(*(int (__thiscall **)(_DWORD, __m128 *))(**((_DWORD **)this + 4) + 0x20))(*((_DWORD *)this + 4), a2); /*0x92a95f*/
  (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 4) + 0x1C))(*((_DWORD *)this + 4), &v7); /*0x92a966*/
  v5 = v7; /*0x92a969*/
  if ( v7 > 0 ) /*0x92a96f*/
  {
    do /*0x92a985*/
    {
      *v2++ = _mm_add_ps(*v4++, *(this + 2)); /*0x92a97b*/
      --v5; /*0x92a984*/
    }
    while ( v5 ); /*0x92a985*/
  }
  return a2; /*0x92a98a*/
}
