signed int sub_6BF330()
{
  signed int result; // eax

  result = 0; /*0x6bf330*/
  if ( !LOBYTE(qword_B3BB2C[0x2AE]) ) /*0x6bf332*/
  {
    unk_B3D11C = 0; /*0x6bf33b*/
    unk_B3D23C = 0; /*0x6bf340*/
    unk_B3D654 = 0; /*0x6bf345*/
    LOBYTE(qword_B3BB2C[0x2AE]) = 1; /*0x6bf34a*/
    unk_B3D08C = (int)sub_6C2590; /*0x6bf351*/
    unk_B3D5C4 = (int)sub_6BF300; /*0x6bf35b*/
    unk_B3D534 = (int)sub_6C23F0; /*0x6bf365*/
    unk_B3D35C = (int)sub_6BF0B0; /*0x6bf36f*/
    unk_B3D2CC = (int)sub_6BF150; /*0x6bf379*/
    byte_B3D3E8[1] = 8; /*0x6bf383*/
    unk_B3CFFC = (int)sub_6BF070; /*0x6bf38a*/
    unk_B3D4A4 = (int)sub_6BF060; /*0x6bf394*/
    unk_B3D414 = (int)Shared_NoOpVirtual_60D0A0; /*0x6bf39e*/
    unk_B3D1AC = (int)sub_6BF180; /*0x6bf3a8*/
    return 1; /*0x6bf3b2*/
  }
  return result; /*0x6bf33a*/
}
