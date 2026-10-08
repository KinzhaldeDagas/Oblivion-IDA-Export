float *__thiscall sub_711AE0(const void *this, float *a2, float *a3)
{
  char v3; // bl
  float *result; // eax
  float v5[2]; // [esp+Ch] [ebp-2Ch] BYREF
  float v6[9]; // [esp+14h] [ebp-24h] BYREF

  qmemcpy(v6, this, sizeof(v6)); /*0x711af1*/
  v3 = sub_710990(v6, a2, v5); /*0x711b10*/
  sub_710B00(v6, a2, v5); /*0x711b12*/
  result = a3; /*0x711b17*/
  *a3 = v6[0]; /*0x711b1f*/
  a3[1] = v6[3]; /*0x711b27*/
  a3[2] = v6[6]; /*0x711b31*/
  a3[3] = v6[1]; /*0x711b38*/
  a3[4] = v6[4]; /*0x711b3f*/
  a3[5] = v6[7]; /*0x711b46*/
  if ( v3 ) /*0x711b4d*/
  {
    a3[6] = -v6[2]; /*0x711b51*/
    a3[7] = -v6[5]; /*0x711b5a*/
    a3[8] = -v6[8]; /*0x711b63*/
  }
  else
  {
    a3[6] = v6[2]; /*0x711b6c*/
    a3[7] = v6[5]; /*0x711b73*/
    a3[8] = v6[8]; /*0x711b7a*/
  }
  return result; /*0x711b66*/
}
