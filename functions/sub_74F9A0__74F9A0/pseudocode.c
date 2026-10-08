void __thiscall sub_74F9A0(unsigned int *this, unsigned int a2)
{
  int v3; // edi
  unsigned int i; // eax
  double v5; // st7

  if ( a2 != *(this + 1) )
  {
    if ( a2 )
    {
      v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
      for ( i = 0; i < *(this + 2); *(float *)(v3 + 4 * i - 4) = v5 ) /*0x74f9d1*/
        v5 = *(float *)(*this + 4 * i++); /*0x74f9d8*/
    }
    else
    {
      v3 = 0; /*0x74f9e9*/
    }
    FormHeapFree(*this); /*0x74f9ee*/
    *this = v3; /*0x74f9f6*/
    *(this + 1) = a2; /*0x74f9f8*/
  }
}
