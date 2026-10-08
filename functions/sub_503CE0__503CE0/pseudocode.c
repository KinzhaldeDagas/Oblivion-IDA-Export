char sub_503CE0()
{
  if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x503ce0*/
  {
    BYTE4(qword_B43178[0xD]) = BYTE4(qword_B43178[0xD]) == 0; /*0x503cf3*/
    return 1; /*0x503cf8*/
  }
  else
  {
    unk_B4610C = unk_B4610C == 0; /*0x503d07*/
    return 1; /*0x503d02*/
  }
}
