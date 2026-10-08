int __thiscall sub_6254B0(_DWORD *this, int a2, float a3)
{
  int v3; // eax

  v3 = a2; /*0x6254b0*/
  if ( (unsigned int)(a2 - 0xC) <= 6 || a2 == 0x1C ) /*0x6254bf*/
  {
    v3 = 0xC; /*0x6254fd*/
  }
  else
  {
    if ( (unsigned int)(a2 - 0x13) <= 6 ) /*0x6254c7*/
      return Actor_SetBaseAVf(this, 0x13, a3); /*0x6254dc*/
    if ( (unsigned int)(a2 - 0x1A) <= 6 ) /*0x6254e5*/
      return Actor_SetBaseAVf(this, 0x1A, a3); /*0x6254fa*/
  }
  return Actor_SetBaseAVf(this, v3, a3); /*0x6254dc*/
}
