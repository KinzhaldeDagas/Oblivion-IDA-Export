int __userpurge CombatController_TransmitDisease_@<eax>(int a1@<ecx>, int a2@<ebx>, double a3@<st0>, TESObjectREFR *a4)
{
  signed int v7; // eax
  TESObjectREFRVtbl *vtbl; // ebx
  void *v9; // eax
  const char *v10; // eax
  float v13; // [esp+14h] [ebp-114h]
  char string[8]; // [esp+18h] [ebp-110h] BYREF

  if ( !*(_DWORD *)(a1 + 0xA0) )
    return CombatController_TransmitDisease__::Done(a4);
  if ( !a4 )
    return CombatController_TransmitDisease__::Done(0);
  if ( !Actor_IsPlayer(a4) )
    return CombatController_TransmitDisease__::Done(a4);
  v7 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, double@<st0>))a4->vtbl[1].Unk_37)(a4, 0x3F, a3);
  v13 = Calc_DiseaseTransferPercent(v7);
  *(double *)string = v13;
  if ( (double)(GetRandomLargeInteger_(0) % 0x64) > v13 )
    return CombatController_TransmitDisease__::Done(a4);
  if ( (unsigned __int8)MagicTarget_HasMagicItem(&a4[1].member.super.modlist, **(_DWORD **)(a1 + 0xA0)) )
    return CombatController_TransmitDisease__::Done(a4);
  vtbl = a4->vtbl;
  v9 = OblivionDynamicCast(
         **(void ***)(a1 + 0xA0),
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &SpellItem `RTTI Type Descriptor',
         0);
  if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, void *, int))vtbl[1].Unk_4D)(a4, v9, a2)
    || !Actor_IsPlayer(a4) )
  {
    return CombatController_TransmitDisease__::Done(a4);
  }
  ++TESDataHandler_g_PlayerRef->miscStats[0x1A];
  v10 = *(const char **)(**(_DWORD **)(a1 + 0xA0) + 4);
  if ( !v10 )
    v10 = EmptyString;
  _sprintf(string, "%s %s", (const char *)sContractedDisease, v10);
  GameUI_QueueMessage(string, 0, 1u, *(float *)&dword_A46C30);
  return CombatController_TransmitDisease__::Done(a4);
}
