int __thiscall ExtraDataList_SetReferencePointer(ExtraDataList *this, TESObjectREFR *a2)
{
  if ( !sub_45A500(SaveLoad_CurrentSavegame) && a2 && !TESObjectREFR_IsPersistent_(a2) )
    return ExtraDataList_SetReferencePointer_::Done(a2);
  if ( BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer) )
    return ExtraDataList_SetReferencePointer_::SetRefPointer((int)a2);
  return ExtraDataList_SetReferencePointer_::NewExtraRefPointer(a2);
}
