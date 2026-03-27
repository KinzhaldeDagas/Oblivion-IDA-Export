TESObjectREFR *__thiscall ExtraDataList::GetTravelHorse(ExtraDataList *this)
{
  ExtraTravelHorse *ExtraData; // eax

  ExtraData = (ExtraTravelHorse *)BaseExtraList_GetExtraData(this, kExtraData_TravelHorse);
  if ( ExtraData )
    return ExtraData->horseRef;
  else
    return 0;
}
