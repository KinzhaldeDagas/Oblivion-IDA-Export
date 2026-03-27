char __userpurge sub_571660@<al>(float *this@<ecx>, int a2@<edi>, unsigned __int8 *a3, float a4, float a5, int a6)
{
  int v6; // edx
  float *i; // esi
  float *v9; // edx
  unsigned int v10; // eax
  size_t v11; // [esp-Ch] [ebp-Ch]

  HIDWORD(v11) = a2;
  v6 = 0;
  for ( i = this + 2; a4 != i[0xFFFFFFFE] || a5 != i[0xFFFFFFFF] || *(_DWORD *)i != a6; i += 7 )
  {
    if ( ++v6 >= 0xC8 )
    {
      *a3 = 0;
      return 0;
    }
  }
  if ( a3
    && ((v9 = this + 7 * v6 + 4, LOWORD(v10) = *((_WORD *)v9 + 2), (_WORD)v10 != 0xFFFF)
      ? (v10 = (unsigned __int16)v10)
      : (v10 = strlen(*(const char **)v9)),
        v10) )
  {
    LODWORD(v11) = 0x7FE;
    _mbsnbcpy(a3, *(const unsigned __int8 **)v9, v11);
    return 1;
  }
  else
  {
    *a3 = 0;
    return 1;
  }
}
