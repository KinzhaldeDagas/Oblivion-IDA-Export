int __thiscall sub_4CAA30(ExtraDataList *this)
{
  int v2; // esi
  unsigned int v3; // esi

  v2 = 0x18 * TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x4caa4d*/
  v3 = (__int64)TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) + v2; /*0x4caa78*/
  if ( sub_45A500(g_TESSaveLoadGame) && v3 ) /*0x4caa89*/
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x8000000); /*0x4caa89*/
  ExtraDataList_SetDetachTime(this + 2, v3); /*0x4caa8f*/
  if ( v3 ) /*0x4caa96*/
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x8000000); /*0x4caaa4*/
  else
    return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11))(this, 0xE000000); /*0x4caab8*/
}
