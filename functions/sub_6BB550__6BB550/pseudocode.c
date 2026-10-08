signed int sub_6BB550()
{
  signed int result; // eax

  result = 0; /*0x6bb550*/
  if ( !LOBYTE(qword_B3BB2C[0x1D4]) ) /*0x6bb552*/
  {
    unk_B3D118[0] = 0; /*0x6bb55b*/
    unk_B3D238[0] = 0; /*0x6bb560*/
    unk_B3D650[0] = 0; /*0x6bb565*/
    unk_B3D1A8[0] = 0; /*0x6bb56a*/
    LOBYTE(qword_B3BB2C[0x1D4]) = 1; /*0x6bb56f*/
    unk_B3D088[0] = (int)nullsub_return0_0arg; /*0x6bb576*/
    unk_B3D5C0[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bb580*/
    unk_B3D530[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bb58a*/
    unk_B3D358[0] = (int)nullsub_return0_0arg; /*0x6bb594*/
    unk_B3D2C8[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bb59e*/
    byte_B3D3E8[0] = 8; /*0x6bb5a8*/
    unk_B3CFF8[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bb5af*/
    unk_B3D4A0[0] = (int)sub_6BB490; /*0x6bb5b9*/
    unk_B3D410[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bb5c3*/
    return 1; /*0x6bb5cd*/
  }
  return result; /*0x6bb55a*/
}
