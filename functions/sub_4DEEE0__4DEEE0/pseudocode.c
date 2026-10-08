void __thiscall sub_4DEEE0(char *this, _DWORD *a2)
{
  TESObjectREFR *v3; // ebp
  ExtraDataList *v4; // esi
  BSExtraDataVtbl *EnableStateParent; // eax
  TESChildCELL *v6; // eax
  TESObjectREFR *RandomTeleportMarker; // eax
  TESChildCELL *v8; // eax
  BSExtraDataVtbl *MerchantContainer; // eax
  TESChildCELL *v10; // eax
  TESObjectREFR *TravelHorse; // eax
  BSExtraDataVtbl *v12; // eax
  BSExtraData *Teleport; // eax
  BSExtraData *v14; // ebx
  BSExtraDataVtbl *v15; // eax
  TESObjectREFR *v16; // esi
  TeleportData *TeleportData; // edi
  BSExtraDataVtbl *v18; // eax
  float *Head; // eax
  float *v20; // eax
  float *v21; // [esp-8h] [ebp-3Ch]
  void *v22; // [esp+Ch] [ebp-28h] BYREF
  float v23[3]; // [esp+10h] [ebp-24h] BYREF
  NiPoint3 v24; // [esp+1Ch] [ebp-18h] BYREF
  NiPoint3 v25; // [esp+28h] [ebp-Ch] BYREF
  float v26; // [esp+38h] [ebp+4h]

  if ( a2 ) /*0x4deef0*/
  {
    *(float *)&v22 = 0.0; /*0x4deefe*/
    if ( NiTMap_GetAt(a2, (int)this, &v22) ) /*0x4def02*/
    {
      if ( *(float *)&v22 != 0.0 ) /*0x4def15*/
      {
        v3 = (TESObjectREFR *)OblivionDynamicCast( /*0x4def2e*/
                                v22,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                0);
        if ( v3 ) /*0x4def35*/
        {
          v4 = (ExtraDataList *)(this + 0x44); /*0x4def3b*/
          EnableStateParent = ExtraDataList_GetEnableStateParent(v4); /*0x4def40*/
          if ( EnableStateParent ) /*0x4def47*/
          {
            *(float *)&v22 = 0.0; /*0x4def51*/
            if ( NiTMap_GetAt(a2, (int)EnableStateParent, &v22) ) /*0x4def55*/
            {
              if ( *(float *)&v22 != 0.0 ) /*0x4def64*/
              {
                v6 = (TESChildCELL *)OblivionDynamicCast( /*0x4def73*/
                                       v22,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                       0);
                if ( v6 ) /*0x4def7d*/
                {
                  sub_4DBF60(v3, v6); /*0x4def82*/
                  LOBYTE(v22) = ExtraDataList_IsEnableStateInverse(v4); /*0x4def8e*/
                  ExtraDataList_SetEnableStateInverse(&v3->member.baseExtraList, (char)v22); /*0x4def9a*/
                }
              }
            }
          }
          RandomTeleportMarker = ExtraDataList::GetRandomTeleportMarker(v4); /*0x4defa1*/
          if ( RandomTeleportMarker ) /*0x4defa8*/
          {
            *(float *)&v22 = 0.0; /*0x4defb2*/
            if ( NiTMap_GetAt(a2, (int)RandomTeleportMarker, &v22) ) /*0x4defb6*/
            {
              if ( *(float *)&v22 != 0.0 ) /*0x4defc5*/
              {
                v8 = (TESChildCELL *)OblivionDynamicCast( /*0x4defd4*/
                                       v22,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                       0);
                if ( v8 ) /*0x4defde*/
                  sub_4DBF00(v3, v8); /*0x4defe3*/
              }
            }
          }
          MerchantContainer = ExtraDataList_GetMerchantContainer(v4); /*0x4defea*/
          if ( MerchantContainer ) /*0x4deff1*/
          {
            *(float *)&v22 = 0.0; /*0x4deffb*/
            if ( NiTMap_GetAt(a2, (int)MerchantContainer, &v22) ) /*0x4defff*/
            {
              if ( *(float *)&v22 != 0.0 ) /*0x4df00e*/
              {
                v10 = (TESChildCELL *)OblivionDynamicCast( /*0x4df01d*/
                                        v22,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                        0);
                if ( v10 ) /*0x4df027*/
                  sub_4DBF30(v3, v10); /*0x4df02c*/
              }
            }
          }
          TravelHorse = ExtraDataList::GetTravelHorse(v4); /*0x4df033*/
          if ( TravelHorse ) /*0x4df03a*/
          {
            *(float *)&v22 = 0.0; /*0x4df044*/
            if ( NiTMap_GetAt(a2, (int)TravelHorse, &v22) ) /*0x4df048*/
            {
              if ( *(float *)&v22 != 0.0 ) /*0x4df057*/
              {
                v12 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4df066*/
                                           v22,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                           0);
                if ( v12 ) /*0x4df070*/
                  sub_4D7940(v3, v12); /*0x4df075*/
              }
            }
          }
          Teleport = (BSExtraData *)ExtraDataList_GetTeleport(v4); /*0x4df07c*/
          v14 = Teleport; /*0x4df081*/
          if ( Teleport ) /*0x4df085*/
          {
            if ( TeleportData_GetLinkedDoor(Teleport) ) /*0x4df08d*/
            {
              *(float *)&v22 = 0.0; /*0x4df0a1*/
              v15 = TeleportData_GetLinkedDoor(v14); /*0x4df0a5*/
              if ( NiTMap_GetAt(a2, (int)v15, &v22) ) /*0x4df0af*/
              {
                if ( *(float *)&v22 != 0.0 ) /*0x4df0c2*/
                {
                  v16 = (TESObjectREFR *)OblivionDynamicCast( /*0x4df0da*/
                                           v22,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                           0);
                  if ( v16 ) /*0x4df0e1*/
                  {
                    TeleportData = TESObjectREFR::GetTeleportData(v3); /*0x4df0ee*/
                    TeleportData::SetLinkedDoor(TeleportData, v16); /*0x4df0f3*/
                    v25 = *(NiPoint3 *)sub_42B430((char *)v14); /*0x4df101*/
                    v18 = TeleportData_GetLinkedDoor(v14); /*0x4df115*/
                    v21 = (float *)(*((int (__thiscall **)(BSExtraDataVtbl *))v18->Destructor + 0x5D))(v18); /*0x4df126*/
                    Head = (float *)EmbeddedList_GetHead((char *)v14); /*0x4df12e*/
                    sub_4121A0(Head, v23, v21); /*0x4df135*/
                    v20 = v16->vtbl->GetPos(v16); /*0x4df144*/
                    v26 = v20[1] + v23[1]; /*0x4df154*/
                    *(float *)&v22 = v20[2] + v23[2]; /*0x4df15f*/
                    v24.x = *v20 + v23[0]; /*0x4df169*/
                    v24.y = v26; /*0x4df171*/
                    v24.z = *(float *)&v22; /*0x4df179*/
                    TeleportData::SetTeleportPosition(TeleportData, &v24); /*0x4df17d*/
                    TeleportData::SetTeleportRotation(TeleportData, &v25); /*0x4df189*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
