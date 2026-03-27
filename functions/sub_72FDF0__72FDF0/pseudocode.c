int __thiscall sub_72FDF0(float *this)
{
  int result; // eax
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st4
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // rtt
  double v10; // st4
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+4h] [ebp-8h]
  float v14; // [esp+4h] [ebp-8h]
  float v15; // [esp+8h] [ebp-4h]
  float v16; // [esp+8h] [ebp-4h]
  float v17; // [esp+8h] [ebp-4h]
  float v18; // [esp+8h] [ebp-4h]

  v15 = cos(*(this + 2));
  v11 = sin(*(this + 2));
  result = *((_DWORD *)this + 0x11);
  if ( !result )
  {
    v7 = v11;
    v13 = *(this + 3) * v11;
    v8 = v15;
    *(this + 8) = *(this + 3) * v15;
    *(this + 0xB) = v13;
    *(this + 0xE) = 0.0;
    v14 = *(this + 4) * v15;
    v18 = -v7;
    *(this + 9) = v18 * *(this + 4);
    *(this + 0xC) = v14;
    v9 = v18;
    *(this + 0xF) = 0.0;
    v10 = *(this + 1) - *(this + 6);
    v17 = v8 * v10 + v7 * (*this - *(this + 5)) + *(this + 6);
    v6 = (*this - *(this + 5)) * v8 + v9 * v10;
    goto LABEL_5;
  }
  if ( !--result )
  {
    v2 = v11;
    v12 = -v11 * *(this + 4);
    v3 = v15;
    *(this + 8) = *(this + 3) * v15;
    *(this + 0xB) = v12;
    *(this + 0xE) = 0.0;
    v16 = *(this + 4) * v15;
    *(this + 9) = *(this + 3) * v2;
    *(this + 0xC) = v16;
    *(this + 0xF) = 0.0;
    v4 = *(this + 1) - *(this + 6);
    v5 = -*(this + 5) - *this;
    v17 = (v3 * v4 - v2 * v5) * *(this + 4) + *(this + 6);
    v6 = (v2 * v4 + v3 * v5) * *(this + 3);
LABEL_5:
    *(this + 0xA) = v6 + *(this + 5);
    *(this + 0xD) = v17;
    *(this + 0x10) = 1.0;
  }
  *((_BYTE *)this + 0x1C) = 0;
  return result;
}
