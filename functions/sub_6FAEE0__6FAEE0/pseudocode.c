UInt16 __thiscall sub_6FAEE0(Unk128 *this, float a2)
{
  double v2; // st6
  double v3; // st5
  double v4; // st7
  double v5; // rt1
  double v6; // st5
  double v7; // st6
  double v8; // rt2
  double v9; // st5
  double v10; // st7
  double v11; // rt0
  double v12; // st5
  double v13; // st6
  UInt16 result; // ax
  float v15; // [esp+8h] [ebp+4h]
  float v16; // [esp+8h] [ebp+4h]

  v2 = a2; /*0x6faee3*/
  v3 = unk_B3F9A0; /*0x6faeeb*/
  if ( a2 < 0.0 ) /*0x6faef4*/
  {
    while ( 1 ) /*0x6faf00*/
    {
      v5 = v3; /*0x6faf00*/
      v6 = v2 + v3; /*0x6faf00*/
      v7 = v5; /*0x6faf00*/
      v15 = v6; /*0x6faf02*/
      if ( v15 >= 0.0 ) /*0x6faf11*/
        break; /*0x6faf11*/
      v3 = v7; /*0x6faefa*/
      v2 = v15; /*0x6faefa*/
    }
    v8 = v7; /*0x6faf15*/
    v2 = v15; /*0x6faf15*/
    v4 = v8; /*0x6faf15*/
  }
  else
  {
    v4 = unk_B3F9A0; /*0x6faef6*/
  }
  v9 = v4; /*0x6faf17*/
  if ( v4 <= v2 ) /*0x6faf20*/
  {
    while ( 1 ) /*0x6faf2e*/
    {
      v11 = v9; /*0x6faf2e*/
      v12 = v2 - v4; /*0x6faf2e*/
      v13 = v11; /*0x6faf2e*/
      v16 = v12; /*0x6faf30*/
      if ( v16 < v11 ) /*0x6faf3f*/
        break; /*0x6faf3f*/
      v9 = v13; /*0x6faf28*/
      v2 = v16; /*0x6faf28*/
    }
    v10 = v16; /*0x6faf41*/
  }
  else
  {
    v10 = v2; /*0x6faf24*/
  }
  result = (int)(v10 * dbl_A2FC70); /*0x6faf62*/
  this->unkC = result; /*0x6faf66*/
  return result; /*0x6faf6f*/
}
