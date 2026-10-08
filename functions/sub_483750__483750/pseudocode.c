unsigned int __thiscall sub_483750(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int v4; // edi
  unsigned int i; // edx
  unsigned int v6; // eax

  result = *(this + 3); /*0x483750*/
  v2 = result >> 1; /*0x483757*/
  v3 = 0; /*0x483759*/
  if ( result ) /*0x48375d*/
  {
    v4 = -v2; /*0x483763*/
    do /*0x4837ae*/
    {
      for ( i = 0; i < result; ++i ) /*0x483769*/
      {
        v6 = *(this + 4) + 0x10 * (i + v3 * result); /*0x483778*/
        if ( !*(_DWORD *)(v6 + 8) && !*(_DWORD *)(v6 + 0xC) ) /*0x483781*/
        {
          *(_DWORD *)(v6 + 8) = v4 + *(this + 1); /*0x48378c*/
          *(_DWORD *)(v6 + 0xC) = i + *(this + 2) - v2; /*0x483796*/
        }
        result = *(this + 3); /*0x483799*/
      }
      result = *(this + 3); /*0x4837a3*/
      ++v3; /*0x4837a6*/
      ++v4; /*0x4837a9*/
    }
    while ( v3 < result ); /*0x4837ae*/
  }
  return result; /*0x4837b2*/
}
