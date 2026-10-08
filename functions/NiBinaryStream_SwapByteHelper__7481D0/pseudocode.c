void __cdecl NiBinaryStream_SwapByteHelper(char *a1, int a2)
{
  int i; // esi
  char v4; // cl
  char v5; // cl
  char v6; // cl
  char v7; // cl

  for ( i = a2; i; --i ) /*0x7481d7*/
  {
    v4 = *a1; /*0x7481e4*/
    *a1 = a1[7]; /*0x7481e6*/
    a1[7] = v4; /*0x7481e8*/
    v5 = a1[1]; /*0x7481ef*/
    a1[1] = a1[6]; /*0x7481f2*/
    a1[6] = v5; /*0x7481f5*/
    v6 = a1[2]; /*0x7481fc*/
    a1[2] = a1[5]; /*0x7481ff*/
    a1[5] = v6; /*0x748202*/
    v7 = a1[3]; /*0x748209*/
    a1[3] = a1[4]; /*0x74820c*/
    a1[4] = v7; /*0x74820f*/
    a1 += 8; /*0x748212*/
  }
}
