void __thiscall sub_4A70B0(unsigned int *this)
{
  unsigned int *v2; // eax
  unsigned int v3; // edi
  double v4; // st7
  double v5; // st7

  while ( *(this + 9) )
  {
    v2 = (unsigned int *)*(this + 1);
    v3 = *this;
    if ( v2 )
    {
      *(this + 1) = v2[1];
      *this = *v2;
      FormHeapFree((unsigned int)v2);
    }
    else
    {
      *this = 0;
    }
    --*(this + 9);
    if ( v3 )
    {
      if ( *((_BYTE *)this + 0xC) )
        FormHeapFree(v3);
    }
  }
  v4 = flt_A32048;
  *(this + 9) = 0;
  *((float *)this + 5) = v4;
  *((float *)this + 4) = v4;
  v5 = flt_A3B888;
  *((float *)this + 7) = flt_A3B888;
  *((float *)this + 6) = v5;
}
