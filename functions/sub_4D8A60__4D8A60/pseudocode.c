int __cdecl sub_4D8A60(float a1)
{
  float *v1; // ecx
  int v2; // edx
  float v3; // edx

  v2 = *((_DWORD *)v1 + 0xC); /*0x4d8a6a*/
  v1[0xB] = v1[0xB]; /*0x4d8a79*/
  *((_DWORD *)v1 + 0xC) = v2; /*0x4d8a80*/
  v3 = *v1; /*0x4d8a83*/
  v1[0xD] = a1; /*0x4d8a85*/
  return (*(int (__cdecl **)(int))(LODWORD(v3) + 0x40))(4); /*0x4d8a89*/
}
