void __usercall sub_4E4690(int a1@<ecx>, int a2@<ebx>, char a3@<bpl>, int a4@<esi>, double a5@<st2>, double a6@<st1>)
{
  int ProcessLevel; // eax
  int v9; // eax
  TESPackage *v10; // eax
  int v11; // ecx
  int v12; // esi
  _BYTE *v13; // eax
  void (__thiscall ***v14)(_DWORD, int); // ecx
  double v15; // st7
  double v16; // st7
  char v17; // bp
  BSExtraData *i; // esi
  int vtbl; // ebx
  BSExtraData *DroppedItemList; // ebx
  BSExtraDataVtbl *v21; // esi
  BSExtraDataVtbl **v22; // eax
  unsigned int v23; // [esp-Ch] [ebp-10h]

  if ( (*(_DWORD *)(a1 + 8) & 0x800) == 0 ) /*0x4e469b*/
  {
    TESOjectREFR_stuffsWithPArentCell((TESChildCELL *)a1); /*0x4e46a3*/
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x90))(a1, 1, a4); /*0x4e46b4*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x40))(a1, 0x40000000); /*0x4e46c2*/
    TESForm_SetDisabledFlag((TESForm *)a1, 1); /*0x4e46c8*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x188))(a1) ) /*0x4e46d7*/
    {
      if ( *(_DWORD *)(a1 + 0x58) ) /*0x4e46e3*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4e46f6*/
        {
          if ( (Creature *)a1 == reference->lastRiddenHorse ) /*0x4e4707*/
            reference->lastRiddenHorse = 0; /*0x4e4709*/
          sub_5E4B00((Actor *)a1); /*0x4e4711*/
          MagicTarget_RemoveAllEffects((MagicTarget *)(a1 + 0x68)); /*0x4e4719*/
          if ( g_liveArrowProjectileCount > 0 ) /*0x4e4724*/
            sub_607B90((_DWORD *)a1, 1); /*0x4e4729*/
        }
        ProcessLevel = Actor::GetProcessLevel((Actor *)a1); /*0x4e4733*/
        sub_674550(a1, ProcessLevel); /*0x4e473f*/
        v9 = *(_DWORD *)(a1 + 0x58); /*0x4e4744*/
        if ( v9 ) /*0x4e4749*/
        {
          v10 = *(TESPackage **)(v9 + 8); /*0x4e474b*/
          if ( v10 ) /*0x4e4750*/
          {
            if ( TESPackage::IsTemporaryOverrideType(v10) ) /*0x4e4754*/
            {
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4e4767*/
                sub_5EAE70((Actor *)a1, 0, a1, a2); /*0x4e476f*/
            }
          }
        }
        v11 = *(_DWORD *)(a1 + 0x58); /*0x4e4774*/
        if ( v11 ) /*0x4e4779*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x378))(v11) ) /*0x4e4783*/
          {
            v12 = *(_DWORD *)(a1 + 0x58); /*0x4e4789*/
            v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x37C))(v12); /*0x4e479b*/
            v13 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x378))(v12); /*0x4e47a4*/
            sub_4D7300(v13, v23, 0); /*0x4e47a8*/
          }
          v14 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x58); /*0x4e47ad*/
          if ( v14 ) /*0x4e47b2*/
            (**v14)(v14, 1); /*0x4e47ba*/
          *(_DWORD *)(a1 + 0x58) = 0; /*0x4e47bc*/
        }
      }
    }
    v15 = ((double (__thiscall *)(int, _DWORD, char))*(_DWORD *)(*(_DWORD *)a1 + 0x150))(a1, 0, a3); /*0x4e47cc*/
    v16 = sub_665260((TESObjectREFR *)reference, v15, (PlayerCharacter *)a1); /*0x4e47d5*/
    v17 = a1 + 0x44; /*0x4e47da*/
    for ( i = ExtraDataList_GetEnableStateChildren((ExtraDataList *)(a1 + 0x44)); i; i = *(BSExtraData **)&i->members.type ) /*0x4e47e8*/
    {
      if ( !*(_DWORD *)&i->members.type && !i->vtbl ) /*0x4e47f6*/
        break; /*0x4e47f9*/
      vtbl = (int)i->vtbl; /*0x4e47fb*/
      if ( ExtraDataList_IsEnableStateInverse((ExtraDataList *)&i->vtbl[8].CompareTo) ) /*0x4e4800*/
        sub_4DD850(vtbl, vtbl, v17, a5, a6, v16); /*0x4e480b*/
      else
        sub_4E4690(vtbl, vtbl, v17, (int)i, a5, a6, v16); /*0x4e4812*/
    }
    DroppedItemList = ExtraDataList_GetDroppedItemList((ExtraDataList *)(a1 + 0x44)); /*0x4e4825*/
    if ( DroppedItemList ) /*0x4e482a*/
    {
      while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)DroppedItemList) ) /*0x4e4839*/
      {
        v21 = DroppedItemList->vtbl; /*0x4e483b*/
        ExtraDataList_SetItemDropper((ExtraDataList *)&DroppedItemList->vtbl[8].CompareTo, 0); /*0x4e4842*/
        (*((void (__thiscall **)(BSExtraDataVtbl *, int))v21->Destructor + 0x23))(v21, 1); /*0x4e4853*/
        (*((void (__thiscall **)(BSExtraDataVtbl *, int))v21->Destructor + 0x24))(v21, 1); /*0x4e4861*/
        (*((void (__thiscall **)(BSExtraDataVtbl *, _DWORD))v21->Destructor + 0x54))(v21, 0); /*0x4e486f*/
        v22 = *(BSExtraDataVtbl ***)&DroppedItemList->members.type; /*0x4e4871*/
        if ( v22 ) /*0x4e4876*/
        {
          *(_DWORD *)&DroppedItemList->members.type = v22[1]; /*0x4e487b*/
          DroppedItemList->vtbl = *v22; /*0x4e4881*/
          FormHeapFree((unsigned int)v22); /*0x4e4883*/
        }
        else
        {
          DroppedItemList->vtbl = 0; /*0x4e488d*/
        }
      }
    }
    sub_4D9310((char *)a1, 0); /*0x4e4899*/
  }
}
