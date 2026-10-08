char __thiscall sub_6E6390(float *this, int a2)
{
  unsigned int v4; // ecx
  float *v5; // edx
  char *v6; // edi

  if ( sub_6E6A00(this, a2) ) /*0x6e6399*/
  {
    v4 = 0; /*0x6e63a9*/
    v5 = (float *)(a2 + 0x34); /*0x6e63ab*/
    v6 = (char *)this - a2; /*0x6e63ae*/
    while ( *v5 == *(float *)((char *)v5 + (_DWORD)v6) ) /*0x6e63bc*/
    {
      ++v4; /*0x6e63be*/
      ++v5; /*0x6e63c1*/
      if ( v4 >= 2 ) /*0x6e63c7*/
        return 1; /*0x6e63ca*/
    }
  }
  return 0; /*0x6e63a2*/
}
