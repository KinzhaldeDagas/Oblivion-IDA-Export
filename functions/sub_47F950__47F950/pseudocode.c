float *__thiscall sub_47F950(float *this, float *a2)
{
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+8h] [ebp-4h]

  v3 = *(this + 1); /*0x47f95a*/
  v4 = *(this + 2); /*0x47f960*/
  v5 = *(this + 3); /*0x47f967*/
  *a2 = *this; /*0x47f96d*/
  a2[1] = v3; /*0x47f972*/
  a2[2] = v4; /*0x47f979*/
  a2[3] = v5; /*0x47f980*/
  return a2; /*0x47f983*/
}
