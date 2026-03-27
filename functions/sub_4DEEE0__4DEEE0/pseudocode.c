void __thiscall sub_4DEEE0(char *this, _DWORD *a2)
{
  TESObjectREFR *v3; // ebp
  ExtraDataList *v4; // esi
  BSExtraDataVtbl *v5; // eax
  TESChildCELL *v6; // eax
  TESObjectREFR *RandomTeleportMarker; // eax
  TESChildCELL *v8; // eax
  BSExtraDataVtbl *v9; // eax
  TESChildCELL *v10; // eax
  TESObjectREFR *TravelHorse; // eax
  BSExtraDataVtbl *v12; // eax
  BSExtraData *Teleport; // eax
  BSExtraData *v14; // ebx
  BSExtraDataVtbl *v15; // eax
  TESObjectREFR *v16; // esi
  TeleportData *TeleportData; // edi
  BSExtraDataVtbl *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // [esp-8h] [ebp-3Ch]
  void *v22; // [esp+Ch] [ebp-28h] BYREF
  float v23[3]; // [esp+10h] [ebp-24h] BYREF
  NiPoint3 v24; // [esp+1Ch] [ebp-18h] BYREF
  NiPoint3 v25; // [esp+28h] [ebp-Ch] BYREF
  float v26; // [esp+38h] [ebp+4h]

  if ( a2 )
  {
    *(float *)&v22 = 0.0;
    if ( NiTMap_GetAt(a2, (int)this, &v22) )
    {
      if ( *(float *)&v22 != 0.0 )
      {
        v3 = (TESObjectREFR *)OblivionDynamicCast(
                                v22,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                0);
        if ( v3 )
        {
          v4 = (ExtraDataList *)(this + 0x44);
          v5 = sub_420260(v4);
          if ( v5 )
          {
            *(float *)&v22 = 0.0;
            if ( NiTMap_GetAt(a2, (int)v5, &v22) )
            {
              if ( *(float *)&v22 != 0.0 )
              {
                v6 = (TESChildCELL *)OblivionDynamicCast(
                                       v22,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                       0);
                if ( v6 )
                {
                  sub_4DBF60(v3, v6);
                  LOBYTE(v22) = sub_420340(v4);
                  sub_420360(&v3->member.baseExtraList, (char)v22);
                }
              }
            }
          }
          RandomTeleportMarker = ExtraDataList::GetRandomTeleportMarker(v4);
          if ( RandomTeleportMarker )
          {
            *(float *)&v22 = 0.0;
            if ( NiTMap_GetAt(a2, (int)RandomTeleportMarker, &v22) )
            {
              if ( *(float *)&v22 != 0.0 )
              {
                v8 = (TESChildCELL *)OblivionDynamicCast(
                                       v22,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                       0);
                if ( v8 )
                  sub_4DBF00(v3, v8);
              }
            }
          }
          v9 = sub_420680(v4);
          if ( v9 )
          {
            *(float *)&v22 = 0.0;
            if ( NiTMap_GetAt(a2, (int)v9, &v22) )
            {
              if ( *(float *)&v22 != 0.0 )
              {
                v10 = (TESChildCELL *)OblivionDynamicCast(
                                        v22,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                        0);
                if ( v10 )
                  sub_4DBF30(v3, v10);
              }
            }
          }
          TravelHorse = ExtraDataList::GetTravelHorse(v4);
          if ( TravelHorse )
          {
            *(float *)&v22 = 0.0;
            if ( NiTMap_GetAt(a2, (int)TravelHorse, &v22) )
            {
              if ( *(float *)&v22 != 0.0 )
              {
                v12 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                           v22,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                           0);
                if ( v12 )
                  sub_4D7940(v3, v12);
              }
            }
          }
          Teleport = (BSExtraData *)ExtraDataList_GetTeleport(v4);
          v14 = Teleport;
          if ( Teleport )
          {
            if ( sub_42B410(Teleport) )
            {
              *(float *)&v22 = 0.0;
              v15 = sub_42B410(v14);
              if ( NiTMap_GetAt(a2, (int)v15, &v22) )
              {
                if ( *(float *)&v22 != 0.0 )
                {
                  v16 = (TESObjectREFR *)OblivionDynamicCast(
                                           v22,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                           0);
                  if ( v16 )
                  {
                    TeleportData = TESObjectREFR::GetTeleportData(v3);
                    TeleportData::SetLinkedDoor(TeleportData, v16);
                    v25 = *(NiPoint3 *)sub_42B430((char *)v14);
                    v18 = sub_42B410(v14);
                    v21 = (float *)(*((int (__thiscall **)(BSExtraDataVtbl *))v18->Destructor + 0x5D))(v18);
                    v19 = (float *)sub_6899C0((char *)v14);
                    sub_4121A0(v19, v23, v21);
                    v20 = v16->vtbl->GetPos(v16);
                    v26 = v20[1] + v23[1];
                    *(float *)&v22 = v20[2] + v23[2];
                    v24.x = *v20 + v23[0];
                    v24.y = v26;
                    v24.z = *(float *)&v22;
                    TeleportData::SetTeleportPosition(TeleportData, &v24);
                    TeleportData::SetTeleportRotation(TeleportData, &v25);
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
