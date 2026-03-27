BSExtraData *__thiscall TESForm::GetExtraXTarget(TESObjectREFR *this)
{
  if ( this->vtbl->GetBaseForm(this) == TESDataHandler_g_XMarker
    || this->vtbl->GetBaseForm(this) == (TESForm *)TESDataHandler_g_XMarkerHeading )
  {
    return (BSExtraData *)ExtraDataList::GetExtraXTarget(&this->member.baseExtraList);
  }
  else
  {
    return 0;
  }
}
