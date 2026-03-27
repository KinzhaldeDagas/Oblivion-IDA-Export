void *__userpurge sub_782680@<eax>(_DWORD *this@<ecx>, size_t Size, void *Src)
{
  void *result; // eax
  size_t v5; // [esp-4h] [ebp-Ch]

  if ( *(this + 5) < (unsigned int)Size )
  {
    FormHeapFree(*(this + 6));
    *(this + 6) = 0;
    *(this + 5) = Size;
  }
  if ( !*(this + 6) )
    *(this + 6) = FormHeapAlloc(*(this + 5));
  result = (void *)HIDWORD(Size);
  if ( HIDWORD(Size) )
  {
    LODWORD(v5) = Size;
    return memcpy((void *)*(this + 6), (const void *)HIDWORD(Size), v5);
  }
  return result;
}
