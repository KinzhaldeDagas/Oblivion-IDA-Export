// Verified lock-state propagation helper: if this reference has an ExtraLock wrapper, sets its locked bit; otherwise follows its linked-door reference and sets that wrapper's locked bit. It then calls TESObjectREFR_MarkLockDataAsModified so the owning reference or linked door records change mask 0x40.
void __thiscall TESObjectREFR_SetLockedFlagOnSelfOrLinkedDoor(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // esi
  ExtraLock *ExtraData; // eax
  TeleportData *Teleport; // eax
  TeleportData *v5; // esi
  TESObjectREFR *LinkedDoor; // eax

  p_baseExtraList = &this->member.baseExtraList; /*0x4dbe44*/
  ExtraData = (ExtraLock *)BaseExtraList_GetExtraData(&this->member.baseExtraList, kExtraData_Lock); /*0x4dbe4b*/
  if ( ExtraData /*0x4dbe7c*/
    || (Teleport = ExtraDataList_GetTeleport(p_baseExtraList), (v5 = Teleport) != 0)
    && TeleportData_GetLinkedDoor(Teleport)
    && (LinkedDoor = TeleportData_GetLinkedDoor(v5),
        (ExtraData = (ExtraLock *)TESObjectREFR_FindLockExtraOnLinkedDoorChain((BSExtraDataVtbl *)LinkedDoor)) != 0) )
  {
    ExtraLock_SetLockedFlag(ExtraData); /*0x4dbe80*/
    TESObjectREFR_MarkLockDataAsModified(this); /*0x4dbe89*/
  }
}
