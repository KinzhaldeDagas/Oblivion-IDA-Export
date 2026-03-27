void __cdecl NiBinaryStream_SwapByteHelper(char *a1, int a2)
{
  int i; // esi
  char v4; // cl
  char v5; // cl
  char v6; // cl
  char v7; // cl

  for ( i = a2; i; --i )
  {
    v4 = *a1;
    *a1 = a1[7];
    a1[7] = v4;
    v5 = a1[1];
    a1[1] = a1[6];
    a1[6] = v5;
    v6 = a1[2];
    a1[2] = a1[5];
    a1[5] = v6;
    v7 = a1[3];
    a1[3] = a1[4];
    a1[4] = v7;
    a1 += 8;
  }
}
