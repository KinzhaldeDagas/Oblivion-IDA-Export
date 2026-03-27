int *__stdcall sub_83ABE0(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  double v5; // st7
  int v7; // [esp+Ch] [ebp-8h]

  v3 = dword_B25AD0;
  v4 = dword_B25AD4;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 0xB4) + 0x24) )
    *(float *)&v3 = 1.0;
  if ( a2 )
    *(float *)&v4 = 1.0;
  if ( a3 )
    v5 = *(float *)(a3 + 0x4C);
  else
    v5 = flt_A37CC8;
  *(float *)&v7 = v5;
  return sub_7ECAE0(0x1Fu, v3, v4, v7, dword_B25ADC);
}
