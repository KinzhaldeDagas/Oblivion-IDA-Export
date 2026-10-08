int __thiscall sub_61DD10(int this, int a2)
{
  double v2; // st7
  double v3; // st7
  int result; // eax
  float v5; // [esp+4h] [ebp-4h]

  v2 = *(float *)(this + 0x44); /*0x61dd11*/
  *(_BYTE *)(this + 0x48) = 0; /*0x61dd16*/
  *(float *)(this + 0xD4) = v2; /*0x61dd19*/
  *(float *)(this + 0xD8) = kHeadBodyNormalMatchRadius; /*0x61dd26*/
  v3 = kTerrainLODQuadRayDirectionZ; /*0x61dd31*/
  *(float *)(this + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x61dd37*/
  result = *(_DWORD *)(this + 0x6C); /*0x61dd3d*/
  if ( result == 0xD ) /*0x61dd42*/
    goto LABEL_14; /*0x61dd42*/
  if ( result == 4 ) /*0x61dd47*/
    *(float *)(this + 0xCC) = v3; /*0x61dd49*/
  if ( result == 6 ) /*0x61dd52*/
    *(_DWORD *)(this + 0x12C) = 0; /*0x61dd54*/
  if ( result == 4 ) /*0x61dd5d*/
  {
    v5 = g_GameSettingStringPointers_B36CD8[0xA6]; /*0x61dd65*/
    *(float *)(this + 0xEC) = *(float *)(this + 0x44); /*0x61dd6c*/
    *(float *)(this + 0xF0) = v5; /*0x61dd76*/
    *(float *)(this + 0xF4) = v3; /*0x61dd7c*/
  }
  result = *(_DWORD *)(this + 0x6C); /*0x61dd86*/
  if ( result == 4 || result == 7 || result == 9 || result == 8 ) /*0x61dd9b*/
  {
LABEL_14:
    *(_DWORD *)(this + 0x6C) = 0xD; /*0x61ddb3*/
  }
  else
  {
    *(_DWORD *)(this + 0x6C) = 0xD; /*0x61dda0*/
    if ( result != 0xC ) /*0x61dda3*/
      *(_BYTE *)(this + 0x191) = 1; /*0x61dda5*/
  }
  return result; /*0x61ddac*/
}
