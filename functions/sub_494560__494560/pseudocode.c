char *sub_494560()
{
  int v0; // eax
  char v1; // cl
  char *v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx

  v0 = 0;
  do
  {
    v1 = word_B3F280[v0];
    byte_B34C80[v0++] = v1;
  }
  while ( v1 );
  v2 = &byte_B34C80[strlen(byte_B34C80)];
  v3 = dword_A3D9E0;
  *(_DWORD *)v2 = dword_A3D9DC;
  v4 = dword_A3D9E4;
  *((_DWORD *)v2 + 1) = v3;
  v5 = dword_A3D9E8;
  *((_DWORD *)v2 + 2) = v4;
  v6 = dword_A3D9EC;
  *((_DWORD *)v2 + 3) = v5;
  LOBYTE(v5) = byte_A3D9F0;
  *((_DWORD *)v2 + 4) = v6;
  v2[0x14] = v5;
  return byte_B34C80;
}
