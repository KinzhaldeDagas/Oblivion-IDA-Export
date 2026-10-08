//
//
// [2026-10-02 Fallout comparative pass]
// Verified 0xB0-byte leaf property layout: base constructor receives STSPData; retains STLSPData at +0xA8 and stores unsigned leaf LOD at +0xAC. Fallout constructor 0x828CDD50 corroborates parameter roles; platform-specific property offsets and calling convention remain Oblivion-derived.
OB_SpeedTreeLeafShaderProperty_010201A0 *__thiscall SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(
        OB_SpeedTreeLeafShaderProperty_010201A0 *this,
        unsigned __int16 leafLodIndex,
        OB_STSPData_010201A0 *stspData,
        OB_STLSPData_010201A0 *stlspData)
{
  OB_STLSPData_010201A0 *v5; // edi

  OB_SpeedTreeShaderLightingProperty_ctorWithSTSP_010201A0((SpeedTreeShaderLightingProperty *)this, (int)stspData); /*0x7f198f*/
  *(_DWORD *)this->gap0 = &SpeedTreeLeafShaderProperty::`vftable'; /*0x7f1994*/
  this->stlspData = 0; /*0x7f19a2*/
  v5 = this->stlspData; /*0x7f19ac*/
  if ( v5 == stlspData ) /*0x7f19bd*/
  {
    this->leafLodIndex = leafLodIndex; /*0x7f1a14*/
  }
  else
  {
    if ( v5 ) /*0x7f19c1*/
    {
      if ( !InterlockedDecrement(&v5->refCount) ) /*0x7f19c7*/
        (*(void (__thiscall **)(OB_STLSPData_010201A0 *, int))v5->vtbl)(v5, 1); /*0x7f19dd*/
    }
    this->stlspData = stlspData; /*0x7f19e1*/
    if ( stlspData ) /*0x7f19e7*/
      InterlockedIncrement(&stlspData->refCount); /*0x7f19ed*/
    this->leafLodIndex = leafLodIndex; /*0x7f19f8*/
  }
  return this; /*0x7f1a1d*/
}
