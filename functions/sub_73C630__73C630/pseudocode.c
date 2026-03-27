void __thiscall sub_73C630(char **this, unsigned int *a2, _DWORD **a3)
{
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  bool v8; // zf
  const char **v9; // eax
  unsigned int v10; // kr00_4

  sub_7214A0(this, a2, a3);
  if ( *(this + 4) && (v4 = (unsigned int)*(this + 3)) != 0 )
  {
    a2[3] = v4;
    v5 = (int)*(this + 5);
    if ( v5 <= (int)0xFFFFFFFF || v5 >= (int)*(this + 3) )
      a2[5] = 0xFFFFFFFF;
    else
      a2[5] = v5;
    v6 = 0;
    a2[4] = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 3) >> 0x1E != 0 ? 0xFFFFFFFF : 4
                                                                                                * (_DWORD)*(this + 3));
    if ( *(this + 3) )
    {
      do
      {
        v7 = (int)*(this + 4);
        v8 = *(_DWORD *)(v7 + 4 * v6) == 0;
        v9 = (const char **)(v7 + 4 * v6);
        if ( v8 )
        {
          *(_DWORD *)(a2[4] + 4 * v6) = 0;
        }
        else
        {
          v10 = strlen(*v9);
          *(_DWORD *)(a2[4] + 4 * v6) = FormHeapAlloc(v10 + 1);
          strcpy_s(*(char **)(a2[4] + 4 * v6), v10 + 1, *(const char **)&(*(this + 4))[4 * v6]);
        }
        ++v6;
      }
      while ( v6 < (unsigned int)*(this + 3) );
    }
  }
  else
  {
    a2[4] = 0;
    a2[3] = 0;
  }
}
