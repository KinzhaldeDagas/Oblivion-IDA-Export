float *__thiscall sub_680B40(int **this, float a2)
{
  float *result; // eax
  int *v4; // ecx
  _WORD *v5; // edi
  int v6; // eax
  bool v7; // zf

  result = 0;
  if ( *(this + 3) )
  {
    v4 = *(this + 1);
    v5 = (_WORD *)v4[2];
    if ( *v5 < (unsigned __int16)word_B3BF04 )
      result = (float *)((char *)dword_B3BF00 + 0x10 * (unsigned __int16)*v5);
    if ( a2 <= (double)*result )
    {
      return 0;
    }
    else
    {
      v6 = *v4;
      v7 = *v4 == 0;
      *(this + 1) = (int *)*v4;
      if ( v7 )
        *(this + 2) = 0;
      else
        *(_DWORD *)(v6 + 4) = 0;
      ((void (__thiscall *)(int **, int *))(*this)[2])(this, v4);
      *(this + 3) = (int *)((char *)*(this + 3) + 0xFFFFFFFF);
      return (float *)v5;
    }
  }
  return result;
}
