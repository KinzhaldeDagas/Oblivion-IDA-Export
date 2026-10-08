// Rebuilds weapon and ammunition 3D for actorRef from this MiddleHighProcess's equipped data. Native ABI is ECX process plus one actorRef stack argument.
void __thiscall MiddleHighProcess_RebuildActorEquipment3D(MiddleHighProcess *this, TESObjectREFR *actorRef)
{
  int v2; // ebx
  double v3; // st5
  double v4; // st6
  TESObjectREFR *v6; // eax
  TESObjectREFR *v7; // ebp
  ExtraDataList *****ContainerChanges; // ebx
  MiddleHighProcess_vtbl *v9; // ebp
  EntryData *EquippedInstance; // eax
  MiddleHighProcess_vtbl *v11; // ebp
  EntryData *v12; // eax
  MiddleHighProcess_vtbl *v13; // ebp
  EntryData *v14; // eax
  MiddleHighProcess_vtbl *v15; // ebp
  _DWORD *v16; // eax
  double v17; // st7
  EntryData *equippedWeaponData; // eax
  EntryData *equippedAmmoData; // eax
  double v20; // st7
  EntryData *equippedShieldData; // eax
  EntryData *equippedLightData; // eax
  TESObjectREFR *v23; // eax
  EntryData *v24; // edx
  int type; // ebp
  EntryData *v26; // esi
  unsigned int *v27; // esi
  unsigned int *v28; // ebp
  unsigned int *v29; // ebx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // [esp-4h] [ebp-10h]

  v6 = (TESObjectREFR *)OblivionDynamicCast( /*0x650d38*/
                          actorRef,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v7 = v6; /*0x650d3d*/
  if ( v6 ) /*0x650d44*/
  {
    if ( sub_5E1CF0(v6) ) /*0x650d4c*/
    {
      v33 = v2; /*0x650d59*/
      ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&actorRef->member.baseExtraList); /*0x650d62*/
      if ( ContainerChanges ) /*0x650d66*/
      {
        if ( ((unsigned __int8 (__thiscall *)(MiddleHighProcess *, int))this->Unk_4D)(this, v33) ) /*0x650d76*/
          sub_5E13D0(v7, 0); /*0x650d80*/
        v9 = this->__vftable; /*0x650d85*/
        EquippedInstance = (EntryData *)ContainerExtraData_GetEquippedInstance(ContainerChanges, 9, 0); /*0x650d8f*/
        v9->SetEquippedWeaponData(this, EquippedInstance); /*0x650d9d*/
        v11 = this->__vftable; /*0x650d9f*/
        v12 = (EntryData *)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xC, 0); /*0x650da7*/
        v11->setEquippedAmmoData(this, v12);    // Full equipment-3D rebuild captures equipped slot 0x0C (AMMO) from ContainerChanges into process equipped-ammo data. /*0x650db5*/
        v13 = this->__vftable; /*0x650db7*/
        v14 = (EntryData *)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0); /*0x650dbf*/
        v13->SetEquippedShieldData(this, v14); /*0x650dcd*/
        v15 = this->__vftable; /*0x650dcf*/
        v16 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xE, 0); /*0x650dd7*/
        v17 = ((double (__thiscall *)(MiddleHighProcess *, _DWORD *))v15->SetEquippedLightData)(this, v16); /*0x650de5*/
        UnequipWeapon(actorRef, (int)ContainerChanges, (int)actorRef, v3, v4, v17); /*0x650de9*/
        equippedWeaponData = this->equippedWeaponData; /*0x650dee*/
        if ( equippedWeaponData ) /*0x650df6*/
          EquipWeapon(actorRef, equippedWeaponData->type); /*0x650dfe*/
        TESObjectREFR_ClearEquippedAmmo3D(actorRef);// Full equipment-3D rebuild explicitly clears existing equipped AMMO/quiver 3D before reconstructing equipment presentation. This is not a per-shot release path. /*0x650e05*/
        equippedAmmoData = this->equippedAmmoData; /*0x650e0a*/
        if ( equippedAmmoData ) /*0x650e12*/
          TESObjectREFR_RefreshEquippedAmmo3D(actorRef, equippedAmmoData->type); /*0x650e1a*/
        v20 = sub_4DC8F0(actorRef, v17, v3, v4, (int)v15, 0); /*0x650e23*/
        equippedShieldData = this->equippedShieldData; /*0x650e28*/
        if ( equippedShieldData ) /*0x650e30*/
          EquipShield(actorRef, v20, v3, v4, (UInt32)equippedShieldData->type); /*0x650e38*/
        UnequipLight(actorRef, v3, v4, v20); /*0x650e3f*/
        equippedLightData = this->equippedLightData; /*0x650e44*/
        if ( equippedLightData ) /*0x650e4c*/
          EquipLight(actorRef, v20, v3, v4, (int *)equippedLightData->type); /*0x650e54*/
        v23 = (TESObjectREFR *)OblivionDynamicCast( /*0x650e68*/
                                 actorRef,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
        if ( v23 ) /*0x650e72*/
        {
          v24 = this->equippedShieldData; /*0x650e74*/
          type = 0; /*0x650e7a*/
          if ( v24 ) /*0x650e7e*/
          {
            type = (int)v24->type; /*0x650e80*/
          }
          else
          {
            v26 = this->equippedLightData; /*0x650e85*/
            if ( v26 ) /*0x650e8d*/
              type = (int)v26->type; /*0x650e8f*/
          }
          HideEquipment(v23, v3, v4, v20, type, 1); /*0x650e97*/
        }
        v27 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 7, 0); /*0x650ead*/
        v28 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 6, 0); /*0x650eba*/
        v29 = ContainerExtraData_GetEquippedInstance(ContainerChanges, 8, 0); /*0x650ec5*/
        sub_4DCF10(actorRef, (char)v28, v3, v4, v20, 1); /*0x650ec7*/
        if ( v27 ) /*0x650ece*/
        {
          sub_4DCE60((Actor *)actorRef, v20, v3, v4, (int)v28, (_DWORD *)v27[2], 1); /*0x650ed8*/
          ContainerEntryExtraData_DestroyDataTable(v27, v30); /*0x650edf*/
          FormHeapFree((unsigned int)v27); /*0x650ee5*/
        }
        sub_4DCF10(actorRef, (char)v28, v3, v4, v20, 0); /*0x650ef1*/
        if ( v28 ) /*0x650ef8*/
        {
          sub_4DCE60((Actor *)actorRef, v20, v3, v4, (int)v28, (_DWORD *)v28[2], 0); /*0x650f02*/
          ContainerEntryExtraData_DestroyDataTable(v28, v31); /*0x650f09*/
          FormHeapFree((unsigned int)v28); /*0x650f0f*/
        }
        sub_4DD000(actorRef, (char)v28, v3, v4, v20); /*0x650f19*/
        if ( v29 ) /*0x650f20*/
        {
          sub_4DCF90(actorRef, v3, v4, v20, (int)v28, v29[2]); /*0x650f28*/
          ContainerEntryExtraData_DestroyDataTable(v29, v32); /*0x650f2f*/
          FormHeapFree((unsigned int)v29); /*0x650f35*/
        }
      }
    }
  }
}
