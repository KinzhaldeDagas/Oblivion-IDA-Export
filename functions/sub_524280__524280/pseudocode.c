// TESNPC::InitWorn (confirmed by native diagnostic strings). Enumerates equipped biped objects: index 9 configures WEAP slot at ActorAnimData+0xDC; index 12 configures AMMO/quiver slot at +0x10C; index 14 configures light/torch.
void __thiscall TESNPC_InitWorn(TESNPC *this, TESObjectREFR *actorRef, ActorAnimData *animData)
{
  double v3; // st5
  double v4; // st6
  double v5; // st7
  int v8; // esi
  EntryData *EquippedInstance; // eax
  int v10; // edx
  EntryData *v11; // ebx
  TESForm *type; // edi
  int v13; // edx
  EntryData *v14; // eax
  void *v15; // eax
  _DWORD *v16; // ecx
  EntryData *v17; // eax
  void *v18; // esi
  char HasWorn; // al
  void *v20; // eax
  CHAR *v21; // eax
  CHAR *NameForForm; // [esp-10h] [ebp-28h]
  _DWORD **v24; // [esp+Ch] [ebp-Ch]
  EntryData *v25; // [esp+10h] [ebp-8h]
  ExtraDataList *****ContainerExtraDataForRef; // [esp+14h] [ebp-4h]
  TESObjectREFR *a1; // [esp+1Ch] [ebp+4h]
  ActorAnimData *animDataa; // [esp+20h] [ebp+8h]

  ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(actorRef); /*0x5242b0*/
  a1 = 0; /*0x5242b4*/
  v25 = 0; /*0x5242b8*/
  v24 = (_DWORD **)OblivionDynamicCast( /*0x5242c6*/
                     actorRef,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
  if ( actorRef ) /*0x5242ca*/
  {
    if ( animData ) /*0x5242d7*/
    {
      v8 = 0; /*0x5242dd*/
      animDataa = 0; /*0x5242df*/
      do /*0x5244c7*/
      {
        EquippedInstance = (EntryData *)ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, v8, 0); /*0x5242eb*/
        v11 = EquippedInstance; /*0x5242f0*/
        if ( EquippedInstance ) /*0x5242f4*/
        {
          type = EquippedInstance->type; /*0x5242fa*/
          if ( type ) /*0x5242ff*/
          {
            switch ( v8 ) /*0x524323*/
            {
              case 0: /*0x524323*/
              case 1: /*0x524323*/
                v15 = OblivionDynamicCast( /*0x5243a5*/
                        type,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESBipedModelForm `RTTI Type Descriptor',
                        0);
                if ( v15 ) /*0x5243af*/
                  sub_4691D0( /*0x5243c5*/
                    (int)v15,
                    v3,
                    v4,
                    v5,
                    (char *)animData,
                    this->member.super.actorBaseData.flags & 1,
                    0xFFFFFFFF);
                break; /*0x5243ca*/
              case 2: /*0x524323*/
              case 3: /*0x524323*/
              case 4: /*0x524323*/
              case 5: /*0x524323*/
              case 6: /*0x524323*/
              case 7: /*0x524323*/
              case 8: /*0x524323*/
              case 0xF: /*0x524323*/
                goto LABEL_26;
              case 9: /*0x524323*/
                ActorSkinInfo_SetWeaponSlotForm((ActorSkinInfo *)animData, EquippedInstance->type); /*0x52432d*/
                break; /*0x524332*/
              case 0xC: /*0x524323*/
                ActorSkinInfo_SetAmmoSlotForm((ActorSkinInfo *)animData, EquippedInstance->type); /*0x52438c*/
                break; /*0x524391*/
              case 0xD: /*0x524323*/
                if ( v24 && (v16 = v24[0x16]) != 0 && (*(int (__thiscall **)(_DWORD *))(*v16 + 8))(v16) < 2 ) /*0x5243e8*/
                {
                  v17 = (EntryData *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v24[0x16] + 0xF8))(v24[0x16], 0); /*0x5243f7*/
                  v25 = v17; /*0x5243f9*/
                }
                else
                {
                  v17 = v25; /*0x5243ff*/
                }
                if ( !v17 || ContainerEntryExtraData_HasWorn(v17, 0) ) /*0x52440b*/
                {
LABEL_26:
                  v18 = OblivionDynamicCast( /*0x524418*/
                          type,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESBipedModelForm `RTTI Type Descriptor',
                          0);
                  HasWorn = ContainerEntryExtraData_HasWorn(v11, 1); /*0x524435*/
                  if ( v18 ) /*0x52443c*/
                  {
                    sub_4691D0( /*0x524457*/
                      (int)v18,
                      v3,
                      v4,
                      v5,
                      (char *)animData,
                      this->member.super.actorBaseData.flags & 1,
                      (HasWorn != 0) + 6);
                  }
                  else
                  {
                    NameForForm = TESFullName_GetNameForForm(type); /*0x524464*/
                    PrintError("Bad part '%s' in TESNPC::InitWorn.", NameForForm); /*0x52446a*/
                  }
                }
                break; /*0x52445c*/
              case 0xE: /*0x524323*/
                if ( v24 && (*(int (__thiscall **)(_DWORD *))(*v24[0x16] + 8))(v24[0x16]) < 2 ) /*0x52434c*/
                {
                  v14 = (EntryData *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v24[0x16] + 0xF0))(v24[0x16], 0); /*0x52435b*/
                  a1 = (TESObjectREFR *)v14; /*0x52435d*/
                }
                else
                {
                  v14 = (EntryData *)a1; /*0x524363*/
                }
                if ( !v14 || ContainerEntryExtraData_HasWorn(v14, 0) ) /*0x52436f*/
                  ActorSkinInfo_SetLightSlotForm((ActorSkinInfo *)animData, type); /*0x52437f*/
                break; /*0x524384*/
              default:
                v20 = OblivionDynamicCast( /*0x52447b*/
                        type,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESFullName `RTTI Type Descriptor',
                        0);
                if ( !v20 || (v21 = *((CHAR **)v20 + 1)) == 0 ) /*0x52448c*/
                  v21 = EmptyString; /*0x52448e*/
                PrintError( /*0x5244a1*/
                  "Need to add support for BipedObject '%s' object name '%s' in TESNPC::InitWorn.",
                  *(_DWORD *)(4 * v8 + 0xB06588),
                  v21);
                break; /*0x5244a1*/
            }
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v11, v13); /*0x5244ab*/
            FormHeapFree((unsigned int)v11); /*0x5244b1*/
            v8 = (int)animDataa; /*0x5244b6*/
          }
          else
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)EquippedInstance, v10); /*0x524303*/
            FormHeapFree((unsigned int)v11); /*0x524309*/
          }
        }
        animDataa = (ActorAnimData *)++v8; /*0x5244c3*/
      }
      while ( v8 < 0x10 ); /*0x5244c7*/
    }
  }
}
