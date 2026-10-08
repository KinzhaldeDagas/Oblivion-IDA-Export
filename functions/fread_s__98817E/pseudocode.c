size_t __cdecl fread_s(void *DstBuf, size_t DstSize, size_t ElementSize, size_t Count, FILE *File)
{
  size_t result; // rax
  size_t v6; // [esp+0h] [ebp-2Ch]
  FILE *v7; // [esp+8h] [ebp-24h]

  if ( !HIDWORD(DstSize) || !(_DWORD)ElementSize ) /*0x98819b*/
    goto LABEL_5; /*0x98819b*/
  if ( !DstBuf ) /*0x9881a7*/
    goto LABEL_4; /*0x9881a7*/
  if ( !HIDWORD(ElementSize) || (unsigned int)ElementSize > 0xFFFFFFFF / HIDWORD(DstSize) ) /*0x9881d7*/
  {
    if ( (_DWORD)DstSize != 0xFFFFFFFF ) /*0x9881dd*/
      _memset((int)DstBuf, 0, DstSize); /*0x9881e6*/
    if ( !HIDWORD(ElementSize) || 0xFFFFFFFF / HIDWORD(DstSize) < (unsigned int)ElementSize ) /*0x988206*/
    {
LABEL_4:
      *_errno() = 0x16; /*0x9881ae*/
      _invalid_parameter(SHIDWORD(DstSize), ElementSize, 0); /*0x9881b9*/
LABEL_5:
      LODWORD(result) = 0; /*0x9881c1*/
      return result; /*0x9881c8*/
    }
  }
  _lock_file((_RTL_CRITICAL_SECTION_0 *)HIDWORD(ElementSize)); /*0x98820b*/
  _fread_nolock_s(DstBuf, DstSize, ElementSize, v6, v7); /*0x98821f*/
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)HIDWORD(ElementSize)); /*0x98823e*/
  fread_s_::_LN16_1(); /*0x988244*/
  return result; /*0x9881c3*/
}
