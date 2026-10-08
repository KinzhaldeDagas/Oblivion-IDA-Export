void __userpurge BoundItemEffect_UpdateEffect(
        int a1@<ecx>,
        double a2@<st5>,
        double a3@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8)
{
  double v9; // st1
  double v10; // st0
  MagicTarget *v11; // ecx
  PlayerCharacter *ParentActor; // esi
  ExtraDataList *v13; // eax
  ExtraDataList *v14; // ebp
  LowProcess *process; // ecx
  int v16; // eax
  void *v17; // ebp
  int ***ContainerExtraDataForRef; // eax
  ExtraDataList *v19; // eax
  ExtraDataList *v20; // esi

  if ( *(_BYTE *)(a1 + 0x84) ) /*0x6918d3*/
  {
    v11 = *(MagicTarget **)(a1 + 0x20); /*0x691902*/
    if ( v11 ) /*0x691908*/
      ParentActor = (PlayerCharacter *)MagicTarget_GetParentActor(v11); /*0x69190f*/
    else
      ParentActor = 0; /*0x691913*/
    v13 = (ExtraDataList *)OblivionDynamicCast( /*0x691928*/
                             *(void **)(a1 + 0x38),
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESObjectWEAP `RTTI Type Descriptor',
                             0);
    v14 = v13; /*0x691932*/
    if ( ParentActor && (process = ParentActor->super.super.super.process) != 0 && v13 ) /*0x691947*/
    {
      ((void (__thiscall *)(LowProcess *, ExtraDataList *))process->Unk_F4)(process, v13); /*0x691956*/
      if ( *(_BYTE *)(a1 + 0x88) ) /*0x691958*/
      {
        if ( ParentActor->super.super.super.process->GetEquippedWeaponData(ParentActor->super.super.super.process, 1) ) /*0x69196e*/
        {
          v16 = (int)ParentActor->super.super.super.process->GetEquippedWeaponData( /*0x691981*/
                       ParentActor->super.super.super.process,
                       1);
          if ( v14 == *(ExtraDataList **)(v16 + 8) ) /*0x691986*/
          {
            if ( *(_DWORD *)v16 ) /*0x691988*/
            {
              *(_BYTE *)(a1 + 0x88) = 0; /*0x69198d*/
              v14 = **(ExtraDataList ***)v16; /*0x691996*/
              ExtraDataList_SetCannotWear(v14, 1); /*0x69199c*/
              ExtraDataList_AddBoundArmor(v14); /*0x6919a3*/
            }
          }
        }
      }
      if ( ParentActor == reference /*0x6919d4*/
        && !ParentActor->super.super.super.process->GetWeaponOut(ParentActor->super.super.super.process)
        && !ParentActor->super.super.super.process->GetCombatMode(ParentActor->super.super.super.process) )
      {
        ActiveEffect_Base_Remove((ActiveEffect *)a1, (char)v14, a7, 0); /*0x6919de*/
      }
    }
    else if ( *(_BYTE *)(a1 + 0x88) ) /*0x6919e9*/
    {
      v17 = OblivionDynamicCast( /*0x691a09*/
              *(void **)(a1 + 0x38),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectARMO `RTTI Type Descriptor',
              0);
      if ( v17 ) /*0x691a10*/
      {
        TESObjectREFR_GetContainer((TESObjectREFR *)ParentActor); /*0x691a14*/
        ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)ParentActor); /*0x691a1b*/
        v19 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, (int)v17, 1); /*0x691a28*/
        v20 = v19; /*0x691a2d*/
        if ( v19 ) /*0x691a31*/
        {
          *(_BYTE *)(a1 + 0x88) = 0; /*0x691a37*/
          ExtraDataList_SetCannotWear(v19, 1); /*0x691a3e*/
          ExtraDataList_AddBoundArmor(v20); /*0x691a45*/
        }
      }
    }
  }
  else
  {
    v9 = *(float *)(a1 + 4); /*0x6918dc*/
    v10 = *(float *)(a1 + 0x80); /*0x6918df*/
    if ( v10 <= v9 ) /*0x6918ec*/
    {
      sub_690AF0(a1, v10, v9, a2, a3, a4, a5, a6, a7); /*0x6918f2*/
      *(_BYTE *)(a1 + 0x84) = 1; /*0x6918f7*/
    }
  }
}
