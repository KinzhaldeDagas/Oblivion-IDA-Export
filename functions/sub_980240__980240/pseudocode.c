void __thiscall sub_980240(float *this, float *a2, float *a3)
{
  double v4; // st6
  double v6; // st5
  double v7; // st6
  double v8; // st7
  float v9; // [esp+4h] [ebp-Ch] BYREF
  float v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+Ch] [ebp-4h]
  float v12; // [esp+14h] [ebp+4h]
  float v13; // [esp+18h] [ebp+8h]
  float v14; // [esp+18h] [ebp+8h]

  v9 = *(this + 0x1B); /*0x98024d*/
  v10 = *(this + 0x1C); /*0x980254*/
  v11 = *(this + 0x1D); /*0x98025b*/
  Vector3_NormalizeInPlace(&v9); /*0x98025f*/
  v4 = dbl_A68FE0; /*0x98026a*/
  if ( v4 < v9 ) /*0x980279*/
  {
    if ( v10 > v4 ) /*0x9802a4*/
    {
      if ( v11 > v4 ) /*0x9802cf*/
      {
        v9 = *a2 - *(this + 0xF); /*0x9802fa*/
        v10 = a2[1] - *(this + 0x10); /*0x980304*/
        v11 = a2[2] - *(this + 0x11); /*0x98030e*/
        v6 = v10; /*0x980318*/
        v7 = v9; /*0x98032b*/
        v12 = *(this + 0x14) * v11 + *(this + 0x12) * v9 + *(this + 0x13) * v10; /*0x98033e*/
        v8 = v11; /*0x98034c*/
        *a3 = v12 / (*(this + 0x1B) * *(this + 0x1B)); /*0x98034e*/
        v13 = *(this + 0x16) * v6 + *(this + 0x15) * v7 + *(this + 0x17) * v8; /*0x980366*/
        a3[1] = v13 / (*(this + 0x1C) * *(this + 0x1C)); /*0x980372*/
        v14 = v8 * *(this + 0x1A) + v7 * *(this + 0x18) + v6 * *(this + 0x19); /*0x980391*/
        a3[2] = v14 / (*(this + 0x1D) * *(this + 0x1D)); /*0x98039d*/
        Vector3_NormalizeInPlace(a3); /*0x9803a0*/
      }
      else
      {
        *a3 = *(this + 0x18); /*0x9802d8*/
        a3[1] = *(this + 0x19); /*0x9802dd*/
        a3[2] = *(this + 0x1A); /*0x9802e3*/
      }
    }
    else
    {
      *a3 = *(this + 0x15); /*0x9802af*/
      a3[1] = *(this + 0x16); /*0x9802b4*/
      a3[2] = *(this + 0x17); /*0x9802ba*/
    }
  }
  else
  {
    *a3 = *(this + 0x12); /*0x980284*/
    a3[1] = *(this + 0x13); /*0x980289*/
    a3[2] = *(this + 0x14); /*0x98028f*/
  }
}
