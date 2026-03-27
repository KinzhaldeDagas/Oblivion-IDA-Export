int *__stdcall sub_85BEA0(int a1, int a2, int a3)
{
  int v3; // ecx
  double v4; // st7
  int v6; // [esp+8h] [ebp-8h]

  v3 = dword_B25AD4;
  if ( a2 )
    *(float *)&v3 = 1.0;
  if ( a3 )
    v4 = *(float *)(a3 + 0x4C);
  else
    v4 = flt_A37CC8;
  *(float *)&v6 = v4;
  return sub_7ECAE0(0x1Fu, COERCE_INT(1.0), v3, v6, dword_B25ADC);
}
