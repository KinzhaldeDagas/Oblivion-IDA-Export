int __cdecl sub_6C29E0(float *a1, int a2)
{
  int result; // eax

  *a1 = *(float *)a2;
  a1[1] = *(float *)(a2 + 4);
  a1[2] = *(float *)(a2 + 8);
  a1[3] = *(float *)(a2 + 0xC);
  result = *(_DWORD *)(a2 + 0x10);
  *((_DWORD *)a1 + 4) = result;
  return result;
}
