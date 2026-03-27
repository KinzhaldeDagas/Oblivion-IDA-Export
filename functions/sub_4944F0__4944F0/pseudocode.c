char *sub_4944F0()
{
  int v0; // eax
  char v1; // cl
  char *v2; // eax
  int v3; // edx
  int v4; // ecx
  void *v5; // edx

  v0 = 0;
  do
  {
    v1 = word_B3F280[v0];
    byte_B34C80[v0++] = v1;
  }
  while ( v1 );
  v2 = &byte_B34C80[strlen(byte_B34C80)];
  v3 = dword_A3D9D0;
  *(_DWORD *)v2 = dword_A3D9CC;
  v4 = dword_A3D9D4;
  *((_DWORD *)v2 + 1) = v3;
  v5 = off_A3D9D8;
  *((_DWORD *)v2 + 2) = v4;
  *((_DWORD *)v2 + 3) = v5;
  return byte_B34C80;
}
