void __thiscall sub_72CCC0(unsigned int *this, unsigned int a2)
{
  int v3; // edi
  unsigned int i; // eax

  if ( a2 != *(this + 1) )
  {
    if ( a2 )
    {
      v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * a2);
      for ( i = 0; i < *(this + 2); ++i )
        *(_WORD *)(v3 + 2 * i) = *(_WORD *)(*this + 2 * i);
    }
    else
    {
      v3 = 0;
    }
    FormHeapFree(*this);
    *this = v3;
    *(this + 1) = a2;
  }
}
