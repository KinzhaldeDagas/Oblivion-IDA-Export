// PPLighting-property virtual +0xA8. Returns the 16-bit STSPData vertex count from property +0xF0 or zero.
int __thiscall OB_SpeedTreeShaderPPLightingProperty_GetSTSPCount_010201A0(
        OB_SpeedTreeShaderPPLightingProperty_010201A0 *this)
{
  int stspData; // eax

  stspData = this->stspData; /*0x7f2110*/
  if ( stspData ) /*0x7f2118*/
    return *(unsigned __int16 *)(stspData + 0xC); /*0x7f211a*/
  else
    return 0; /*0x7f211f*/
}
