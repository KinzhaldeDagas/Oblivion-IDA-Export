int __cdecl sub_4D8A60(float a1)
{
  float *v1; // ecx
  int v2; // edx
  float v3; // edx

  v2 = *((_DWORD *)v1 + 0xC);
  v1[0xB] = v1[0xB];
  *((_DWORD *)v1 + 0xC) = v2;
  v3 = *v1;
  v1[0xD] = a1;
  return (*(int (__cdecl **)(int))(LODWORD(v3) + 0x40))(4);
}
