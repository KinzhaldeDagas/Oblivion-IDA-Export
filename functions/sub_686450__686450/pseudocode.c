char __cdecl sub_686450(MobileObject *a1, NiPoint3 *arg4, TeleportData *a3, char a4, char a5)
{
  LowProcess *process; // ecx
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
  NiAVObject *v17; // eax
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
  float ScaledCollisionHeight; // [esp+2Ch] [ebp-128h]
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

  v46 = a3; /*0x68649c*/
  TeleportData::SetTeleportPosition(a3, arg4); /*0x6864a0*/
  if ( !BYTE1(qword_B3BB2C[0x157]) && (MEMORY[0xB333A0]->currentInteriorCell || sub_43F840(MEMORY[0xB333A0], &arg4->x)) ) /*0x6864bf*/
  {
    if ( !a1 ) /*0x6864ce*/
      return 0; /*0x6864ce*/
    if ( !MobileObject_GetCharProxy(a1) ) /*0x6864d6*/
      return 0; /*0x6864d6*/
    process = a1->process; /*0x6864e3*/
    if ( !process ) /*0x6864e8*/
      return 0; /*0x6864e8*/
    if ( !process->GetProcessLevel(process) ) /*0x6864f3*/
    {
      v35 = 0; /*0x6864fd*/
      if ( sub_685D60((int)a1, &arg4->x, a3, &v35) ) /*0x686509*/
        return v35; /*0x686519*/
      v36 = a5 != 0; /*0x686529*/
      ScaledCollisionHeight = Actor_GetScaledCollisionHeight(a1); /*0x686535*/
      v7 = ScaledCollisionHeight; /*0x686543*/
      if ( ScaledCollisionHeight == 0.0 ) /*0x686548*/
      {
        ScaledCollisionHeight = flt_A2FFE8; /*0x686552*/
        v7 = ScaledCollisionHeight; /*0x686556*/
      }
      v38 = v7; /*0x68655a*/
      if ( flt_A3F458 > v7 ) /*0x68656d*/
        v38 = flt_A3F458; /*0x68656f*/
      v8 = MEMORY[0xB333A0]; /*0x686577*/
      currentInteriorCell = (ExtraDataList *)MEMORY[0xB333A0]->currentInteriorCell; /*0x686583*/
      WaterHeight = flt_A3B888; /*0x686586*/
      v35 = 0; /*0x68658c*/
      if ( currentInteriorCell /*0x6865c7*/
        || TES::GetCurrentWorldspace(v8)
        && (CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]),
            (currentInteriorCell = (ExtraDataList *)sub_44A270(
                                                      (TESWorldSpace **)g_TESDataHandler,
                                                      arg4->x,
                                                      arg4->y,
                                                      CurrentWorldspace,
                                                      0)) != 0) )
      {
        if ( (currentInteriorCell[1].members.m_presenceBitfield[8] & 2) != 0 ) /*0x6865d2*/
        {
          WaterHeight = TESObjectCELL_GetWaterHeight(currentInteriorCell); /*0x6865db*/
          WaterForm = TESObjectCELL::GetWaterForm((TESObjectCELL *)currentInteriorCell); /*0x6865e1*/
          if ( WaterForm ) /*0x6865e8*/
          {
            if ( ((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm) ) /*0x6865f4*/
              v35 = 1; /*0x6865fa*/
          }
        }
      }
      *(float *)&v50[9] = 1.0; /*0x686603*/
      v50[0] = &hkClosestRayHitCollector::`vftable'; /*0x68660a*/
      *(float *)&v50[1] = 1.0; /*0x686612*/
      v50[0xC] = 0; /*0x686616*/
      v52 = 0; /*0x686624*/
      bhkWorldRayCastData::Init(&a2); /*0x68662b*/
      CharProxy = MobileObject_GetCharProxy(a1); /*0x686632*/
      v13 = sub_608B30(CharProxy); /*0x686639*/
      v45.z = arg4->z; /*0x686644*/
      a2.RayHitCollector1 = (hkRayHitCollector *)v50; /*0x686657*/
      y = arg4->y; /*0x68665e*/
      v45.z = v45.z + ScaledCollisionHeight;    // Actor movement ground-probe setup: From.z = requested position z + actor vertical extent. FilterInfo = (charProxy collision layer << 16) | 0x1B. /*0x686661*/
      a2.WorldRayCastInput.FilterInfo = (v13 << 0x10) | 0x1B; /*0x686665*/
      x = arg4->x; /*0x68666c*/
      v45.y = y; /*0x68666e*/
      v39.y = y; /*0x686672*/
      v45.x = x; /*0x68667a*/
      v39.x = x; /*0x68667e*/
      a2.RayHitCollector2 = 0; /*0x68668e*/
      v39.z = v45.z; /*0x686699*/
      bhkWorldRayCastData::SetCastInputFrom(&a2, &v45); /*0x68669d*/
      v47 = v38 + ScaledCollisionHeight;        // Downward ground-probe ray length = actorHeight + max(256.0, actorHeight). Direction vector passed to 0x663FF0 is (0, 0, -rayLength). /*0x6866b6*/
      v38 = v47; /*0x6866ba*/
      v16 = v38; /*0x6866be*/
      v38 = dbl_A2FC68 * v38; /*0x6866ca*/
      *(float *)&v40 = v38; /*0x6866d2*/
      v41 = v38; /*0x6866d6*/
      v42 = v16 * dbl_A3D360; /*0x6866e0*/
      sub_663FF0(&a2, (float *)&v40); /*0x6866e4*/
      v17 = TES::CastRay(MEMORY[0xB333A0], &a2);// Native ground probe raycast. After TES::CastRay, if RootCollidable is set, Oblivion computes snappedZ = fromZ - HitFraction * rayLength; if no hit, it uses fromZ - rayLength. /*0x6866f7*/
      z = v39.z; /*0x6866fc*/
      v19 = (int)v17; /*0x686708*/
      if ( a2.WorldRayCastOutput.RootCollidable ) /*0x68670a*/
        v20 = z - a2.WorldRayCastOutput.HitFraction * v47;// HitFraction application for downward snap: ST0 starts as From.z; HitFraction * rayLength is subtracted to produce the ground/contact z used in TeleportData. /*0x686717*/
      else
        v20 = z - v47; /*0x68671b*/
      vtbl = a1->vtbl; /*0x68671f*/
      v39.z = v20; /*0x686721*/
      v22 = ((double (__thiscall *)(MobileObject *, int))vtbl[1].super.super.Unk_21)(a1, 0x38) > 0.0; /*0x686733*/
      v23 = 0.0; /*0x686737*/
      if ( v22 || (v23 = 0.0, Actor_CanFly(a1)) ) /*0x686742*/
      {
        if ( currentInteriorCell ) /*0x68674f*/
        {
          if ( WaterHeight > (double)v39.z ) /*0x686762*/
            v39.z = WaterHeight; /*0x686764*/
        }
      }
      if ( v36 ) /*0x686771*/
      {
        *(float *)&v40 = 1.0; /*0x686779*/
        *((float *)&v47 + 1) = 1.0; /*0x68677e*/
        v41 = v23; /*0x68678b*/
        v42 = v23; /*0x686790*/
        v43 = v23; /*0x686798*/
        *(float *)&v47 = v23; /*0x68679d*/
        v48 = v23; /*0x6867a1*/
        v49 = v23; /*0x6867a5*/
        v24 = sub_47F070(&v45, &v47, &v39, &v40); /*0x6867b1*/
        v25 = (BSShaderProperty *)sub_4E70B0(); /*0x6867b3*/
        sub_405680((NiNode *)v24, v25); /*0x6867bb*/
        sub_440E60(MEMORY[0xB333A0], (int)v24, flt_A3D8F0); /*0x6867d1*/
      }
      v26 = (float *)v46; /*0x6867da*/
      TeleportData::SetTeleportPosition(v46, &v39); /*0x6867e5*/
      sub_68CB40(v26, a1); /*0x6867ed*/
      if ( sub_68CAB0(v26) ) /*0x6867f4*/
      {
        if ( v35 || !Actor_CanSwim((Actor *)a1) || !sub_5E3400((Actor *)a1) ) /*0x686a1c*/
          goto LABEL_42; /*0x686a23*/
      }
      else
      {
        if ( sub_5E1E90(a1) ) /*0x686803*/
          goto LABEL_42; /*0x68680a*/
        if ( sub_68CA80(v26) ) /*0x686812*/
        {
          if ( v35 /*0x686864*/
            || (!Actor_CanSwim((Actor *)a1) || !sub_5E3400((Actor *)a1))
            && (!Actor_IsCreature((Actor *)a1) || ScaledCollisionHeight * dbl_A432F0 <= WaterHeight - v39.z) )
          {
            if ( v36 ) /*0x68686f*/
            {
              *(float *)&v40 = 0.0; /*0x686877*/
              v41 = 0.0; /*0x68687c*/
              v42 = 1.0; /*0x686883*/
              v43 = 0.0; /*0x686887*/
              v27 = (NiNode *)sub_47FD30(flt_A31E2C, (NiD3DPassVtbl **)&v40); /*0x68689c*/
              v28 = (BSShaderProperty *)sub_4E70B0(); /*0x68689e*/
              sub_405680(v27, v28); /*0x6868a6*/
              v27->members.super.m_localTransform.pos = v39; /*0x6868af*/
LABEL_41:
              sub_440E60(MEMORY[0xB333A0], (int)v27, flt_A3D8F0); /*0x6868c0*/
            }
LABEL_42:
            sub_684530((int)a1, (int)v26, 0); /*0x6868d6*/
            return 0; /*0x686907*/
          }
        }
        else if ( !a2.WorldRayCastOutput.RootCollidable ) /*0x686910*/
        {
          if ( !v36 ) /*0x686917*/
            goto LABEL_42; /*0x686917*/
          *(float *)&v40 = 1.0; /*0x68691b*/
          v41 = 1.0; /*0x68691f*/
          v42 = 1.0; /*0x686923*/
          v29 = 0.0; /*0x686927*/
          goto LABEL_47; /*0x686927*/
        }
        if ( a4 ) /*0x686971*/
        {
          if ( v19 ) /*0x686979*/
          {
            v31 = sub_4DC270(v19); /*0x686980*/
            v32 = v31; /*0x686985*/
            if ( v31 ) /*0x68698c*/
            {
              type = v31->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v31)->member.type; /*0x68699e*/
              switch ( type ) /*0x6869a5*/
              {
                case 0x12: /*0x6869a5*/
                  v34 = (int)v32->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v32); /*0x6869ce*/
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 0x88))(v34) ) /*0x6869da*/
                  {
LABEL_56:
                    if ( !v36 ) /*0x6869e5*/
                      goto LABEL_42; /*0x6869e5*/
                    *(float *)&v40 = 1.0; /*0x6869ed*/
                    v29 = 0.0; /*0x6869f1*/
                    v41 = 0.0; /*0x6869f3*/
                    v42 = 0.0; /*0x6869f7*/
LABEL_47:
                    v43 = v29; /*0x686929*/
                    v27 = (NiNode *)sub_47FD30(flt_A31E2C, (NiD3DPassVtbl **)&v40); /*0x686944*/
                    v30 = (BSShaderProperty *)sub_4E70B0(); /*0x686946*/
                    sub_405680(v27, v30); /*0x68694e*/
                    v27->members.super.m_localTransform.pos = v39; /*0x686957*/
                    goto LABEL_41; /*0x686968*/
                  }
                  break;
                case 0x18: /*0x6869a5*/
                  break;
                case 0x1C: /*0x6869a5*/
                  sub_684530((int)a1, (int)v26, 1); /*0x6869b5*/
                  return 1; /*0x6869bf*/
                default:
                  goto LABEL_56; /*0x6869af*/
              }
            }
          }
        }
      }
      sub_684530((int)a1, (int)v26, 1); /*0x686a2d*/
    }
  }
  return 1; /*0x6868e4*/
}
