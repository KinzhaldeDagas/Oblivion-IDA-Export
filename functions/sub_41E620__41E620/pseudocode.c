// Returns ExtraAnim (type 0x34). Confirmed by Actor_SetupAnimationData consumer and ExtraDataList_SetAnimation ownership behavior.
BSExtraData *__thiscall sub_41E620(ExtraDataList *this)
{
  return BaseExtraList_GetExtraData(this, kExtraData_Light|kExtraData_WaterHeight); /*0x41e627*/
}
