float *__thiscall sub_8B3D50(float *this, float a2, float a3, float *a4, float *a5)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7

  *a4 = *(this + 0x1A) / *(this + 0x19); /*0x8b3d5e*/
  a4[1] = *(this + 0x1B) / *(this + 0x19); /*0x8b3d66*/
  a4[2] = *(this + 0x1C) / *(this + 0x19); /*0x8b3d6f*/
  *a5 = (*(this + 0x1E) + *(this + 0x1F)) * a3; /*0x8b3d7c*/
  a5[5] = (*(this + 0x1D) + *(this + 0x1F)) * a3; /*0x8b3d88*/
  a5[0xA] = (*(this + 0x1D) + *(this + 0x1E)) * a3; /*0x8b3d95*/
  v7 = -(a3 * *(this + 0x20)); /*0x8b3da2*/
  a5[1] = v7; /*0x8b3da4*/
  a5[4] = v7; /*0x8b3da7*/
  v8 = -(a3 * *(this + 0x21)); /*0x8b3db4*/
  a5[6] = v8; /*0x8b3db6*/
  a5[9] = v8; /*0x8b3db9*/
  v9 = -(a3 * *(this + 0x22)); /*0x8b3dc6*/
  a5[8] = v9; /*0x8b3dc8*/
  a5[2] = v9; /*0x8b3dcb*/
  *a5 = *a5 - (a4[1] * a4[1] + a4[2] * a4[2]) * a2; /*0x8b3de4*/
  a5[5] = a5[5] - (*a4 * *a4 + a4[2] * a4[2]) * a2; /*0x8b3e00*/
  a5[0xA] = a5[0xA] - (*a4 * *a4 + a4[1] * a4[1]) * a2; /*0x8b3e1d*/
  v10 = *a4 * a4[1] * a2 + a5[1]; /*0x8b3e2d*/
  a5[1] = v10; /*0x8b3e30*/
  a5[4] = v10; /*0x8b3e33*/
  v11 = a4[2] * a4[1] * a2 + a5[6]; /*0x8b3e40*/
  a5[6] = v11; /*0x8b3e43*/
  a5[9] = v11; /*0x8b3e46*/
  v12 = a4[2] * *a4 * a2 + a5[8]; /*0x8b3e52*/
  a5[8] = v12; /*0x8b3e55*/
  a5[2] = v12; /*0x8b3e58*/
  return a5; /*0x8b3e5b*/
}
