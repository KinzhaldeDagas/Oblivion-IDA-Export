// Resolve an Actor impact from world impact position/normal. Records state-0 attachment data, delegates combat damage/effects through the shooter, selects an embed collision node or fallback state, and may transfer one unenchanted AMMO base form to the struck Actor inventory.
void __thiscall ArrowProjectile_HandleActorImpact(
        ArrowProjectile *this,
        const NiPoint3 *impactPosition,
        const NiPoint3 *impactNormal,
        Actor *struckActor)
{
  ArrowProjectile_CollisionData *v5; // eax
  float *v6; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v8; // eax
  char *LinearVelocityPtr; // eax
  __m128 v10; // xmm0
  double v11; // st6
  MobileObjectVtbl *vtbl; // eax
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  int v14; // eax
  NiTransform *v15; // eax
  float *v16; // ecx
  NiNode *v17; // esi
  bool v18; // zf
  NiNode *v19; // eax
  Actor *shooter; // ecx
  Actor *v21; // edi
  int v22; // eax
  TESForm *v23; // eax
  Actor *v24; // ecx
  Ni2DBuffer **v25; // edi
  int *SafeFloatPointer; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  double v28; // rt0
  float *v29; // eax
  double v30; // st7
  PlayerCharacter *v31; // ecx
  float (__thiscall *GetZRotation)(MobileObject *); // eax
  float *(__thiscall *v33)(TESObjectREFR *); // eax
  double v34; // rt2
  float *v35; // eax
  TESObjectREFR *v36; // esi
  int v37; // edx
  double v38; // st7
  unsigned __int8 (__thiscall *v39)(_DWORD, int); // eax
  NiAVObject *v40; // eax
  NiAVObject *ActorEmbedCollisionNode; // eax
  float *p_m_worldTransform; // esi
  float *v43; // eax
  float *v44; // ecx
  float *v45; // esi
  float v46; // eax
  float *BhkCollisionObjectRecursive; // eax
  LowProcess *v48; // ecx
  float v49; // ecx
  const NiPoint3 *v50; // edi
  float v51; // eax
  float v52; // edx
  double ScaledCollisionHeight; // st7
  char v54; // al
  double v55; // rt0
  int v56; // eax
  int v57; // ecx
  Atmosphere *v58; // eax
  NiAVObject *v59; // esi
  double v60; // rt1
  float *v61; // eax
  float *v62; // ecx
  float *v63; // eax
  float v64; // edx
  NiTransform *v65; // eax
  ArrowProjectile_CollisionData *unk05C; // edx
  int BhkCollisionObject; // eax
  int v68; // eax
  int v69; // eax
  int *v70; // eax
  int v71; // eax
  int v72; // eax
  void (__thiscall **p_AddItem)(TESObjectREFR *, int); // edi
  int v74; // eax
  unsigned __int64 v75; // [esp-4h] [ebp-1D0h]
  float v76; // [esp+4h] [ebp-1C8h]
  __int64 v77; // [esp+8h] [ebp-1C4h]
  float v78; // [esp+10h] [ebp-1BCh]
  float *a2; // [esp+14h] [ebp-1B8h]
  float *a2a; // [esp+14h] [ebp-1B8h]
  float v81; // [esp+18h] [ebp-1B4h]
  float AimPitch; // [esp+18h] [ebp-1B4h]
  char v83; // [esp+18h] [ebp-1B4h]
  int *v84; // [esp+18h] [ebp-1B4h]
  char v85; // [esp+36h] [ebp-196h]
  char v86; // [esp+36h] [ebp-196h]
  NiTransform v87; // [esp+38h] [ebp-194h] BYREF
  float inOutDistance; // [esp+6Ch] [ebp-160h] BYREF
  float v89[9]; // [esp+70h] [ebp-15Ch] BYREF
  float v90[9]; // [esp+94h] [ebp-138h] BYREF
  float v91[9]; // [esp+B8h] [ebp-114h] BYREF
  float v92[9]; // [esp+DCh] [ebp-F0h] BYREF
  NiTransform v93; // [esp+100h] [ebp-CCh] BYREF
  NiTransform v94; // [esp+134h] [ebp-98h] BYREF
  float v95[9]; // [esp+168h] [ebp-64h] BYREF
  __m128 v96; // [esp+18Ch] [ebp-40h] BYREF
  float normalZ; // [esp+19Ch] [ebp-30h] BYREF
  float v98; // [esp+1A0h] [ebp-2Ch]
  float v99; // [esp+1A4h] [ebp-28h]
  __m128 v100; // [esp+1ACh] [ebp-20h] BYREF

  LODWORD(v87.rot.data[2][2]) = struckActor; /*0x60a664*/
  v5 = (ArrowProjectile_CollisionData *)FormHeapAlloc(0x54u); /*0x60a668*/
  this->unk05C = v5; /*0x60a66d*/
  v5->unk00[0] = 0.0; /*0x60a672*/
  this->unk05C->unk2C[0] = 0.0; /*0x60a677*/
  this->unk05C->ninode = 0; /*0x60a67d*/
  *(NiPoint3 *)&this->unk05C->unk00[4] = *impactNormal; /*0x60a688*/
  *(NiPoint3 *)&this->unk05C->unk00[1] = *impactPosition; /*0x60a6a2*/
  qmemcpy(&this->unk05C->unk2C[1], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x60a6c4*/
  v6 = &this->unk05C->unk00[7]; /*0x60a6cf*/
  *v6 = g_zeroNiPoint3.x; /*0x60a6d2*/
  v6[1] = g_zeroNiPoint3.y; /*0x60a6da*/
  v6[2] = g_zeroNiPoint3.z; /*0x60a6e8*/
  if ( MobileObject_GetCharProxy(&this->super) ) /*0x60a6eb*/
  {
    CharProxy = MobileObject_GetCharProxy(&this->super); /*0x60a6fa*/
    if ( CharProxy && (v8 = *((char **)CharProxy + 2)) != 0 ) /*0x60a708*/
      LinearVelocityPtr = bhkWorldObject_GetLinearVelocityPtr(v8); /*0x60a70c*/
    else
      LinearVelocityPtr = (char *)&OB_ShaderConstantStorage_010201A0[0x1870B]; /*0x60a713*/
    v10 = *(__m128 *)LinearVelocityPtr; /*0x60a718*/
    normalZ = *(float *)LinearVelocityPtr; /*0x60a71b*/
    v11 = flt_A7DEB4; /*0x60a72b*/
    v96 = v10; /*0x60a731*/
    if ( -v11 == normalZ ) /*0x60a742*/
    {
      if ( this->super.vtbl->super.GetNiNode(this) ) /*0x60a752*/
      {
        vtbl = this->super.vtbl; /*0x60a75f*/
        v87.rot.data[1][0] = this->speed; /*0x60a761*/
        GetNiNode = vtbl->super.GetNiNode; /*0x60a765*/
        v96.m128_f32[0] = v87.rot.data[1][0] * stru_B258DC.x; /*0x60a779*/
        v96.m128_f32[1] = v87.rot.data[1][0] * stru_B258DC.y; /*0x60a788*/
        v96.m128_f32[2] = v87.rot.data[1][0] * stru_B258DC.z; /*0x60a795*/
        v14 = (int)GetNiNode((TESObjectREFR *)this); /*0x60a79c*/
        v15 = sub_7101F0((NiTransform *)(v14 + 0x64), (NiTransform *)&normalZ, (NiPoint3 *)&v96); /*0x60a7b1*/
        v16 = &this->unk05C->unk00[7]; /*0x60a7bb*/
        *v16 = v15->rot.data[0][0]; /*0x60a7be*/
        v16[1] = v15->rot.data[0][1]; /*0x60a7c3*/
        v16[2] = v15->rot.data[0][2]; /*0x60a7c9*/
      }
    }
    else
    {
      HavokVector_ToWorldVector(&this->unk05C->unk00[7], &v96); /*0x60a7dd*/
    }
  }
  v17 = (NiNode *)LODWORD(v87.rot.data[2][2]); /*0x60a7e5*/
  v18 = LODWORD(v87.rot.data[2][2]) == 0; /*0x60a7e9*/
  this->unk060 = 1; /*0x60a7eb*/
  if ( !v18 )
  {
    v19 = this->super.vtbl->super.GetNiNode(this); /*0x60a802*/
    shooter = this->shooter; /*0x60a804*/
    LODWORD(v87.pos.x) = v19; /*0x60a809*/
    if ( shooter ) /*0x60a80d*/
    {
      if ( shooter->vtbl->GetCombatController(shooter) ) /*0x60a817*/
      {
        v21 = this->shooter; /*0x60a825*/
        a2 = (float *)((int (__thiscall *)(NiNode *))v17->vtbl[2].super.super.Unk_0F)(v17); /*0x60a82e*/
        v22 = (int)v21->vtbl->GetCombatController(v21); /*0x60a839*/
        sub_618120(v22, (char)v21, a2, COERCE_FLOAT(1)); /*0x60a83d*/
      }
    }
    this->unk05C->ninode = v17; /*0x60a845*/
    a2a = &this->unk05C->ninode->members.super.m_localTransform.rot.data[1][2]; /*0x60a858*/
    v23 = this->super.vtbl->super.GetBaseForm(this); /*0x60a861*/
    Script_AddEventToExtraScript(v23, a2a, 0x100); /*0x60a864*/
    v24 = this->shooter; /*0x60a869*/
    if ( v24 ) /*0x60a871*/
    {
      if ( v24 == (Actor *)reference || v24->vtbl->IsInCombat(v24, 1) ) /*0x60a889*/
      {
        v85 = ((int (__thiscall *)(NiNode *, _DWORD))v17->vtbl[2].super.UpdateDownwardPass)(v17, 0); /*0x60a8ba*/
        this->shooter->vtbl->AttackHandling(this->shooter, 0, (TESObjectREFR *)this, (TESObjectREFR *)v17); /*0x60a8c6*/
        if ( !v85 ) /*0x60a8cd*/
        {
          if ( ((unsigned __int8 (__thiscall *)(NiNode *, _DWORD))v17->vtbl[2].super.UpdateDownwardPass)(v17, 0) ) /*0x60a8df*/
          {
            if ( !Actor_IsCreature((Actor *)v17) || v17->vtbl[4].super.super.Unk_02((NiObject *)v17) ) /*0x60a8fe*/
            {
              v25 = (Ni2DBuffer **)LODWORD(v17->members.super.m_localTransform.rot.data[1][0]); /*0x60a908*/
              if ( v25 ) /*0x60a90d*/
              {
                SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x148]); /*0x60a918*/
                v87.rot.data[1][0] = Calc_DeathForceFromDamage(*(float *)SafeFloatPointer); /*0x60a929*/
                sub_8B8700(v25); /*0x60a92d*/
                sub_88D070((NiNode *)v25, 1, 1, 0); /*0x60a939*/
                NiAVObject_UpdateNiAVObject((NiAVObject *)v25, 0.0, 0); /*0x60a94b*/
                sub_7101F0((NiTransform *)(LODWORD(v87.pos.x) + 0x64), &v87, &stru_B258DC); /*0x60a961*/
                Vector3_NormalizeInPlace((float *)&v87); /*0x60a96a*/
                GetPos = this->super.vtbl->super.GetPos; /*0x60a97d*/
                v28 = dbl_A3F410; /*0x60a987*/
                v100.m128_f32[0] = v87.rot.data[0][0] * v28; /*0x60a989*/
                v100.m128_f32[1] = v87.rot.data[0][1] * v28; /*0x60a996*/
                v100.m128_f32[2] = v28 * v87.rot.data[0][2]; /*0x60a9a1*/
                v29 = GetPos((TESObjectREFR *)this); /*0x60a9a8*/
                v96.m128_f32[0] = *v29 + v100.m128_f32[0]; /*0x60a9b3*/
                v96.m128_f32[1] = v29[1] + v100.m128_f32[1]; /*0x60a9cb*/
                v30 = v29[2]; /*0x60a9d9*/
                *(_QWORD *)&v87.rot.data[0][0] = v96.m128_u64[0]; /*0x60a9dc*/
                v96.m128_f32[2] = v30 + v100.m128_f32[2]; /*0x60a9f7*/
                LODWORD(v87.rot.data[0][2]) = v96.m128_i32[2]; /*0x60aa06*/
                sub_4529E0(&normalZ, (float *)&v87); /*0x60aa0a*/
                sub_5364B0((int)v25, (__m128 *)&normalZ, v87.rot.data[1][0]); /*0x60aa22*/
              }
            }
          }
        }
      }
      else
      {
        ((void (__thiscall *)(Actor *, _DWORD, ArrowProjectile *, NiNode *))this->shooter->vtbl->Unk_EC)( /*0x60a89e*/
          this->shooter,
          0,
          this,
          v17);
      }
    }
    v31 = reference; /*0x60aa2a*/
    v18 = v17 == (NiNode *)reference; /*0x60aa30*/
    v87.pos.y = 0.0; /*0x60aa32*/
    if ( v18 ) /*0x60aa3a*/
      LODWORD(v87.scale) = PlayerCharacter_GetNodeByPerspective(v31, 0); /*0x60aa43*/
    else
      v87.scale = v17->members.super.m_localTransform.rot.data[1][0]; /*0x60aa4c*/
    GetZRotation = this->super.vtbl->GetZRotation; /*0x60aa58*/
    inOutDistance = flt_A427E0; /*0x60aa5e*/
    v81 = GetZRotation(&this->super); /*0x60aa6b*/
    NiMatrix33_InitRotationZ(v89, v81); /*0x60aa6e*/
    AimPitch = Actor_GetAimPitch((Actor *)this); /*0x60aa82*/
    NiMatrix33_InitRotationXTransposed(v92, AimPitch); /*0x60aa85*/
    qmemcpy(v89, NiMAtrix33_Multiply(v89, v90, v92), sizeof(v89)); /*0x60aaab*/
    v87.rot.data[0][0] = v89[1]; /*0x60aab1*/
    v87.rot.data[0][1] = v89[4]; /*0x60aab9*/
    v87.rot.data[0][2] = v89[7]; /*0x60aac1*/
    NiPoint3_NormalizeApproximateInPlace((float *)&v87); /*0x60aaca*/
    v33 = this->super.vtbl->super.GetPos; /*0x60aad5*/
    v96.m128_f32[0] = v87.rot.data[0][0] * inOutDistance; /*0x60aaea*/
    v96.m128_f32[1] = v87.rot.data[0][1] * inOutDistance; /*0x60aaf7*/
    v96.m128_f32[2] = inOutDistance * v87.rot.data[0][2]; /*0x60ab02*/
    v34 = dbl_A2FAA0; /*0x60ab18*/
    v87.rot.data[1][0] = v96.m128_f32[0] * v34; /*0x60ab1a*/
    v87.rot.data[1][1] = v96.m128_f32[1] * v34; /*0x60ab27*/
    v87.rot.data[1][2] = v34 * v96.m128_f32[2]; /*0x60ab32*/
    v35 = v33((TESObjectREFR *)this); /*0x60ab36*/
    v36 = (TESObjectREFR *)LODWORD(v87.rot.data[2][2]); /*0x60ab3a*/
    v37 = *(_DWORD *)LODWORD(v87.rot.data[2][2]); /*0x60ab42*/
    v100.m128_f32[0] = *v35 - v87.rot.data[1][0]; /*0x60ab48*/
    v86 = 0; /*0x60ab4f*/
    v100.m128_f32[1] = v35[1] - v87.rot.data[1][1]; /*0x60ab5b*/
    v38 = v35[2]; /*0x60ab62*/
    v39 = *(unsigned __int8 (__thiscall **)(_DWORD, int))(v37 + 0x198); /*0x60ab65*/
    v100.m128_f32[2] = v38 - v87.rot.data[1][2]; /*0x60ab6f*/
    v83 = v39(LODWORD(v87.rot.data[2][2]), 1) == 0; /*0x60ab81*/
    v77 = *(_QWORD *)&v87.rot.data[0][0]; /*0x60ab90*/
    v78 = v87.rot.data[0][2]; /*0x60aba0*/
    v75 = v100.m128_u64[0]; /*0x60abaf*/
    v76 = v100.m128_f32[2]; /*0x60abbb*/
    v40 = (NiAVObject *)v36->vtbl->GetNiNode(v36); /*0x60abc8*/
    ActorEmbedCollisionNode = ArrowProjectile_FindActorEmbedCollisionNode( /*0x60abcd*/
                                this,
                                v40,
                                *(float *)&v75,
                                *((float *)&v75 + 1),
                                v76,
                                *(float *)&v77,
                                *((float *)&v77 + 1),
                                v78,
                                &inOutDistance,
                                v83);
    LODWORD(v87.rot.data[1][0]) = ActorEmbedCollisionNode; /*0x60abd4*/
    if ( ActorEmbedCollisionNode ) /*0x60abd8*/
    {
      p_m_worldTransform = (float *)&ActorEmbedCollisionNode->members.m_worldTransform; /*0x60abe2*/
      v87.pos.z = inOutDistance + dbl_A492D8; /*0x60abf5*/
      v96.m128_f32[0] = v87.rot.data[0][0] * v87.pos.z; /*0x60ac07*/
      v96.m128_f32[1] = v87.rot.data[0][1] * v87.pos.z; /*0x60ac14*/
      v96.m128_f32[2] = v87.pos.z * v87.rot.data[0][2]; /*0x60ac1f*/
      sub_718A80((float *)&ActorEmbedCollisionNode->members.m_worldTransform, &v93); /*0x60ac26*/
      normalZ = v96.m128_f32[0] + v100.m128_f32[0]; /*0x60ac49*/
      v98 = v96.m128_f32[1] + v100.m128_f32[1]; /*0x60ac65*/
      v99 = v96.m128_f32[2] + v100.m128_f32[2]; /*0x60ac7a*/
      v43 = NiTransform_TransformPoint(&v93, v96.m128_f32, (NiPoint3 *)&normalZ); /*0x60ac81*/
      v44 = &this->unk05C->unk00[1]; /*0x60ac8b*/
      *v44 = *v43; /*0x60ac8e*/
      v44[1] = v43[1]; /*0x60ac93*/
      v44[2] = v43[2]; /*0x60ac99*/
      sub_7102B0(p_m_worldTransform, v91); /*0x60aca6*/
      v45 = NiMAtrix33_Multiply(v91, v90, (float *)(LODWORD(v87.pos.x) + 0x64)); /*0x60acc7*/
      v46 = v87.rot.data[1][0]; /*0x60acc9*/
      qmemcpy(&this->unk05C->unk2C[1], v45, 0x24u); /*0x60acd5*/
      this->unk05C->unk2C[0] = v46; /*0x60acdb*/
      BhkCollisionObjectRecursive = (float *)NiAVObject_FindBhkCollisionObjectRecursive((NiAVObject *)LODWORD(v46)); /*0x60acde*/
      if ( BhkCollisionObjectRecursive ) /*0x60ace8*/
        v87.pos.y = BhkCollisionObjectRecursive[4]; /*0x60aced*/
      v36 = (TESObjectREFR *)LODWORD(v87.rot.data[2][2]); /*0x60acf1*/
      v86 = 1; /*0x60acf5*/
    }
    if ( Actor_IsBlocking(v36) /*0x60ad25*/
      && (v48 = (LowProcess *)v36[1].vtbl) != 0
      && v48->GetEquippedShieldData(v48, 1)
      && Actor_IsFacingReferenceWithinCombatAngle((Actor *)v36, (TESObjectREFR *)this, 0) )
    {
      v49 = v36->member.pos[1]; /*0x60ad31*/
      v50 = impactPosition; /*0x60ad34*/
      v51 = v36->member.pos[0]; /*0x60ad37*/
      v52 = v36->member.pos[2]; /*0x60ad3d*/
      *(double *)&v87.rot.data[1][0] = impactPosition->z; /*0x60ad40*/
      v98 = v49; /*0x60ad44*/
      normalZ = v51; /*0x60ad4d*/
      v99 = v52; /*0x60ad54*/
      ScaledCollisionHeight = Actor_GetScaledCollisionHeight(v36); /*0x60ad5b*/
      v87.pos.z = ScaledCollisionHeight * dbl_A2FAA0 + v99; /*0x60ad6d*/
      if ( v87.pos.z <= *(double *)&v87.rot.data[1][0] ) /*0x60ad7e*/
      {
        v54 = 1; /*0x60ad80*/
        goto LABEL_39; /*0x60ad82*/
      }
    }
    else
    {
      v50 = impactPosition; /*0x60ad84*/
    }
    v54 = 0; /*0x60ad87*/
LABEL_39:
    if ( v86 && !v54 ) /*0x60ad94*/
      goto LABEL_49; /*0x60ad94*/
    v55 = hkFactor; /*0x60ada6*/
    normalZ = v50->x * v55; /*0x60ada8*/
    v98 = v50->y * v55; /*0x60adb4*/
    v99 = v55 * v50->z; /*0x60adbe*/
    v100.m128_f32[0] = normalZ; /*0x60adcc*/
    v100.m128_f32[1] = v98; /*0x60adda*/
    v100.m128_f32[2] = v99; /*0x60ade8*/
    v100.m128_f32[3] = flt_A57EF8; /*0x60adf5*/
    if ( v54 ) /*0x60adfc*/
    {
      v56 = sub_8AFB50(SLODWORD(v87.scale), 7); /*0x60ae05*/
    }
    else
    {
      LOBYTE(v57) = !v36->vtbl->IsDead(v36, 1); /*0x60ae23*/
      v56 = sub_8AFD70((float *)LODWORD(v87.scale), &v100, v57); /*0x60ae30*/
    }
    if ( v56 ) /*0x60ae3a*/
    {
      v84 = *(int **)(v56 + 8); /*0x60ae43*/
      LODWORD(v87.pos.y) = v56; /*0x60ae44*/
      v58 = (Atmosphere *)sub_47FA60(v84); /*0x60ae48*/
      if ( v58 ) /*0x60ae52*/
      {
        v59 = Shared_GetPointerAtOffset08(v58); /*0x60ae69*/
        v60 = dbl_A492D8; /*0x60ae74*/
        v96.m128_f32[0] = v87.rot.data[0][0] * v60; /*0x60ae7a*/
        LODWORD(v87.rot.data[1][0]) = v59; /*0x60ae87*/
        v96.m128_f32[1] = v87.rot.data[0][1] * v60; /*0x60ae8d*/
        v96.m128_f32[2] = v60 * v87.rot.data[0][2]; /*0x60ae98*/
        sub_718A80((float *)&v59->members.m_worldTransform, &v94); /*0x60ae9f*/
        normalZ = v59->members.m_worldTransform.pos.x + v96.m128_f32[0]; /*0x60aec1*/
        v98 = v59->members.m_worldTransform.pos.y + v96.m128_f32[1]; /*0x60aedc*/
        v99 = v59->members.m_worldTransform.pos.z + v96.m128_f32[2]; /*0x60aef0*/
        v61 = NiTransform_TransformPoint(&v94, v96.m128_f32, (NiPoint3 *)&normalZ); /*0x60aef7*/
        v62 = &this->unk05C->unk00[1]; /*0x60af01*/
        *v62 = *v61; /*0x60af04*/
        v62[1] = v61[1]; /*0x60af09*/
        v62[2] = v61[2]; /*0x60af0f*/
        sub_7102B0((float *)&v59->members.m_worldTransform, v90); /*0x60af19*/
        v63 = NiMAtrix33_Multiply(v90, v95, (float *)(LODWORD(v87.pos.x) + 0x64)); /*0x60af35*/
        v64 = v87.rot.data[1][0]; /*0x60af3d*/
        qmemcpy(&this->unk05C->unk2C[1], v63, 0x24u); /*0x60af4b*/
        v36 = (TESObjectREFR *)LODWORD(v87.rot.data[2][2]); /*0x60af50*/
        v50 = impactPosition; /*0x60af54*/
        this->unk05C->unk2C[0] = v64; /*0x60af57*/
      }
    }
    if ( LODWORD(this->unk05C->unk2C[0]) )
    {
LABEL_49:
      if ( LODWORD(v87.pos.y) ) /*0x60af87*/
      {
        v65 = sub_7101F0((NiTransform *)(LODWORD(v87.pos.x) + 0x64), (NiTransform *)&normalZ, &stru_B258DC); /*0x60af9d*/
        ArrowProjectile_ApplyImpactImpulseToCollision( /*0x60afd3*/
          this,
          v50->x,
          v50->y,
          v50->z,
          v65->rot.data[0][0],
          v65->rot.data[0][1],
          v65->rot.data[0][2],
          (void *)LODWORD(v87.pos.y));
      }
      unk05C = this->unk05C; /*0x60afd8*/
      if ( LODWORD(unk05C->unk2C[0])
        && (BhkCollisionObject = NiAVObject_GetBhkCollisionObject(LODWORD(unk05C->unk2C[0]))) != 0
        && (v68 = *(_DWORD *)(BhkCollisionObject + 0x10)) != 0
        && ((v69 = *(_DWORD *)(v68 + 8)) == 0 || (v70 = (int *)(v69 + 0x14)) == 0 || (v71 = *v70) == 0
          ? (v72 = 0)
          : (v72 = *(_DWORD *)(v71 + 8)),
            v72) )
      {
        switch ( *(_DWORD *)(v72 + 0x10) ) /*0x60b022*/
        {
          case 0: /*0x60b022*/
          case 3: /*0x60b022*/
          case 5: /*0x60b022*/
          case 0xA: /*0x60b022*/
          case 0xB: /*0x60b022*/
          case 0xD: /*0x60b022*/
          case 0xF: /*0x60b022*/
          case 0x12: /*0x60b022*/
          case 0x14: /*0x60b022*/
          case 0x19: /*0x60b022*/
          case 0x1A: /*0x60b022*/
          case 0x1C: /*0x60b022*/
          case 0x1E: /*0x60b022*/
            ArrowProjectile_SetFreeImpactState3(&this->super, (int)v50, (int)impactNormal); /*0x60b030*/
            break; /*0x60b049*/
          default:
            goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        if ( !Actor_IsCreature((Actor *)v36) || v36->vtbl[1].super.GetName((TESForm *)v36) ) /*0x60b061*/
        {
          if ( !this->arrowEnch /*0x60b0ab*/
            && Game_RandomLargeInteger(0) % 0x64 < SLODWORD(g_GameSettingStringPointers_B36CD8[0xFC]) )
          {
            p_AddItem = (void (__thiscall **)(TESObjectREFR *, int))&v36->vtbl->AddItem; /*0x60b0bd*/
            v74 = ((int (__thiscall *)(ArrowProjectile *, _DWORD, int))this->super.vtbl->super.GetBaseForm)(this, 0, 1); /*0x60b0c3*/
            (*p_AddItem)(v36, v74);             // Actor-hit recovery invokes the struck Actor's form-based AddItem virtual with one ArrowProjectile AMMO base form. That route reaches ContainerExtraData_AddItem (0x48F7C0), unlike ordinary landed-reference pickup through 0x4DDC40/0x48AA10. /*0x60b0ca*/
            BYTE1(this->unk094) = 1; /*0x60b0cc*/
          }
        }
        else
        {
          ArrowProjectile_BeginCollisionResolution(this, v36); /*0x60b06a*/
          this->unk060 = 3; /*0x60b06f*/
        }
      }
    }
    else
    {
      ArrowProjectile_BeginCollisionResolution(this, v36); /*0x60af66*/
    }
  }
}
