char __thiscall sub_6E5D70(float *this, int a2)
{
  unsigned int v4; // ecx
  float *v5; // edx
  char *v6; // edi

  if ( sub_6E5340(this, a2) ) /*0x6e5d79*/
  {
    v4 = 0; /*0x6e5d89*/
    v5 = (float *)(a2 + 0x2C); /*0x6e5d8b*/
    v6 = (char *)this - a2; /*0x6e5d8e*/
    while ( *v5 == *(float *)((char *)v5 + (_DWORD)v6) ) /*0x6e5d9c*/
    {
      ++v4; /*0x6e5d9e*/
      ++v5; /*0x6e5da1*/
      if ( v4 >= 2 ) /*0x6e5da7*/
        return 1; /*0x6e5daa*/
    }
  }
  return 0; /*0x6e5d82*/
}
