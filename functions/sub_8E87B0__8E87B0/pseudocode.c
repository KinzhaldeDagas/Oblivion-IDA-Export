signed int __thiscall sub_8E87B0(_DWORD ***this, int a2, int a3, __m128 *a4)
{
  signed int result; // eax
  signed int i; // ebx
  _DWORD *v7; // ecx
  __m128 v8; // xmm0
  char v9[24]; // [esp+10h] [ebp-28h] BYREF
  __m128 v10; // [esp+28h] [ebp-10h]

  (*(void (__thiscall **)(_DWORD, int, int, __m128 *))(***(this + 4) + 0xC))(**(this + 4), a2, a3, a4);
  result = (signed int)*(this + 5);
  for ( i = 1; i < result; ++i )
  {
    v7 = (*(this + 4))[2 * i];
    (*(void (__thiscall **)(_DWORD *, int, int, char *))(*v7 + 0xC))(v7, a2, a3, &v9[8]);
    v8 = v10;
    *a4 = _mm_min_ps(*a4, *(__m128 *)&v9[8]);
    a4[1] = _mm_max_ps(a4[1], v8);
    result = (signed int)*(this + 5);
  }
  return result;
}
