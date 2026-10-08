// positive sp value has been detected, the output may be wrong!
float *__stdcall def_6DEA8F(float *a1)
{
  float v2; // [esp-Ch] [ebp-Ch]
  float v3; // [esp-8h] [ebp-8h]
  float v4; // [esp-4h] [ebp-4h]

  *a1 = v2; /*0x6dead2*/
  a1[1] = v3; /*0x6dead8*/
  a1[2] = v4; /*0x6deadf*/
  return a1; /*0x6deae5*/
}
