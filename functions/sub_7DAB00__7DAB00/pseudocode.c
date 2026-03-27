char *__userpurge sub_7DAB00@<eax>(char *this@<ecx>, char *a2, void *Src, size_t Size)
{
  void *v5; // eax
  char *v6; // eax
  char v7; // cl
  size_t v9; // [esp-8h] [ebp-10h]

  *((_DWORD *)this + 0x40) = Size;
  if ( (_DWORD)Size && Src )
  {
    v5 = (void *)FormHeapAlloc(Size);
    LODWORD(v9) = *((_DWORD *)this + 0x40);
    *((_DWORD *)this + 0x41) = v5;
    memcpy(v5, Src, v9);
  }
  else
  {
    *((_DWORD *)this + 0x41) = 0;
  }
  _memset(this, 0, 0x100);
  v6 = a2;
  if ( a2 )
  {
    do
    {
      v7 = *v6;
      v6[this - a2] = *v6;
      ++v6;
    }
    while ( v7 );
  }
  return this;
}
