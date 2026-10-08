// Verified OpenEffect rule: clear only locked bit 0x01 when effect category >= current effective lock category; the locked-bit helper preserves bit 0x02, so an active LockEffect marker remains until LockEffect_Apply observes the resulting state.
void __thiscall OpenEffect_ApplyEffect(OpenEffect *this)
{
  _DWORD *v2; // eax
  char *v3; // esi
  TESObjectREFR *v4; // eax
  ExtraLockData *EffectiveDoorLock; // ebx
  int v6; // eax
  LOCK_LEVEL LockLevel; // edi
  TESObjectREFR *v8; // eax
  int EffectiveDoorLockLevel; // eax
  LOCK_LEVEL v10; // eax
  TESObjectREFR *v11; // eax

  v2 = OblivionDynamicCast( /*0x6a35d6*/
         this->super.members.target,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
         &NonActorMagicTarget `RTTI Type Descriptor',
         0);
  if ( v2 ) /*0x6a35e0*/
  {
    v3 = (char *)(v2 + 3); /*0x6a35e3*/
    if ( (*(int (__thiscall **)(_DWORD *))(v2[3] + 4))(v2 + 3) ) /*0x6a35ed*/
    {
      v4 = (TESObjectREFR *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 4))(v3); /*0x6a35fb*/
      EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(v4); /*0x6a360b*/
      v6 = Double_To_SInt32(this->super.members.magnitude); /*0x6a3611*/
      LockLevel = GetLockLevel(v6); /*0x6a361c*/
      v8 = (TESObjectREFR *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 4))(v3); /*0x6a3628*/
      EffectiveDoorLockLevel = TESObjectREFR_GetEffectiveDoorLockLevel(v8); /*0x6a362c*/
      v10 = GetLockLevel(EffectiveDoorLockLevel); /*0x6a3632*/
      if ( EffectiveDoorLock ) /*0x6a363d*/
      {
        if ( LockLevel >= v10 ) /*0x6a3641*/
        {
          v11 = (TESObjectREFR *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 4))(v3); /*0x6a364a*/
          TESObjectREFR_ClearLockedFlagOnSelfOrLinkedDoor(v11); /*0x6a3653*/
        }
      }
    }
  }
}
