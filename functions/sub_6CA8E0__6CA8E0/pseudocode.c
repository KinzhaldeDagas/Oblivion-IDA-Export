char __thiscall sub_6CA8E0(float *this, char *Src, volatile LONG *a3)
{
  int v4; // eax
  double v6; // st7

  if ( !Src )
    return 0;
  if ( !a3 )
    return 0;
  v4 = (*(int (__thiscall **)(volatile LONG *))(*a3 + 4))(a3);
  if ( !v4 )
    return 0;
  while ( (char *)v4 != dword_B3CDF8 )
  {
    v4 = *(_DWORD *)(v4 + 4);
    if ( !v4 )
      return 0;
  }
  *((_WORD *)a3 + 4) = a3[2] & 0xFFF9 | (2 * *((_WORD *)this + 0x12));
  v6 = *(this + 0xA);
  *((_WORD *)a3 + 4) &= ~0x10u;
  *((float *)a3 + 3) = v6;
  return sub_6CA160((unsigned int *)this, Src, a3);
}
