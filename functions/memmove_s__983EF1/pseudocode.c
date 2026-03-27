errno_t __cdecl memmove_s(void *Dst, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v4; // esi

  if ( Src )
  {
    if ( !Dst || !HIDWORD(DstSize) )
    {
      v4 = 0x16;
      *_errno() = 0x16;
LABEL_4:
      _invalid_parameter(0, 0, 0, 0, 0);
      return v4;
    }
    if ( (unsigned int)DstSize < (unsigned int)Src )
    {
      *_errno() = 0x22;
      v4 = 0x22;
      goto LABEL_4;
    }
    unknown_libname_16(Dst, HIDWORD(DstSize), Src);
  }
  return 0;
}
