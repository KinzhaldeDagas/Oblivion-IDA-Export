float *__thiscall sub_710400(float *this, float *a2)
{
  float v3; // [esp+4h] [ebp-20h]
  float v4; // [esp+8h] [ebp-1Ch]
  float v5; // [esp+Ch] [ebp-18h]
  float v6; // [esp+10h] [ebp-14h]
  float v7; // [esp+14h] [ebp-10h]
  float v8; // [esp+18h] [ebp-Ch]
  float v9; // [esp+1Ch] [ebp-8h]
  float v10; // [esp+20h] [ebp-4h]

  v3 = *(this + 1); /*0x71040f*/
  v4 = *(this + 2); /*0x710416*/
  v5 = *(this + 3); /*0x71041d*/
  v6 = *(this + 4); /*0x710424*/
  v7 = *(this + 5); /*0x71042b*/
  v8 = *(this + 6); /*0x710432*/
  v9 = *(this + 7); /*0x710439*/
  v10 = *(this + 8); /*0x710440*/
  *a2 = *this; /*0x710447*/
  a2[3] = v3; /*0x71044d*/
  a2[6] = v4; /*0x710454*/
  a2[1] = v5; /*0x71045b*/
  a2[4] = v6; /*0x710462*/
  a2[7] = v7; /*0x710469*/
  a2[2] = v8; /*0x710470*/
  a2[5] = v9; /*0x710477*/
  a2[8] = v10; /*0x71047e*/
  return a2; /*0x710481*/
}
