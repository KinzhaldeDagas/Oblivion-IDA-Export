// Verified LockEffect marker semantics for ExtraLockData.flags bit 0x02: LockEffect_Apply writes exactly 0x02 before setting locked bit 0x01. On the next application, an existing lock without bit 0x02 causes this effect to remove itself; bit0x02 plus locked bit0x01 also removes it as completed; bit0x02 while unlocked causes the effect to reapply. Thus 0x02 marks a lock owned/pending from LockEffect, while 0x01 is the actual locked state. Fallout LockEffect::Start uses the same 0x02→0x03 sequence in REFR_LOCK but different storage and Lock/UnLock methods.
double __usercall LockEffect_Apply@<st0>(ActiveEffect *this@<ecx>, char a2@<bpl>, double result@<st0>)
{
  _DWORD *v4; // eax
  char *v5; // esi
  TESObjectREFR *v6; // eax
  ExtraLockData *EffectiveDoorLock; // eax
  unsigned __int8 flags; // al
  TESObjectREFR *v9; // eax
  ExtraLockData *LockData; // eax
  ExtraLockData *v11; // edi
  TESObjectREFR *v12; // eax
  TESObjectREFR *v13; // eax

  v4 = OblivionDynamicCast( /*0x694c55*/
         this->members.target,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
         &NonActorMagicTarget `RTTI Type Descriptor',
         0);
  if ( v4 ) /*0x694c5f*/
  {
    v5 = (char *)(v4 + 3); /*0x694c62*/
    if ( (*(int (__thiscall **)(_DWORD *))(v4[3] + 4))(v4 + 3) ) /*0x694c6c*/
    {
      v6 = (TESObjectREFR *)(*(int (__usercall **)@<eax>(char *@<ecx>, double@<st0>))(*(_DWORD *)v5 + 4))(v5, result); /*0x694c79*/
      EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(v6); /*0x694c7d*/
      if ( EffectiveDoorLock && ((flags = EffectiveDoorLock->flags, (flags & 2) == 0) || (flags & 1) != 0) ) /*0x694c8f*/
      {
        return ActiveEffect_Base_Remove(this, a2, result, 0); /*0x694c95*/
      }
      else
      {
        v9 = (TESObjectREFR *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5); /*0x694ca5*/
        LockData = TESObjectREFR_GetOrCreateLockData(v9); /*0x694ca9*/
        result = this->members.magnitude; /*0x694cae*/
        v11 = LockData; /*0x694cb1*/
        LockData->level = Double_To_SInt32(result); /*0x694cb8*/
        v11->key = 0; /*0x694cba*/
        v11->flags = 2; /*0x694cc1*/
        v12 = (TESObjectREFR *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5); /*0x694ccc*/
        TESObjectREFR_MarkLockDataAsModified(v12); /*0x694cd0*/
        v13 = (TESObjectREFR *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5); /*0x694cdc*/
        TESObjectREFR_SetLockedFlagOnSelfOrLinkedDoor(v13); /*0x694ce3*/
      }
    }
  }
  return result; /*0x694c9b*/
}
