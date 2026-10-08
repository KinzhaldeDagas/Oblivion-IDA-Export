char *sub_494560()
{
  int v0; // eax
  char v1; // cl
  char *v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx

  v0 = 0; /*0x494560*/
  do /*0x494581*/
  {
    v1 = unk_B3F280[v0]; /*0x494570*/
    MEMORY[0xB33E90][v0++ + 0xDF0] = v1; /*0x494576*/
  }
  while ( v1 ); /*0x494581*/
  v2 = &MEMORY[0xB33E90][strlen(&MEMORY[0xB33E90][0xDF0]) + 0xDF0]; /*0x494588*/
  v3 = dword_A3D9E0; /*0x4945a0*/
  *(_DWORD *)v2 = dword_A3D9DC; /*0x4945a6*/
  v4 = dword_A3D9E4; /*0x4945a8*/
  *((_DWORD *)v2 + 1) = v3; /*0x4945ae*/
  v5 = dword_A3D9E8; /*0x4945b1*/
  *((_DWORD *)v2 + 2) = v4; /*0x4945b7*/
  v6 = dword_A3D9EC; /*0x4945ba*/
  *((_DWORD *)v2 + 3) = v5; /*0x4945c0*/
  LOBYTE(v5) = byte_A3D9F0; /*0x4945c3*/
  *((_DWORD *)v2 + 4) = v6; /*0x4945c9*/
  v2[0x14] = v5; /*0x4945cc*/
  return &MEMORY[0xB33E90][0xDF0]; /*0x4945d4*/
}
