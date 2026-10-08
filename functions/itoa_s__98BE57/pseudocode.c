errno_t __cdecl _itoa_s(int Value, char *DstBuf, size_t Size, int Radix)
{
  char *v4; // edi

  if ( HIDWORD(Size) == 0xA && Value < 0 ) /*0x98be65*/
    return xtoa_s(Value, DstBuf, v4, Size, 0xAu, 1); /*0x98be6b*/
  else
    return xtoa_s(Value, DstBuf, v4, Size, HIDWORD(Size), 0); /*0x98be78*/
}
