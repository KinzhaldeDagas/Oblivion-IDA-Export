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

  *(this + 0x1F) = a2 + *(this + 0x1F);
  v7 = a3 - *(this + 0x24);
  v8 = v7 / *(this + 0x54);
  v9 = ceil(v8);
  v4 = Double_To_SInt32(v9);
  *(this + 0x24) = (double)v4 * *(this + 0x54) + *(this + 0x24);
  sub_7F3130(this, v4);
  v13 = (double)*((int *)this + 0x53) * *(this + 0x54);
  v5 = *(this + 0x24);
  if ( v13 <= v5 )
    v5 = v13;
  v10 = v5;
  v11 = *(this + 0x24) - v10;
  v6 = v11;
  if ( v11 < dbl_A2FC68 )
    v6 = 0.0;
  *((_DWORD *)this + 0x65) += v4;
  v12 = v6;
  *(this + 0x63) = v12;
}
