void __thiscall sub_7300D0(char **this, unsigned int *a2, _DWORD **a3)
{
  unsigned int v4; // eax

  sub_7214A0(this, a2, a3); /*0x7300de*/
  if ( *(this + 4) && *(this + 3) )
  {
    a2[3] = (unsigned int)*(this + 3); /*0x7300f2*/
    a2[4] = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 3) >> 0x1E != 0 ? 0xFFFFFFFF : 4
                                                                                                * (_DWORD)*(this + 3));
    v4 = 0; /*0x730111*/
    if ( *(this + 3) ) /*0x730116*/
    {
      do /*0x730132*/
      {
        *(float *)(a2[4] + 4 * v4) = *(float *)&(*(this + 4))[4 * v4]; /*0x730129*/
        ++v4; /*0x73012c*/
      }
      while ( v4 < (unsigned int)*(this + 3) ); /*0x730132*/
    }
  }
  else
  {
    a2[4] = 0; /*0x730139*/
    a2[3] = 0; /*0x730140*/
  }
}
