// Verified cell helper: returns ExtraRank.rank from the cell's XRNK extra, substituting 0 when no rank extra exists.
SInt32 __thiscall TESObjectCELL_GetRequiredOwnerFactionRank(TESObjectCELL *cell)
{
  SInt32 Rank; // eax

  Rank = ExtraDataList_GetRank(&cell->members.extraData); /*0x4ca993*/
  return Rank != 0xFFFFFFFF ? Rank : 0;
}
