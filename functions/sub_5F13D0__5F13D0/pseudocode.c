int __usercall sub_5F13D0@<eax>(Actor *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  MagicCaster *p_magicCaster; // ebx
  LowProcess *process; // ecx
  int v8; // eax
  unsigned int *p_dispositionModifier; // edi
  LowProcess *v10; // ecx
  BSShaderAccumulator *Global; // eax
  int v13; // [esp+0h] [ebp-2Ch]

  p_magicCaster = &a1->members.magicCaster; /*0x5f13fd*/
  a1->vtbl = (ActorVtbl *)&Actor::`vftable'{for `Actor'}; /*0x5f1400*/
  a1->members.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Actor::`vftable'{for `TESChildCell'}; /*0x5f1406*/
  a1->members.magicCaster.vtbl = (MagicCasterVtbl *)&Actor::`vftable'{for `MagicCaster'}; /*0x5f140d*/
  a1->members.magicTarget.vtbl = &Actor::`vftable'{for `MagicTarget'}; /*0x5f1413*/
  if ( (a1->members.super.super.super.flags & 0x4000) == 0 ) /*0x5f142a*/
  {
    sub_65DEF0((unsigned int *)reference, (int)a1); /*0x5f1437*/
    process = a1->members.super.process; /*0x5f143c*/
    if ( process ) /*0x5f1441*/
    {
      v8 = ((int (__thiscall *)(LowProcess *))process->Unk_6D)(process); /*0x5f144b*/
      if ( v8 ) /*0x5f144f*/
        *(_BYTE *)(v8 + 0x10) = 1; /*0x5f1451*/
    }
    a2 = (_BYTE)a1 - 0x5C; /*0x5f1455*/
    p_dispositionModifier = (unsigned int *)&a1->members.dispositionModifier; /*0x5f145b*/
    if ( a1 != (Actor *)0xFFFFFF5C ) /*0x5f145f*/
    {
      do /*0x5f1475*/
      {
        if ( !*p_dispositionModifier ) /*0x5f1461*/
          break; /*0x5f1465*/
        FormHeapFree(*p_dispositionModifier); /*0x5f1468*/
        p_dispositionModifier = (unsigned int *)p_dispositionModifier[1]; /*0x5f146d*/
      }
      while ( p_dispositionModifier ); /*0x5f1475*/
    }
    BSSimpleList_Clear(&a1->members.dispositionModifier); /*0x5f1479*/
    sub_642B40(&qword_B3BB2C[0x94], (int)a1); /*0x5f1484*/
    sub_5EAE70(a1, (int)p_magicCaster, (int)p_dispositionModifier, v13); /*0x5f148b*/
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x5f1496*/
    {
      if ( unk_B3BF80 ) /*0x5f14a0*/
        sub_6826D0((_DWORD *)unk_B3BF80, a1); /*0x5f14ab*/
      sub_65A050((ActorVtbl *)a1, 1); /*0x5f14b4*/
      sub_679C10((ActorProcessManager *)&qword_B3BB2C[0x75], a1); /*0x5f14bf*/
      sub_67BF00((int **)&qword_B3BB2C[0xA1], (int)a1); /*0x5f14ca*/
      ActorProcessManager_RemoveActorFromCrimes((ActorProcessManager *)&qword_B3BB2C[0x75], a1); /*0x5f14d5*/
      v10 = a1->members.super.process; /*0x5f14da*/
      if ( v10 ) /*0x5f14df*/
      {
        if ( v10->GetProcessLevel(v10) == 1 || !a1->members.super.process->GetProcessLevel(a1->members.super.process) ) /*0x5f14f5*/
        {
          Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x5f14fb*/
          if ( Global ) /*0x5f1502*/
            sub_7AD1E0(Global, a1->members.super.super.super.refID); /*0x5f150a*/
          sub_5E4FC0(a1); /*0x5f1511*/
        }
        a5 = sub_5F0750(a1, a5); /*0x5f1518*/
      }
    }
    sub_674E10((int *)&qword_B3BB2C[0x75], (TESForm *)a1); /*0x5f1523*/
    sub_5E7B90(a1); /*0x5f152a*/
    AVCollection_ClearArrayAndList(&a1->members.avModifiers); /*0x5f1535*/
    TESObjectREFR_Set3D((TESObjectREFR *)a1, a3, a4, a5, 0); /*0x5f153e*/
  }
  AVCollection_destr(&a1->members.avModifiers); /*0x5f154e*/
  MagicTarget_destr(&a1->members.magicTarget); /*0x5f155b*/
  MagicCaster_destr(p_magicCaster); /*0x5f1567*/
  return MobileObject_destr((TESForm *)a1, a2, a3, a4, a5); /*0x5f157b*/
}
