void __thiscall sub_8B1B40(float *this, float *a2)
{
  double v2; // st7
  long double v3; // st7
  long double v4; // st6
  double v5; // st7
  bool v6; // c0
  bool v7; // c3
  int v8; // esi
  int v9; // eax
  int v10; // edi
  long double v11; // st6
  long double v12; // st7
  _DWORD v13[3]; // [esp+4h] [ebp-Ch]

  v2 = a2[5] + *a2 + a2[0xA];
  if ( v2 <= *(float *)&SrcStr )
  {
    v5 = a2[5];
    v6 = v5 < *a2;
    v7 = v5 == *a2;
    v13[0] = 1;
    v13[1] = 2;
    v13[2] = 0;
    v8 = !v6 && !v7;
    if ( a2[0xA] > (double)a2[5 * v8] )
      v8 = 2;
    v9 = v13[v8];
    v10 = v13[v9];
    v11 = sqrt(a2[5 * v8] - (a2[5 * v10] + a2[5 * v9]) + fConstant_1);
    v12 = flt_A3D65C / v11;
    *(this + v8) = v11 * flt_A3D65C;
    *(this + 3) = (a2[4 * v9 + v10] - a2[4 * v10 + v9]) * v12;
    *(this + v9) = (a2[4 * v9 + v8] + a2[4 * v8 + v9]) * v12;
    *(this + v10) = (a2[4 * v10 + v8] + a2[4 * v8 + v10]) * v12;
  }
  else
  {
    v3 = sqrt(v2 + fConstant_1);
    v4 = flt_A3D65C / v3;
    *this = (a2[6] - a2[9]) * v4;
    *(this + 1) = (a2[8] - a2[2]) * v4;
    *(this + 2) = (a2[1] - a2[4]) * v4;
    *(this + 3) = v3 * flt_A3D65C;
  }
}
