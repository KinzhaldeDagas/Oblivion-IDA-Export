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

  v9 = *(this + 0x1B);
  v10 = *(this + 0x1C);
  v11 = *(this + 0x1D);
  sub_43F350(&v9);
  v4 = dbl_A68FE0;
  if ( v4 < v9 )
  {
    if ( v10 > v4 )
    {
      if ( v11 > v4 )
      {
        v9 = *a2 - *(this + 0xF);
        v10 = a2[1] - *(this + 0x10);
        v11 = a2[2] - *(this + 0x11);
        v6 = v10;
        v7 = v9;
        v12 = *(this + 0x14) * v11 + *(this + 0x12) * v9 + *(this + 0x13) * v10;
        v8 = v11;
        *a3 = v12 / (*(this + 0x1B) * *(this + 0x1B));
        v13 = *(this + 0x16) * v6 + *(this + 0x15) * v7 + *(this + 0x17) * v8;
        a3[1] = v13 / (*(this + 0x1C) * *(this + 0x1C));
        v14 = v8 * *(this + 0x1A) + v7 * *(this + 0x18) + v6 * *(this + 0x19);
        a3[2] = v14 / (*(this + 0x1D) * *(this + 0x1D));
        sub_43F350(a3);
      }
      else
      {
        *a3 = *(this + 0x18);
        a3[1] = *(this + 0x19);
        a3[2] = *(this + 0x1A);
      }
    }
    else
    {
      *a3 = *(this + 0x15);
      a3[1] = *(this + 0x16);
      a3[2] = *(this + 0x17);
    }
  }
  else
  {
    *a3 = *(this + 0x12);
    a3[1] = *(this + 0x13);
    a3[2] = *(this + 0x14);
  }
}
