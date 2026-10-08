// Lighting-property virtual +0x74. Writes STSPData.streamData and vertex-count/ownership gate through property +0xA4.
int __thiscall OB_SpeedTreeShaderLightingProperty_SetSTSPData_010201A0(
        OB_SpeedTreeShaderLightingProperty_010201A0 *this,
        int streamData,
        unsigned __int16 vertexCount)
{
  int result; // eax

  result = this->stspData; /*0x7f1ab0*/
  if ( result ) /*0x7f1ab8*/
  {
    *(_DWORD *)(result + 8) = streamData; /*0x7f1ac3*/
    *(_WORD *)(result + 0xC) = vertexCount; /*0x7f1ac6*/
  }
  return result; /*0x7f1aca*/
}
