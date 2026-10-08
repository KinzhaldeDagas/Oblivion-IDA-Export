void __thiscall sub_6CB3C0(float *this, int a2)
{
  double v4; // st7
  float *v5; // eax
  float v6; // [esp+10h] [ebp-14h]
  float v7; // [esp+10h] [ebp-14h]
  float v8; // [esp+10h] [ebp-14h]
  float v9[4]; // [esp+14h] [ebp-10h] BYREF
  float v10; // [esp+28h] [ebp+4h]

  v6 = -flt_A7DEB4; /*0x6cb3ce*/
  v4 = v6; /*0x6cb3e4*/
  if ( v6 == *(this + 7) ) /*0x6cb3e9*/
    goto LABEL_5; /*0x6cb3e9*/
  v10 = 1.0 / *(this + 7); /*0x6cb3f7*/
  if ( !_isnan(v10) && _finite(v10) ) /*0x6cb418*/
  {
    v4 = v10; /*0x6cb424*/
LABEL_5:
    *(float *)(a2 + 0x1C) = v4; /*0x6cb428*/
  }
  v7 = -flt_A7DEB4; /*0x6cb42b*/
  if ( v7 == *(this + 4) ) /*0x6cb449*/
  {
    *(float *)(a2 + 0x10) = v7; /*0x6cb44b*/
  }
  else
  {
    v5 = sub_714D80(v9, this + 3); /*0x6cb45b*/
    sub_471430((_DWORD *)a2, v5); /*0x6cb466*/
  }
  v8 = -flt_A7DEB4; /*0x6cb473*/
  if ( v8 == *this ) /*0x6cb488*/
  {
    *(float *)a2 = v8; /*0x6cb48a*/
  }
  else
  {
    v9[0] = -*this; /*0x6cb4a1*/
    v9[1] = -*(this + 1); /*0x6cb4aa*/
    v9[2] = -*(this + 2); /*0x6cb4b3*/
    sub_471390((_DWORD *)a2, v9); /*0x6cb4b7*/
  }
}
