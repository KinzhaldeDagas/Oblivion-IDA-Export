signed int sub_6BC260()
{
  if ( LOBYTE(qword_B3BB2C[0x1EB]) ) /*0x6bc260*/
    return 0; /*0x6bc269*/
  LOBYTE(qword_B3BB2C[0x1EB]) = 1; /*0x6bc270*/
  unk_B3D0A0[0] = (int)nullsub_return0_0arg; /*0x6bc277*/
  unk_B3D5D8[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bc281*/
  unk_B3D548 = (int)Shared_NoOpVirtual_60D0A0; /*0x6bc28b*/
  unk_B3D370 = (int)nullsub_return0_0arg; /*0x6bc295*/
  unk_B3D2E0[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bc29f*/
  unk_B3D3EE[0] = 0x10; /*0x6bc2a9*/
  NiPosKey_RegisterEvaluatorType0(1, 0); /*0x6bc2b0*/
  return 1; /*0x6bc26b*/
}
