void __thiscall sub_6CB3C0(float *this, int a2)
{
  double v4; // st7
  float *v5; // eax
  float v6; // [esp+10h] [ebp-14h]
  float v7; // [esp+10h] [ebp-14h]
  float v8; // [esp+10h] [ebp-14h]
  float v9[4]; // [esp+14h] [ebp-10h] BYREF
  float v10; // [esp+28h] [ebp+4h]

  v6 = -flt_A7DEB4;
  v4 = v6;
  if ( v6 == *(this + 7) )
    goto LABEL_5;
  v10 = 1.0 / *(this + 7);
  if ( !_isnan(v10) && _finite(v10) )
  {
    v4 = v10;
LABEL_5:
    *(float *)(a2 + 0x1C) = v4;
  }
  v7 = -flt_A7DEB4;
  if ( v7 == *(this + 4) )
  {
    *(float *)(a2 + 0x10) = v7;
  }
  else
  {
    v5 = sub_714D80(v9, this + 3);
    sub_471430((_DWORD *)a2, v5);
  }
  v8 = -flt_A7DEB4;
  if ( v8 == *this )
  {
    *(float *)a2 = v8;
  }
  else
  {
    v9[0] = -*this;
    v9[1] = -*(this + 1);
    v9[2] = -*(this + 2);
    sub_471390((_DWORD *)a2, v9);
  }
}
