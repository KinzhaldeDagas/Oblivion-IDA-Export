int __thiscall sub_625790(_BYTE *this, int a2, int a3)
{
  int v3; // eax

  v3 = a2; /*0x625790*/
  if ( (unsigned int)(a2 - 0xC) <= 6 || a2 == 0x1C ) /*0x62579f*/
  {
    v3 = 0xC; /*0x6257cd*/
  }
  else
  {
    if ( (unsigned int)(a2 - 0x13) <= 6 ) /*0x6257a7*/
      return Actor_ModBaseAVi(this, 0x13, a3); /*0x6257b2*/
    if ( (unsigned int)(a2 - 0x1A) <= 6 ) /*0x6257bd*/
      return Actor_ModBaseAVi(this, 0x1A, a3); /*0x6257c8*/
  }
  return Actor_ModBaseAVi(this, v3, a3);
}
