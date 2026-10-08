char __thiscall sub_6E58E0(float *this, int a2)
{
  unsigned int v4; // ecx
  float *v5; // edx
  char *v6; // edi

  if ( sub_6E4BE0(this, a2) ) /*0x6e58e9*/
  {
    v4 = 0; /*0x6e58f9*/
    v5 = (float *)(a2 + 0x48); /*0x6e58fb*/
    v6 = (char *)this - a2; /*0x6e58fe*/
    while ( *v5 == *(float *)((char *)v5 + (_DWORD)v6) ) /*0x6e590c*/
    {
      ++v4; /*0x6e590e*/
      ++v5; /*0x6e5911*/
      if ( v4 >= 6 ) /*0x6e5917*/
        return 1; /*0x6e591a*/
    }
  }
  return 0; /*0x6e58f2*/
}
