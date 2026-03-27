int __thiscall ExtraDataList::RemoveStartLocation(_DWORD *this)
{
  return BaseExtraList_RemoveExtraByType(this, kExtraData_StartLocation);
}
