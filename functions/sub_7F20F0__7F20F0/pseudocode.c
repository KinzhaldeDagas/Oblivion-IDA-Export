// PPLighting-property virtual +0xA4. Returns STSPData.streamData from property +0xF0 or zero.
int __thiscall OB_SpeedTreeShaderPPLightingProperty_GetSTSPData_010201A0(
        OB_SpeedTreeShaderPPLightingProperty_010201A0 *this)
{
  int stspData; // eax

  stspData = this->stspData; /*0x7f20f0*/
  if ( stspData ) /*0x7f20f8*/
    return *(_DWORD *)(stspData + 8); /*0x7f20fa*/
  else
    return 0; /*0x7f20fe*/
}
