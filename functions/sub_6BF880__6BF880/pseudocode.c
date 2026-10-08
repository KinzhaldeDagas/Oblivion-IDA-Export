signed int sub_6BF880()
{
  if ( LOBYTE(qword_B3BB2C[0x2C5]) ) /*0x6bf880*/
    return 0; /*0x6bf889*/
  LOBYTE(qword_B3BB2C[0x2C5]) = 1; /*0x6bf890*/
  unk_B3D0A4 = (int)sub_6BF730; /*0x6bf897*/
  unk_B3D5DC = (int)sub_6BF7F0; /*0x6bf8a1*/
  unk_B3D54C = (int)sub_6C26E0; /*0x6bf8ab*/
  unk_B3D374 = (int)sub_6BF4D0; /*0x6bf8b5*/
  unk_B3D2E4 = (int)sub_6BF570; /*0x6bf8bf*/
  unk_B3D3EF = 0x10; /*0x6bf8c9*/
  NiPosKey_RegisterEvaluatorType1(1, 1); /*0x6bf8d0*/
  return 1; /*0x6bf88b*/
}
