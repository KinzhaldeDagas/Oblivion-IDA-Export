// Remove only ExtraHasNoRumors (0x5A), restoring fallback to the NPC base NoRumors flag. ExtraInfoGeneralTopic (0x59) is untouched, so an old cached rumor can become visible again.
bool __thiscall ExtraDataList::RemoveNoRumorsOverride(ExtraDataList *this)
{
  return BaseExtraList_RemoveExtraByType(this, kExtraData_HasNoRumors); /*0x4209c7*/
}
