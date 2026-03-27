TESObjectREFR *__thiscall TESObjectREFR::GetRandomTeleportMarkerReference(TESObjectREFR *this)
{
  return ExtraDataList::GetRandomTeleportMarker(&this->member.baseExtraList);
}
