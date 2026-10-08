// Verified effective lock-level helper: returns 0 when neither this reference nor its linked-door reference has ExtraLockData; otherwise tail-calls ExtraLockData_GetPlayerScaledLockLevel and returns its integer result. Callers feed the result to GetLockLevel or compare lock difficulty for lockpick/open behavior.
int __thiscall TESObjectREFR_GetEffectiveDoorLockLevel(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // esi
  ExtraLockData *Lock; // eax
  TeleportData *Teleport; // eax
  TeleportData *v4; // esi
  TESObjectREFR *LinkedDoor; // eax

  p_baseExtraList = &this->member.baseExtraList; /*0x4d7781*/
  Lock = ExtraDataList_GetLock(&this->member.baseExtraList); /*0x4d7789*/
  if ( Lock ) /*0x4d7790*/
    return ExtraLockData_GetPlayerScaledLockLevel(Lock); /*0x4d7790*/
  Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4d7794*/
  v4 = Teleport; /*0x4d7799*/
  if ( Teleport /*0x4d77bb*/
    && TeleportData_GetLinkedDoor(Teleport)
    && (LinkedDoor = TeleportData_GetLinkedDoor(v4),
        (Lock = ExtraDataList_GetLock(&LinkedDoor->member.baseExtraList)) != 0) )
  {
    return ExtraLockData_GetPlayerScaledLockLevel(Lock); /*0x4d77c1*/
  }
  else
  {
    return 0; /*0x4d77c6*/
  }
}
