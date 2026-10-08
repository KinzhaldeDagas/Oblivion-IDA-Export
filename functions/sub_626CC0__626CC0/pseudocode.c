char __cdecl sub_626CC0(TESObjectREFR *reference, TESObjectREFR *actorReference)
{
  TESForm::FormFlags flags; // eax
  ExtraLockData *EffectiveDoorLock; // eax
  ExtraLockData *v5; // edi
  TESForm *key; // eax
  signed int v8; // [esp+4h] [ebp-4h] BYREF
  int referencea; // [esp+Ch] [ebp+4h]

  if ( !reference ) /*0x626cc8*/
    return 0; /*0x626cc8*/
  flags = reference->member.super.flags; /*0x626cce*/
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 ) /*0x626cf2*/
    return 0; /*0x626dce*/
  v8 = 0; /*0x626cff*/
  if ( !actorReference ) /*0x626d07*/
    return 0; /*0x626d07*/
  if ( reference->vtbl->GetBaseForm(reference) == (TESForm *)MEMORY[0xB35EBC] ) /*0x626d1f*/
    return 0; /*0x626d1f*/
  if ( !unk_B3B924 || (referencea = 0x80, !sub_4D8B90((TESObjectREFR *)unk_B3B924)) ) /*0x626d2f*/
    referencea = 0x320; /*0x626d40*/
  if ( !TESObjectREFR_GetTeleportData(reference) /*0x626d6d*/
    || (double)referencea >= TesObjectREF_GetDistance(reference, (TESObjectREFR *)unk_B3B924, 0) )
  {
    return 0; /*0x626dc9*/
  }
  EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(reference); /*0x626d72*/
  v5 = EffectiveDoorLock; /*0x626d77*/
  if ( EffectiveDoorLock ) /*0x626d7b*/
  {
    if ( ExtraLockData_IsLocked(EffectiveDoorLock) && !TESObjectREFR_IsOwnedBy(reference, actorReference, 1) ) /*0x626d8d*/
    {
      key = (TESForm *)v5->key; /*0x626d96*/
      if ( !key || !sub_5E4A00((int)actorReference, key, 0, 1, 0, &v8) ) /*0x626dab*/
        return 0; /*0x626db6*/
    }
  }
  unk_B3B91C = (int)reference; /*0x626dbd*/
  return 1; /*0x626db8*/
}
