float *__thiscall sub_6E09A0(int this, float *a2)
{
  float *result; // eax
  float v3; // ecx
  float v4; // edx
  float v5; // eax
  float v6; // [esp+8h] [ebp-4h]

  result = *(float **)(this + 0x30); /*0x6e09a0*/
  if ( result ) /*0x6e09a8*/
  {
    if ( (*(_BYTE *)(this + 0x40) & 1) != 0 ) /*0x6e09ae*/
    {
      v3 = result[0x38]; /*0x6e09b0*/
      v4 = result[0x39]; /*0x6e09b6*/
      v5 = result[0x3A]; /*0x6e09bc*/
    }
    else
    {
      v3 = result[0x3B]; /*0x6e09c4*/
      v4 = result[0x3C]; /*0x6e09ca*/
      v5 = result[0x3D]; /*0x6e09d0*/
    }
    v6 = v5; /*0x6e09d6*/
    *a2 = v3; /*0x6e09e4*/
    a2[1] = v4; /*0x6e09ee*/
    a2[2] = v6; /*0x6e09f5*/
    return a2; /*0x6e09da*/
  }
  return result; /*0x6e09f8*/
}
