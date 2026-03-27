_DWORD *__userpurge sub_439050@<eax>(
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
    v8 = (*(this + 2) - (int)Src) >> 2;
    LODWORD(v11) = a2;
    v9 = &Dst[4 * v8];
    if ( v8 > 0 )
      memmove_s(Dst, __PAIR64__((unsigned int)Src, 4 * v8), (const void *)(4 * v8), v11);
    *(this + 2) = v9;
  }
  a3[1] = Dst;
  *a3 = a4;
  return a3;
}
