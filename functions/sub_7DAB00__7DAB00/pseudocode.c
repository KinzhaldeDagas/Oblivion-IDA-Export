char *__userpurge sub_7DAB00@<eax>(char *this@<ecx>, char *a2, void *Src, size_t Size)
{
  void *v5; // eax
  char *v6; // eax
  char v7; // cl
  unsigned int v9; // [esp-8h] [ebp-10h]

  *((_DWORD *)this + 0x40) = Size; /*0x7dab0a*/
  if ( (_DWORD)Size && Src ) /*0x7dab18*/
  {
    v5 = (void *)FormHeapAlloc(Size); /*0x7dab1b*/
    v9 = *((_DWORD *)this + 0x40); /*0x7dab26*/
    *((_DWORD *)this + 0x41) = v5; /*0x7dab29*/
    memcpy(v5, Src, v9); /*0x7dab2f*/
  }
  else
  {
    *((_DWORD *)this + 0x41) = 0; /*0x7dab39*/
  }
  _memset((int)this, 0, 0x100u); /*0x7dab4b*/
  v6 = a2; /*0x7dab50*/
  if ( a2 ) /*0x7dab59*/
  {
    do /*0x7dab6a*/
    {
      v7 = *v6; /*0x7dab60*/
      v6[this - a2] = *v6; /*0x7dab62*/
      ++v6; /*0x7dab65*/
    }
    while ( v7 ); /*0x7dab6a*/
  }
  return this; /*0x7dab6c*/
}
