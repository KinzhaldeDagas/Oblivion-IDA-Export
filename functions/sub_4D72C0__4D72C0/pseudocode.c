bool __thiscall sub_4D72C0(TESObjectREFR *this, unsigned int a2)
{
  BSExtraData *ExtraData; // eax

  return this->vtbl->GetBaseForm(this)->member.type == kFormType_Furniture
      && (ExtraData = BaseExtraList_GetExtraData(&this->member.baseExtraList, kExtraData_UsedMarkers)) != 0
      && sub_4295D0((ExtraDataList *)ExtraData, a2);
}
