int __cdecl sub_6C26E0(float *a1, int a2)
{
  int result; // eax

  *a1 = *(float *)a2; /*0x6c26ea*/
  a1[1] = *(float *)(a2 + 4); /*0x6c26f5*/
  a1[2] = *(float *)(a2 + 8); /*0x6c26fa*/
  result = *(_DWORD *)(a2 + 0xC); /*0x6c26fd*/
  *((_DWORD *)a1 + 3) = result; /*0x6c2700*/
  return result; /*0x6c2703*/
}
