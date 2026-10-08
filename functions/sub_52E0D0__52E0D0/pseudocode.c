// TRDT loader delegates to GetChunkData with max 16. Size 0 is a successful no-op; sizes 1..16 prefix-overlay constructor state; sizes >16 truncate to 15 bytes and force byte 15 to NUL while logging.
void __thiscall TESResponse::LoadTRDT(TESResponse *this, Data *file)
{
  if ( file ) /*0x52e0da*/
  {
    if ( TESFile_GetChunkType(file) == 0x54445254 ) /*0x52e0e8*/
      TESFile_GetChunkData(file, (char *)this, 0x10u);// Fixed max=16 does not require exact TRDT size. Short chunks leave the constructor/default suffix intact (bytes 13..15 were not explicitly initialized); oversized chunks are accepted after truncation. /*0x52e0ef*/
  }
}
