TeleportData *__thiscall TESObjectREFR::GetTeleportData(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // ebx
  TeleportData *result; // eax
  TeleportData *v4; // edi
  TeleportData *v5; // eax

  p_baseExtraList = &this->member.baseExtraList;
  result = ExtraDataList_GetTeleport(&this->member.baseExtraList);
  v4 = 0;
  if ( !result )
  {
    v5 = (TeleportData *)FormHeapAlloc(0x1Cu);
    if ( v5 )
      v4 = sub_42B590(v5);
    ExtraDataList::SetTeleportData(p_baseExtraList, v4);
    this->vtbl->super.MarkAsModified((TESForm *)this, 0x100000);
    return v4;
  }
  return result;
}
