size_t *__userpurge sub_7329D0@<eax>(size_t *this@<ecx>, size_t Size)
{
  int v3; // eax

  *(_DWORD *)this = Size; /*0x7329d9*/
  if ( (_DWORD)Size ) /*0x7329db*/
  {
    v3 = FormHeapAlloc(Size); /*0x7329de*/
    *((_DWORD *)this + 1) = v3; /*0x7329e3*/
    *((_DWORD *)this + 2) = v3; /*0x7329e6*/
    *((_DWORD *)this + 3) = 0; /*0x7329ec*/
    return this; /*0x7329f3*/
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x7329f9*/
    *(this + 1) = *((unsigned int *)this + 1); /*0x732a03*/
    return this; /*0x732a0d*/
  }
}
