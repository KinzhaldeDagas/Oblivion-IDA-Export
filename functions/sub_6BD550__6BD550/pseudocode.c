signed int sub_6BD550()
{
  signed int result; // eax

  result = 0; /*0x6bd550*/
  if ( !LOBYTE(qword_B3BB2C[0x21D]) ) /*0x6bd552*/
  {
    unk_B3D148 = 0; /*0x6bd55b*/
    unk_B3D268 = 0; /*0x6bd560*/
    unk_B3D680 = 0; /*0x6bd565*/
    unk_B3D1D8 = 0; /*0x6bd56a*/
    LOBYTE(qword_B3BB2C[0x21D]) = 1; /*0x6bd56f*/
    unk_B3D0B8[0] = (int)nullsub_return0_0arg; /*0x6bd576*/
    unk_B3D5F0[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bd580*/
    unk_B3D560 = (int)Shared_NoOpVirtual_60D0A0; /*0x6bd58a*/
    unk_B3D388 = (int)nullsub_return0_0arg; /*0x6bd594*/
    unk_B3D2F8[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bd59e*/
    byte_B3D3F4[0] = 0x14; /*0x6bd5a8*/
    unk_B3D028[0] = (int)sub_6BD2D0; /*0x6bd5af*/
    unk_B3D4D0[0] = (int)sub_6BE360; /*0x6bd5b9*/
    unk_B3D440[0] = (int)sub_6BD310; /*0x6bd5c3*/
    return 1; /*0x6bd5cd*/
  }
  return result; /*0x6bd55a*/
}
