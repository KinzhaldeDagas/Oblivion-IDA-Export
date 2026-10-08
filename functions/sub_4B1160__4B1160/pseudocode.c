char sub_4B1160()
{
  char v0; // al
  bool v1; // zf
  int v2; // eax
  int v3; // eax
  char result; // al

  v0 = 0; /*0x4b1160*/
  v1 = byte_B08138 == 1; /*0x4b1167*/
  unk_B35AC0 = 0; /*0x4b116d*/
  if ( v1 ) /*0x4b1172*/
  {
    v0 = 1; /*0x4b1174*/
    unk_B35AC0 = 1; /*0x4b1176*/
  }
  if ( bUSeLinear == 1 ) /*0x4b1181*/
  {
    v0 |= 2u; /*0x4b1183*/
    unk_B35AC0 = v0; /*0x4b1185*/
  }
  if ( useQuadratic == 1 ) /*0x4b1190*/
  {
    v0 |= 4u; /*0x4b1192*/
    unk_B35AC0 = v0; /*0x4b1194*/
  }
  if ( !v0 ) /*0x4b119b*/
    unk_B35AC0 = 4; /*0x4b119d*/
  v2 = dword_B08158; /*0x4b11a4*/
  if ( dword_B08158 ) /*0x4b11a4*/
  {
    if ( v2 != 1 && v2 != 2 ) /*0x4b11b4*/
      dword_B08158 = 1; /*0x4b11b6*/
  }
  v3 = dword_B08160; /*0x4b11bc*/
  if ( dword_B08160 ) /*0x4b11bc*/
  {
    if ( v3 != 1 && v3 != 2 ) /*0x4b11cc*/
      dword_B08160 = 2; /*0x4b11ce*/
  }
  if ( 0.0 == flt_B08188 ) /*0x4b11e7*/
    flt_B08188 = 1.0; /*0x4b11e9*/
  result = 1; /*0x4b11f9*/
  if ( 0.0 == flt_B08190 ) /*0x4b11fe*/
    flt_B08190 = 1.0; /*0x4b1200*/
  return result; /*0x4b1206*/
}
