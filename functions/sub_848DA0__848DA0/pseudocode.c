int *__stdcall sub_848DA0(float *a1)
{
  double v1; // st7
  float v3; // [esp+0h] [ebp-1Ch]
  float v4; // [esp+4h] [ebp-18h]
  float v5; // [esp+8h] [ebp-14h]
  float v6; // [esp+20h] [ebp+4h]

  v3 = a1[0x10];
  v4 = a1[0x11];
  v5 = a1[0x12];
  if ( UseHDR )
  {
    if ( byte_B43074 )
      v1 = flt_B4320C;
    else
      v1 = flt_B43208;
    v6 = v1;
    v3 = v6 * v3;
    v4 = v6 * v4;
    v5 = v6 * v5;
  }
  return sub_7ECAE0(0x19u, SLODWORD(v3), SLODWORD(v4), SLODWORD(v5), COERCE_INT(1.0));
}
