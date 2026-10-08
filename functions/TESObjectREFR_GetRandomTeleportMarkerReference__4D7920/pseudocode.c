// Verified TESObjectREFR wrapper over ExtraDataList_GetRandomTeleportMarker; this per-reference marker pointer is distinct from the TESObjectDOOR base-form randomTeleport list of eligible space forms.
TESObjectREFR *__thiscall TESObjectREFR::GetRandomTeleportMarkerReference(TESObjectREFR *this)
{
  return ExtraDataList::GetRandomTeleportMarker(&this->member.baseExtraList);
}
