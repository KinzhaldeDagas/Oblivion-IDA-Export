double __stdcall sub_4AEBE0(int a1)
{
  int v1; // eax

  if ( (unsigned int)(a1 - 1) > 0x13 ) /*0x4aebf0*/
    return (float)0.0; /*0x4aec26*/
  v1 = *(_DWORD *)(0x10 * a1 + 0xB07F44); /*0x4aebf5*/
  if ( v1 ) /*0x4aebfd*/
    return *(float *)v1; /*0x4aec06*/
  flt_B35464[0] = 0.0; /*0x4aec0d*/
  return flt_B35464[0]; /*0x4aec0a*/
}
