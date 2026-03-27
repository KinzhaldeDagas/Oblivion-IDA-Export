size_t __cdecl fread_s(void *DstBuf, size_t DstSize, size_t ElementSize, size_t Count, FILE *File)
{
  size_t result; // rax
  size_t v6; // [esp+0h] [ebp-2Ch]
  FILE *v7; // [esp+8h] [ebp-24h]

  if ( !HIDWORD(DstSize) || !(_DWORD)ElementSize )
    goto LABEL_5;
  if ( !DstBuf )
    goto LABEL_4;
  if ( !HIDWORD(ElementSize) || (unsigned int)ElementSize > 0xFFFFFFFF / HIDWORD(DstSize) )
  {
    if ( (_DWORD)DstSize != 0xFFFFFFFF )
      _memset((int)DstBuf, 0, DstSize);
    if ( !HIDWORD(ElementSize) || 0xFFFFFFFF / HIDWORD(DstSize) < (unsigned int)ElementSize )
    {
LABEL_4:
      *_errno() = 0x16;
      _invalid_parameter(SHIDWORD(DstSize), ElementSize, 0);
LABEL_5:
      LODWORD(result) = 0;
      return result;
    }
  }
  _lock_file(HIDWORD(ElementSize));
  _fread_nolock_s(DstBuf, DstSize, ElementSize, v6, v7);
  _unlock_file();
  return fread_s_::_LN16_1();
}
