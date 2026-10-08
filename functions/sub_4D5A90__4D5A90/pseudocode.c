void __usercall sub_4D5A90(TESObjectCELL *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  ObjectListEntry *p_objectList; // ebx
  TESObjectREFR *refr; // edi
  Actor *v7; // esi
  ExtraContainerChanges_Data *ContainerChanges; // eax
  TESForm::FormFlags flags; // eax
  TESForm::FormFlags v10; // eax

  sub_496EA0((char *)&unk_B35C80, a1); /*0x4d5a9a*/
  p_objectList = &a1->members.objectList; /*0x4d5a9f*/
  if ( a1 != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4d5aa4*/
  {
    do /*0x4d5bb3*/
    {
      refr = p_objectList->refr; /*0x4d5ab0*/
      if ( p_objectList->refr ) /*0x4d5ab0*/
      {
        if ( refr != (TESObjectREFR *)reference ) /*0x4d5ac0*/
        {
          v7 = (Actor *)OblivionDynamicCast( /*0x4d5ae0*/
                          refr,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
          ContainerChanges = ExtraDataList_GetContainerChanges(&refr->member.baseExtraList); /*0x4d5ae2*/
          if ( ContainerChanges ) /*0x4d5ae9*/
            a4 = sub_492E70(ContainerChanges, a2, a4, a3, refr, (TESForm *)reference, 0, 0, 1); /*0x4d5afb*/
          if ( v7 ) /*0x4d5b04*/
          {
            flags = v7->members.super.super.super.flags; /*0x4d5b0a*/
            if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 ) /*0x4d5b1c*/
            {
              a4 = flt_A31C80; /*0x4d5b1e*/
              ((void (__thiscall *)(Actor *, PlayerCharacter *, float))v7->vtbl->Unk_DD)(v7, reference, flt_A31C80); /*0x4d5b39*/
            }
            if ( !Actor::IsEssential(v7) ) /*0x4d5b3d*/
            {
              v10 = v7->members.super.super.super.flags; /*0x4d5b46*/
              if ( (v10 & 0x800) == 0 && (v10 & 0x20) == 0 && !v7->vtbl->super.super.IsDead((TESObjectREFR *)v7, 0) ) /*0x4d5b66*/
              {
                ((void (__thiscall *)(Actor *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, int))v7->vtbl->Unk_CB)( /*0x4d5b86*/
                  v7,
                  reference,
                  0,
                  0,
                  0,
                  0,
                  1);
                a4 = 0.0; /*0x4d5b88*/
                Actor_Kill(v7, a2, a3, 0.0, 0, COERCE_INT(0.0)); /*0x4d5b92*/
              }
            }
          }
          if ( TESObjectREFR_GetEffectiveDoorLock(refr) ) /*0x4d5b99*/
            TESObjectREFR_ClearLockedFlagOnSelfOrLinkedDoor(refr); /*0x4d5ba4*/
          sub_4D5370(); /*0x4d5ba9*/
        }
      }
      p_objectList = p_objectList->next; /*0x4d5bae*/
    }
    while ( p_objectList ); /*0x4d5bb3*/
  }
  sub_496F50(&unk_B35C80, a1); /*0x4d5bc1*/
}
