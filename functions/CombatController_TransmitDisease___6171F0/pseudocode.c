void __userpurge CombatController_TransmitDisease_(int a1@<ecx>, int a2@<ebx>, double a3@<st0>, TESObjectREFR *a4)
{
  signed int v5; // eax
  TESObjectREFRVtbl *vtbl; // ebx
  void *v7; // eax
  const char *v8; // eax
  float v10; // [esp+14h] [ebp-114h]
  char string[8]; // [esp+18h] [ebp-110h] BYREF

  if ( !*(_DWORD *)(a1 + 0xA0) ) /*0x61720f*/
    goto CombatController_TransmitDisease?; /*0x61720f*/
  if ( !a4 ) /*0x61721e*/
  {
    CombatController_TransmitDisease__::Done(0); /*0x61721e*/
    return; /*0x61721e*/
  }
  if ( !Actor_IsPlayer(a4) ) /*0x617226*/
  {
CombatController_TransmitDisease?:
    CombatController_TransmitDisease__::Done((int)a4); /*0x617216*/
    return; /*0x617216*/
  }
  v5 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, double@<st0>))a4->vtbl[1].Unk_37)(a4, 0x3F, a3); /*0x61723f*/
  v10 = Calc_DiseaseTransferPercent(v5); /*0x617247*/
  *(double *)string = v10; /*0x617251*/
  if ( (double)(Game_RandomLargeInteger(0) % 0x64) > v10 /*0x617288*/
    || (unsigned __int8)MagicTarget_HasMagicItem(&a4[1].member.super.modlist, **(_DWORD **)(a1 + 0xA0)) )
  {
    CombatController_TransmitDisease__::Done((int)a4); /*0x617276*/
  }
  else
  {
    vtbl = a4->vtbl; /*0x61729e*/
    v7 = OblivionDynamicCast( /*0x6172af*/
           **(void ***)(a1 + 0xA0),
           0,
           (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
           &SpellItem `RTTI Type Descriptor',
           0);
    if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, void *, int))vtbl[1].Unk_4D)(a4, v7, a2) /*0x6172c9*/
      && Actor_IsPlayer(a4) )
    {
      ++reference->miscStats[0x1A]; /*0x6172d7*/
      v8 = *(const char **)(**(_DWORD **)(a1 + 0xA0) + 4); /*0x6172e6*/
      if ( !v8 ) /*0x6172eb*/
        v8 = EmptyString; /*0x6172ed*/
      _sprintf(&string[4], "%s %s", MEMORY[0xB38DF8].value, v8); /*0x617304*/
      GameUI_QueueMessage(&string[4], 0, 1u, *(float *)&dword_A46C30); /*0x61731e*/
      CombatController_TransmitDisease__::Done((int)a4); /*0x617324*/
    }
    else
    {
      CombatController_TransmitDisease__::Done((int)a4); /*0x6172d0*/
    }
  }
}
