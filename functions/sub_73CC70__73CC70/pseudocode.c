errno_t __thiscall sub_73CC70(char **this, unsigned int *a2, _DWORD **a3)
{
  errno_t result; // eax
  unsigned int v5; // esi
  int v6; // eax
  bool v7; // zf
  const char **v8; // eax
  unsigned int v9; // kr00_4

  sub_7214A0(this, a2, a3);
  result = 0;
  if ( *(this + 4) && *(this + 3) )
  {
    a2[3] = (unsigned int)*(this + 3);
    result = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 3) >> 0x1E != 0 ? 0xFFFFFFFF : 4
                                                                                                 * (_DWORD)*(this + 3));
    v5 = 0;
    a2[4] = result;
    if ( *(this + 3) )
    {
      do
      {
        v6 = (int)*(this + 4);
        v7 = *(_DWORD *)(v6 + 4 * v5) == 0;
        v8 = (const char **)(v6 + 4 * v5);
        if ( v7 )
        {
          result = a2[4];
          *(_DWORD *)(result + 4 * v5) = 0;
        }
        else
        {
          v9 = strlen(*v8);
          *(_DWORD *)(a2[4] + 4 * v5) = FormHeapAlloc(v9 + 1);
          result = strcpy_s(*(char **)(a2[4] + 4 * v5), v9 + 1, *(const char **)&(*(this + 4))[4 * v5]);
        }
        ++v5;
      }
      while ( v5 < (unsigned int)*(this + 3) );
    }
  }
  else
  {
    a2[4] = 0;
    a2[3] = 0;
  }
  return result;
}
