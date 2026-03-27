char __cdecl sub_686450(MobileObject *a1, NiPoint3 *arg4, TeleportData *a3, char a4, char a5)
{
  int process; // ecx
  double v7; // st7
  TES *v8; // ecx
  ExtraDataList *currentInteriorCell; // ebx
  TESWorldSpace *CurrentWorldspace; // eax
  TESWaterForm *WaterForm; // eax
  bhkCharacterProxy *CharProxy; // eax
  int v13; // eax
  float y; // ecx
  float x; // eax
  double v16; // st7
  NiNode *v17; // eax
  double z; // st7
  int v19; // esi
  double v20; // st7
  MobileObjectVtbl *vtbl; // edx
  bool v22; // c0
  double v23; // st7
  NiAVObject *v24; // ebx
  BSShaderProperty *v25; // eax
  float *v26; // ebx
  NiNode *v27; // esi
  BSShaderProperty *v28; // eax
  double v29; // st7
  BSShaderProperty *v30; // eax
  PlayerCharacter *v31; // eax
  PlayerCharacter *v32; // esi
  int type; // eax
  int v34; // eax
  char v35; // [esp+2Ah] [ebp-12Ah] BYREF
  bool v36; // [esp+2Bh] [ebp-129h]
  float v37; // [esp+2Ch] [ebp-128h]
  float v38; // [esp+30h] [ebp-124h]
  NiPoint3 v39; // [esp+34h] [ebp-120h] BYREF
  int v40; // [esp+40h] [ebp-114h] BYREF
  float v41; // [esp+44h] [ebp-110h]
  float v42; // [esp+48h] [ebp-10Ch]
  float v43; // [esp+4Ch] [ebp-108h]
  float WaterHeight; // [esp+50h] [ebp-104h]
  NiPoint3 v45; // [esp+54h] [ebp-100h] BYREF
  TeleportData *v46; // [esp+60h] [ebp-F4h]
  double v47; // [esp+64h] [ebp-F0h] BYREF
  float v48; // [esp+6Ch] [ebp-E8h]
  float v49; // [esp+70h] [ebp-E4h]
  _DWORD v50[16]; // [esp+74h] [ebp-E0h] BYREF
  bhkWorldRayCastData a2; // [esp+B4h] [ebp-A0h] BYREF
  int v52; // [esp+150h] [ebp-4h]

  v46 = a3;
  TeleportData::SetTeleportPosition(a3, arg4);
  if ( !byte_B3C089 && (TES->currentInteriorCell || sub_43F840(TES, &arg4->x)) )
  {
    if ( !a1 )
      return 0;
    if ( !MobileObject_GetCharProxy(a1) )
      return 0;
    process = (int)a1->process;
    if ( !process )
      return 0;
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)process + 8))(process) )
    {
      v35 = 0;
      if ( sub_685D60((int)a1, &arg4->x, a3, &v35) )
        return v35;
      v36 = a5 != 0;
      v37 = sub_5E0660(a1);
      v7 = v37;
      if ( v37 == 0.0 )
      {
        v37 = flt_A2FFE8;
        v7 = v37;
      }
      v38 = v7;
      if ( flt_A3F458 > v7 )
        v38 = flt_A3F458;
      v8 = TES;
      currentInteriorCell = (ExtraDataList *)TES->currentInteriorCell;
      WaterHeight = flt_A3B888;
      v35 = 0;
      if ( currentInteriorCell
        || TES::GetCurrentWorldspace(v8)
        && (CurrentWorldspace = TES::GetCurrentWorldspace(TES),
            (currentInteriorCell = (ExtraDataList *)sub_44A270(
                                                      (TESWorldSpace **)TESDataHandler,
                                                      arg4->x,
                                                      arg4->y,
                                                      CurrentWorldspace,
                                                      0)) != 0) )
      {
        if ( (currentInteriorCell[1].members.m_presenceBitfield[8] & 2) != 0 )
        {
          WaterHeight = TESObjectCELL_GetWaterHeight(currentInteriorCell);
          WaterForm = TESObjectCELL::GetWaterForm((TESObjectCELL *)currentInteriorCell);
          if ( WaterForm )
          {
            if ( ((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm) )
              v35 = 1;
          }
        }
      }
      *(float *)&v50[9] = 1.0;
      v50[0] = &hkClosestRayHitCollector::`vftable';
      *(float *)&v50[1] = 1.0;
      v50[0xC] = 0;
      v52 = 0;
      bhkWorldRayCastData::Init(&a2);
      CharProxy = MobileObject_GetCharProxy(a1);
      v13 = sub_608B30(CharProxy);
      v45.z = arg4->z;
      a2.RayHitCollector1 = (hkRayHitCollector *)v50;
      y = arg4->y;
      v45.z = v45.z + v37;
      a2.WorldRayCastInput.FilterInfo = (v13 << 0x10) | 0x1B;
      x = arg4->x;
      v45.y = y;
      v39.y = y;
      v45.x = x;
      v39.x = x;
      a2.RayHitCollector2 = 0;
      v39.z = v45.z;
      bhkWorldRayCastData::SetCastInputFrom(&a2, &v45);
      v47 = v38 + v37;
      v38 = v47;
      v16 = v38;
      v38 = dbl_A2FC68 * v38;
      *(float *)&v40 = v38;
      v41 = v38;
      v42 = v16 * dbl_A3D360;
      sub_663FF0(&a2, (float *)&v40);
      v17 = TES::CastRay(TES, &a2);
      z = v39.z;
      v19 = (int)v17;
      if ( a2.WorldRayCastOutput.RootCollidable )
        v20 = z - a2.WorldRayCastOutput.HitFraction * v47;
      else
        v20 = z - v47;
      vtbl = a1->vtbl;
      v39.z = v20;
      v22 = ((double (__thiscall *)(MobileObject *, int))vtbl[1].super.super.Unk_21)(a1, 0x38) > 0.0;
      v23 = 0.0;
      if ( v22 || (v23 = 0.0, Actor_CanFly(a1)) )
      {
        if ( currentInteriorCell )
        {
          if ( WaterHeight > (double)v39.z )
            v39.z = WaterHeight;
        }
      }
      if ( v36 )
      {
        *(float *)&v40 = 1.0;
        *((float *)&v47 + 1) = 1.0;
        v41 = v23;
        v42 = v23;
        v43 = v23;
        *(float *)&v47 = v23;
        v48 = v23;
        v49 = v23;
        v24 = sub_47F070(&v45, &v47, &v39, &v40);
        v25 = (BSShaderProperty *)sub_4E70B0();
        sub_405680((NiNode *)v24, v25);
        sub_440E60(TES, (int)v24, flt_A3D8F0);
      }
      v26 = (float *)v46;
      TeleportData::SetTeleportPosition(v46, &v39);
      sub_68CB40(v26, a1);
      if ( sub_68CAB0(v26) )
      {
        if ( v35 || !Actor_CanSwim((Actor *)a1) || !sub_5E3400((Actor *)a1) )
          goto LABEL_42;
      }
      else
      {
        if ( sub_5E1E90(a1) )
          goto LABEL_42;
        if ( sub_68CA80(v26) )
        {
          if ( v35
            || (!Actor_CanSwim((Actor *)a1) || !sub_5E3400((Actor *)a1))
            && (!Actor_IsCreature((Actor *)a1) || v37 * dbl_A432F0 <= WaterHeight - v39.z) )
          {
            if ( v36 )
            {
              *(float *)&v40 = 0.0;
              v41 = 0.0;
              v42 = 1.0;
              v43 = 0.0;
              v27 = (NiNode *)sub_47FD30(flt_A31E2C, (NiD3DPassVtbl **)&v40);
              v28 = (BSShaderProperty *)sub_4E70B0();
              sub_405680(v27, v28);
              v27->members.super.m_localTransform.pos = v39;
LABEL_41:
              sub_440E60(TES, (int)v27, flt_A3D8F0);
            }
LABEL_42:
            sub_684530((int)a1, (int)v26, 0);
            return 0;
          }
        }
        else if ( !a2.WorldRayCastOutput.RootCollidable )
        {
          if ( !v36 )
            goto LABEL_42;
          *(float *)&v40 = 1.0;
          v41 = 1.0;
          v42 = 1.0;
          v29 = 0.0;
          goto LABEL_47;
        }
        if ( a4 )
        {
          if ( v19 )
          {
            v31 = sub_4DC270(v19);
            v32 = v31;
            if ( v31 )
            {
              type = v31->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v31)->member.type;
              switch ( type )
              {
                case 0x12:
                  v34 = (int)v32->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v32);
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 0x88))(v34) )
                  {
LABEL_56:
                    if ( !v36 )
                      goto LABEL_42;
                    *(float *)&v40 = 1.0;
                    v29 = 0.0;
                    v41 = 0.0;
                    v42 = 0.0;
LABEL_47:
                    v43 = v29;
                    v27 = (NiNode *)sub_47FD30(flt_A31E2C, (NiD3DPassVtbl **)&v40);
                    v30 = (BSShaderProperty *)sub_4E70B0();
                    sub_405680(v27, v30);
                    v27->members.super.m_localTransform.pos = v39;
                    goto LABEL_41;
                  }
                  break;
                case 0x18:
                  break;
                case 0x1C:
                  sub_684530((int)a1, (int)v26, 1);
                  return 1;
                default:
                  goto LABEL_56;
              }
            }
          }
        }
      }
      sub_684530((int)a1, (int)v26, 1);
    }
  }
  return 1;
}
