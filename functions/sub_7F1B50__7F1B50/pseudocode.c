// Leaf-property virtual +0xA4. Forwards to STLSPData copy helper through property +0xA8.
//
// [2026-10-02 Fallout comparative pass]
// Verified homolog of Fallout SpeedTreeLeafShaderProperty::SetLeafMaps 0x828CDE30. Vtable +0xA4 (entry 0xA92A70); forwards the two stack arguments to 0x7F18A0 with ECX=property+0xA8 payload, or RET 8 if payload is null. No EDI argument.
void __thiscall OB_SpeedTreeLeafShaderProperty_CopyLeafConstants_010201A0(
        OB_SpeedTreeLeafShaderProperty_010201A0 *this,
        const float *leafMaps,
        unsigned int floatCount)
{
  OB_STLSPData_010201A0 *stlspData; // ecx

  stlspData = this->stlspData; /*0x7f1b50*/
  if ( stlspData ) /*0x7f1b58*/
    OB_STLSPData_CopyLeafConstants_010201A0(stlspData, leafMaps, floatCount); /*0x7f1b5a*/
}
