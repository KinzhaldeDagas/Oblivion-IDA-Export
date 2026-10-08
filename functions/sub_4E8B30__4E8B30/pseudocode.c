// Verified local ROAD grouping: TESRoad stores its owner TESWorldSpace at +0x2C. Direct ROAD membership is GRUP type 1 labeled with the owner WRLD FormID24; with include_parent set, it first delegates to the owning WRLD's group matcher.
bool __thiscall TESRoad_MatchesSerializedGroup(
        TESRoad *this,
        const unsigned int *groupHeader,
        bool includeParent,
        int matchFlags)
{
  char v4; // bl
  TESWorldSpace *ownerWorldspace; // esi

  v4 = 0; /*0x4e8b36*/
  if ( !groupHeader || *groupHeader != dword_B05E20 ) /*0x4e8b44*/
    return 0; /*0x4e8b91*/
  ownerWorldspace = this->ownerWorldspace; /*0x4e8b4d*/
  if ( includeParent ) /*0x4e8b50*/
  {
    v4 = ((int (__thiscall *)(TESWorldSpace *, const unsigned int *, bool, int))ownerWorldspace->vtbl->Unk_2F)( /*0x4e8b65*/
           ownerWorldspace,
           groupHeader,
           includeParent,
           matchFlags);
    if ( v4 ) /*0x4e8b69*/
      return v4; /*0x4e8b69*/
  }
  if ( groupHeader[3] != 1 || !TESForm_FormIDMatchesObjectID24(ownerWorldspace, groupHeader[2]) )// Direct ROAD membership requires groupType=1 and label == owning WRLD object ID (low FormID24). /*0x4e8b77*/
    return v4; /*0x4e8b8a*/
  else
    return 1; /*0x4e8b82*/
}
