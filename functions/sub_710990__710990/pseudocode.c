char __thiscall sub_710990(float *this, float *a2, float *a3)
{
  float v6; // [esp+8h] [ebp-14h]
  float v7; // [esp+8h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-10h]
  float v9; // [esp+Ch] [ebp-10h]
  float v10; // [esp+10h] [ebp-Ch]
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]
  float v13; // [esp+20h] [ebp+4h]
  float v14; // [esp+20h] [ebp+4h]
  float v15; // [esp+20h] [ebp+4h]
  float v16; // [esp+24h] [ebp+8h]
  float v17; // [esp+24h] [ebp+8h]

  v6 = *(this + 1); /*0x71099e*/
  v8 = *(this + 2); /*0x7109a5*/
  v10 = *(this + 4); /*0x7109ac*/
  v12 = *(this + 5); /*0x7109b3*/
  v11 = *(this + 8); /*0x7109ba*/
  *a2 = *this; /*0x7109c0*/
  v13 = fabs(v8); /*0x7109ca*/
  if ( v13 < (double)flt_A7E738 ) /*0x7109dd*/
  {
    a2[1] = v10; /*0x710ab9*/
    a2[2] = v11; /*0x710ac0*/
    *a3 = v6; /*0x710ac8*/
    a3[1] = v12; /*0x710ace*/
    *this = 1.0; /*0x710ad5*/
    *(this + 1) = 0.0; /*0x710ad9*/
    *(this + 2) = 0.0; /*0x710adc*/
    *(this + 3) = 0.0; /*0x710adf*/
    *(this + 5) = 0.0; /*0x710ae2*/
    *(this + 6) = 0.0; /*0x710ae5*/
    *(this + 7) = 0.0; /*0x710ae8*/
    *(this + 4) = 1.0; /*0x710aeb*/
    *(this + 8) = 1.0; /*0x710aee*/
    return 0; /*0x710ad1*/
  }
  else
  {
    v14 = v8 * v8 + v6 * v6; /*0x7109ed*/
    v15 = sqrt(v14); /*0x7109fa*/
    *a3 = v15; /*0x710a0e*/
    v16 = 1.0 / v15; /*0x710a14*/
    v7 = v16 * v6; /*0x710a22*/
    v9 = v16 * v8; /*0x710a2a*/
    v17 = (v7 + v7) * v12 + (v11 - v10) * v9; /*0x710a58*/
    a2[1] = v10 + v17 * v9; /*0x710a68*/
    a2[2] = v11 - v17 * v9; /*0x710a71*/
    a3[1] = v12 - v17 * v7; /*0x710a7f*/
    *this = 1.0; /*0x710a86*/
    *(this + 1) = 0.0; /*0x710a8a*/
    *(this + 2) = 0.0; /*0x710a8d*/
    *(this + 3) = 0.0; /*0x710a90*/
    *(this + 6) = 0.0; /*0x710a93*/
    *(this + 4) = v7; /*0x710a98*/
    *(this + 5) = v9; /*0x710a9d*/
    *(this + 7) = v9; /*0x710aa0*/
    *(this + 8) = -v7; /*0x710aa5*/
    return 1; /*0x710a82*/
  }
}
