BSExtraData *__thiscall sub_4DB890(char *this, TESForm *owner)
{
  ExtraDataList *v3; // edi
  BSExtraData *result; // eax
  TeleportData *v5; // esi
  TESObjectREFR *LinkedDoor; // eax
  TESObjectREFR *v7; // eax

  v3 = (ExtraDataList *)(this + 0x44); /*0x4db898*/
  ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)(this + 0x44), owner); /*0x4db89e*/
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0x40))(this, 0x80); /*0x4db8af*/
  result = (BSExtraData *)ExtraDataList_GetTeleport(v3); /*0x4db8b3*/
  v5 = (TeleportData *)result; /*0x4db8b8*/
  if ( result ) /*0x4db8bc*/
  {
    result = (BSExtraData *)TeleportData_GetLinkedDoor((TeleportData *)result); /*0x4db8c0*/
    if ( result ) /*0x4db8c7*/
    {
      LinkedDoor = TeleportData_GetLinkedDoor(v5); /*0x4db8cb*/
      ExtraDataList::SetOrRemoveExtraOwnership(&LinkedDoor->member.baseExtraList, 0); /*0x4db8d5*/
      v7 = TeleportData_GetLinkedDoor(v5); /*0x4db8dc*/
      return ((BSExtraData *(__thiscall *)(TESObjectREFR *, int))v7->vtbl->super.MarkAsModified)(v7, 0x80); /*0x4db8f2*/
    }
  }
  return result; /*0x4db8e4*/
}
