int __cdecl sub_8F0EF0(float a1, int a2, _DWORD *a3, int a4)
{
  int result; // eax

  result = *a3 - 0x30 * a4; /*0x8f0f0b*/
  *(float *)(result + 0xC) = a1 * *(float *)(a2 + 4); /*0x8f0f0d*/
  return result; /*0x8f0f10*/
}
