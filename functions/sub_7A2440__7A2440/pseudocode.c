double __thiscall sub_7A2440(float *this)
{
  double v1; // st4
  double v2; // st6
  double v3; // st4
  double v4; // st5
  double v5; // st6
  double v6; // st7
  double v7; // st7
  bool v9; // c0
  bool v10; // c3
  int v11; // [esp+0h] [ebp-4h]
  float v12; // [esp+0h] [ebp-4h]

  v1 = *(this + 1) - *(float *)&dword_B429AC;
  v2 = v1 * v1;
  v3 = *(this + 2) - *(float *)&dword_B429B0;
  v4 = v2;
  v5 = *(this + 3) - *(float *)&dword_B429B4;
  *(float *)&v11 = v3 * v3 + v4 + v5 * v5;
  v12 = 1.0 - (COERCE_FLOAT((v11 >> 1) + 0x1FC00000) - *(this + 0x11)) / (*(this + 0x10) - *(this + 0x11));
  v6 = v12;
  *(this + 5) = v12;
  if ( v12 > 1.0 )
  {
    v7 = 1.0;
LABEL_3:
    *(this + 5) = v7;
    return *(this + 5);
  }
  v9 = v6 > 0.0;
  v10 = 0.0 == v6;
  v7 = 0.0;
  if ( !v9 && !v10 )
    goto LABEL_3;
  return *(this + 5);
}
