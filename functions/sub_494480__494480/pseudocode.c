char *sub_494480()
{
  int v0; // eax
  char v1; // cl
  char *v2; // eax
  int v3; // edx
  int v4; // ecx

  v0 = 0; /*0x494480*/
  do /*0x4944a1*/
  {
    v1 = unk_B3F280[v0]; /*0x494490*/
    MEMORY[0xB33E90][v0++ + 0xDF0] = v1; /*0x494496*/
  }
  while ( v1 ); /*0x4944a1*/
  v2 = &MEMORY[0xB33E90][strlen(&MEMORY[0xB33E90][0xDF0]) + 0xDF0]; /*0x4944a8*/
  v3 = dword_A3D9C0; /*0x4944c0*/
  *(_DWORD *)v2 = dword_A3D9BC; /*0x4944c6*/
  v4 = dword_A3D9C4; /*0x4944c8*/
  *((_DWORD *)v2 + 1) = v3; /*0x4944ce*/
  LOBYTE(v3) = byte_A3D9C8; /*0x4944d1*/
  *((_DWORD *)v2 + 2) = v4; /*0x4944d7*/
  v2[0xC] = v3; /*0x4944da*/
  return &MEMORY[0xB33E90][0xDF0]; /*0x4944e2*/
}
