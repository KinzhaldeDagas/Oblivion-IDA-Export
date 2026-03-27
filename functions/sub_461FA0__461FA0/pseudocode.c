unsigned int __thiscall sub_461FA0(unsigned int **this, int a2)
{
  unsigned int result; // eax
  unsigned int *v4; // eax
  unsigned int *v5; // esi
  unsigned int *v6; // esi
  unsigned int v7; // edi

  result = (unsigned int)*(this + 6) >> 0xC;
  if ( ((unsigned int)*(this + 6) & 0x1000) != 0 )
  {
    if ( !*(this + 0x2B) )
    {
      v4 = (unsigned int *)FormHeapAlloc(0x18u);
      v5 = v4;
      if ( v4 )
      {
        v4[2] = 0x4E20;
        *v4 = (unsigned int)&NiTLargeArray<TESForm *>::`vftable';
        v4[5] = 0x7D0;
        v4[3] = 0;
        v4[4] = 0;
        v4[1] = FormHeapAlloc(0x13880u);
      }
      else
      {
        v5 = 0;
      }
      *(this + 0x2B) = v5;
    }
    v6 = *(this + 0x2B);
    v7 = v6[3];
    if ( v7 >= v6[2] )
      sub_452910(v6, v7 + v6[5]);
    return sub_446C50(v6, v7, &a2);
  }
  return result;
}
