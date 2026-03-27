float *__thiscall sub_89E370(__m128 **this, float *a2)
{
  float *result; // eax
  __m128 *v5; // esi
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  result = (float *)sub_89E060(this, a2);
  if ( this && (result = (float *)*(this + 2)) != 0 )
    v6 = result[0x10];
  else
    v6 = 0.0;
  a2[0xC] = v6;
  if ( this && (result = (float *)*(this + 2)) != 0 )
    v7 = result[0x11];
  else
    v7 = 0.0;
  a2[0xD] = v7;
  if ( this && (result = (float *)*(this + 2)) != 0 )
    v8 = result[0x13];
  else
    v8 = 0.0;
  a2[0xF] = v8;
  if ( this && (v5 = *(this + 2)) != 0 )
  {
    sub_47DCD0(a2 + 4, v5 + 2);
    result = sub_47DCD0(a2 + 8, v5 + 3);
    a2[0xE] = v5[4].m128_f32[2];
  }
  else
  {
    a2[4] = 0.0;
    a2[5] = 0.0;
    a2[6] = 0.0;
    a2[7] = 0.0;
    a2[8] = 0.0;
    a2[9] = 0.0;
    a2[0xA] = 0.0;
    a2[0xB] = 0.0;
    a2[0xE] = 0.0;
  }
  return result;
}
