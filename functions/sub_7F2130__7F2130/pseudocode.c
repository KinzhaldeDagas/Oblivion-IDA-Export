// PPLighting-property virtual +0xAC. Writes STSPData.streamData and vertex-count/ownership gate through property +0xF0.
int __thiscall OB_SpeedTreeShaderPPLightingProperty_SetSTSPData_010201A0(
        OB_SpeedTreeShaderPPLightingProperty_010201A0 *this,
        int streamData,
        unsigned __int16 vertexCount)
{
  int result; // eax

  result = this->stspData; /*0x7f2130*/
  if ( result ) /*0x7f2138*/
  {
    *(_DWORD *)(result + 8) = streamData; /*0x7f2143*/
    *(_WORD *)(result + 0xC) = vertexCount; /*0x7f2146*/
  }
  return result; /*0x7f214a*/
}
