signed int __thiscall sub_8DA280(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // edx
  int i; // eax
  int v5; // edi
  signed int result; // eax
  int v7; // ecx

  *(this + 0x63) = 1;
  *(this + 0x3A4) = 1;
  v2 = 0;
  v3 = this + 0x3A5;
  do
  {
    for ( i = 0; i < 0x20; ++i )
    {
      v5 = *(this + 0x704);
      if ( v5 )
      {
        *(_BYTE *)(v2 + v5 + 2) = 0x64;
        *(_BYTE *)(*(this + 0x705) + v2 + 2) = 0x64;
        *(_BYTE *)(*(this + 0x706) + v2 + 2) = 0x64;
        *(_BYTE *)(*(this + 0x707) + v2 + 2) = 0x64;
      }
      *((_BYTE *)v3 + i - 0xD04) = 0;
      *((_BYTE *)v3 + i) = 0;
      *((_BYTE *)v3 + i - 0x904) = 0;
      *((_BYTE *)v3 + i + 0x400) = 0;
      v2 += 3;
    }
    v3 += 8;
  }
  while ( v2 < 0xC00 );
  *(this + 0x264) = sub_8E0970;
  *(this + 0x265) = nullsub_5;
  *(this + 0x266) = nullsub_5;
  *(this + 0x267) = nullsub_5;
  *((_BYTE *)this + 0x9A0) = 0;
  *((_BYTE *)this + 0x9A1) = 1;
  *(this + 0x5A5) = sub_8DA260;
  *(this + 0x5A6) = nullsub_5;
  *(this + 0x5A7) = 0;
  *(this + 0x5A8) = 0;
  *(this + 0x5A9) = 0;
  *(this + 0x5AA) = 0;
  *(this + 0x5AB) = 0;
  *(this + 0x5AE) = 0;
  *(this + 0x5AC) = 0;
  *(this + 0x5AD) = 0;
  *(this + 0x5AF) = sub_8DA270;
  *(this + 0x5B1) = 0;
  sub_925690((int)this);
  *((_BYTE *)this + 0x1BF4) = 0;
  result = *(this + 0x706);
  if ( result )
  {
    result = 0;
    do
    {
      v7 = 0x20;
      do
      {
        *(_BYTE *)(result + *(this + 0x706) + 2) = 0x64;
        *(_BYTE *)(result + *(this + 0x707) + 2) = 0x64;
        result += 3;
        --v7;
      }
      while ( v7 );
    }
    while ( result < 0xC00 );
  }
  return result;
}
