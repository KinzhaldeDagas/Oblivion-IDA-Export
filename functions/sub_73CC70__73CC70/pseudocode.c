errno_t __thiscall sub_73CC70(char **this, unsigned int *a2, _DWORD **a3)
{
  errno_t result; // eax
  unsigned int v5; // esi
  int v6; // eax
  bool v7; // zf
  const char **v8; // eax
  unsigned int v9; // kr00_4

  sub_7214A0(this, a2, a3); /*0x73cc7e*/
  result = 0; /*0x73cc83*/
  if ( *(this + 4) && *(this + 3) )
  {
    a2[3] = (unsigned int)*(this + 3); /*0x73cc9a*/
    result = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 3) >> 0x1E != 0 ? 0xFFFFFFFF : 4
                                                                                                 * (_DWORD)*(this + 3));
    v5 = 0; /*0x73ccb7*/
    a2[4] = result; /*0x73ccbc*/
    if ( *(this + 3) ) /*0x73ccbf*/
    {
      do /*0x73cd19*/
      {
        v6 = (int)*(this + 4); /*0x73ccc5*/
        v7 = *(_DWORD *)(v6 + 4 * v5) == 0; /*0x73ccc8*/
        v8 = (const char **)(v6 + 4 * v5); /*0x73cccc*/
        if ( v7 ) /*0x73cccf*/
        {
          result = a2[4]; /*0x73cd09*/
          *(_DWORD *)(result + 4 * v5) = 0; /*0x73cd0c*/
        }
        else
        {
          v9 = strlen(*v8); /*0x73ccd3*/
          *(_DWORD *)(a2[4] + 4 * v5) = FormHeapAlloc(v9 + 1); /*0x73cced*/
          result = strcpy_s(*(char **)(a2[4] + 4 * v5), v9 + 1, *(const char **)&(*(this + 4))[4 * v5]); /*0x73ccff*/
        }
        ++v5; /*0x73cd13*/
      }
      while ( v5 < (unsigned int)*(this + 3) ); /*0x73cd19*/
    }
  }
  else
  {
    a2[4] = 0; /*0x73cd23*/
    a2[3] = 0; /*0x73cd26*/
  }
  return result; /*0x73cd1d*/
}
