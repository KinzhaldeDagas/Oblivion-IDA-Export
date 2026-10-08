char __thiscall sub_7301D0(unsigned int *this, int a2)
{
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // edx
  float *v6; // ecx
  int v7; // edi

  if ( !a2 ) /*0x7301d7*/
    return 0; /*0x7301dc*/
  v3 = *(this + 3); /*0x7301e0*/
  if ( v3 != *(_DWORD *)(a2 + 0xC) ) /*0x7301e6*/
    return 0; /*0x7301e6*/
  v4 = *(this + 4); /*0x7301e8*/
  if ( v4 ) /*0x7301ed*/
  {
    if ( *(_DWORD *)(a2 + 0x10) ) /*0x7301ef*/
    {
      v5 = 0; /*0x730203*/
      if ( v3 ) /*0x730207*/
      {
        v6 = *(float **)(a2 + 0x10); /*0x730209*/
        v7 = v4 - (_DWORD)v6; /*0x73020e*/
        while ( *v6 == *(float *)((char *)v6 + v7) ) /*0x73021c*/
        {
          ++v5; /*0x73021e*/
          ++v6; /*0x730221*/
          if ( v5 >= v3 ) /*0x730226*/
            return 1; /*0x730226*/
        }
        return 0; /*0x73021c*/
      }
      return 1; /*0x73022c*/
    }
  }
  else if ( !*(_DWORD *)(a2 + 0x10) ) /*0x7301f9*/
  {
    return 1; /*0x7301fd*/
  }
  return 0; /*0x7301db*/
}
