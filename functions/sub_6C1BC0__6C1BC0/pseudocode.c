signed int sub_6C1BC0()
{
  signed int result; // eax

  result = 0; /*0x6c1bc0*/
  if ( !LOBYTE(qword_B3BB2C[0x321]) ) /*0x6c1bc2*/
  {
    unk_B3D124 = 0; /*0x6c1bcb*/
    unk_B3D244 = 0; /*0x6c1bd0*/
    unk_B3D65C = 0; /*0x6c1bd5*/
    LOBYTE(qword_B3BB2C[0x321]) = 1; /*0x6c1bda*/
    unk_B3D094 = (int)sub_6C1AD0; /*0x6c1be1*/
    unk_B3D5CC = (int)sub_6C1B90; /*0x6c1beb*/
    unk_B3D53C = (int)sub_6C1510; /*0x6c1bf5*/
    unk_B3D364 = (int)sub_6C1740; /*0x6c1bff*/
    unk_B3D2D4 = (int)sub_6C17E0; /*0x6c1c09*/
    byte_B3D3E8[3] = 0x1C; /*0x6c1c13*/
    unk_B3D004 = (int)sub_6C14C0; /*0x6c1c1a*/
    unk_B3D4AC = (int)sub_6C1440; /*0x6c1c24*/
    unk_B3D41C = (int)sub_6C1650; /*0x6c1c2e*/
    unk_B3D1B4 = (int)sub_6C1810; /*0x6c1c38*/
    return 1; /*0x6c1c42*/
  }
  return result; /*0x6c1bca*/
}
