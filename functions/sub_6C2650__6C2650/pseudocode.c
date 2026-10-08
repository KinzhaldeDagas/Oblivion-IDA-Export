signed int sub_6C2650()
{
  signed int result; // eax

  result = 0; /*0x6c2650*/
  if ( !LOBYTE(qword_B3BB2C[0x366]) ) /*0x6c2652*/
  {
    unk_B3D12C = 0; /*0x6c265b*/
    unk_B3D24C = 0; /*0x6c2660*/
    unk_B3D664 = 0; /*0x6c2665*/
    LOBYTE(qword_B3BB2C[0x366]) = 1; /*0x6c266a*/
    unk_B3D09C = (int)sub_6C2590; /*0x6c2671*/
    unk_B3D5D4 = (int)sub_6BF300; /*0x6c267b*/
    unk_B3D544 = (int)sub_6C23F0; /*0x6c2685*/
    unk_B3D36C = (int)sub_6BF0B0; /*0x6c268f*/
    unk_B3D2DC = (int)sub_6BF150; /*0x6c2699*/
    byte_B3D3E8[5] = 8; /*0x6c26a3*/
    unk_B3D00C = (int)sub_6C23C0; /*0x6c26aa*/
    unk_B3D4B4 = (int)sub_6BF060; /*0x6c26b4*/
    unk_B3D424 = (int)Shared_NoOpVirtual_60D0A0; /*0x6c26be*/
    unk_B3D1BC = (int)sub_6C2410; /*0x6c26c8*/
    return 1; /*0x6c26d2*/
  }
  return result; /*0x6c265a*/
}
