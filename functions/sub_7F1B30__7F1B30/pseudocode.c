// Leaf-property virtual +0xA0. Returns STLSPData.leafConstantTable from property +0xA8.
//
// [2026-10-02 Fallout comparative pass]
// Verified homolog of Fallout SpeedTreeLeafShaderProperty::GetLeafMaps 0x8220EDF8. Vtable +0xA0 (entry 0xA92A6C), returns float* payload+8 or null. Consumer 0x7F0BC0 copies exactly 0x300 bytes into shader object+0x7C.
float *__thiscall OB_SpeedTreeLeafShaderProperty_GetLeafConstantTable_010201A0(
        const OB_SpeedTreeLeafShaderProperty_010201A0 *this)
{
  OB_STLSPData_010201A0 *stlspData; // eax

  stlspData = this->stlspData; /*0x7f1b30*/
  if ( stlspData ) /*0x7f1b38*/
    return stlspData->leafConstantTable; /*0x7f1b3a*/
  else
    return 0; /*0x7f1b3e*/
}
