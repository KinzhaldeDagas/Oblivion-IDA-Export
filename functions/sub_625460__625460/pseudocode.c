int __thiscall sub_625460(_DWORD *this, int a2, int a3)
{
  int v3; // eax

  v3 = a2; /*0x625460*/
  if ( (unsigned int)(a2 - 0xC) <= 6 || a2 == 0x1C ) /*0x62546f*/
  {
    v3 = 0xC; /*0x62549d*/
  }
  else
  {
    if ( (unsigned int)(a2 - 0x13) <= 6 ) /*0x625477*/
      return Actor_SetBaseAVi(this, 0x13, a3); /*0x625482*/
    if ( (unsigned int)(a2 - 0x1A) <= 6 ) /*0x62548d*/
      return Actor_SetBaseAVi(this, 0x1A, a3); /*0x625498*/
  }
  return Actor_SetBaseAVi(this, v3, a3);
}
