// Lighting-property virtual +0x6C. Returns STSPData.streamData from property +0xA4 or zero.
int __thiscall OB_SpeedTreeShaderLightingProperty_GetSTSPData_010201A0(
        OB_SpeedTreeShaderLightingProperty_010201A0 *this)
{
  int stspData; // eax

  stspData = this->stspData; /*0x7f1a70*/
  if ( stspData ) /*0x7f1a78*/
    return *(_DWORD *)(stspData + 8); /*0x7f1a7a*/
  else
    return 0; /*0x7f1a7e*/
}
