char __thiscall sub_6E60A0(float *this, int a2)
{
  unsigned int v4; // ecx
  float *v5; // edx
  char *v6; // edi

  if ( sub_6E55E0(this, a2) ) /*0x6e60a9*/
  {
    v4 = 0; /*0x6e60b9*/
    v5 = (float *)(a2 + 0x24); /*0x6e60bb*/
    v6 = (char *)this - a2; /*0x6e60be*/
    while ( *v5 == *(float *)((char *)v5 + (_DWORD)v6) ) /*0x6e60cc*/
    {
      ++v4; /*0x6e60ce*/
      ++v5; /*0x6e60d1*/
      if ( v4 >= 2 ) /*0x6e60d7*/
        return 1; /*0x6e60da*/
    }
  }
  return 0; /*0x6e60b2*/
}
