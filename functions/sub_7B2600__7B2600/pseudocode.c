unsigned int *__thiscall sub_7B2600(unsigned int **this, unsigned int **a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // esi
  int v6; // edi
  unsigned int v7; // eax
  unsigned int *result; // eax
  int v9; // eax
  unsigned int v10; // edx
  unsigned int *v11; // ecx

  v4 = (int)*a2; /*0x7b260f*/
  *a3 = (*a2)[1]; /*0x7b2616*/
  v6 = *a4; /*0x7b2619*/
  if ( *a4 != *(_DWORD *)(v4 + 8) ) /*0x7b261f*/
  {
    if ( v6 ) /*0x7b2623*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7b2629*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7b263f*/
    }
    v7 = *(_DWORD *)(v4 + 8); /*0x7b2641*/
    *a4 = v7; /*0x7b2646*/
    if ( v7 ) /*0x7b2649*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x7b264f*/
  }
  result = *(unsigned int **)v4; /*0x7b2655*/
  if ( *(_DWORD *)v4 ) /*0x7b2655*/
  {
    *a2 = result; /*0x7b2662*/
  }
  else
  {
    v9 = ((int (__thiscall *)(unsigned int **, _DWORD))(*this)[1])(this, *(_DWORD *)(v4 + 4)); /*0x7b2673*/
    v10 = (unsigned int)*(this + 1); /*0x7b2675*/
    result = (unsigned int *)(v9 + 1); /*0x7b2678*/
    if ( (unsigned int)result >= v10 ) /*0x7b267d*/
    {
LABEL_13:
      *a2 = 0; /*0x7b2695*/
      return (unsigned int *)a2; /*0x7b2695*/
    }
    else
    {
      v11 = &(*(this + 2))[(_DWORD)result]; /*0x7b2682*/
      while ( !*v11 ) /*0x7b2689*/
      {
        result = (unsigned int *)((char *)result + 1); /*0x7b268b*/
        ++v11; /*0x7b268e*/
        if ( (unsigned int)result >= v10 ) /*0x7b2693*/
          goto LABEL_13; /*0x7b2693*/
      }
      *a2 = (unsigned int *)*v11; /*0x7b26ab*/
    }
  }
  return result; /*0x7b265f*/
}
