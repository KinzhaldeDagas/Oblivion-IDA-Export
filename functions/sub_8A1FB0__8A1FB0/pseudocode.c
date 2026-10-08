float *__thiscall sub_8A1FB0(float *this, float *a2)
{
  float *result; // eax
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+8h] [ebp-4h]
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+10h] [ebp+4h]
  float v11; // [esp+10h] [ebp+4h]

  result = a2; /*0x8a1fb6*/
  v3 = *(this + 1); /*0x8a1fba*/
  v4 = *(this + 2); /*0x8a1fc0*/
  v7 = *(this + 3); /*0x8a1fc7*/
  *a2 = *this; /*0x8a1fcd*/
  a2[1] = v3; /*0x8a1fd2*/
  a2[2] = v4; /*0x8a1fd9*/
  a2[3] = v7; /*0x8a1fe0*/
  v10 = *(this + 5); /*0x8a1fe6*/
  v8 = *(this + 6); /*0x8a1fed*/
  v5 = *(this + 7); /*0x8a1ff4*/
  result[4] = *(this + 4); /*0x8a1ffb*/
  result[5] = v10; /*0x8a2002*/
  result[6] = v8; /*0x8a2009*/
  result[7] = v5; /*0x8a2010*/
  v11 = *(this + 9); /*0x8a2016*/
  v9 = *(this + 0xA); /*0x8a201d*/
  v6 = *(this + 0xB); /*0x8a2024*/
  result[8] = *(this + 8); /*0x8a202b*/
  result[9] = v11; /*0x8a2032*/
  result[0xA] = v9; /*0x8a2039*/
  result[0xB] = v6; /*0x8a2040*/
  return result; /*0x8a2043*/
}
