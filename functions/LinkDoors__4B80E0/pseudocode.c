void __cdecl LinkDoors(TESObjectREFR *a1, TESObjectREFR *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // eax
  TESObjectDOOR *v5; // eax
  TeleportData *TeleportData; // ebp
  TeleportData *v7; // eax
  double v8; // st7
  TESObjectREFR *RandomTeleportMarkerReference; // ebx
  NiPoint3 *v10; // eax
  double v11; // st7
  float *v12; // eax
  TESObjectREFR *v13; // esi
  NiPoint3 *v14; // eax
  double v15; // st7
  NiPoint3 *v16; // eax
  float v17; // [esp+0h] [ebp-40h]
  float v18; // [esp+0h] [ebp-40h]
  float v19; // [esp+14h] [ebp-2Ch]
  TESObjectDOOR *v20; // [esp+18h] [ebp-28h]
  float v21; // [esp+18h] [ebp-28h]
  float v22; // [esp+1Ch] [ebp-24h]
  TeleportData *v23; // [esp+20h] [ebp-20h]
  TESObjectDOOR *v24; // [esp+24h] [ebp-1Ch]
  float v25; // [esp+24h] [ebp-1Ch]
  NiPoint3 v26; // [esp+28h] [ebp-18h] BYREF
  NiPoint3 v27; // [esp+34h] [ebp-Ch] BYREF
  float v28; // [esp+44h] [ebp+4h]
  float v29; // [esp+44h] [ebp+4h]

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != a2 )
      {
        v3 = a1->vtbl->GetBaseForm(a1);
        v24 = (TESObjectDOOR *)OblivionDynamicCast(
                                 v3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESObjectDOOR `RTTI Type Descriptor',
                                 0);
        v4 = a2->vtbl->GetBaseForm(a2);
        v5 = (TESObjectDOOR *)OblivionDynamicCast(
                                v4,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESObjectDOOR `RTTI Type Descriptor',
                                0);
        v20 = v5;
        if ( v24 )
        {
          if ( v5 )
          {
            if ( !(BSExtraData *)GetTeleportExtraData(a1) && !GetTeleportExtraData(a2) )
            {
              TeleportData = TESObjectREFR::GetTeleportData(a1);
              v7 = TESObjectREFR::GetTeleportData(a2);
              v23 = v7;
              if ( TeleportData )
              {
                if ( v7 )
                {
                  v28 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fRandomDoorDistance);
                  v8 = v28;
                  if ( *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B35B2C) + fCostant_100 >= v28 )
                    v8 = *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B35B2C) + fCostant_100;
                  v19 = v8;
                  TeleportData::SetLinkedDoor(TeleportData, a2);
                  RandomTeleportMarkerReference = TESObjectREFR::GetRandomTeleportMarkerReference(a2);
                  if ( RandomTeleportMarkerReference )
                  {
                    v10 = (NiPoint3 *)RandomTeleportMarkerReference->vtbl->GetPos(RandomTeleportMarkerReference);
                    TeleportData::SetTeleportPosition(TeleportData, v10);
                    TeleportData::SetTeleportRotation(TeleportData, &RandomTeleportMarkerReference->member.rot);
                  }
                  else
                  {
                    sub_4DD070(a2, &v26, flt_A449C0);
                    if ( (v20->super.doorFlags & kDoorFlag_Automatic) != 0 )
                      v11 = v19;
                    else
                      v11 = v28;
                    v17 = v11;
                    NiPoint3::MutliplyByValue(&v26, v17);
                    v12 = a2->vtbl->GetPos(a2);
                    v21 = v12[1] + v26.y;
                    v22 = v12[2] + v26.z;
                    v27.x = *v12 + v26.x;
                    v27.y = v21;
                    v27.z = v22;
                    TeleportData::SetTeleportPosition(TeleportData, &v27);
                    v27.x = 0.0;
                    v27.y = 0.0;
                    v27.z = a2->member.rot.z + dbl_A3D5B8;
                    TeleportData::SetTeleportRotation(TeleportData, &v27);
                  }
                  TeleportData::SetLinkedDoor(v23, a1);
                  v13 = TESObjectREFR::GetRandomTeleportMarkerReference(a1);
                  if ( v13 )
                  {
                    v14 = (NiPoint3 *)v13->vtbl->GetPos(v13);
                    TeleportData::SetTeleportPosition(v23, v14);
                    TeleportData::SetTeleportRotation(v23, &v13->member.rot);
                  }
                  else
                  {
                    sub_4DD070(a1, &v26, flt_A449C0);
                    if ( (v24->super.doorFlags & kDoorFlag_Automatic) != 0 )
                      v15 = v19;
                    else
                      v15 = v28;
                    v18 = v15;
                    NiPoint3::MutliplyByValue(&v26, v18);
                    v16 = (NiPoint3 *)a1->vtbl->GetPos(a1);
                    v29 = v16->y + v26.y;
                    v25 = v16->z + v26.z;
                    v27.x = v16->x + v26.x;
                    v27.y = v29;
                    v27.z = v25;
                    TeleportData::SetTeleportPosition(v23, &v27);
                    v27.x = 0.0;
                    v27.y = 0.0;
                    v27.z = a1->member.rot.z + dbl_A3D5B8;
                    TeleportData::SetTeleportRotation(v23, &v27);
                  }
                }
              }
              TESObjectREFR::AddToLowPathWorld(a1);
            }
          }
        }
      }
    }
  }
}
