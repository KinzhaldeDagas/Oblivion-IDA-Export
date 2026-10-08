signed int __thiscall sub_8E87B0(_DWORD ***this, int a2, int a3, __m128 *a4)
{
  signed int result; // eax
  signed int i; // ebx
  _DWORD *v7; // ecx
  __m128 v8; // xmm0
  char v9[24]; // [esp+10h] [ebp-28h] BYREF
  __m128 v10; // [esp+28h] [ebp-10h]

  (*(void (__thiscall **)(_DWORD, int, int, __m128 *))(***(this + 4) + 0xC))(**(this + 4), a2, a3, a4); /*0x8e87d1*/
  result = (signed int)*(this + 5); /*0x8e87d4*/
  for ( i = 1; i < result; ++i ) /*0x8e87de*/
  {
    v7 = (*(this + 4))[2 * i]; /*0x8e87e3*/
    (*(void (__thiscall **)(_DWORD *, int, int, char *))(*v7 + 0xC))(v7, a2, a3, &v9[8]); /*0x8e87f5*/
    v8 = v10; /*0x8e8803*/
    *a4 = _mm_min_ps(*a4, *(__m128 *)&v9[8]); /*0x8e8808*/
    a4[1] = _mm_max_ps(a4[1], v8); /*0x8e8812*/
    result = (signed int)*(this + 5); /*0x8e8816*/
  }
  return result; /*0x8e881e*/
}
