void *__userpurge sub_776D40@<eax>(int a1@<edi>, char *Dst, char *Src, int a4, size_t Size, int a6)
{
  void *result; // eax
  size_t v9; // [esp-14h] [ebp-14h]

  result = (void *)HIDWORD(Size);
  if ( HIDWORD(Size) )
  {
    HIDWORD(v9) = a1;
    do
    {
      LODWORD(v9) = Size;
      result = memcpy(Dst, Src, v9);
      Dst += a4;
      Src += Size;
      --HIDWORD(Size);
    }
    while ( HIDWORD(Size) );
  }
  return result;
}
