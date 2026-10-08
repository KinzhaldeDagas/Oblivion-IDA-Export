signed int sub_6C2980()
{
  if ( LOBYTE(qword_B3BB2C[0x37D]) ) /*0x6c2980*/
    return 0; /*0x6c2989*/
  LOBYTE(qword_B3BB2C[0x37D]) = 1; /*0x6c2990*/
  unk_B3D0B4 = (int)sub_6BF730; /*0x6c2997*/
  unk_B3D5EC = (int)sub_6BF7F0; /*0x6c29a1*/
  unk_B3D55C = (int)sub_6C26E0; /*0x6c29ab*/
  unk_B3D384 = (int)sub_6BF4D0; /*0x6c29b5*/
  unk_B3D2F4 = (int)sub_6BF570; /*0x6c29bf*/
  unk_B3D3F3 = 0x10; /*0x6c29c9*/
  NiPosKey_RegisterEvaluatorType5(1, 5); /*0x6c29d0*/
  return 1; /*0x6c298b*/
}
