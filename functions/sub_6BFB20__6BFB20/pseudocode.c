signed int sub_6BFB20()
{
  signed int result; // eax

  result = 0; /*0x6bfb20*/
  if ( !LOBYTE(qword_B3BB2C[0x2DC]) ) /*0x6bfb22*/
  {
    unk_B3D14C = 0; /*0x6bfb2b*/
    unk_B3D26C = 0; /*0x6bfb30*/
    unk_B3D684 = 0; /*0x6bfb35*/
    LOBYTE(qword_B3BB2C[0x2DC]) = 1; /*0x6bfb3a*/
    unk_B3D0BC = (int)sub_6C2C60; /*0x6bfb41*/
    unk_B3D5F4 = (int)sub_6BFAF0; /*0x6bfb4b*/
    unk_B3D564 = (int)sub_6C29E0; /*0x6bfb55*/
    unk_B3D38C = (int)sub_6C2A10; /*0x6bfb5f*/
    unk_B3D2FC = (int)sub_6C20A0; /*0x6bfb69*/
    byte_B3D3F4[1] = 0x14; /*0x6bfb73*/
    unk_B3D02C = (int)sub_6BF8F0; /*0x6bfb7a*/
    unk_B3D4D4 = (int)sub_6C1FB0; /*0x6bfb84*/
    unk_B3D444 = (int)sub_6BF8E0; /*0x6bfb8e*/
    unk_B3D1DC = (int)sub_6BF940; /*0x6bfb98*/
    return 1; /*0x6bfba2*/
  }
  return result; /*0x6bfb2a*/
}
