errno_t __cdecl memmove_s(void *Dst, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  int v4; // ebx
  int v5; // esi

  if ( Src ) /*0x983efd*/
  {
    if ( !Dst || !HIDWORD(DstSize) ) /*0x983f22*/
    {
      v5 = 0x16; /*0x983f0b*/
      *_errno() = 0x16; /*0x983f0c*/
LABEL_4:
      _invalid_parameter(v4, 0, v5); /*0x983f0e*/
      return v5; /*0x983f1d*/
    }
    if ( (unsigned int)DstSize < (unsigned int)Src ) /*0x983f27*/
    {
      *_errno() = 0x22; /*0x983f31*/
      v5 = 0x22; /*0x983f33*/
      goto LABEL_4; /*0x983f35*/
    }
    unknown_libname_16((unsigned int)Dst, HIDWORD(DstSize), (int)Src); /*0x983f3e*/
  }
  return 0; /*0x983f48*/
}
