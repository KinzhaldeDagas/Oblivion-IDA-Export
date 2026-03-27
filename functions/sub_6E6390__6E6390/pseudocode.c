char __thiscall sub_6E6390(float *this, int a2)
{
  unsigned int v4; // ecx
  float *v5; // edx
  char *v6; // edi

  if ( sub_6E6A00(this, a2) )
  {
    v4 = 0;
    v5 = (float *)(a2 + 0x34);
    v6 = (char *)this - a2;
    while ( *v5 == *(float *)((char *)v5 + (_DWORD)v6) )
    {
      ++v4;
      ++v5;
      if ( v4 >= 2 )
        return 1;
    }
  }
  return 0;
}
