int __thiscall sub_6257E0(_BYTE *this, int a2, float a3)
{
  int v3; // eax

  v3 = a2; /*0x6257e0*/
  if ( (unsigned int)(a2 - 0xC) <= 6 || a2 == 0x1C ) /*0x6257ef*/
  {
    v3 = 0xC; /*0x62582d*/
  }
  else
  {
    if ( (unsigned int)(a2 - 0x13) <= 6 ) /*0x6257f7*/
      return Actor_ModBaseAVf(this, 0x13, a3); /*0x62580c*/
    if ( (unsigned int)(a2 - 0x1A) <= 6 ) /*0x625815*/
      return Actor_ModBaseAVf(this, 0x1A, a3); /*0x62582a*/
  }
  return Actor_ModBaseAVf(this, v3, a3); /*0x62580c*/
}
