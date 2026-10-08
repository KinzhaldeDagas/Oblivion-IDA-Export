// Leaf-property virtual +0x9C. Returns shared STLSPData ref at leaf property +0xA8.
//
// [2026-10-02 Fallout comparative pass]
// Verified property virtual +0x9C (0xA92A68): returns retained STLSPData pointer at property+0xA8. Used by SetupPass for scalar offsets +0x0C..+0x1C; typed owner chain restored in this pass.
OB_STLSPData_010201A0 *__thiscall OB_SpeedTreeLeafShaderProperty_GetSTLSPData_010201A0(
        OB_SpeedTreeLeafShaderProperty_010201A0 *this)
{
  return this->stlspData; /*0x7c2ce6*/
}
