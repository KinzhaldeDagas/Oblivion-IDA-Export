// Exterior fog-color decode: blends up to four packed weather RGB colors and weights into a Sky RGB vector; caller 0x5418F0 uses colorSlot 1 for active exterior fog color.
void __thiscall sub_5400E0(Sky *this, float *a2, float *a3, float a4)
{
  double v5; // st6
  double v6; // st4
  double v7; // st2
  double v8; // st5
  TESWeather *firstWeather; // eax
  double v10; // st3
  double v11; // st5
  double v12; // rt1
  double v13; // st3
  float v14; // [esp+8h] [ebp+8h]
  float v15; // [esp+8h] [ebp+8h]
  float v16; // [esp+8h] [ebp+8h]
  float v17; // [esp+8h] [ebp+8h]
  float v18; // [esp+8h] [ebp+8h]
  float v19; // [esp+8h] [ebp+8h]
  float v20; // [esp+8h] [ebp+8h]
  float v21; // [esp+8h] [ebp+8h]
  float v22; // [esp+8h] [ebp+8h]
  float v23; // [esp+8h] [ebp+8h]
  float v24; // [esp+8h] [ebp+8h]
  float v25; // [esp+8h] [ebp+8h]
  float v26; // [esp+8h] [ebp+8h]
  float v27; // [esp+Ch] [ebp+Ch]
  float v28; // [esp+Ch] [ebp+Ch]
  float v29; // [esp+Ch] [ebp+Ch]
  float v30; // [esp+Ch] [ebp+Ch]

  v14 = (double)*(unsigned __int8 *)a3 * a3[4] + 0.0;// Fog weather-field decode: RGB helper accumulates packed color[0].r * weight[0]; caller 0x5418F0 supplies weather color slots including fog slot 1. /*0x5400ff*/
  v15 = v14 + (double)*((unsigned __int8 *)a3 + 4) * a3[5];// Fog weather-field decode: RGB helper adds packed color[1].r * weight[1] for adjacent phase or second-weather blend. /*0x540118*/
  v16 = v15 + (double)*((unsigned __int8 *)a3 + 8) * a3[6];// Fog weather-field decode: RGB helper adds packed color[2].r * weight[2] when transition contributes a second weather. /*0x540131*/
  v17 = v16 + (double)*((unsigned __int8 *)a3 + 0xC) * a3[7];// Fog weather-field decode: RGB helper adds packed color[3].r * weight[3] before 1/255 normalization. /*0x54014a*/
  v5 = dbl_A3F398; /*0x54015a*/
  *a2 = v17 * v5;                               // Exterior fog-color decode: writes blended RGB.r to caller-provided Sky color vector; for colorSlot 1 this is Sky+0x48 fogColor.r. /*0x54015c*/
  v18 = (double)*((unsigned __int8 *)a3 + 1) * a3[4] + 0.0; /*0x540173*/
  v19 = v18 + (double)*((unsigned __int8 *)a3 + 5) * a3[5]; /*0x54018c*/
  v20 = v19 + (double)*((unsigned __int8 *)a3 + 9) * a3[6]; /*0x5401a5*/
  v21 = v20 + (double)*((unsigned __int8 *)a3 + 0xD) * a3[7]; /*0x5401ba*/
  a2[1] = v21 * v5;                             // Exterior fog-color decode: writes blended RGB.g to caller-provided Sky color vector; for colorSlot 1 this is Sky+0x4C fogColor.g. /*0x5401c4*/
  v22 = (double)*((unsigned __int8 *)a3 + 2) * a3[4] + 0.0; /*0x5401dc*/
  v23 = v22 + (double)*((unsigned __int8 *)a3 + 6) * a3[5]; /*0x5401f1*/
  v24 = v23 + (double)*((unsigned __int8 *)a3 + 0xA) * a3[6]; /*0x54020e*/
  v25 = v24 + (double)*((unsigned __int8 *)a3 + 0xE) * a3[7]; /*0x540224*/
  v26 = v25 * v5; /*0x54022e*/
  a2[2] = v26;                                  // Exterior fog-color decode: writes blended RGB.b to caller-provided Sky color vector; for colorSlot 1 this is Sky+0x50 fogColor.b. /*0x540236*/
  if ( a4 <= 1.0 ) /*0x540248*/
  {
    if ( a4 <= 0.0 ) /*0x54025f*/
    {
LABEL_18:
      sub_709340(a2); /*0x540365*/
      return; /*0x540371*/
    }
    v7 = a4; /*0x540265*/
    v6 = 0.0; /*0x540265*/
  }
  else
  {
    v6 = 0.0; /*0x54024a*/
    v7 = (float)1.0; /*0x540252*/
  }
  v27 = *a2 + v7; /*0x54026b*/
  *a2 = v27; /*0x540273*/
  a2[1] = a2[1] + v7; /*0x54027a*/
  v8 = v27; /*0x54027d*/
  a2[2] = v7 + v26; /*0x540281*/
  firstWeather = this->firstWeather;            // Fog weather-field decode: RGB helper optionally clamps blended color against firstWeather +0x54/+0x55/+0x56 per-channel caps after additive weather contribution. /*0x540284*/
  if ( !firstWeather ) /*0x540289*/
    goto LABEL_18; /*0x540289*/
  v10 = 1.0 - 0.0; /*0x540293*/
  v28 = (double)*((unsigned __int8 *)firstWeather + 0x54) * v5 * (1.0 - 0.0) + 0.0;// Fog weather-field decode: red channel cap uses firstWeather byte +0x54 scaled by 1/255; cap applies to caller target including fog color slot 1. /*0x5402a3*/
  if ( v28 >= v8 ) /*0x5402b2*/
  {
    v12 = v10; /*0x5402be*/
    v13 = v8; /*0x5402be*/
    v11 = v12; /*0x5402be*/
    if ( v13 < v6 ) /*0x5402c7*/
      *a2 = v6; /*0x5402c9*/
  }
  else
  {
    v11 = v10; /*0x5402b6*/
    *a2 = v28; /*0x5402b8*/
  }
  v29 = (double)*((unsigned __int8 *)this->firstWeather + 0x55) * v5 * v11 + 0.0;// Fog weather-field decode: green channel cap uses firstWeather byte +0x55 scaled by 1/255; cap applies to caller target including fog color slot 1. /*0x5402e0*/
  if ( v29 >= (double)a2[1] ) /*0x5402f4*/
  {
    if ( v6 > a2[1] ) /*0x540305*/
      a2[1] = v6; /*0x540307*/
  }
  else
  {
    a2[1] = v29; /*0x5402f6*/
  }
  v30 = v11 * (v5 * (double)*((unsigned __int8 *)this->firstWeather + 0x56)) + 0.0;// Fog weather-field decode: blue channel cap uses firstWeather byte +0x56 scaled by 1/255; cap applies to caller target including fog color slot 1. /*0x540323*/
  if ( v30 >= (double)a2[2] ) /*0x540337*/
  {
    if ( v6 > a2[2] ) /*0x54034b*/
      a2[2] = v6; /*0x54034d*/
  }
  else
  {
    a2[2] = v30; /*0x54033b*/
  }
}
