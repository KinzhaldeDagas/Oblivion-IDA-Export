float *__thiscall sub_4D6900(void *this, float *a2)
{
  __m128 *v2; // eax
  _BYTE v4[28]; // [esp+10h] [ebp-20h] BYREF

  v2 = (__m128 *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)this + 0x8C))(v4);
  return sub_43F3E0(a2, v2);
}
