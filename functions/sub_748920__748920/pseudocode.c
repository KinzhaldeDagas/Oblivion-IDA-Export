int __userpurge sub_748920@<eax>(_DWORD *this@<ecx>, int a2@<edi>, void *Src, size_t Size)
{
  int result; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  void *v8; // ebp
  size_t v9; // [esp-14h] [ebp-18h]
  size_t v10; // [esp-8h] [ebp-Ch]

  result = *(this + 6);
  if ( result )
  {
    v6 = result - *(this + 5);
    HIDWORD(v10) = a2;
    if ( (unsigned int)Size > v6 )
    {
      if ( (unsigned int)Size > result + v6 )
        v7 = Size + result - v6;
      else
        v7 = 2 * result;
      v8 = (void *)FormHeapAlloc(v7);
      LODWORD(v9) = *(this + 5);
      memcpy(v8, (const void *)*(this + 3), v9);
      FormHeapFree(*(this + 3));
      *(this + 3) = v8;
      *(this + 6) = v7;
    }
    LODWORD(v10) = Size;
    memcpy((void *)(*(this + 5) + *(this + 3)), Src, v10);
    *(this + 5) += Size;
    return Size;
  }
  return result;
}
