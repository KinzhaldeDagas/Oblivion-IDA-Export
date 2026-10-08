signed int sub_6BDF00()
{
  if ( LOBYTE(qword_B3BB2C[0x265]) ) /*0x6bdf00*/
    return 0; /*0x6bdf09*/
  LOBYTE(qword_B3BB2C[0x265]) = 1; /*0x6bdf10*/
  unk_B3D100[0] = (int)nullsub_return0_0arg; /*0x6bdf17*/
  unk_B3D638[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bdf21*/
  unk_B3D5A8 = (int)Shared_NoOpVirtual_60D0A0; /*0x6bdf2b*/
  unk_B3D3D0 = (int)nullsub_return0_0arg; /*0x6bdf35*/
  unk_B3D340[0] = (int)Shared_NoOpVirtual_60D0A0; /*0x6bdf3f*/
  unk_B3D406[0] = 8; /*0x6bdf49*/
  sub_6BDE70(5, 0); /*0x6bdf50*/
  return 1; /*0x6bdf0b*/
}
