// Returns ExtraOblivionEntry type 0x3E itself, or null.
BSExtraData *__thiscall ExtraDataList_GetOblivionEntry(ExtraDataList *this)
{
  return BaseExtraList_GetExtraData(this, kExtraData_OblivionEntry); /*0x420197*/
}
