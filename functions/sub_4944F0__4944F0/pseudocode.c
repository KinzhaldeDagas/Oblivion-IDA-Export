char *sub_4944F0()
{
  int v0; // eax
  char v1; // cl
  char *v2; // eax
  int v3; // edx
  int v4; // ecx
  void *v5; // edx

  v0 = 0; /*0x4944f0*/
  do /*0x494511*/
  {
    v1 = unk_B3F280[v0]; /*0x494500*/
    MEMORY[0xB33E90][v0++ + 0xDF0] = v1; /*0x494506*/
  }
  while ( v1 ); /*0x494511*/
  v2 = &MEMORY[0xB33E90][strlen(&MEMORY[0xB33E90][0xDF0]) + 0xDF0]; /*0x494518*/
  v3 = dword_A3D9D0; /*0x494530*/
  *(_DWORD *)v2 = dword_A3D9CC; /*0x494536*/
  v4 = dword_A3D9D4; /*0x494538*/
  *((_DWORD *)v2 + 1) = v3; /*0x49453e*/
  v5 = off_A3D9D8; /*0x494541*/
  *((_DWORD *)v2 + 2) = v4; /*0x494547*/
  *((_DWORD *)v2 + 3) = v5; /*0x49454a*/
  return &MEMORY[0xB33E90][0xDF0]; /*0x494552*/
}
