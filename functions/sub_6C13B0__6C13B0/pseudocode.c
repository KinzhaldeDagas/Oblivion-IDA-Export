signed int sub_6C13B0()
{
  signed int result; // eax

  result = 0; /*0x6c13b0*/
  if ( !LOBYTE(qword_B3BB2C[0x30A]) ) /*0x6c13b2*/
  {
    unk_B3D154 = 0; /*0x6c13bb*/
    unk_B3D274 = 0; /*0x6c13c0*/
    unk_B3D68C = 0; /*0x6c13c5*/
    LOBYTE(qword_B3BB2C[0x30A]) = 1; /*0x6c13ca*/
    unk_B3D0C4 = (int)sub_6C12C0; /*0x6c13d1*/
    unk_B3D5FC = (int)sub_6C1380; /*0x6c13db*/
    unk_B3D56C = (int)sub_6C0B80; /*0x6c13e5*/
    unk_B3D394 = (int)sub_6C0F40; /*0x6c13ef*/
    unk_B3D304 = (int)sub_6C0FE0; /*0x6c13f9*/
    byte_B3D3F4[3] = 0x40; /*0x6c1403*/
    unk_B3D034 = (int)sub_6C0BF0; /*0x6c140a*/
    unk_B3D4DC = (int)sub_6C0B00; /*0x6c1414*/
    unk_B3D44C = (int)sub_6C0EC0; /*0x6c141e*/
    unk_B3D1E4 = (int)sub_6C1010; /*0x6c1428*/
    return 1; /*0x6c1432*/
  }
  return result; /*0x6c13ba*/
}
