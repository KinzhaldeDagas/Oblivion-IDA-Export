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
  double v11; // st1
  double v12; // st0
  MagicTarget *v13; // ecx
  PlayerCharacter *ParentActor; // esi
  ExtraDataList *v15; // eax
  ExtraDataList *v16; // ebp
  LowProcess *process; // ecx
  int v18; // eax
  void *v19; // ebp
  int ***ContainerExtraDataForRef; // eax
  ExtraDataList *v21; // eax
  ExtraDataList *v22; // esi

  if ( *(_BYTE *)(a1 + 0x84) )
  {
    v13 = *(MagicTarget **)(a1 + 0x20);
    if ( v13 )
      ParentActor = (PlayerCharacter *)MagicTarget_GetParentActor(v13);
    else
      ParentActor = 0;
    v15 = (ExtraDataList *)OblivionDynamicCast(
                             *(void **)(a1 + 0x38),
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESObjectWEAP `RTTI Type Descriptor',
                             0);
    v16 = v15;
    if ( ParentActor && (process = ParentActor->super.super.super.process) != 0 && v15 )
    {
      ((void (__thiscall *)(LowProcess *, ExtraDataList *))process->Unk_F4)(process, v15);
      if ( *(_BYTE *)(a1 + 0x88) )
      {
        if ( ParentActor->super.super.super.process->GetEquippedWeaponData(ParentActor->super.super.super.process, 1) )
        {
          v18 = (int)ParentActor->super.super.super.process->GetEquippedWeaponData(
                       ParentActor->super.super.super.process,
                       1);
          if ( v16 == *(ExtraDataList **)(v18 + 8) )
          {
            if ( *(_DWORD *)v18 )
            {
              *(_BYTE *)(a1 + 0x88) = 0;
              v16 = **(ExtraDataList ***)v18;
              sub_41F370(v16, 1);
              sub_41F2F0(v16);
            }
          }
        }
      }
      if ( ParentActor == TESDataHandler_g_PlayerRef
        && !ParentActor->super.super.super.process->GetWeaponOut(ParentActor->super.super.super.process)
        && !ParentActor->super.super.super.process->GetCombatMode(ParentActor->super.super.super.process) )
      {
        ActiveEffect_Base_Remove((ActiveEffect *)a1, (char)v16, a7, 0);
      }
    }
    else if ( *(_BYTE *)(a1 + 0x88) )
    {
      v19 = OblivionDynamicCast(
              *(void **)(a1 + 0x38),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectARMO `RTTI Type Descriptor',
              0);
      if ( v19 )
      {
        TESObjectREFR_GetContainer((TESObjectREFR *)ParentActor);
        ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)ParentActor);
        v21 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, (int)v19, 1);
        v22 = v21;
        if ( v21 )
        {
          *(_BYTE *)(a1 + 0x88) = 0;
          sub_41F370(v21, 1);
          sub_41F2F0(v22);
        }
      }
    }
  }
  else
  {
    v11 = *(float *)(a1 + 4);
    v12 = *(float *)(a1 + 0x80);
    if ( v12 <= v11 )
    {
      sub_690AF0(a1, v12, v11, a2, a3, a4, a5, a6, a7);
      *(_BYTE *)(a1 + 0x84) = 1;
    }
  }
}
