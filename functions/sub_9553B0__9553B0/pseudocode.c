signed int __stdcall sub_9553B0(float *a1)
{
  int v1; // edx
  char v3; // fps^1
  double v4; // st7
  char v5; // ah
  bool v6; // c0
  bool v7; // c3

  if ( *a1 <= (double)kFaceEarNormalMatchRadius ) /*0x9553c1*/
  {
    if ( a1[1] <= (double)kFaceEarNormalMatchRadius ) /*0x95549a*/
    {
      return 2; /*0x9554d5*/
    }
    else
    {
      v1 = 1; /*0x95549f*/
      if ( a1[2] > (double)kFaceEarNormalMatchRadius ) /*0x9554af*/
        return 3; /*0x9554b8*/
      if ( a1[2] < (double)flt_A641B8 ) /*0x9554c9*/
        return 4; /*0x9554d2*/
    }
  }
  else
  {
    v1 = 0; /*0x9553ca*/
    if ( a1[2] <= (double)kFaceEarNormalMatchRadius ) /*0x9553d7*/
    {
      v4 = a1[1]; /*0x95541f*/
      v5 = v3; /*0x955422*/
      v6 = v4 < kFaceEarNormalMatchRadius; /*0x955424*/
      v7 = v4 == kFaceEarNormalMatchRadius; /*0x955424*/
      if ( __SETP__(v5 & 5, 0) ) /*0x95542f*/
      {
        if ( !v6 && !v7 ) /*0x955463*/
          return 7; /*0x95546f*/
        if ( a1[1] < (double)flt_A641B8 ) /*0x955480*/
          return 8; /*0x955489*/
      }
      else
      {
        v1 = 6; /*0x955434*/
        if ( !v6 && !v7 ) /*0x955431*/
          return 0xA; /*0x955442*/
        if ( a1[1] < (double)flt_A641B8 ) /*0x955453*/
          return 0xC; /*0x955460*/
      }
    }
    else
    {
      v1 = 5; /*0x9553dc*/
      if ( a1[1] > (double)kFaceEarNormalMatchRadius ) /*0x9553ec*/
        return 9; /*0x9553f5*/
      if ( a1[1] < (double)flt_A641B8 ) /*0x955406*/
        return 0xB; /*0x955413*/
    }
  }
  return v1; /*0x9553f5*/
}
