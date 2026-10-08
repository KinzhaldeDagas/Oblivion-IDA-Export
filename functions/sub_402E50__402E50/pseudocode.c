// Builds the in-game date string '%s %d, 3E%d' from a month-name table, game day, and game year. Observed in HUD and Sleep/Wait menu.
BSStringT *__userpurge TimeGlobals_FormatGameDate@<eax>(int *this@<ecx>, double a2@<st0>, BSStringT *a3)
{
  const char *v3; // edi
  double v4; // st6
  int v5; // eax
  const char **v6; // eax
  char v7; // al
  float v9; // [esp+Ch] [ebp-20h]

  v3 = 0; /*0x402e75*/
  a3->m_data = 0; /*0x402e7f*/
  a3->m_dataLen = 0; /*0x402e81*/
  a3->m_bufLen = 0; /*0x402e85*/
  if ( *this ) /*0x402e89*/
    v4 = *(float *)(*this + 0x24); /*0x402e9b*/
  else
    v4 = 427.0; /*0x402ea0*/
  if ( *(this + 1) ) /*0x402ebc*/
    v5 = (char)Double_To_SInt32(a2); /*0x402ed7*/
  else
    v5 = 7; /*0x402edc*/
  v6 = (const char **)*(&off_B06FA4 + v5); /*0x402ee1*/
  if ( v6 ) /*0x402eea*/
    v3 = *v6; /*0x402eec*/
  v7 = Double_To_SInt32(a2); /*0x402f19*/
  v9 = v4; /*0x402ea9*/
  BSStringT_Static_Format(a3, "%s %d, 3E%d", v3, v7, (unsigned int)(__int64)v9); /*0x402f29*/
  return a3; /*0x402f33*/
}
