errno_t __cdecl memcpy_s(void *Dst, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  int v4; // ebx
  int v6; // esi

  if ( !Src ) /*0x983e82*/
    return 0; /*0x983e82*/
  if ( !Dst ) /*0x983e8b*/
    goto LABEL_4; /*0x983e8b*/
  if ( HIDWORD(DstSize) && (unsigned int)DstSize >= (unsigned int)Src ) /*0x983eb0*/
  {
    memcpy(Dst, (const void *)HIDWORD(DstSize), (unsigned int)Src); /*0x983eb9*/
    return 0; /*0x983e86*/
  }
  _memset((int)Dst, 0, DstSize); /*0x983eca*/
  if ( !HIDWORD(DstSize) ) /*0x983ed5*/
  {
LABEL_4:
    v6 = 0x16; /*0x983e94*/
    *_errno() = 0x16; /*0x983e95*/
LABEL_5:
    _invalid_parameter(v4, 0, v6); /*0x983e97*/
    return v6; /*0x983ea6*/
  }
  if ( (unsigned int)DstSize < (unsigned int)Src ) /*0x983eda*/
  {
    *_errno() = 0x22; /*0x983ee4*/
    v6 = 0x22; /*0x983ee6*/
    goto LABEL_5; /*0x983ee8*/
  }
  return 0x16; /*0x983eed*/
}
