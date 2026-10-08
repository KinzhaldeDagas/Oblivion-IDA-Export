//
//
// [2026-10-03 Fallout comparison] Verified NiAdditionalGeometryData::SetDataBlockCount: adds 0x1C (m_aDataBlocks) to ECX and tailcalls NiTArray_SetSize. Analogous Fallout named function 0x82BF94B8. This resizes data blocks, not stream descriptors.
void __thiscall OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(unsigned __int16 *this, unsigned int a2)
{
  NiTArray_SetSize(this + 0xE, a2); /*0x7263b3*/
}
