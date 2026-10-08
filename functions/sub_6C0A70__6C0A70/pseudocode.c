signed int sub_6C0A70()
{
  if ( LOBYTE(qword_B3BB2C[0x2F3]) ) /*0x6c0a70*/
    return 0; /*0x6c0a79*/
  LOBYTE(qword_B3BB2C[0x2F3]) = 1; /*0x6c0a80*/
  unk_B3D0AC = (int)sub_6C0980; /*0x6c0a87*/
  unk_B3D5E4 = (int)sub_6C0A40; /*0x6c0a91*/
  unk_B3D554 = (int)sub_6BFC50; /*0x6c0a9b*/
  unk_B3D37C = (int)sub_6C05B0; /*0x6c0aa5*/
  unk_B3D2EC = (int)sub_6C0650; /*0x6c0aaf*/
  unk_B3D3F1 = 0x4C; /*0x6c0ab9*/
  NiPosKey_RegisterEvaluatorType3(1, 3); /*0x6c0ac0*/
  return 1; /*0x6c0a7b*/
}
