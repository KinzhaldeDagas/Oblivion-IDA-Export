signed int sub_6BEC50()
{
  signed int result; // eax

  result = 0; /*0x6bec50*/
  if ( !LOBYTE(qword_B3BB2C[0x280]) ) /*0x6bec52*/
  {
    unk_B3D158 = 0; /*0x6bec5b*/
    unk_B3D278 = 0; /*0x6bec60*/
    unk_B3D690 = 0; /*0x6bec65*/
    LOBYTE(qword_B3BB2C[0x280]) = 1; /*0x6bec6a*/
    unk_B3D0C8 = (int)sub_6BEB60; /*0x6bec71*/
    unk_B3D600 = (int)sub_6BEC20; /*0x6bec7b*/
    unk_B3D570 = (int)sub_6BE6B0; /*0x6bec85*/
    unk_B3D398 = (int)sub_6BE770; /*0x6bec8f*/
    unk_B3D308 = (int)sub_6BE810; /*0x6bec99*/
    byte_B3D3F4[4] = 0x48; /*0x6beca3*/
    unk_B3D038 = (int)sub_6BE4D0; /*0x6becaa*/
    unk_B3D4E0 = (int)sub_6BE5E0; /*0x6becb4*/
    unk_B3D450 = (int)sub_6BE840; /*0x6becbe*/
    unk_B3D1E8 = (int)sub_6BE880; /*0x6becc8*/
    return 1; /*0x6becd2*/
  }
  return result; /*0x6bec5a*/
}
