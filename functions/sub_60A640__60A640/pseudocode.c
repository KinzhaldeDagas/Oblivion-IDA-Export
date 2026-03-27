char __thiscall sub_60A640(
        Actor *this,
        float *arg0,
        void (__thiscall **a3)(MagicCaster *this, MagicCaster *this),
        TESObjectREFR *a4)
{
  MagicCasterVtbl *v5; // eax
  MagicCasterVtbl *vtbl; // eax
  float *v7; // eax
  float *p_IsMagicItemUsable; // eax
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v10; // eax
  char *v11; // eax
  __m128 *v12; // eax
  __m128 v13; // xmm0
  double v14; // st6
  ActorVtbl *v15; // eax
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  int v17; // eax
  NiTransform *v18; // eax
  bool (__thiscall **v19)(MagicCaster *, MagicItem *, float *, UInt32 *, bool); // ecx
  PlayerCharacter *v20; // esi
  bool v21; // zf
  NiNode *v22; // eax
  UInt32 v23; // ecx
  UInt32 v24; // edi
  int v25; // eax
  TESForm *v26; // eax
  PlayerCharacter *v27; // ecx
  NiNode *niNode; // edi
  int *SafeFloatPointer; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  double v31; // rt0
  float *v32; // eax
  double v33; // st7
  PlayerCharacter *v34; // ecx
  float (__thiscall *GetZRotation)(MobileObject *); // eax
  float *(__thiscall *v36)(TESObjectREFR *); // eax
  double v37; // rt2
  float *v38; // eax
  TESObjectREFR *v39; // esi
  int v40; // edx
  double v41; // st7
  unsigned __int8 (__thiscall *v42)(_DWORD, int); // eax
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  float *v46; // esi
  float *v47; // eax
  void (__thiscall **p_AddDisease)(MagicCaster *, MagicItemForm *, MagicTarget *, bool); // ecx
  float *v49; // esi
  int v50; // eax
  int v51; // eax
  LowProcess *v52; // ecx
  float v53; // ecx
  float *v54; // edi
  float v55; // eax
  float v56; // edx
  double v57; // st7
  char v58; // al
  double v59; // rt0
  int v60; // eax
  int v61; // ecx
  Atmosphere *v62; // eax
  NiAVObject *v63; // esi
  double v64; // rt1
  float *v65; // eax
  void (__thiscall **v66)(MagicCaster *, MagicItemForm *, MagicTarget *, bool); // ecx
  float *v67; // eax
  float (__thiscall *v68)(MagicCaster *, bool, float); // edx
  NiTransform *v69; // eax
  MagicCasterVtbl *v70; // edx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int *v74; // eax
  int v75; // eax
  int v76; // eax
  int RandomLargeInteger; // eax
  int v78; // et2
  int (__thiscall **p_AddItem)(TESObjectREFR *, int); // edi
  int v80; // eax
  unsigned __int64 v82; // [esp-4h] [ebp-1D0h]
  float v83; // [esp+4h] [ebp-1C8h]
  __int64 v84; // [esp+8h] [ebp-1C4h]
  float v85; // [esp+10h] [ebp-1BCh]
  int a2; // [esp+14h] [ebp-1B8h]
  char *a2a; // [esp+14h] [ebp-1B8h]
  float v88; // [esp+18h] [ebp-1B4h]
  float v89; // [esp+18h] [ebp-1B4h]
  int v90; // [esp+18h] [ebp-1B4h]
  int *v91; // [esp+18h] [ebp-1B4h]
  bool v92; // [esp+36h] [ebp-196h]
  char v93; // [esp+36h] [ebp-196h]
  NiTransform v94; // [esp+38h] [ebp-194h] BYREF
  int v95; // [esp+6Ch] [ebp-160h] BYREF
  float v96[9]; // [esp+70h] [ebp-15Ch] BYREF
  float v97[9]; // [esp+94h] [ebp-138h] BYREF
  float v98[9]; // [esp+B8h] [ebp-114h] BYREF
  float v99[9]; // [esp+DCh] [ebp-F0h] BYREF
  NiTransform v100; // [esp+100h] [ebp-CCh] BYREF
  NiTransform v101; // [esp+134h] [ebp-98h] BYREF
  float v102[9]; // [esp+168h] [ebp-64h] BYREF
  __m128 v103; // [esp+18Ch] [ebp-40h] BYREF
  float v104; // [esp+19Ch] [ebp-30h] BYREF
  float v105; // [esp+1A0h] [ebp-2Ch]
  float v106; // [esp+1A4h] [ebp-28h]
  __m128 v107; // [esp+1ACh] [ebp-20h] BYREF

  LODWORD(v94.rot.data[2][2]) = a4;
  v5 = (MagicCasterVtbl *)FormHeapAlloc(0x54u);
  this->members.magicCaster.vtbl = v5;
  v5->AddAbility = 0;
  this->members.magicCaster.vtbl->GetSpellEffectiveness = 0;
  this->members.magicCaster.vtbl->AddEffectToSelf = 0;
  vtbl = this->members.magicCaster.vtbl;
  vtbl->PlayTargettedCastAnim = *a3;
  vtbl->PlayCastingAnim = a3[1];
  vtbl->ApplyMagicItemCost = (void (__thiscall *)(MagicCaster *, MagicItem *, bool))a3[2];
  v7 = (float *)this->members.magicCaster.vtbl;
  v7[1] = *arg0;
  v7[2] = arg0[1];
  v7[3] = arg0[2];
  qmemcpy(&this->members.magicCaster.vtbl->GetActiveMagicItem, &stru_B26AF0[0xA].unk2C, 0x24u);
  p_IsMagicItemUsable = (float *)&this->members.magicCaster.vtbl->IsMagicItemUsable;
  *p_IsMagicItemUsable = Vector3_InitValue_;
  p_IsMagicItemUsable[1] = *(&Vector3_InitValue_ + 1);
  p_IsMagicItemUsable[2] = dword_B3F9B0;
  CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
  if ( CharProxy )
  {
    v10 = MobileObject_GetCharProxy((MobileObject *)this);
    if ( v10 && (v11 = *((char **)v10 + 2)) != 0 )
      v12 = (__m128 *)sub_8AC0A0(v11);
    else
      v12 = (__m128 *)&stru_BA7A40;
    v13 = *v12;
    v104 = v12->m128_f32[0];
    v14 = flt_A7DEB4;
    v103 = v13;
    if ( -v14 == v104 )
    {
      CharProxy = (bhkCharacterProxy *)this->vtbl->super.super.GetNiNode(this);
      if ( CharProxy )
      {
        v15 = this->vtbl;
        v94.rot.data[1][0] = *(float *)&this->members.magicTarget.unk04;
        GetNiNode = v15->super.super.GetNiNode;
        v103.m128_f32[0] = v94.rot.data[1][0] * *(float *)&dword_B258DC;
        v103.m128_f32[1] = v94.rot.data[1][0] * *(float *)&qword_B258E0;
        v103.m128_f32[2] = v94.rot.data[1][0] * *((float *)&qword_B258E0 + 1);
        v17 = (int)GetNiNode((TESObjectREFR *)this);
        v18 = sub_7101F0((NiTransform *)(v17 + 0x64), (NiTransform *)&v104, (NiPoint3 *)&v103);
        v19 = &this->members.magicCaster.vtbl->IsMagicItemUsable;
        *v19 = (bool (__thiscall *)(MagicCaster *, MagicItem *, float *, UInt32 *, bool))LODWORD(v18->rot.data[0][0]);
        v19[1] = (bool (__thiscall *)(MagicCaster *, MagicItem *, float *, UInt32 *, bool))LODWORD(v18->rot.data[0][1]);
        CharProxy = (bhkCharacterProxy *)LODWORD(v18->rot.data[0][2]);
        v19[2] = (bool (__thiscall *)(MagicCaster *, MagicItem *, float *, UInt32 *, bool))CharProxy;
      }
    }
    else
    {
      LOBYTE(CharProxy) = (unsigned __int8)sub_43F3E0(
                                             (float *)&this->members.magicCaster.vtbl->IsMagicItemUsable,
                                             &v103);
    }
  }
  v20 = (PlayerCharacter *)LODWORD(v94.rot.data[2][2]);
  v21 = LODWORD(v94.rot.data[2][2]) == 0;
  this->members.magicCaster.magicNode = (NiNode *)1;
  if ( !v21 )
  {
    v22 = this->vtbl->super.super.GetNiNode(this);
    v23 = this->members.unk070[2];
    LODWORD(v94.pos.x) = v22;
    if ( v23 )
    {
      if ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)v23 + 0x330))(v23) )
      {
        v24 = this->members.unk070[2];
        a2 = (int)v20->vtbl->super.super.super.GetPos((TESObjectREFR *)v20);
        v25 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)v24 + 0x330))(v24);
        sub_618120(v25, v24, a2, COERCE_FLOAT(1));
      }
    }
    this->members.magicCaster.vtbl->AddEffectToSelf = (void (__thiscall *)(MagicCaster *, ActiveEffect *))v20;
    a2a = (char *)this->members.magicCaster.vtbl->AddEffectToSelf + 0x44;
    v26 = this->vtbl->super.super.GetBaseForm(this);
    Script_AddEventToExtraScript(v26, a2a, 0x100);
    v27 = (PlayerCharacter *)this->members.unk070[2];
    if ( v27 )
    {
      if ( v27 == TESDataHandler_g_PlayerRef || v27->vtbl->super.IsInCombat((Actor *)v27, 1) )
      {
        v92 = v20->vtbl->super.super.super.IsDead((TESObjectREFR *)v20, 0);
        (*(void (__thiscall **)(UInt32, _DWORD, Actor *, PlayerCharacter *))(*(_DWORD *)this->members.unk070[2] + 0x3AC))(
          this->members.unk070[2],
          0,
          this,
          v20);
        if ( !v92
          && v20->vtbl->super.super.super.IsDead((TESObjectREFR *)v20, 0)
          && (!Actor_IsCreature((Actor *)v20)
           || ((unsigned __int8 (__thiscall *)(PlayerCharacter *))v20->vtbl->super.Unk_9E)(v20)) )
        {
          niNode = (NiNode *)v20->super.super.super.super.niNode;
          if ( niNode )
          {
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B371F8);
            v94.rot.data[1][0] = sub_547770(*(float *)SafeFloatPointer);
            sub_8B8700(niNode);
            sub_88D070(niNode, 1, 1, 0);
            NiAVObject_UpdateNiAVObject((NiAVObject *)niNode, 0.0, 0);
            sub_7101F0((NiTransform *)(LODWORD(v94.pos.x) + 0x64), &v94, (NiPoint3 *)&dword_B258DC);
            sub_43F350((float *)&v94);
            GetPos = this->vtbl->super.super.GetPos;
            v31 = dbl_A3F410;
            v107.m128_f32[0] = v94.rot.data[0][0] * v31;
            v107.m128_f32[1] = v94.rot.data[0][1] * v31;
            v107.m128_f32[2] = v31 * v94.rot.data[0][2];
            v32 = GetPos((TESObjectREFR *)this);
            v103.m128_f32[0] = *v32 + v107.m128_f32[0];
            v103.m128_f32[1] = v32[1] + v107.m128_f32[1];
            v33 = v32[2];
            *(_QWORD *)&v94.rot.data[0][0] = v103.m128_u64[0];
            v103.m128_f32[2] = v33 + v107.m128_f32[2];
            LODWORD(v94.rot.data[0][2]) = v103.m128_i32[2];
            sub_4529E0(&v104, (float *)&v94);
            sub_5364B0((int)niNode, (__m128 *)&v104, v94.rot.data[1][0]);
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(UInt32, _DWORD, Actor *, PlayerCharacter *))(*(_DWORD *)this->members.unk070[2] + 0x3B0))(
          this->members.unk070[2],
          0,
          this,
          v20);
      }
    }
    v34 = TESDataHandler_g_PlayerRef;
    v21 = v20 == TESDataHandler_g_PlayerRef;
    v94.pos.y = 0.0;
    if ( v21 )
      LODWORD(v94.scale) = PlayerCharacter_GetPlayerNode(v34, 0);
    else
      LODWORD(v94.scale) = v20->super.super.super.super.niNode;
    GetZRotation = this->vtbl->super.GetZRotation;
    *(float *)&v95 = flt_A427E0;
    v88 = GetZRotation((MobileObject *)this);
    NiMatrix33_InitRotationTransform(v96, v88);
    v89 = sub_4A9720(this);
    NiMatrix33_InitRotationTransposedTransform___(v99, v89);
    qmemcpy(v96, NiMAtrix33_Multiply(v96, v97, v99), sizeof(v96));
    v94.rot.data[0][0] = v96[1];
    v94.rot.data[0][1] = v96[4];
    v94.rot.data[0][2] = v96[7];
    sub_4BFAA0((float *)&v94);
    v36 = this->vtbl->super.super.GetPos;
    v103.m128_f32[0] = v94.rot.data[0][0] * *(float *)&v95;
    v103.m128_f32[1] = v94.rot.data[0][1] * *(float *)&v95;
    v103.m128_f32[2] = *(float *)&v95 * v94.rot.data[0][2];
    v37 = dbl_A2FAA0;
    v94.rot.data[1][0] = v103.m128_f32[0] * v37;
    v94.rot.data[1][1] = v103.m128_f32[1] * v37;
    v94.rot.data[1][2] = v37 * v103.m128_f32[2];
    v38 = v36((TESObjectREFR *)this);
    v39 = (TESObjectREFR *)LODWORD(v94.rot.data[2][2]);
    v40 = *(_DWORD *)LODWORD(v94.rot.data[2][2]);
    v107.m128_f32[0] = *v38 - v94.rot.data[1][0];
    v93 = 0;
    v107.m128_f32[1] = v38[1] - v94.rot.data[1][1];
    v41 = v38[2];
    v42 = *(unsigned __int8 (__thiscall **)(_DWORD, int))(v40 + 0x198);
    v107.m128_f32[2] = v41 - v94.rot.data[1][2];
    LOBYTE(v43) = v42(LODWORD(v94.rot.data[2][2]), 1) == 0;
    v90 = v43;
    v84 = *(_QWORD *)&v94.rot.data[0][0];
    v85 = v94.rot.data[0][2];
    v82 = v107.m128_u64[0];
    v83 = v107.m128_f32[2];
    v44 = (int)v39->vtbl->GetNiNode(v39);
    v45 = sub_609DF0(
            this,
            v44,
            *(float *)&v82,
            *((float *)&v82 + 1),
            v83,
            *(float *)&v84,
            *((float *)&v84 + 1),
            v85,
            (int)&v95,
            v90);
    LODWORD(v94.rot.data[1][0]) = v45;
    if ( v45 )
    {
      v46 = (float *)(v45 + 0x64);
      v94.pos.z = *(float *)&v95 + dbl_A492D8;
      v103.m128_f32[0] = v94.rot.data[0][0] * v94.pos.z;
      v103.m128_f32[1] = v94.rot.data[0][1] * v94.pos.z;
      v103.m128_f32[2] = v94.pos.z * v94.rot.data[0][2];
      sub_718A80((float *)(v45 + 0x64), (float *)&v100);
      v104 = v103.m128_f32[0] + v107.m128_f32[0];
      v105 = v103.m128_f32[1] + v107.m128_f32[1];
      v106 = v103.m128_f32[2] + v107.m128_f32[2];
      v47 = sub_53D4B0(&v100, v103.m128_f32, (NiPoint3 *)&v104);
      p_AddDisease = &this->members.magicCaster.vtbl->AddDisease;
      *p_AddDisease = *(void (__thiscall **)(MagicCaster *, MagicItemForm *, MagicTarget *, bool))v47;
      p_AddDisease[1] = *((void (__thiscall **)(MagicCaster *, MagicItemForm *, MagicTarget *, bool))v47 + 1);
      p_AddDisease[2] = *((void (__thiscall **)(MagicCaster *, MagicItemForm *, MagicTarget *, bool))v47 + 2);
      sub_7102B0(v46, v98);
      v49 = NiMAtrix33_Multiply(v98, v97, (float *)(LODWORD(v94.pos.x) + 0x64));
      v50 = LODWORD(v94.rot.data[1][0]);
      qmemcpy(&this->members.magicCaster.vtbl->GetActiveMagicItem, v49, 0x24u);
      this->members.magicCaster.vtbl->GetSpellEffectiveness = (float (__thiscall *)(MagicCaster *, bool, float))v50;
      v51 = sub_480340(v50);
      if ( v51 )
        v94.pos.y = *(float *)(v51 + 0x10);
      v39 = (TESObjectREFR *)LODWORD(v94.rot.data[2][2]);
      v93 = 1;
    }
    if ( Actor_IsBlocking(v39)
      && (v52 = (LowProcess *)v39[1].vtbl) != 0
      && v52->GetEquippedShieldData(v52, 1)
      && sub_6131D0((int)v39, (int)this, 0) )
    {
      v53 = v39->member.pos[1];
      v54 = arg0;
      v55 = v39->member.pos[0];
      v56 = v39->member.pos[2];
      *(double *)&v94.rot.data[1][0] = arg0[2];
      v105 = v53;
      v104 = v55;
      v106 = v56;
      v57 = sub_5E0660(v39);
      v94.pos.z = v57 * dbl_A2FAA0 + v106;
      if ( v94.pos.z <= *(double *)&v94.rot.data[1][0] )
      {
        v58 = 1;
        goto LABEL_39;
      }
    }
    else
    {
      v54 = arg0;
    }
    v58 = 0;
LABEL_39:
    if ( v93 && !v58 )
      goto LABEL_49;
    v59 = hkFactor;
    v104 = *v54 * v59;
    v105 = v54[1] * v59;
    v106 = v59 * v54[2];
    v107.m128_f32[0] = v104;
    v107.m128_f32[1] = v105;
    v107.m128_f32[2] = v106;
    v107.m128_f32[3] = flt_A57EF8;
    if ( v58 )
    {
      v60 = sub_8AFB50(SLODWORD(v94.scale), 7);
    }
    else
    {
      LOBYTE(v61) = !v39->vtbl->IsDead(v39, 1);
      v60 = sub_8AFD70((float *)LODWORD(v94.scale), &v107, v61);
    }
    if ( v60 )
    {
      v91 = *(int **)(v60 + 8);
      LODWORD(v94.pos.y) = v60;
      v62 = (Atmosphere *)sub_47FA60(v91);
      if ( v62 )
      {
        v63 = sub_452A60(v62);
        v64 = dbl_A492D8;
        v103.m128_f32[0] = v94.rot.data[0][0] * v64;
        LODWORD(v94.rot.data[1][0]) = v63;
        v103.m128_f32[1] = v94.rot.data[0][1] * v64;
        v103.m128_f32[2] = v64 * v94.rot.data[0][2];
        sub_718A80((float *)&v63->members.m_worldTransform, (float *)&v101);
        v104 = v63->members.m_worldTransform.pos.x + v103.m128_f32[0];
        v105 = v63->members.m_worldTransform.pos.y + v103.m128_f32[1];
        v106 = v63->members.m_worldTransform.pos.z + v103.m128_f32[2];
        v65 = sub_53D4B0(&v101, v103.m128_f32, (NiPoint3 *)&v104);
        v66 = &this->members.magicCaster.vtbl->AddDisease;
        *v66 = *(void (__thiscall **)(MagicCaster *, MagicItemForm *, MagicTarget *, bool))v65;
        v66[1] = *((void (__thiscall **)(MagicCaster *, MagicItemForm *, MagicTarget *, bool))v65 + 1);
        v66[2] = *((void (__thiscall **)(MagicCaster *, MagicItemForm *, MagicTarget *, bool))v65 + 2);
        sub_7102B0((float *)&v63->members.m_worldTransform, v97);
        v67 = NiMAtrix33_Multiply(v97, v102, (float *)(LODWORD(v94.pos.x) + 0x64));
        v68 = (float (__thiscall *)(MagicCaster *, bool, float))LODWORD(v94.rot.data[1][0]);
        qmemcpy(&this->members.magicCaster.vtbl->GetActiveMagicItem, v67, 0x24u);
        v39 = (TESObjectREFR *)LODWORD(v94.rot.data[2][2]);
        v54 = arg0;
        this->members.magicCaster.vtbl->GetSpellEffectiveness = v68;
      }
    }
    if ( this->members.magicCaster.vtbl->GetSpellEffectiveness )
    {
LABEL_49:
      if ( LODWORD(v94.pos.y) )
      {
        v69 = sub_7101F0((NiTransform *)(LODWORD(v94.pos.x) + 0x64), (NiTransform *)&v104, (NiPoint3 *)&dword_B258DC);
        sub_6088F0(
          (float *)this,
          *v54,
          v54[1],
          v54[2],
          v69->rot.data[0][0],
          v69->rot.data[0][1],
          v69->rot.data[0][2],
          (_DWORD *)LODWORD(v94.pos.y));
      }
      v70 = this->members.magicCaster.vtbl;
      if ( v70->GetSpellEffectiveness
        && (v71 = sub_47FAC0((int)v70->GetSpellEffectiveness)) != 0
        && (v72 = *(_DWORD *)(v71 + 0x10)) != 0
        && ((v73 = *(_DWORD *)(v72 + 8)) == 0 || (v74 = (int *)(v73 + 0x14)) == 0 || (v75 = *v74) == 0
          ? (v76 = 0)
          : (v76 = *(_DWORD *)(v75 + 8)),
            v76) )
      {
        switch ( *(_DWORD *)(v76 + 0x10) )
        {
          case 0:
          case 3:
          case 5:
          case 0xA:
          case 0xB:
          case 0xD:
          case 0xF:
          case 0x12:
          case 0x14:
          case 0x19:
          case 0x1A:
          case 0x1C:
          case 0x1E:
            LOBYTE(CharProxy) = (unsigned __int8)sub_608DA0((MobileObject *)this, (int)v54, (int)a3);
            break;
          default:
            goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        LOBYTE(CharProxy) = Actor_IsCreature((Actor *)v39);
        if ( !(_BYTE)CharProxy || (LOBYTE(CharProxy) = v39->vtbl[1].super.GetName((TESForm *)v39), (_BYTE)CharProxy) )
        {
          if ( !this->members.unk07C )
          {
            RandomLargeInteger = GetRandomLargeInteger_(0);
            v78 = RandomLargeInteger % 0x64;
            CharProxy = (bhkCharacterProxy *)(RandomLargeInteger / 0x64);
            if ( v78 < dword_B370C8 )
            {
              p_AddItem = (int (__thiscall **)(TESObjectREFR *, int))&v39->vtbl->AddItem;
              v80 = ((int (__thiscall *)(Actor *, _DWORD, int))this->vtbl->super.super.GetBaseForm)(this, 0, 1);
              LOBYTE(CharProxy) = (*p_AddItem)(v39, v80);
              BYTE1(this->members.avModifiers.fatigue) = 1;
            }
          }
        }
        else
        {
          LOBYTE(CharProxy) = (unsigned __int8)sub_6079A0((MobileObject *)this, (int)v39);
          this->members.magicCaster.magicNode = (NiNode *)3;
        }
      }
    }
    else
    {
      LOBYTE(CharProxy) = (unsigned __int8)sub_6079A0((MobileObject *)this, (int)v39);
    }
  }
  return (char)CharProxy;
}
