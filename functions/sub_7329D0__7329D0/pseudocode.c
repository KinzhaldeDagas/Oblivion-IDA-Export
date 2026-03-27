size_t *__userpurge sub_7329D0@<eax>(size_t *this@<ecx>, size_t Size)
{
  int v3; // eax

  *(_DWORD *)this = Size;
  if ( (_DWORD)Size )
  {
    v3 = FormHeapAlloc(Size);
    *((_DWORD *)this + 1) = v3;
    *((_DWORD *)this + 2) = v3;
    *((_DWORD *)this + 3) = 0;
    return this;
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
    *(this + 1) = *((unsigned int *)this + 1);
    return this;
  }
}
