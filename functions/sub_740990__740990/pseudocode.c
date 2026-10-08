void __thiscall sub_740990(char **this, unsigned int *a2, _DWORD **a3)
{
  unsigned int v4; // eax

  sub_7214A0(this, a2, a3); /*0x74099e*/
  if ( *(this + 4) && *(this + 3) )
  {
    a2[3] = (unsigned int)*(this + 3); /*0x7409b2*/
    a2[4] = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 3) >> 0x1E != 0 ? 0xFFFFFFFF : 4
                                                                                                * (_DWORD)*(this + 3));
    v4 = 0; /*0x7409d1*/
    if ( *(this + 3) ) /*0x7409d6*/
    {
      do /*0x7409f2*/
      {
        *(_DWORD *)(a2[4] + 4 * v4) = *(_DWORD *)&(*(this + 4))[4 * v4]; /*0x7409e9*/
        ++v4; /*0x7409ec*/
      }
      while ( v4 < (unsigned int)*(this + 3) ); /*0x7409f2*/
    }
  }
  else
  {
    a2[4] = 0; /*0x7409f9*/
    a2[3] = 0; /*0x740a00*/
  }
}
