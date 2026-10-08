// Verified lifecycle connection: after creating reciprocal ExtraTeleport records and marker transforms, LinkDoors calls TESObjectREFR::AddToLowPathWorld for a1. That creates one bidirectional AStarWorldNode for the paired doors; the nested maps index it under both endpoint spaces.
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

  if ( a1 ) /*0x4b80ea*/
  {
    if ( a2 ) /*0x4b80f7*/
    {
      if ( a1 != a2 ) /*0x4b80ff*/
      {
        v3 = a1->vtbl->GetBaseForm(a1); /*0x4b811e*/
        v24 = (TESObjectDOOR *)OblivionDynamicCast( /*0x4b8143*/
                                 v3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESObjectDOOR `RTTI Type Descriptor',
                                 0);
        v4 = a2->vtbl->GetBaseForm(a2); /*0x4b8147*/
        v5 = (TESObjectDOOR *)OblivionDynamicCast( /*0x4b814a*/
                                v4,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                &TESObjectDOOR `RTTI Type Descriptor',
                                0);
        v20 = v5; /*0x4b8154*/
        if ( v24 ) /*0x4b8158*/
        {
          if ( v5 ) /*0x4b8160*/
          {
            if ( !(BSExtraData *)TESObjectREFR_GetTeleportData(a1) && !TESObjectREFR_GetTeleportData(a2) ) /*0x4b8177*/
            {
              TeleportData = TESObjectREFR::GetTeleportData(a1); /*0x4b818e*/
              v7 = TESObjectREFR::GetTeleportData(a2); /*0x4b8190*/
              v23 = v7; /*0x4b8197*/
              if ( TeleportData ) /*0x4b819b*/
              {
                if ( v7 ) /*0x4b81a3*/
                {
                  v28 = *GameSetting_GetSafeFloatPointer(MEMORY[0xB35B24]); /*0x4b81ba*/
                  v8 = v28; /*0x4b81c3*/
                  if ( *GameSetting_GetSafeFloatPointer(unk_B35B2C) + fCostant_100 >= v28 ) /*0x4b81d6*/
                    v8 = *GameSetting_GetSafeFloatPointer(unk_B35B2C) + fCostant_100; /*0x4b81e6*/
                  v19 = v8; /*0x4b81ed*/
                  TeleportData::SetLinkedDoor(TeleportData, a2); /*0x4b81f3*/
                  RandomTeleportMarkerReference = TESObjectREFR::GetRandomTeleportMarkerReference(a2); /*0x4b81ff*/
                  if ( RandomTeleportMarkerReference ) /*0x4b8203*/
                  {
                    v10 = (NiPoint3 *)RandomTeleportMarkerReference->vtbl->GetPos(RandomTeleportMarkerReference); /*0x4b820f*/
                    TeleportData::SetTeleportPosition(TeleportData, v10); /*0x4b8214*/
                    TeleportData::SetTeleportRotation(TeleportData, &RandomTeleportMarkerReference->member.rot); /*0x4b821d*/
                  }
                  else
                  {
                    sub_4DD070(a2, &v26, flt_A449C0); /*0x4b8233*/
                    if ( (v20->super.doorFlags & kDoorFlag_Automatic) != 0 ) /*0x4b8245*/
                      v11 = v19; /*0x4b8247*/
                    else
                      v11 = v28; /*0x4b824d*/
                    v17 = v11; /*0x4b8251*/
                    NiPoint3::MutliplyByValue(&v26, v17); /*0x4b8254*/
                    v12 = a2->vtbl->GetPos(a2); /*0x4b8263*/
                    v21 = v12[1] + v26.y; /*0x4b8273*/
                    v22 = v12[2] + v26.z; /*0x4b827e*/
                    v27.x = *v12 + v26.x; /*0x4b8288*/
                    v27.y = v21; /*0x4b8290*/
                    v27.z = v22; /*0x4b8298*/
                    TeleportData::SetTeleportPosition(TeleportData, &v27); /*0x4b829c*/
                    v27.x = 0.0; /*0x4b82a7*/
                    v27.y = 0.0; /*0x4b82ac*/
                    v27.z = a2->member.rot.z + dbl_A3D5B8; /*0x4b82b9*/
                    TeleportData::SetTeleportRotation(TeleportData, &v27); /*0x4b82bf*/
                  }
                  TeleportData::SetLinkedDoor(v23, a1); /*0x4b82cb*/
                  v13 = TESObjectREFR::GetRandomTeleportMarkerReference(a1); /*0x4b82d7*/
                  if ( v13 ) /*0x4b82db*/
                  {
                    v14 = (NiPoint3 *)v13->vtbl->GetPos(v13); /*0x4b82e7*/
                    TeleportData::SetTeleportPosition(v23, v14); /*0x4b82ec*/
                    TeleportData::SetTeleportRotation(v23, &v13->member.rot); /*0x4b82f5*/
                  }
                  else
                  {
                    sub_4DD070(a1, &v26, flt_A449C0); /*0x4b830b*/
                    if ( (v24->super.doorFlags & kDoorFlag_Automatic) != 0 ) /*0x4b831d*/
                      v15 = v19; /*0x4b831f*/
                    else
                      v15 = v28; /*0x4b8325*/
                    v18 = v15; /*0x4b8329*/
                    NiPoint3::MutliplyByValue(&v26, v18); /*0x4b832c*/
                    v16 = (NiPoint3 *)a1->vtbl->GetPos(a1); /*0x4b833b*/
                    v29 = v16->y + v26.y; /*0x4b834b*/
                    v25 = v16->z + v26.z; /*0x4b8356*/
                    v27.x = v16->x + v26.x; /*0x4b8360*/
                    v27.y = v29; /*0x4b8368*/
                    v27.z = v25; /*0x4b8370*/
                    TeleportData::SetTeleportPosition(v23, &v27); /*0x4b8374*/
                    v27.x = 0.0; /*0x4b837f*/
                    v27.y = 0.0; /*0x4b8384*/
                    v27.z = a1->member.rot.z + dbl_A3D5B8; /*0x4b8391*/
                    TeleportData::SetTeleportRotation(v23, &v27); /*0x4b8397*/
                  }
                }
              }
              TESObjectREFR::AddToLowPathWorld(a1); /*0x4b839d*/
            }
          }
        }
      }
    }
  }
}
