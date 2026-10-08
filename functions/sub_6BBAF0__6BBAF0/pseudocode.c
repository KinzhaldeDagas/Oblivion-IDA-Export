signed int sub_6BBAF0()
{
  signed int result; // eax

  result = 0; /*0x6bbaf0*/
  if ( !BYTE1(qword_B3BB2C[0x1D4]) ) /*0x6bbaf2*/
  {
    unk_B3D120 = 0; /*0x6bbafb*/
    unk_B3D240 = 0; /*0x6bbb00*/
    unk_B3D658 = 0; /*0x6bbb05*/
    BYTE1(qword_B3BB2C[0x1D4]) = 1; /*0x6bbb0a*/
    unk_B3D090 = (int)sub_6BB960; /*0x6bbb11*/
    unk_B3D5C8 = (int)sub_6BBA80; /*0x6bbb1b*/
    unk_B3D538 = (int)sub_6BB710; /*0x6bbb25*/
    unk_B3D360 = (int)sub_6BF4D0; /*0x6bbb2f*/
    unk_B3D2D0 = (int)sub_6BF570; /*0x6bbb39*/
    byte_B3D3E8[2] = 0x10; /*0x6bbb43*/
    unk_B3D000 = (int)sub_6BB6B0; /*0x6bbb4a*/
    unk_B3D4A8 = (int)sub_6BB660; /*0x6bbb54*/
    unk_B3D418 = (int)Shared_NoOpVirtual_60D0A0; /*0x6bbb5e*/
    unk_B3D1B0 = (int)sub_6BB730; /*0x6bbb68*/
    return 1; /*0x6bbb72*/
  }
  return result; /*0x6bbafa*/
}
