PlayerCharacter *__thiscall sub_69FF10(TESObjectREFR *this)
{
  PlayerCharacter *result; // eax
  int v3; // ecx
  int v4; // ebx
  TESObjectREFR *v5; // esi
  TESObjectREFRVtbl *vtbl; // eax
  hkVector4 v7; // xmm0
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  float *v9; // eax
  float v10; // ecx
  unsigned int v11; // edx
  float v12; // eax
  PlayerCharacter *v13; // ecx
  PlayerCharacterVtbl *v14; // edx
  int v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  PlayerCharacter *v19; // ecx
  double firstPersonNiNodeTranslateZ; // st7
  PlayerCharacterVtbl *v21; // edx
  bhkCharacterProxy *CharProxy; // eax
  TESObjectREFR *v23; // eax
  double v24; // st5
  TESObjectREFR *v25; // ecx
  TESObjectCELL *ParentCell; // esi
  BSExtraDataVtbl *v27; // eax
  int v28; // ecx
  int v29; // esi
  int v30; // eax
  int v31; // ecx
  PlayerCharacter *v32; // eax
  PlayerCharacter *v33; // esi
  void (__thiscall *Unk_18)(TESForm *); // edx
  char v35; // [esp+1Dh] [ebp-2ADh]
  float v36; // [esp+1Eh] [ebp-2ACh]
  float v37; // [esp+1Eh] [ebp-2ACh]
  float v38; // [esp+1Eh] [ebp-2ACh]
  float v39; // [esp+22h] [ebp-2A8h]
  int v40; // [esp+22h] [ebp-2A8h]
  float v41; // [esp+26h] [ebp-2A4h]
  int i; // [esp+26h] [ebp-2A4h]
  float v43; // [esp+2Ah] [ebp-2A0h] BYREF
  float v44; // [esp+2Eh] [ebp-29Ch]
  float v45; // [esp+32h] [ebp-298h]
  float v46; // [esp+36h] [ebp-294h]
  float v47; // [esp+3Ah] [ebp-290h]
  float v48; // [esp+3Eh] [ebp-28Ch]
  float v49; // [esp+42h] [ebp-288h]
  float v50; // [esp+46h] [ebp-284h]
  hkVector4 v51; // [esp+4Ah] [ebp-280h] BYREF
  bhkWorldRayCastData v52; // [esp+5Ah] [ebp-270h] BYREF
  float v53; // [esp+EEh] [ebp-1DCh]
  float v54[4]; // [esp+10Ah] [ebp-1C0h] BYREF
  int v55; // [esp+11Ah] [ebp-1B0h]
  int v56; // [esp+11Eh] [ebp-1ACh]
  unsigned int v57; // [esp+2C6h] [ebp-4h]

  result = (PlayerCharacter *)this->vtbl->GetNiNode(this);
  v3 = *((_DWORD *)this + 0x1A);
  v4 = 0;
  v5 = (TESObjectREFR *)result;
  if ( !v3
    || (result = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x20))(v3),
        result == TESDataHandler_g_PlayerRef) )
  {
    if ( v5 )
    {
      vtbl = this->vtbl;
      v7 = stru_BA7A40;
      v52.WorldRayCastOutput.HitFraction = 1.0;
      GetPos = vtbl->GetPos;
      v52.WorldRayCastInput.EnableShapeCollectionFilter = 0;
      v52.WorldRayCastInput.FilterInfo = 0;
      v52.WorldRayCastOutput.RootCollidable = 0;
      memset(&v52.BroadPhaseAabbCache, 0, 0xC);
      v52.unk60 = v7;
      v9 = GetPos(this);
      v10 = *v9;
      v11 = *((_DWORD *)v9 + 1);
      v12 = v9[2];
      *(_QWORD *)&v51.x = __PAIR64__(v11, LODWORD(v10));
      v13 = TESDataHandler_g_PlayerRef;
      v14 = TESDataHandler_g_PlayerRef->vtbl;
      v51.z = v12;
      v15 = (int)v14->super.super.super.GetPos((TESObjectREFR *)v13);
      v16 = *(float *)v15;
      v17 = *(float *)(v15 + 4);
      v18 = *(float *)(v15 + 8);
      v45 = v16;
      v19 = TESDataHandler_g_PlayerRef;
      firstPersonNiNodeTranslateZ = TESDataHandler_g_PlayerRef->firstPersonNiNodeTranslateZ;
      v46 = v17;
      v21 = v19->vtbl;
      v44 = firstPersonNiNodeTranslateZ;
      v47 = ((double (__thiscall *)(PlayerCharacter *))v21->super.super.super.GetScale)(v19) * v44 + v18;
      v50 = v51.x - v45;
      v49 = v51.y - v46;
      v44 = v51.z - v47;
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
      if ( CharProxy )
        v23 = (TESObjectREFR *)sub_57E270(CharProxy, &v43);
      else
        v23 = sub_65ABE0((MobileObject *)TESDataHandler_g_PlayerRef, (TESObjectREFR *)&v43);
      v52.WorldRayCastInput.FilterInfo = (UInt32)v23->vtbl;
      v24 = hkFactor;
      v51.x = v45 * v24;
      v51.y = v46 * v24;
      v51.z = v24 * v47;
      v52.WorldRayCastInput.From = v51;
      v41 = v45 + v50;
      v39 = v46 + v49;
      v36 = v47 + v44;
      v51.x = v41;
      v51.y = v39;
      v51.z = v36;
      bhkWorldRayCastData::SetCastInputTo(&v52, (NiPoint3 *)&v51);
      sub_538C00(v54);
      v52.RayHitCollector2 = (hkRayHitCollector *)v54;
      v25 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      v57 = 0;
      v52.RayHitCollector1 = 0;
      if ( TESObjectREFR_GetParentCell(v25) )
      {
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
        if ( TESObjectCELL_IsInterior(ParentCell) )
          v27 = sub_424180(&ParentCell->members.extraData);
        else
          v27 = (BSExtraDataVtbl *)bhkWorldM;
        if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v27->Destructor + 0x22))(
               v27,
               &v52) )
        {
          v28 = 0;
          v35 = 1;
          v40 = 0;
          for ( i = 0; v40 < v56; v28 = i )
          {
            v29 = *(_DWORD *)(v28 + v55 + 0x20);
            v53 = *(float *)(v28 + v55 + 0x14);
            sub_4806E0(v29);
            if ( v30 )
            {
              if ( *(_BYTE *)(v29 + 0x18) == 1 )
              {
                v31 = v29 + *(_DWORD *)(v29 + 0x10);
                if ( v31 )
                  v4 = *(_DWORD *)(v31 + 0xC);
              }
              v32 = sub_4DC270(v30);
              v33 = v32;
              if ( v32 != TESDataHandler_g_PlayerRef
                && v32 != (PlayerCharacter *)this
                && !v32->vtbl->super.super.super.IsActor((TESObjectREFR *)v32) )
              {
                if ( v4 )
                {
                  Unk_18 = this->vtbl[1].super.Unk_18;
                  v37 = v50 * v53;
                  v48 = v49 * v53;
                  v43 = v53 * v44;
                  v38 = v37 + v45;
                  v48 = v46 + v48;
                  v43 = v43 + v47;
                  v51.x = v38;
                  v51.y = v48;
                  v51.z = v43;
                  ((void (__thiscall *)(TESObjectREFR *, _DWORD, _DWORD, _DWORD, int, PlayerCharacter *, _DWORD))Unk_18)(
                    this,
                    LODWORD(v38),
                    LODWORD(v48),
                    LODWORD(v43),
                    v4,
                    v33,
                    0);
                  v35 = 0;
                }
              }
              v4 = 0;
            }
            ++v40;
            i += 0x30;
            if ( !v35 )
              break;
          }
        }
      }
      v57 = 0xFFFFFFFF;
      return (PlayerCharacter *)sub_538C80(v54);
    }
  }
  return result;
}
