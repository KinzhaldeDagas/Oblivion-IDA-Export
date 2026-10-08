float *__thiscall sub_72F930(float *this, float *a2, float a3)
{
  double v3; // st7
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+1Ch] [ebp+8h]
  float v9; // [esp+1Ch] [ebp+8h]
  float v10; // [esp+1Ch] [ebp+8h]
  float v11; // [esp+1Ch] [ebp+8h]

  v3 = a3; /*0x72f943*/
  v8 = *(this + 3) * a3; /*0x72f945*/
  v7 = v8; /*0x72f94d*/
  v9 = *(this + 2) * v3; /*0x72f956*/
  v6 = v9; /*0x72f95e*/
  v10 = *(this + 1) * v3; /*0x72f967*/
  v5 = v10; /*0x72f96f*/
  v11 = v3 * *this; /*0x72f977*/
  sub_714C40(a2, v11, v5, v6, v7); /*0x72f982*/
  return a2; /*0x72f989*/
}
