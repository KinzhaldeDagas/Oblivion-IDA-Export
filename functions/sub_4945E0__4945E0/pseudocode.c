char *sub_4945E0()
{
  int v0; // eax
  char v1; // cl
  char *v2; // eax
  int v3; // edx
  int v4; // ecx

  v0 = 0;
  do
  {
    v1 = word_B3F280[v0];
    byte_B34C80[v0++] = v1;
  }
  while ( v1 );
  v2 = &byte_B34C80[strlen(byte_B34C80)];
  v3 = dword_A3D9F8;
  *(_DWORD *)v2 = dword_A3D9F4;
  v4 = dword_A3D9FC;
  *((_DWORD *)v2 + 1) = v3;
  LOWORD(v3) = word_A3DA00;
  *((_DWORD *)v2 + 2) = v4;
  LOBYTE(v4) = byte_A3DA02;
  *((_WORD *)v2 + 6) = v3;
  v2[0xE] = v4;
  return byte_B34C80;
}
