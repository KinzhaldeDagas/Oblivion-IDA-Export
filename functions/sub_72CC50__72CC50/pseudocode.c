void __thiscall sub_72CC50(unsigned int *this, unsigned int a2)
{
  int v3; // edi
  unsigned int i; // eax
  unsigned int v5; // ecx

  if ( a2 != *(this + 1) )
  {
    if ( a2 )
    {
      v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a2);
      for ( i = 0; i < *(this + 2); ++i )
      {
        v5 = *this;
        *(_DWORD *)(v3 + 8 * i) = *(_DWORD *)(*this + 8 * i);
        *(_DWORD *)(v3 + 8 * i + 4) = *(_DWORD *)(v5 + 8 * i + 4);
      }
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
