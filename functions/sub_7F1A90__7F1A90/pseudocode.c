// Lighting-property virtual +0x70. Returns the 16-bit STSPData vertex count from property +0xA4 or zero.
int __thiscall OB_SpeedTreeShaderLightingProperty_GetSTSPCount_010201A0(
        OB_SpeedTreeShaderLightingProperty_010201A0 *this)
{
  int stspData; // eax

  stspData = this->stspData; /*0x7f1a90*/
  if ( stspData ) /*0x7f1a98*/
    return *(unsigned __int16 *)(stspData + 0xC); /*0x7f1a9a*/
  else
    return 0; /*0x7f1a9f*/
}
