TESObjectREFR *__thiscall ExtraDataList::GetTravelHorse(ExtraDataList *this)
{
  ExtraTravelHorse *ExtraData; // eax

  ExtraData = (ExtraTravelHorse *)BaseExtraList_GetExtraData(this, kExtraData_TravelHorse); /*0x420842*/
  if ( ExtraData ) /*0x420849*/
    return ExtraData->horseRef; /*0x42084b*/
  else
    return 0; /*0x42084f*/
}
