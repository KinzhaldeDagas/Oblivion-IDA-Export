// Verified modified-state propagation: if this reference has lock data, calls TESFormVtbl::MarkAsModified with mask 0x40; otherwise, if its linked-door chain has lock data, marks that linked-door reference with the same mask.
void __thiscall TESObjectREFR_MarkLockDataAsModified(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // edi
  TeleportData *Teleport; // eax
  TeleportData *v4; // esi
  TESObjectREFR *LinkedDoor; // eax
  TESObjectREFR *v6; // eax

  p_baseExtraList = &this->member.baseExtraList; /*0x4d9074*/
  if ( ExtraDataList_GetLock(&this->member.baseExtraList) ) /*0x4d9079*/
  {
    this->vtbl->super.MarkAsModified((TESForm *)this, 0x40); /*0x4d908b*/
  }
  else
  {
    Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4d9092*/
    v4 = Teleport; /*0x4d9097*/
    if ( Teleport ) /*0x4d909b*/
    {
      if ( TeleportData_GetLinkedDoor(Teleport) ) /*0x4d909f*/
      {
        LinkedDoor = TeleportData_GetLinkedDoor(v4); /*0x4d90aa*/
        if ( ExtraDataList_GetLock(&LinkedDoor->member.baseExtraList) ) /*0x4d90b2*/
        {
          v6 = TeleportData_GetLinkedDoor(v4); /*0x4d90bd*/
          v6->vtbl->super.MarkAsModified((TESForm *)v6, 0x40); /*0x4d90cb*/
        }
      }
    }
  }
}
