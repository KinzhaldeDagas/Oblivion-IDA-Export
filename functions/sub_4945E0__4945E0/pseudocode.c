char *sub_4945E0()
{
  int v0; // eax
  char v1; // cl
  char *v2; // eax
  int v3; // edx
  int v4; // ecx

  v0 = 0; /*0x4945e0*/
  do /*0x494601*/
  {
    v1 = unk_B3F280[v0]; /*0x4945f0*/
    MEMORY[0xB33E90][v0++ + 0xDF0] = v1; /*0x4945f6*/
  }
  while ( v1 ); /*0x494601*/
  v2 = &MEMORY[0xB33E90][strlen(&MEMORY[0xB33E90][0xDF0]) + 0xDF0]; /*0x494608*/
  v3 = dword_A3D9F8; /*0x494620*/
  *(_DWORD *)v2 = dword_A3D9F4; /*0x494626*/
  v4 = dword_A3D9FC; /*0x494628*/
  *((_DWORD *)v2 + 1) = v3; /*0x49462e*/
  LOWORD(v3) = word_A3DA00; /*0x494631*/
  *((_DWORD *)v2 + 2) = v4; /*0x494638*/
  LOBYTE(v4) = byte_A3DA02; /*0x49463b*/
  *((_WORD *)v2 + 6) = v3; /*0x494641*/
  v2[0xE] = v4; /*0x494645*/
  return &MEMORY[0xB33E90][0xDF0]; /*0x49464d*/
}
