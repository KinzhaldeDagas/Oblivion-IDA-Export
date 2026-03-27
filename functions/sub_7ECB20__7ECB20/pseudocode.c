int *sub_7ECB20()
{
  double v0; // st7
  float v1; // ebx
  float v2; // ebp
  float v3; // esi
  int v4; // edx
  float v5; // edi
  int *v6; // eax
  int *result; // eax

  if ( (dword_B466D8 & 1) == 0 )
  {
    v0 = flt_A37080;
    dword_B466D8 |= 1u;
    flt_B466C8 = v0;
    flt_B466CC = 0.0;
    flt_B466D0 = 0.0;
    flt_B466D4 = 0.0;
  }
  v1 = flt_B466CC;
  v2 = flt_B466C8;
  v3 = flt_B466D4;
  v4 = 0;
  v5 = flt_B466D0;
  dword_B46138[0] = 0;
  dword_B4613C = 0;
  dword_B46140 = 0;
  dword_B46144 = 0;
  dword_B46148 = 0;
  dword_B4614C = 0;
  dword_B46150 = 0;
  dword_B46154 = 0;
  do
  {
    v6 = &dword_B46498 + 4 * (unsigned __int16)(v4 + 0x11);
    *(float *)v6 = v2;
    *((float *)v6 + 1) = v1;
    *((float *)v6 + 2) = v5;
    *((float *)v6 + 3) = v3;
    result = &dword_B46498 + 4 * (unsigned __int16)(v4 + 1);
    *result = dword_B25AD0;
    result[1] = dword_B25AD4;
    result[2] = dword_B25AD8;
    ++v4;
    result[3] = dword_B25ADC;
  }
  while ( v4 < 8 );
  return result;
}
