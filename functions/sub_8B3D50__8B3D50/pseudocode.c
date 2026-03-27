float *__thiscall sub_8B3D50(float *this, float a2, float a3, float *a4, float *a5)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7

  *a4 = *(this + 0x1A) / *(this + 0x19);
  a4[1] = *(this + 0x1B) / *(this + 0x19);
  a4[2] = *(this + 0x1C) / *(this + 0x19);
  *a5 = (*(this + 0x1E) + *(this + 0x1F)) * a3;
  a5[5] = (*(this + 0x1D) + *(this + 0x1F)) * a3;
  a5[0xA] = (*(this + 0x1D) + *(this + 0x1E)) * a3;
  v7 = -(a3 * *(this + 0x20));
  a5[1] = v7;
  a5[4] = v7;
  v8 = -(a3 * *(this + 0x21));
  a5[6] = v8;
  a5[9] = v8;
  v9 = -(a3 * *(this + 0x22));
  a5[8] = v9;
  a5[2] = v9;
  *a5 = *a5 - (a4[1] * a4[1] + a4[2] * a4[2]) * a2;
  a5[5] = a5[5] - (*a4 * *a4 + a4[2] * a4[2]) * a2;
  a5[0xA] = a5[0xA] - (*a4 * *a4 + a4[1] * a4[1]) * a2;
  v10 = *a4 * a4[1] * a2 + a5[1];
  a5[1] = v10;
  a5[4] = v10;
  v11 = a4[2] * a4[1] * a2 + a5[6];
  a5[6] = v11;
  a5[9] = v11;
  v12 = a4[2] * *a4 * a2 + a5[8];
  a5[8] = v12;
  a5[2] = v12;
  return a5;
}
