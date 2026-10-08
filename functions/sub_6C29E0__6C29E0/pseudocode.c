int __cdecl sub_6C29E0(float *a1, int a2)
{
  int result; // eax

  *a1 = *(float *)a2; /*0x6c29ea*/
  a1[1] = *(float *)(a2 + 4); /*0x6c29f5*/
  a1[2] = *(float *)(a2 + 8); /*0x6c29fa*/
  a1[3] = *(float *)(a2 + 0xC); /*0x6c2a00*/
  result = *(_DWORD *)(a2 + 0x10); /*0x6c2a03*/
  *((_DWORD *)a1 + 4) = result; /*0x6c2a06*/
  return result; /*0x6c2a09*/
}
