ExtraRefractionProperty *__thiscall ExtraDataList::GetRefractionProperty(ExtraDataList *this)
{
  return (ExtraRefractionProperty *)BaseExtraList_GetExtraData(this, kExtraData_RefractionProperty);
}
