signed int sub_6C2D20()
{
  signed int result; // eax

  result = 0; /*0x6c2d20*/
  if ( !LOBYTE(qword_B3BB2C[0x394]) ) /*0x6c2d22*/
  {
    unk_B3D15C = 0; /*0x6c2d2b*/
    unk_B3D27C = 0; /*0x6c2d30*/
    unk_B3D694 = 0; /*0x6c2d35*/
    LOBYTE(qword_B3BB2C[0x394]) = 1; /*0x6c2d3a*/
    unk_B3D0CC = (int)sub_6C2C60; /*0x6c2d41*/
    unk_B3D604 = (int)sub_6BFAF0; /*0x6c2d4b*/
    unk_B3D574 = (int)sub_6C29E0; /*0x6c2d55*/
    unk_B3D39C = (int)sub_6C2A10; /*0x6c2d5f*/
    unk_B3D30C = (int)sub_6C20A0; /*0x6c2d69*/
    byte_B3D3F4[5] = 0x14; /*0x6c2d73*/
    unk_B3D03C = (int)sub_6C1FC0; /*0x6c2d7a*/
    unk_B3D4E4 = (int)sub_6C1FB0; /*0x6c2d84*/
    unk_B3D454 = (int)sub_6BF8E0; /*0x6c2d8e*/
    unk_B3D1EC = (int)sub_6C2AB0; /*0x6c2d98*/
    return 1; /*0x6c2da2*/
  }
  return result; /*0x6c2d2a*/
}
