_DWORD *__userpurge sub_788B10@<eax>(
        _DWORD *this@<ecx>,
        int a2@<ebx>,
        _DWORD *a3,
        int a4,
        char *Dst,
        int a6,
        char *Src)
{
  int v8; // eax
  char *v9; // ebx
  rsize_t v11; // [esp-4h] [ebp-10h]

  if ( !a4 || a4 != a6 )
    _invalid_parameter_noinfo();
  if ( Dst != Src )
  {
    v8 = *(this + 2) - (_DWORD)Src;
    LODWORD(v11) = a2;
    v9 = &Dst[v8];
    if ( v8 > 0 )
      memmove_s(Dst, __PAIR64__((unsigned int)Src, v8), (const void *)v8, v11);
    *(this + 2) = v9;
  }
  a3[1] = Dst;
  *a3 = a4;
  return a3;
}
