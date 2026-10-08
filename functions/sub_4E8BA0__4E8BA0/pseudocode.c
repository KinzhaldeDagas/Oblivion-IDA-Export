// Verified local ROAD grouping. Given the owning WRLD's top-level group type 0, emits a child GRUP type 1 whose label is the owning TESWorldSpace FormID. TESRoad owner pointer is at +0x2C.
unsigned int *__thiscall TESRoad_CreateGroupRecord(
        TESRoad *this,
        unsigned int *outGroupHeader,
        const unsigned int *currentGroupHeader)
{
  unsigned int *result; // eax

  result = outGroupHeader; /*0x4e8ba0*/
  if ( outGroupHeader ) /*0x4e8ba6*/
  {
    *outGroupHeader = 0; /*0x4e8bae*/
    if ( currentGroupHeader ) /*0x4e8bb4*/
    {
      if ( !currentGroupHeader[3] && currentGroupHeader[2] == dword_B06084 ) /*0x4e8bc5*/
      {
        *outGroupHeader = dword_B05E20; /*0x4e8bcd*/
        outGroupHeader[3] = 1;                  // Canonical ROAD parent emitted here: groupType=1, label=owning WRLD FormID. /*0x4e8bcf*/
        outGroupHeader[2] = *(_DWORD *)(*((_DWORD *)this + 0xB) + 0xC); /*0x4e8bdc*/
        outGroupHeader[1] = 0; /*0x4e8bdf*/
        outGroupHeader[4] = 0; /*0x4e8be6*/
      }
    }
  }
  return result; /*0x4e8bed*/
}
