char *sub_494480()
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
  v3 = dword_A3D9C0;
  *(_DWORD *)v2 = dword_A3D9BC;
  v4 = dword_A3D9C4;
  *((_DWORD *)v2 + 1) = v3;
  LOBYTE(v3) = byte_A3D9C8;
  *((_DWORD *)v2 + 2) = v4;
  v2[0xC] = v3;
  return byte_B34C80;
}
