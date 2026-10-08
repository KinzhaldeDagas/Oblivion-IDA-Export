// Update only transition target/timer fields +0xDC/+0xE0. Direct callers are ShadowPass 0x00407868 and duplicate AddShadowCaster refresh 0x007C6CEB.
void __thiscall sub_7D1ED0(float *this, float a2, float a3)
{
  double v3; // st6
  double v4; // st6
  double v5; // st4
  float v6; // [esp+8h] [ebp+8h]

  if ( a2 != *(this + 0x37) ) /*0x7d1ee5*/
  {
    if ( LOBYTE(a3) ) /*0x7d1eec*/
    {
      *(this + 0x38) = 1.0; /*0x7d1ef0*/
      *(this + 0x37) = a2; /*0x7d1ef6*/
    }
    else
    {
      v3 = *(this + 0x38) / flt_B2C680; /*0x7d1f0d*/
      if ( v3 < 0.0 || v3 <= 1.0 ) /*0x7d1f25*/
      {
        if ( v3 < 0.0 ) /*0x7d1f38*/
          v3 = 0.0; /*0x7d1f3a*/
        v5 = v3; /*0x7d1f40*/
        v4 = 1.0; /*0x7d1f40*/
      }
      else
      {
        v4 = 1.0; /*0x7d1f27*/
        v5 = 1.0; /*0x7d1f2b*/
      }
      v6 = v5; /*0x7d1f42*/
      *(this + 0x38) = (v4 - v6) * flt_B2C680; /*0x7d1f4e*/
      *(this + 0x37) = a2; /*0x7d1f54*/
    }
  }
}
