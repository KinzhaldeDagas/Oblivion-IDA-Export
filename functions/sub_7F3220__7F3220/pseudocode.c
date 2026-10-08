void __thiscall sub_7F3220(float *this, float a2, float a3)
{
  int v4; // edi
  double v5; // st7
  double v6; // st7
  float v7; // [esp+14h] [ebp+4h]
  float v8; // [esp+14h] [ebp+4h]
  float v9; // [esp+14h] [ebp+4h]
  float v10; // [esp+14h] [ebp+4h]
  float v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+14h] [ebp+4h]
  float v13; // [esp+18h] [ebp+8h]

  *(this + 0x1F) = a2 + *(this + 0x1F); /*0x7f322e*/
  v7 = a3 - *(this + 0x24); /*0x7f323b*/
  v8 = v7 / *(this + 0x54); /*0x7f3249*/
  v9 = ceil(v8); /*0x7f3259*/
  v4 = Double_To_SInt32(v9); /*0x7f3269*/
  *(this + 0x24) = (double)v4 * *(this + 0x54) + *(this + 0x24); /*0x7f3282*/
  sub_7F3130(this, v4); /*0x7f3288*/
  v13 = (double)*((int *)this + 0x53) * *(this + 0x54); /*0x7f32a3*/
  v5 = *(this + 0x24); /*0x7f32a7*/
  if ( v13 <= v5 ) /*0x7f32b6*/
    v5 = v13; /*0x7f32bc*/
  v10 = v5; /*0x7f32be*/
  v11 = *(this + 0x24) - v10; /*0x7f32cc*/
  v6 = v11; /*0x7f32d0*/
  if ( v11 < dbl_A2FC68 ) /*0x7f32df*/
    v6 = 0.0; /*0x7f32e3*/
  *((_DWORD *)this + 0x65) += v4; /*0x7f32e5*/
  v12 = v6; /*0x7f32eb*/
  *(this + 0x63) = v12; /*0x7f32f4*/
}
