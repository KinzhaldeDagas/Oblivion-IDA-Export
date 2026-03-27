char __thiscall InputGlobals::ResetControlMap(DIDEVCAPS *this, UInt16 scheme)
{
  unsigned int i; // eax
  char result; // al

  for ( i = 0; (int)i < 0x1D; ++i )
  {
    if ( (int)scheme >= 0 )
    {
      if ( (int)scheme <= 2 )
      {
        *((_BYTE *)this + 0x1D * scheme + i + 0x1B7E) = 0xFF;
      }
      else if ( scheme == 3 )
      {
        *((_BYTE *)this + i + 0x1B7E) = 0xFF;
        *((_BYTE *)this + i + 0x1B9B) = 0xFF;
        *((_BYTE *)this + i + 0x1BB8) = 0xFF;
      }
    }
  }
  result = 9;
  if ( !scheme || scheme == 3 )
  {
    *((_BYTE *)this + 7038) = 0x11;
    *((_BYTE *)this + 0x1B7F) = 0x1F;
    *((_BYTE *)this + 0x1B80) = 0x1E;
    *((_BYTE *)this + 0x1B81) = 0x20;
    *((_BYTE *)this + 0x1B83) = 0x39;
    *((_DWORD *)this + 0x6E1) = 0x1D212E38;
    *((_DWORD *)this + 0x6E2) = 0x12103A2A;
    *((_DWORD *)this + 0x6E3) = 0x3B140F13;
    *((_DWORD *)this + 0x6E4) = 0x5040302;
    *((_DWORD *)this + 0x6E5) = 0x9080706;
    *((_BYTE *)this + 0x1B98) = 0x3F;
    *((_BYTE *)this + 0x1B99) = 0x43;
    *((_BYTE *)this + 0x1B9A) = 0x2C;
  }
  if ( scheme == 1 || scheme == 3 )
  {
    *((_BYTE *)this + 0x1B9F) = 0;
    *((_BYTE *)this + 0x1BA1) = 1;
    *((_BYTE *)this + 0x1BA9) = 2;
  }
  if ( (scheme == 2 || scheme == 3) && (this->dwSize & 1) != 0 )
  {
    *((_BYTE *)this + 0x1BC1) = 0;
    *((_BYTE *)this + 0x1BC5) = 1;
    *((_BYTE *)this + 0x1BC0) = 2;
    *((_BYTE *)this + 0x1BBD) = 3;
    *((_BYTE *)this + 0x1BC7) = 4;
    *((_BYTE *)this + 0x1BC6) = 5;
    *((_BYTE *)this + 0x1BBF) = 6;
    *((_BYTE *)this + 0x1BD4) = 7;
    *((_BYTE *)this + 0x1BBE) = 8;
    *((_BYTE *)this + 0x1BBC) = 9;
    *((_BYTE *)this + 0x1BC8) = 0xA;
    *((_BYTE *)this + 0x1BD5) = 0xB;
    *((_BYTE *)this + 0x1BCA) = 0x20;
    *((_BYTE *)this + 0x1BCB) = 0x21;
    *((_DWORD *)this + 0x6F3) = 0x25242322;
    *((_BYTE *)this + 0x1BD0) = 0x26;
    *((_BYTE *)this + 0x1BD1) = 0x27;
  }
  return result;
}
