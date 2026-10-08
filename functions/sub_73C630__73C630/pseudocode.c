void __thiscall sub_73C630(char **this, unsigned int *a2, _DWORD **a3)
{
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  bool v8; // zf
  const char **v9; // eax
  unsigned int v10; // kr00_4

  sub_7214A0(this, a2, a3); /*0x73c63e*/
  if ( *(this + 4) && (v4 = (unsigned int)*(this + 3)) != 0 )
  {
    a2[3] = v4; /*0x73c659*/
    v5 = (int)*(this + 5); /*0x73c65c*/
    if ( v5 <= (int)0xFFFFFFFF || v5 >= (int)*(this + 3) ) /*0x73c667*/
      a2[5] = 0xFFFFFFFF; /*0x73c66e*/
    else
      a2[5] = v5; /*0x73c669*/
    v6 = 0; /*0x73c68f*/
    a2[4] = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 3) >> 0x1E != 0 ? 0xFFFFFFFF : 4
                                                                                                * (_DWORD)*(this + 3));
    if ( *(this + 3) ) /*0x73c697*/
    {
      do /*0x73c6f4*/
      {
        v7 = (int)*(this + 4); /*0x73c6a0*/
        v8 = *(_DWORD *)(v7 + 4 * v6) == 0; /*0x73c6a3*/
        v9 = (const char **)(v7 + 4 * v6); /*0x73c6a7*/
        if ( v8 ) /*0x73c6aa*/
        {
          *(_DWORD *)(a2[4] + 4 * v6) = 0; /*0x73c6e7*/
        }
        else
        {
          v10 = strlen(*v9); /*0x73c6ae*/
          *(_DWORD *)(a2[4] + 4 * v6) = FormHeapAlloc(v10 + 1); /*0x73c6c8*/
          strcpy_s(*(char **)(a2[4] + 4 * v6), v10 + 1, *(const char **)&(*(this + 4))[4 * v6]); /*0x73c6da*/
        }
        ++v6; /*0x73c6ee*/
      }
      while ( v6 < (unsigned int)*(this + 3) ); /*0x73c6f4*/
    }
  }
  else
  {
    a2[4] = 0; /*0x73c6fe*/
    a2[3] = 0; /*0x73c701*/
  }
}
