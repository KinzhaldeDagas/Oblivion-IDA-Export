TeleportData *__thiscall TESObjectREFR::GetTeleportData(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // ebx
  TeleportData *result; // eax
  TeleportData *inited; // edi
  TeleportData *v5; // eax

  p_baseExtraList = &this->member.baseExtraList; /*0x4d7666*/
  result = ExtraDataList_GetTeleport(&this->member.baseExtraList); /*0x4d766b*/
  inited = 0; /*0x4d7670*/
  if ( !result ) /*0x4d7674*/
  {
    v5 = (TeleportData *)FormHeapAlloc(0x1Cu); /*0x4d7678*/
    if ( v5 ) /*0x4d768a*/
      inited = TeleportData_InitSentinels(v5); /*0x4d7693*/
    ExtraDataList::SetTeleportData(p_baseExtraList, inited); /*0x4d76a0*/
    this->vtbl->super.MarkAsModified((TESForm *)this, 0x100000); /*0x4d76b1*/
    return inited; /*0x4d76b3*/
  }
  return result; /*0x4d76b5*/
}
