signed int sub_6BCF10()
{
  if ( LOBYTE(qword_B3BB2C[0x206]) ) /*0x6bcf10*/
    return 0; /*0x6bcf19*/
  LOBYTE(qword_B3BB2C[0x206]) = 1; /*0x6bcf20*/
  unk_B3D0A8 = (int)sub_6BCDA0; /*0x6bcf27*/
  unk_B3D5E0 = (int)sub_6BCE70; /*0x6bcf31*/
  unk_B3D550 = (int)sub_6BC330; /*0x6bcf3b*/
  unk_B3D378 = (int)sub_6BC900; /*0x6bcf45*/
  unk_B3D2E8 = (int)sub_6C0FE0; /*0x6bcf4f*/
  unk_B3D3F0 = 0x40; /*0x6bcf59*/
  NiPosKey_RegisterEvaluatorType2(1, 2); /*0x6bcf60*/
  return 1; /*0x6bcf1b*/
}
