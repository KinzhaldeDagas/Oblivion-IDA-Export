NiNode *__thiscall sub_60C5B0(ArrowProjectile *this)
{
  NiNode *result; // eax
  MobileObjectVtbl *vtbl; // edx
  hkVector4 v4; // xmm0
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  int v6; // eax
  TESForm *v7; // ecx
  float v8; // edx
  float v9; // eax
  PlayerCharacter *v10; // ecx
  PlayerCharacterVtbl *v11; // edx
  int v12; // eax
  UInt32 v13; // ecx
  Data *v14; // edx
  float v15; // eax
  PlayerCharacter *v16; // ecx
  double firstPersonNiNodeTranslateZ; // st7
  PlayerCharacterVtbl *v18; // edx
  bhkCharacterProxy *CharProxy; // eax
  TESObjectREFR *v20; // eax
  TESObjectREFR *v21; // ecx
  TESObjectCELL *ParentCell; // esi
  BSExtraDataVtbl *v23; // eax
  int v24; // esi
  int v25; // eax
  PlayerCharacter *v26; // eax
  double v27; // st5
  double v28; // st7
  char v29; // [esp+1Fh] [ebp-2B5h]
  float v30; // [esp+20h] [ebp-2B4h]
  float v31; // [esp+20h] [ebp-2B4h]
  float v32; // [esp+20h] [ebp-2B4h]
  TESObjectREFR v33; // [esp+24h] [ebp-2B0h] BYREF
  __m128 v34; // [esp+84h] [ebp-250h] BYREF
  bhkWorldRayCastData v35; // [esp+94h] [ebp-240h] BYREF
  float v36[4]; // [esp+114h] [ebp-1C0h] BYREF
  int v37; // [esp+124h] [ebp-1B0h]
  int v38; // [esp+128h] [ebp-1ACh]
  unsigned int v39; // [esp+2D0h] [ebp-4h]

  result = this->super.vtbl->super.GetNiNode(this);
  if ( (PlayerCharacter *)this->shooter == TESDataHandler_g_PlayerRef )
  {
    if ( result )
    {
      vtbl = this->super.vtbl;
      v4 = stru_BA7A40;
      v35.WorldRayCastOutput.HitFraction = 1.0;
      GetPos = vtbl->super.GetPos;
      v35.WorldRayCastInput.EnableShapeCollectionFilter = 0;
      v35.WorldRayCastInput.FilterInfo = 0;
      v35.WorldRayCastOutput.RootCollidable = 0;
      memset(&v35.BroadPhaseAabbCache, 0, 0xC);
      v35.unk60 = v4;
      v6 = (int)GetPos((TESObjectREFR *)this);
      v7 = *(TESForm **)v6;
      v8 = *(float *)(v6 + 4);
      v9 = *(float *)(v6 + 8);
      v33.member.baseForm = v7;
      v10 = TESDataHandler_g_PlayerRef;
      v33.member.rot.x = v8;
      v11 = v10->vtbl;
      v33.member.rot.y = v9;
      v12 = (int)v11->super.super.super.GetPos((TESObjectREFR *)v10);
      v13 = *(_DWORD *)v12;
      v14 = *(Data **)(v12 + 4);
      v15 = *(float *)(v12 + 8);
      v33.member.super.refID = v13;
      v16 = TESDataHandler_g_PlayerRef;
      firstPersonNiNodeTranslateZ = TESDataHandler_g_PlayerRef->firstPersonNiNodeTranslateZ;
      v33.member.super.modlist.data = v14;
      v18 = v16->vtbl;
      *(float *)&v33.member.childCell.GetChildCell = firstPersonNiNodeTranslateZ;
      *(float *)&v33.member.super.modlist.next = ((double (__thiscall *)(PlayerCharacter *))v18->super.super.super.GetScale)(v16)
                                               * *(float *)&v33.member.childCell.GetChildCell
                                               + v15;
      v33.member.rot.z = *(float *)&v33.member.baseForm - *(float *)&v33.member.super.refID;
      v33.member.pos[0] = v33.member.rot.x - *(float *)&v33.member.super.modlist.data;
      *(float *)&v33.member.childCell.GetChildCell = v33.member.rot.y - *(float *)&v33.member.super.modlist.next;
      CharProxy = MobileObject_GetCharProxy(&this->super);
      if ( CharProxy )
        v20 = (TESObjectREFR *)sub_57E270(CharProxy, &v33);
      else
        v20 = sub_65ABE0(TESDataHandler_g_PlayerRef, &v33);
      v35.WorldRayCastInput.FilterInfo = (UInt32)v20->vtbl;
      bhkWorldRayCastData::SetCastInputFrom(&v35, (NiPoint3 *)&v33.member.super.refID);
      *(float *)&v33.member.super.type = v33.member.rot.z + *(float *)&v33.member.super.refID;
      *(float *)&v33.member.super.flags = *(float *)&v33.member.super.modlist.data + v33.member.pos[0];
      v30 = *(float *)&v33.member.childCell.GetChildCell + *(float *)&v33.member.super.modlist.next;
      v33.member.baseForm = *(TESForm **)&v33.member.super.type;
      v33.member.rot.x = *(float *)&v33.member.super.flags;
      v33.member.rot.y = v30;
      bhkWorldRayCastData::SetCastInputTo(&v35, (NiPoint3 *)&v33.member.baseForm);
      sub_538C00(v36);
      v21 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      v39 = 0;
      v35.RayHitCollector2 = (hkRayHitCollector *)v36;
      v35.RayHitCollector1 = 0;
      ParentCell = TESObjectREFR_GetParentCell(v21);
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v23 = sub_424180(&ParentCell->members.extraData);
      else
        v23 = (BSExtraDataVtbl *)bhkWorldM;
      if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v23->Destructor + 0x22))(
             v23,
             &v35) )
      {
        v29 = 1;
        *(_DWORD *)&v33.member.super.type = 0;
        v24 = 0;
        do
        {
          if ( *(int *)&v33.member.super.type >= v38 )
            break;
          *(_OWORD *)&v33.member.pos[1] = *(_OWORD *)(v24 + v37);
          v33.member.parentCell = *(TESObjectCELL **)(v24 + v37 + 0x10);
          v33.member.baseExtraList.vtbl = *(void ***)(v24 + v37 + 0x14);
          *(_DWORD *)&v33.member.baseExtraList.members.m_presenceBitfield[4] = *(_DWORD *)(v24 + v37 + 0x20);
          sub_4806E0(*(int *)&v33.member.baseExtraList.members.m_presenceBitfield[4]);
          if ( v25 )
          {
            v26 = sub_4DC270(v25);
            if ( v26 )
            {
              if ( v26 != TESDataHandler_g_PlayerRef && v26 != (PlayerCharacter *)this )
              {
                v27 = *(float *)&v33.member.baseExtraList.vtbl;
                v31 = v33.member.rot.z * *(float *)&v33.member.baseExtraList.vtbl;
                *(float *)&v33.member.super.flags = v33.member.pos[0] * *(float *)&v33.member.baseExtraList.vtbl;
                *(float *)&v33.vtbl = *(float *)&v33.member.baseExtraList.vtbl
                                    * *(float *)&v33.member.childCell.GetChildCell;
                v32 = v31 + *(float *)&v33.member.super.refID;
                *(float *)&v33.member.super.flags = *(float *)&v33.member.super.modlist.data
                                                  + *(float *)&v33.member.super.flags;
                *(float *)&v33.vtbl = *(float *)&v33.vtbl + *(float *)&v33.member.super.modlist.next;
                *(float *)&v33.member.baseForm = v32;
                v33.member.rot.x = *(float *)&v33.member.super.flags;
                v28 = *(float *)&v33.vtbl;
                v33.member.rot.y = *(float *)&v33.vtbl;
                sub_4529E0(v34.m128_f32, (float *)&v33.member.baseForm);
                sub_60D950(
                  v27,
                  v28,
                  this,
                  *(int *)&v33.member.baseExtraList.members.m_presenceBitfield[4],
                  &v34,
                  (__m128 *)&v33.member.pos[1]);
                sub_60BE90((unsigned int *)this);
                v29 = 0;
              }
            }
          }
          ++*(_DWORD *)&v33.member.super.type;
          v24 += 0x30;
        }
        while ( v29 );
      }
      v39 = 0xFFFFFFFF;
      return (NiNode *)sub_538C80(v36);
    }
  }
  return result;
}
