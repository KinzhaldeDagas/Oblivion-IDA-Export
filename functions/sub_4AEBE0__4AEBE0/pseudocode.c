double __stdcall sub_4AEBE0(int a1)
{
  int v1; // eax

  if ( (unsigned int)(a1 - 1) > 0x13 )
    return (float)0.0;
  v1 = *(_DWORD *)(0x10 * a1 + 0xB07F44);
  if ( v1 )
    return *(float *)v1;
  *(float *)&dword_B35464 = 0.0;
  return *(float *)&dword_B35464;
}
