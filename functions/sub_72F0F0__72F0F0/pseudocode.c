void __thiscall sub_72F0F0(unsigned int *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax

  if ( a2 != *(this + 1) )
  {
    if ( a2 )
    {
      v3 = FormHeapAlloc((0xC * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a2);
      v4 = 0; /*0x72f11a*/
      v5 = v3; /*0x72f122*/
      if ( *(this + 2) ) /*0x72f11f*/
      {
        v6 = 0; /*0x72f126*/
        do /*0x72f151*/
        {
          v7 = (_DWORD *)(v6 + *this); /*0x72f135*/
          *(_DWORD *)(v6 + v5) = *v7; /*0x72f137*/
          *(_DWORD *)(v6 + v5 + 4) = v7[1]; /*0x72f13d*/
          *(_DWORD *)(v6 + v5 + 8) = v7[2]; /*0x72f144*/
          ++v4; /*0x72f148*/
          v6 += 0xC; /*0x72f14b*/
        }
        while ( v4 < *(this + 2) ); /*0x72f151*/
      }
    }
    else
    {
      v5 = 0; /*0x72f156*/
    }
    FormHeapFree(*this); /*0x72f15b*/
    *this = v5; /*0x72f163*/
    *(this + 1) = a2; /*0x72f165*/
  }
}
