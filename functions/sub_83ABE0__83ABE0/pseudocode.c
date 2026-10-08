float *__stdcall sub_83ABE0(int a1, int a2, int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  double v5; // st7
  unsigned int v7; // [esp+Ch] [ebp-8h]

  v3 = dword_B25AD0; /*0x83abea*/
  v4 = dword_B25AD4; /*0x83abf0*/
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 0xB4) + 0x24) ) /*0x83ac04*/
    *(float *)&v3 = 1.0; /*0x83ac15*/
  if ( a2 ) /*0x83ac1e*/
    *(float *)&v4 = 1.0; /*0x83ac24*/
  if ( a3 ) /*0x83ac32*/
    v5 = *(float *)(a3 + 0x4C); /*0x83ac34*/
  else
    v5 = flt_A37CC8; /*0x83ac39*/
  *(float *)&v7 = v5; /*0x83ac42*/
  return OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Fu, v3, v4, v7, dword_B25ADC); /*0x83ac61*/
}
