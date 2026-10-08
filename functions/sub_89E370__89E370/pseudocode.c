float *__thiscall sub_89E370(__m128 **this, float *a2)
{
  float *result; // eax
  __m128 *v5; // esi
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  result = (float *)sub_89E060(this, a2); /*0x89e379*/
  if ( this && (result = (float *)*(this + 2)) != 0 ) /*0x89e389*/
    v6 = result[0x10]; /*0x89e38e*/
  else
    v6 = 0.0; /*0x89e394*/
  a2[0xC] = v6; /*0x89e39e*/
  if ( this && (result = (float *)*(this + 2)) != 0 ) /*0x89e3a8*/
    v7 = result[0x11]; /*0x89e3ad*/
  else
    v7 = 0.0; /*0x89e3b3*/
  a2[0xD] = v7; /*0x89e3bd*/
  if ( this && (result = (float *)*(this + 2)) != 0 ) /*0x89e3c7*/
    v8 = result[0x13]; /*0x89e3cc*/
  else
    v8 = 0.0; /*0x89e3d2*/
  a2[0xF] = v8; /*0x89e3dc*/
  if ( this && (v5 = *(this + 2)) != 0 ) /*0x89e3e6*/
  {
    sub_47DCD0(a2 + 4, v5 + 2); /*0x89e3f1*/
    result = sub_47DCD0(a2 + 8, v5 + 3); /*0x89e3fd*/
    a2[0xE] = v5[4].m128_f32[2]; /*0x89e405*/
  }
  else
  {
    a2[4] = 0.0; /*0x89e40d*/
    a2[5] = 0.0; /*0x89e410*/
    a2[6] = 0.0; /*0x89e413*/
    a2[7] = 0.0; /*0x89e416*/
    a2[8] = 0.0; /*0x89e419*/
    a2[9] = 0.0; /*0x89e41c*/
    a2[0xA] = 0.0; /*0x89e41f*/
    a2[0xB] = 0.0; /*0x89e422*/
    a2[0xE] = 0.0; /*0x89e425*/
  }
  return result; /*0x89e408*/
}
