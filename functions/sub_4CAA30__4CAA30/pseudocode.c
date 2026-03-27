int __thiscall sub_4CAA30(ExtraDataList *this)
{
  int v2; // esi
  BSExtraDataVtbl *v3; // esi

  v2 = 0x18 * TimeGlobals_GetGameDaysPassed(&TimeGlobals);
  v3 = (BSExtraDataVtbl *)((__int64)TimeGlobals_GetGameHour(&TimeGlobals) + v2);
  if ( sub_45A500(SaveLoad_CurrentSavegame) && v3 )
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x8000000);
  ExtraDataList__SetDetachTime(this + 2, v3);
  if ( v3 )
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x8000000);
  else
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11))(this, 0xE000000);
}
