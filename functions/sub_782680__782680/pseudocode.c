void *__userpurge sub_782680@<eax>(_DWORD *this@<ecx>, size_t Size, void *Src)
{
  void *result; // eax

  if ( *(this + 5) < (unsigned int)Size ) /*0x78268b*/
  {
    FormHeapFree(*(this + 6)); /*0x782691*/
    *(this + 6) = 0; /*0x782699*/
    *(this + 5) = Size; /*0x7826a0*/
  }
  if ( !*(this + 6) ) /*0x7826a3*/
    *(this + 6) = FormHeapAlloc(*(this + 5)); /*0x7826b5*/
  result = (void *)HIDWORD(Size); /*0x7826b8*/
  if ( HIDWORD(Size) ) /*0x7826be*/
    return memcpy((void *)*(this + 6), (const void *)HIDWORD(Size), Size); /*0x7826c6*/
  return result; /*0x7826ce*/
}
