// XMRK companion loader owns cursor advancement. After XMRK it advances once, optionally consumes adjacent FNAM, requires/loads adjacent FULL, then advances and requires/loads adjacent TNAM. A nonmatching chunk at either required position is swallowed from outer dispatch. FNAM max1: empty retains, exact1 replaces, >1 forces 0. TNAM max2: empty retains, exact/short prefix-overlays existing u16, >2 keeps byte0 and forces byte1=0. FULL empty clears; nonempty replaces via unbounded read+strlen and is unsafe without terminal NUL. Existing marker state is reused across repeated/partial sequences.
char __thiscall MapMarkerData_LoadXMRKSequence(MapMarkerData *this, Data *tesFile)
{
  if ( !tesFile ) /*0x42b20a*/
    return 0; /*0x42b20a*/
  if ( TESFile_GetChunkType(tesFile) != 0x4B524D58 ) /*0x42b21c*/
    return 0; /*0x42b21c*/
  if ( !TESFile_GetNextChunk(tesFile) ) /*0x42b220*/
    return 0; /*0x42b220*/
  if ( TESFile_GetChunkType(tesFile) == 0x4D414E46 ) /*0x42b235*/
  {
    TESFile_GetChunkData(tesFile, (char *)&this->flags, 1u); /*0x42b23f*/
    if ( !TESFile_GetNextChunk(tesFile) ) /*0x42b246*/
      return 0; /*0x42b246*/
  }
  if ( TESFile_GetChunkType(tesFile) != 0x4C4C5546 ) /*0x42b25b*/
    return 0; /*0x42b25b*/
  TESFullname_Load(&this->fullName, tesFile); /*0x42b25f*/
  if ( !TESFile_GetNextChunk(tesFile) || TESFile_GetChunkType(tesFile) != 0x4D414E54 ) /*0x42b27e*/
    return 0; /*0x42b293*/
  TESFile_GetChunkData2(tesFile, (char *)&this->markerType); /*0x42b286*/
  return 1; /*0x42b28b*/
}
