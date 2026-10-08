PlayerCharacter *__thiscall sub_69FF10(TESObjectREFR *this)
{
  PlayerCharacter *result; // eax
  int v3; // ecx
  int v4; // ebx
  PlayerCharacter *v5; // esi
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
  TESObjectREFR *CollisionFilterInfo; // eax
  double v24; // st5
  PlayerCharacter *v25; // ecx
  TESObjectCELL *DwordAtOffset40; // esi
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

  result = (PlayerCharacter *)this->vtbl->GetNiNode(this); /*0x69ff5a*/
  v3 = *((_DWORD *)this + 0x1A); /*0x69ff5c*/
  v4 = 0; /*0x69ff5f*/
  v5 = result; /*0x69ff63*/
  if ( !v3 || (result = (PlayerCharacter *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x20))(v3), result == reference) ) /*0x69ff74*/
  {
    if ( v5 ) /*0x69ff7c*/
    {
      vtbl = this->vtbl; /*0x69ff82*/
      v7 = unk_BA7A40; /*0x69ff86*/
      v52.WorldRayCastOutput.HitFraction = 1.0; /*0x69ff8d*/
      GetPos = vtbl->GetPos; /*0x69ff94*/
      v52.WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x69ff9c*/
      v52.WorldRayCastInput.FilterInfo = 0; /*0x69ffa0*/
      v52.WorldRayCastOutput.RootCollidable = 0; /*0x69ffa4*/
      memset(&v52.BroadPhaseAabbCache, 0, 0xC); /*0x69ffab*/
      v52.unk60 = v7; /*0x69ffc0*/
      v9 = GetPos(this); /*0x69ffc8*/
      v10 = *v9; /*0x69ffca*/
      v11 = *((_DWORD *)v9 + 1); /*0x69ffcc*/
      v12 = v9[2]; /*0x69ffcf*/
      *(_QWORD *)&v51.x = __PAIR64__(v11, LODWORD(v10)); /*0x69ffd2*/
      v13 = reference; /*0x69ffd6*/
      v14 = reference->vtbl; /*0x69ffe0*/
      v51.z = v12; /*0x69ffe2*/
      v15 = (int)v14->super.super.super.GetPos((TESObjectREFR *)v13); /*0x69ffec*/
      v16 = *(float *)v15; /*0x69ffee*/
      v17 = *(float *)(v15 + 4); /*0x69fff0*/
      v18 = *(float *)(v15 + 8); /*0x69fff3*/
      v45 = v16; /*0x69fff6*/
      v19 = reference; /*0x69fffa*/
      firstPersonNiNodeTranslateZ = reference->firstPersonNiNodeTranslateZ; /*0x6a0000*/
      v46 = v17; /*0x6a0006*/
      v21 = v19->vtbl; /*0x6a000a*/
      v44 = firstPersonNiNodeTranslateZ; /*0x6a000c*/
      v47 = ((double (__thiscall *)(PlayerCharacter *))v21->super.super.super.GetScale)(v19) * v44 + v18; /*0x6a0026*/
      v50 = v51.x - v45; /*0x6a0032*/
      v49 = v51.y - v46; /*0x6a003e*/
      v44 = v51.z - v47; /*0x6a004a*/
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x6a004e*/
      if ( CharProxy ) /*0x6a0055*/
        CollisionFilterInfo = (TESObjectREFR *)bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v43); /*0x6a005e*/
      else
        CollisionFilterInfo = MobileObject_GetCollisionFilterInfo((MobileObject *)reference, (TESObjectREFR *)&v43); /*0x6a0070*/
      v52.WorldRayCastInput.FilterInfo = (UInt32)CollisionFilterInfo->vtbl; /*0x6a007d*/
      v24 = hkFactor; /*0x6a0081*/
      v51.x = v45 * v24; /*0x6a0094*/
      v51.y = v46 * v24; /*0x6a00a0*/
      v51.z = v24 * v47; /*0x6a00ae*/
      v52.WorldRayCastInput.From = v51; /*0x6a00bb*/
      v41 = v45 + v50; /*0x6a00c4*/
      v39 = v46 + v49; /*0x6a00d0*/
      v36 = v47 + v44; /*0x6a00d8*/
      v51.x = v41; /*0x6a00e0*/
      v51.y = v39; /*0x6a00e8*/
      v51.z = v36; /*0x6a00f0*/
      bhkWorldRayCastData::SetCastInputTo(&v52, (NiPoint3 *)&v51); /*0x6a00f4*/
      sub_538C00(v54); /*0x6a0100*/
      v52.RayHitCollector2 = (hkRayHitCollector *)v54; /*0x6a010c*/
      v25 = reference; /*0x6a0113*/
      v57 = 0; /*0x6a0119*/
      v52.RayHitCollector1 = 0; /*0x6a0120*/
      if ( Shared_GetDwordAtOffset40(v25) ) /*0x6a0127*/
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x6a013f*/
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x6a0143*/
          v27 = sub_424180(&DwordAtOffset40->members.extraData); /*0x6a014f*/
        else
          v27 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x6a0156*/
        if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, bhkWorldRayCastData *))v27->Destructor + 0x22))( /*0x6a016a*/
               v27,
               &v52) )
        {
          v28 = 0; /*0x6a0174*/
          v35 = 1; /*0x6a0176*/
          v40 = 0; /*0x6a017b*/
          for ( i = 0; v40 < v56; v28 = i ) /*0x6a017f*/
          {
            v29 = *(_DWORD *)(v28 + v55 + 0x20); /*0x6a01ac*/
            v53 = *(float *)(v28 + v55 + 0x14); /*0x6a01b5*/
            sub_4806E0(v29); /*0x6a01bc*/
            if ( v30 ) /*0x6a01c6*/
            {
              if ( *(_BYTE *)(v29 + 0x18) == 1 ) /*0x6a01d0*/
              {
                v31 = v29 + *(_DWORD *)(v29 + 0x10); /*0x6a01d5*/
                if ( v31 ) /*0x6a01d9*/
                  v4 = *(_DWORD *)(v31 + 0xC); /*0x6a01db*/
              }
              v32 = sub_4DC270(v30); /*0x6a01df*/
              v33 = v32; /*0x6a01e4*/
              if ( v32 != reference /*0x6a0207*/
                && v32 != (PlayerCharacter *)this
                && !v32->vtbl->super.super.super.IsActor((TESObjectREFR *)v32) )
              {
                if ( v4 ) /*0x6a0213*/
                {
                  Unk_18 = this->vtbl[1].super.Unk_18; /*0x6a0226*/
                  v37 = v50 * v53; /*0x6a0239*/
                  v48 = v49 * v53; /*0x6a0245*/
                  v43 = v53 * v44; /*0x6a024d*/
                  v38 = v37 + v45; /*0x6a0259*/
                  v48 = v46 + v48; /*0x6a0265*/
                  v43 = v43 + v47; /*0x6a0271*/
                  v51.x = v38; /*0x6a0279*/
                  v51.y = v48; /*0x6a0287*/
                  v51.z = v43; /*0x6a0296*/
                  ((void (__thiscall *)(TESObjectREFR *, _DWORD, _DWORD, _DWORD, int, PlayerCharacter *, _DWORD))Unk_18)( /*0x6a02a3*/
                    this,
                    LODWORD(v38),
                    LODWORD(v48),
                    LODWORD(v43),
                    v4,
                    v33,
                    0);
                  v35 = 0; /*0x6a02a5*/
                }
              }
              v4 = 0; /*0x6a02aa*/
            }
            ++v40; /*0x6a02ac*/
            i += 0x30; /*0x6a02b1*/
            if ( !v35 ) /*0x6a02bb*/
              break; /*0x6a02bb*/
          }
        }
      }
      v57 = 0xFFFFFFFF; /*0x6a02c8*/
      return (PlayerCharacter *)sub_538C80(v54); /*0x6a02d3*/
    }
  }
  return result; /*0x6a02d8*/
}
