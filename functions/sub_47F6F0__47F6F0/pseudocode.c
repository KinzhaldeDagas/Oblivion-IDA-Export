int __cdecl sub_47F6F0(float *a1, float a2)
{
  int v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+8h] [ebp+8h]

  *(float *)&v3 = a1[1] * a1[1] + *a1 * *a1 + a1[2] * a1[2]; /*0x47f70c*/
  v4 = a2 * a2; /*0x47f716*/
  if ( v4 <= (double)*(float *)&v3 ) /*0x47f729*/
    return v4 < (double)*(float *)&v3; /*0x47f73a*/
  else
    return 0xFFFFFFFF; /*0x47f72d*/
}
