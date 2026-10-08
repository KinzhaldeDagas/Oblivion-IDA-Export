// Copies up to 0xC0 floats into the STLSPData 0x300-byte leaf constant table and zero-fills the remainder.
//
// [2026-10-02 Fallout comparative pass]
// Verified homolog of Fallout STLSPData::SetLeafMaps (0x828CDC88): ECX=this, two 32-bit stack arguments, RET 8. If source is null, table is null, or count is zero: no writes, existing table remains unchanged. Otherwise copy min(count,192) floats and zero remaining floats only for count<192. EDI is saved scratch, not an input argument. Caller 0x5605AB copies GetLeafBillboardTable output; property virtual wrapper 0x7F1B50 tail-jumps here. Refreshed stale Hex-Rays output removes a false EDI/64-bit memcpy-size artifact; no global size_t change made.
void __thiscall OB_STLSPData_CopyLeafConstants_010201A0(
        OB_STLSPData_010201A0 *this,
        const float *leafMaps,
        unsigned int floatCount)
{
  float *leafConstantTable; // eax
  unsigned int v5; // esi

  if ( leafMaps ) /*0x7f18a9*/
  {
    leafConstantTable = this->leafConstantTable; /*0x7f18ab*/
    if ( leafConstantTable ) /*0x7f18b0*/
    {
      v5 = floatCount; /*0x7f18b3*/
      if ( floatCount ) /*0x7f18b9*/
      {
        if ( floatCount >= 0xC0 ) /*0x7f18c1*/
          v5 = 0xC0; /*0x7f18c3*/
        memcpy(leafConstantTable, leafMaps, 4 * v5); /*0x7f18d3*/
        if ( v5 < 0xC0 ) /*0x7f18e1*/
          _memset((int)&this->leafConstantTable[v5], 0, 4 * (0xC0 - v5)); /*0x7f18f7*/
      }
    }
  }
}
