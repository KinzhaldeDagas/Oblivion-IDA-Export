// Verified inverse lock-state helper: if this reference has an ExtraLock wrapper, clears its locked bit; otherwise follows the linked-door reference and clears that wrapper's locked bit. It then marks the owning reference or linked door modified with mask 0x40.
void __thiscall TESObjectREFR_ClearLockedFlagOnSelfOrLinkedDoor(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // esi
  ExtraLock *ExtraData; // eax
  TeleportData *Teleport; // eax
  TeleportData *v5; // esi
  TESObjectREFR *LinkedDoor; // eax

  p_baseExtraList = &this->member.baseExtraList; /*0x4dbea4*/
  ExtraData = (ExtraLock *)BaseExtraList_GetExtraData(&this->member.baseExtraList, kExtraData_Lock); /*0x4dbeab*/
  if ( ExtraData /*0x4dbedc*/
    || (Teleport = ExtraDataList_GetTeleport(p_baseExtraList), (v5 = Teleport) != 0)
    && TeleportData_GetLinkedDoor(Teleport)
    && (LinkedDoor = TeleportData_GetLinkedDoor(v5),
        (ExtraData = TESObjectREFR_FindLockExtraOnLinkedDoorChain(LinkedDoor)) != 0) )
  {
    ExtraLock_ClearLockedFlag(ExtraData); /*0x4dbee0*/
    TESObjectREFR_MarkLockDataAsModified(this); /*0x4dbee9*/
  }
}
