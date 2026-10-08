signed int sub_6BDB00()
{
  signed int result; // eax

  result = 0; /*0x6bdb00*/
  if ( !LOBYTE(qword_B3BB2C[0x238]) ) /*0x6bdb02*/
  {
    unk_B3D150 = 0; /*0x6bdb0b*/
    unk_B3D270 = 0; /*0x6bdb10*/
    unk_B3D688 = 0; /*0x6bdb15*/
    LOBYTE(qword_B3BB2C[0x238]) = 1; /*0x6bdb1a*/
    unk_B3D0C0 = (int)sub_6BDA10; /*0x6bdb21*/
    unk_B3D5F8 = (int)sub_6BDAD0; /*0x6bdb2b*/
    unk_B3D568 = (int)sub_6BD610; /*0x6bdb35*/
    unk_B3D390 = (int)sub_6BD790; /*0x6bdb3f*/
    unk_B3D300 = (int)sub_6BD830; /*0x6bdb49*/
    byte_B3D3F4[2] = 0x24; /*0x6bdb53*/
    unk_B3D030 = (int)sub_6BD660; /*0x6bdb5a*/
    unk_B3D4D8 = (int)sub_6BD5E0; /*0x6bdb64*/
    unk_B3D448 = (int)sub_6BD6B0; /*0x6bdb6e*/
    unk_B3D1E0 = (int)sub_6BD860; /*0x6bdb78*/
    return 1; /*0x6bdb82*/
  }
  return result; /*0x6bdb0a*/
}
