void __thiscall sub_6E8CA0(unsigned int *this, unsigned int a2)
{
  int v3; // edi
  unsigned int i; // eax

  if ( a2 != *(this + 1) )
  {
    if ( a2 )
    {
      v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
      for ( i = 0; i < *(this + 2); ++i ) /*0x6e8cd1*/
        *(_DWORD *)(v3 + 4 * i) = *(_DWORD *)(*this + 4 * i); /*0x6e8cdb*/
    }
    else
    {
      v3 = 0; /*0x6e8ce8*/
    }
    FormHeapFree(*this); /*0x6e8ced*/
    *this = v3; /*0x6e8cf5*/
    *(this + 1) = a2; /*0x6e8cf7*/
  }
}
