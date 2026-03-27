errno_t __cdecl memcpy_s(void *Dst, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v5; // esi
  size_t v6; // [esp-4h] [ebp-Ch]

  if ( !Src )
    return 0;
  if ( !Dst )
    goto LABEL_4;
  if ( HIDWORD(DstSize) && (unsigned int)DstSize >= (unsigned int)Src )
  {
    LODWORD(v6) = Src;
    memcpy(Dst, (const void *)HIDWORD(DstSize), v6);
    return 0;
  }
  _memset((int)Dst, 0, DstSize);
  if ( !HIDWORD(DstSize) )
  {
LABEL_4:
    v5 = 0x16;
    *_errno() = 0x16;
LABEL_5:
    _invalid_parameter(0, 0, 0, 0, 0);
    return v5;
  }
  if ( (unsigned int)DstSize < (unsigned int)Src )
  {
    *_errno() = 0x22;
    v5 = 0x22;
    goto LABEL_5;
  }
  return 0x16;
}
