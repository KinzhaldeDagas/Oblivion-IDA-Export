signed int __thiscall sub_8DA280(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // edx
  int i; // eax
  int v5; // edi
  signed int result; // eax
  int v7; // ecx

  *(this + 0x63) = 1; /*0x8da28b*/
  *(this + 0x3A4) = 1; /*0x8da291*/
  v2 = 0; /*0x8da297*/
  v3 = this + 0x3A5; /*0x8da299*/
  do /*0x8da2fc*/
  {
    for ( i = 0; i < 0x20; ++i ) /*0x8da2a0*/
    {
      v5 = *(this + 0x704); /*0x8da2a2*/
      if ( v5 ) /*0x8da2aa*/
      {
        *(_BYTE *)(v2 + v5 + 2) = 0x64; /*0x8da2ac*/
        *(_BYTE *)(*(this + 0x705) + v2 + 2) = 0x64; /*0x8da2b7*/
        *(_BYTE *)(*(this + 0x706) + v2 + 2) = 0x64; /*0x8da2c2*/
        *(_BYTE *)(*(this + 0x707) + v2 + 2) = 0x64; /*0x8da2cd*/
      }
      *((_BYTE *)v3 + i - 0xD04) = 0; /*0x8da2d2*/
      *((_BYTE *)v3 + i) = 0; /*0x8da2d9*/
      *((_BYTE *)v3 + i - 0x904) = 0; /*0x8da2dc*/
      *((_BYTE *)v3 + i + 0x400) = 0; /*0x8da2e3*/
      v2 += 3; /*0x8da2eb*/
    }
    v3 += 8; /*0x8da2f3*/
  }
  while ( v2 < 0xC00 ); /*0x8da2fc*/
  *(this + 0x264) = sub_8E0970; /*0x8da2fe*/
  *(this + 0x265) = nullsub_5; /*0x8da308*/
  *(this + 0x266) = nullsub_5; /*0x8da312*/
  *(this + 0x267) = nullsub_5; /*0x8da31c*/
  *((_BYTE *)this + 0x9A0) = 0; /*0x8da326*/
  *((_BYTE *)this + 0x9A1) = 1; /*0x8da32c*/
  *(this + 0x5A5) = sub_8DA260; /*0x8da334*/
  *(this + 0x5A6) = nullsub_5; /*0x8da33e*/
  *(this + 0x5A7) = 0; /*0x8da348*/
  *(this + 0x5A8) = 0; /*0x8da34e*/
  *(this + 0x5A9) = 0; /*0x8da354*/
  *(this + 0x5AA) = 0; /*0x8da35a*/
  *(this + 0x5AB) = 0; /*0x8da360*/
  *(this + 0x5AE) = 0; /*0x8da366*/
  *(this + 0x5AC) = 0; /*0x8da36c*/
  *(this + 0x5AD) = 0; /*0x8da372*/
  *(this + 0x5AF) = sub_8DA270; /*0x8da378*/
  *(this + 0x5B1) = 0; /*0x8da382*/
  sub_925690((int)this); /*0x8da388*/
  *((_BYTE *)this + 0x1BF4) = 0; /*0x8da38d*/
  result = *(this + 0x706); /*0x8da393*/
  if ( result ) /*0x8da39f*/
  {
    result = 0; /*0x8da3a1*/
    do /*0x8da3d6*/
    {
      v7 = 0x20; /*0x8da3b0*/
      do /*0x8da3cf*/
      {
        *(_BYTE *)(result + *(this + 0x706) + 2) = 0x64; /*0x8da3bb*/
        *(_BYTE *)(result + *(this + 0x707) + 2) = 0x64; /*0x8da3c6*/
        result += 3; /*0x8da3cb*/
        --v7; /*0x8da3ce*/
      }
      while ( v7 ); /*0x8da3cf*/
    }
    while ( result < 0xC00 ); /*0x8da3d6*/
  }
  return result; /*0x8da39e*/
}
