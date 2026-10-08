// Player-only launch-obstruction ray test from projectile origin toward player eye/reference height. A valid early hit is routed through normal ArrowProjectile collision handling and collision-state resolution; non-player shots skip this path.
void __thiscall ArrowProjectile_CheckPlayerLaunchObstruction(ArrowProjectile *this)
{
  NiNode *v2; // eax
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
  TESObjectREFR *CollisionFilterInfo; // eax
  PlayerCharacter *v21; // ecx
  TESObjectCELL *DwordAtOffset40; // esi
  BSExtraDataVtbl *v23; // eax
  int v24; // esi
  int v25; // eax
  PlayerCharacter *v26; // eax
  char v27; // [esp+1Fh] [ebp-2B5h]
  float v28; // [esp+20h] [ebp-2B4h]
  float v29; // [esp+20h] [ebp-2B4h]
  float v30; // [esp+20h] [ebp-2B4h]
  TESObjectREFR v31; // [esp+24h] [ebp-2B0h] BYREF
  __m128 havokPoint; // [esp+84h] [ebp-250h] BYREF
  bhkWorldRayCastData v33; // [esp+94h] [ebp-240h] BYREF
  float v34[4]; // [esp+114h] [ebp-1C0h] BYREF
  int v35; // [esp+124h] [ebp-1B0h]
  int v36; // [esp+128h] [ebp-1ACh]
  unsigned int v37; // [esp+2D0h] [ebp-4h]

  v2 = this->super.vtbl->super.GetNiNode(this); /*0x60c5fa*/
  if ( (PlayerCharacter *)this->shooter == reference )// Only player-fired projectiles run the immediate launch-obstruction ray test between held-visual origin and player eye/reference height. /*0x60c605*/
  {
    if ( v2 ) /*0x60c60f*/
    {
      vtbl = this->super.vtbl; /*0x60c615*/
      v4 = *(hkVector4 *)&OB_ShaderConstantStorage_010201A0[0x1870B]; /*0x60c619*/
      v33.WorldRayCastOutput.HitFraction = 1.0; /*0x60c620*/
      GetPos = vtbl->super.GetPos; /*0x60c627*/
      v33.WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x60c62f*/
      v33.WorldRayCastInput.FilterInfo = 0; /*0x60c636*/
      v33.WorldRayCastOutput.RootCollidable = 0; /*0x60c63d*/
      memset(&v33.BroadPhaseAabbCache, 0, 0xC); /*0x60c644*/
      v33.unk60 = v4; /*0x60c659*/
      v6 = (int)GetPos((TESObjectREFR *)this); /*0x60c661*/
      v7 = *(TESForm **)v6; /*0x60c663*/
      v8 = *(float *)(v6 + 4); /*0x60c665*/
      v9 = *(float *)(v6 + 8); /*0x60c668*/
      v31.member.baseForm = v7; /*0x60c66b*/
      v10 = reference; /*0x60c66f*/
      v31.member.rot.x = v8; /*0x60c675*/
      v11 = v10->vtbl; /*0x60c679*/
      v31.member.rot.y = v9; /*0x60c67b*/
      v12 = (int)v11->super.super.super.GetPos((TESObjectREFR *)v10); /*0x60c685*/
      v13 = *(_DWORD *)v12; /*0x60c687*/
      v14 = *(Data **)(v12 + 4); /*0x60c689*/
      v15 = *(float *)(v12 + 8); /*0x60c68c*/
      v31.member.super.refID = v13; /*0x60c68f*/
      v16 = reference; /*0x60c693*/
      firstPersonNiNodeTranslateZ = reference->firstPersonNiNodeTranslateZ; /*0x60c699*/
      v31.member.super.modlist.data = v14; /*0x60c69f*/
      v18 = v16->vtbl; /*0x60c6a3*/
      *(float *)&v31.member.childCell.GetChildCell = firstPersonNiNodeTranslateZ; /*0x60c6a5*/
      *(float *)&v31.member.super.modlist.next = ((double (__thiscall *)(PlayerCharacter *))v18->super.super.super.GetScale)(v16) /*0x60c6bf*/
                                               * *(float *)&v31.member.childCell.GetChildCell
                                               + v15;
      v31.member.rot.z = *(float *)&v31.member.baseForm - *(float *)&v31.member.super.refID; /*0x60c6cb*/
      v31.member.pos[0] = v31.member.rot.x - *(float *)&v31.member.super.modlist.data; /*0x60c6d7*/
      *(float *)&v31.member.childCell.GetChildCell = v31.member.rot.y - *(float *)&v31.member.super.modlist.next; /*0x60c6e3*/
      CharProxy = MobileObject_GetCharProxy(&this->super); /*0x60c6e7*/
      if ( CharProxy ) /*0x60c6ee*/
        CollisionFilterInfo = (TESObjectREFR *)bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v31); /*0x60c6f7*/
      else
        CollisionFilterInfo = MobileObject_GetCollisionFilterInfo((MobileObject *)reference, &v31); /*0x60c709*/
      v33.WorldRayCastInput.FilterInfo = (UInt32)CollisionFilterInfo->vtbl; /*0x60c710*/
      bhkWorldRayCastData::SetCastInputFrom(&v33, (NiPoint3 *)&v31.member.super.refID); /*0x60c723*/
      *(float *)&v31.member.super.type = v31.member.rot.z + *(float *)&v31.member.super.refID; /*0x60c73c*/
      *(float *)&v31.member.super.flags = *(float *)&v31.member.super.modlist.data + v31.member.pos[0]; /*0x60c748*/
      v28 = *(float *)&v31.member.childCell.GetChildCell + *(float *)&v31.member.super.modlist.next; /*0x60c754*/
      v31.member.baseForm = *(TESForm **)&v31.member.super.type; /*0x60c75c*/
      v31.member.rot.x = *(float *)&v31.member.super.flags; /*0x60c764*/
      v31.member.rot.y = v28; /*0x60c76c*/
      bhkWorldRayCastData::SetCastInputTo(&v33, (NiPoint3 *)&v31.member.baseForm); /*0x60c770*/
      sub_538C00(v34); /*0x60c77c*/
      v21 = reference; /*0x60c781*/
      v37 = 0; /*0x60c78e*/
      v33.RayHitCollector2 = (hkRayHitCollector *)v34; /*0x60c795*/
      v33.RayHitCollector1 = 0; /*0x60c79c*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v21); /*0x60c7a8*/
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x60c7ac*/
        v23 = sub_424180(&DwordAtOffset40->members.extraData); /*0x60c7b8*/
      else
        v23 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x60c7bf*/
      if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v23->Destructor + 0x22))( /*0x60c7d6*/
             v23,
             &v33) )
      {
        v27 = 1; /*0x60c7e0*/
        *(_DWORD *)&v31.member.super.type = 0; /*0x60c7e5*/
        v24 = 0; /*0x60c7e9*/
        do /*0x60c8fe*/
        {
          if ( *(int *)&v31.member.super.type >= v36 ) /*0x60c7f6*/
            break; /*0x60c7f6*/
          *(_OWORD *)&v31.member.pos[1] = *(_OWORD *)(v24 + v35); /*0x60c807*/
          v31.member.parentCell = *(TESObjectCELL **)(v24 + v35 + 0x10); /*0x60c810*/
          v31.member.baseExtraList.vtbl = *(void ***)(v24 + v35 + 0x14); /*0x60c818*/
          *(_DWORD *)&v31.member.baseExtraList.members.m_presenceBitfield[4] = *(_DWORD *)(v24 + v35 + 0x20); /*0x60c821*/
          sub_4806E0(*(int *)&v31.member.baseExtraList.members.m_presenceBitfield[4]); /*0x60c825*/
          if ( v25 ) /*0x60c82f*/
          {
            v26 = sub_4DC270(v25); /*0x60c836*/
            if ( v26 ) /*0x60c840*/
            {
              if ( v26 != reference && v26 != (PlayerCharacter *)this ) /*0x60c854*/
              {
                v29 = v31.member.rot.z * *(float *)&v31.member.baseExtraList.vtbl; /*0x60c875*/
                *(float *)&v31.member.super.flags = v31.member.pos[0] * *(float *)&v31.member.baseExtraList.vtbl; /*0x60c87f*/
                *(float *)&v31.vtbl = *(float *)&v31.member.baseExtraList.vtbl /*0x60c887*/
                                    * *(float *)&v31.member.childCell.GetChildCell;
                v30 = v29 + *(float *)&v31.member.super.refID; /*0x60c893*/
                *(float *)&v31.member.super.flags = *(float *)&v31.member.super.modlist.data /*0x60c89f*/
                                                  + *(float *)&v31.member.super.flags;
                *(float *)&v31.vtbl = *(float *)&v31.vtbl + *(float *)&v31.member.super.modlist.next; /*0x60c8ab*/
                *(float *)&v31.member.baseForm = v30; /*0x60c8b3*/
                v31.member.rot.x = *(float *)&v31.member.super.flags; /*0x60c8bb*/
                v31.member.rot.y = *(float *)&v31.vtbl; /*0x60c8c3*/
                sub_4529E0(havokPoint.m128_f32, (float *)&v31.member.baseForm); /*0x60c8c7*/
                ArrowProjectile_HandleCollisionHit( /*0x60c8df*/
                  this,
                  *(void **)&v31.member.baseExtraList.members.m_presenceBitfield[4],
                  &havokPoint,
                  &v31.member.pos[1]);          // If launch ray intersects another valid actor before ordinary flight, route the intersection through projectile hit processing immediately.
                ArrowProjectile_ResolveCollisionState(this); /*0x60c8e9*/
                v27 = 0; /*0x60c8ee*/
              }
            }
          }
          ++*(_DWORD *)&v31.member.super.type; /*0x60c8f2*/
          v24 += 0x30; /*0x60c8f7*/
        }
        while ( v27 ); /*0x60c8fe*/
      }
      v37 = 0xFFFFFFFF; /*0x60c90b*/
      sub_538C80(v34); /*0x60c916*/
    }
  }
}
