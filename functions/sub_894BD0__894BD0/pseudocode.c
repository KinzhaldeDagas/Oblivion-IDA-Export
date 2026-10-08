// [Controller decode 2026-07-09] Sets bhkCharacterController target size. Clamps oversized values, treats <=0 as default size, starts transition.
void __thiscall bhkCharacterController_SetTargetSize(int this, float a2)
{
  double v3; // st7
  double v4; // st7
  float v5; // [esp+8h] [ebp+4h]

  if ( (*(_BYTE *)(this + 0x1F4) & 1) == 0 ) /*0x894bda*/
  {
    v3 = *(float *)(this + 0x3A4) * dbl_A2FAA0; /*0x894be6*/
    if ( a2 > v3 ) /*0x894bf7*/
      a2 = v3; /*0x894bfb*/
    v4 = a2; /*0x894bff*/
    if ( a2 <= 0.0 ) /*0x894c10*/
      v4 = *(float *)(this + 0x3A0); /*0x894c14*/
    v5 = v4; /*0x894c1a*/
    if ( *(float *)(this + 0x3A8) != v5 ) /*0x894c2f*/
    {
      if ( *(_DWORD *)(this + 0x370) == 2 ) /*0x894c38*/
      {
        *(_DWORD *)(this + 0x370) = *(_DWORD *)(this + 0x36C); /*0x894c42*/
        bhkCharacterController_SetShapeType((int ***)this, 0); /*0x894c48*/
      }
      *(_DWORD *)(this + 0x3AC) = 2; /*0x894c51*/
      *(float *)(this + 0x3A8) = v5; /*0x894c5b*/
    }
  }
}
