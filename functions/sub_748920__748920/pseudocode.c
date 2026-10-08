int __userpurge sub_748920@<eax>(_DWORD *this@<ecx>, void *Src, size_t Size)
{
  int result; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  void *v8; // ebp

  result = *(this + 6); /*0x748923*/
  if ( result ) /*0x748928*/
  {
    v6 = result - *(this + 5); /*0x748930*/
    if ( (unsigned int)Size > v6 ) /*0x74893a*/
    {
      if ( (unsigned int)Size > result + v6 ) /*0x748943*/
        v7 = Size + result - v6; /*0x74894e*/
      else
        v7 = 2 * result; /*0x748945*/
      v8 = (void *)FormHeapAlloc(v7); /*0x748959*/
      memcpy(v8, (const void *)*(this + 3), *(this + 5)); /*0x748961*/
      FormHeapFree(*(this + 3)); /*0x74896a*/
      *(this + 3) = v8; /*0x748972*/
      *(this + 6) = v7; /*0x748976*/
    }
    memcpy((void *)(*(this + 5) + *(this + 3)), Src, Size); /*0x748987*/
    *(this + 5) += Size; /*0x74898c*/
    return Size; /*0x748992*/
  }
  return result; /*0x74892a*/
}
