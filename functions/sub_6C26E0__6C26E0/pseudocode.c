int __cdecl sub_6C26E0(float *a1, int a2)
{
  int result; // eax

  *a1 = *(float *)a2;
  a1[1] = *(float *)(a2 + 4);
  a1[2] = *(float *)(a2 + 8);
  result = *(_DWORD *)(a2 + 0xC);
  *((_DWORD *)a1 + 3) = result;
  return result;
}
