int __cdecl sub_4D89F0(float a1)
{
  float *v1; // ecx
  int (__cdecl *v2)(int); // edx

  v2 = *(int (__cdecl **)(int))(*(_DWORD *)v1 + 0x40);
  v1[9] = a1;
  return v2(4);
}
