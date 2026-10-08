int __thiscall sub_605770(Actor *this, float arg0)
{
  TESObjectREFRVtbl *vtbl; // ebx
  int v3; // ebp
  int v4; // edi
  double v5; // st5
  double v6; // st6
  double GameDay; // st7
  int result; // eax
  double v10; // st7
  LowProcess *process; // ecx
  int v12; // edi
  char v13; // al
  const char *GameDayOfWeek; // eax
  TESObjectREFR *MerchantContainer; // eax
  TESObjectREFR *v16; // edi
  int v17; // edx
  TESObjectREFR *a2; // eax
  char v19; // al
  TESPackage *v20; // ecx
  LowProcess *v21; // ecx
  TESPackage *editorPackage; // eax
  char v23; // al
  TESObjectCELL *DwordAtOffset40; // eax
  LowProcess *v25; // ecx
  const char *value; // edi
  double v27; // st7
  ActorVtbl *v28; // edi
  LowProcess *v29; // ecx
  _DWORD *niNode; // edi
  NiTransform *v31; // eax
  ActorAnimData *v32; // eax
  ActorAnimData *v33; // edi
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  int v35; // eax
  TESObjectCELL *v36; // edi
  float *v37; // eax
  TESObjectCELL **WorldSpace; // eax
  float a2_4; // [esp+1Ch] [ebp-4Ch]
  float a2_4a; // [esp+1Ch] [ebp-4Ch]
  int v41; // [esp+20h] [ebp-48h]
  double v42; // [esp+2Ch] [ebp-3Ch] BYREF
  NiPoint3 v43; // [esp+38h] [ebp-30h] BYREF
  NiMatrix33 v44; // [esp+44h] [ebp-24h] BYREF
  float deltaTime; // [esp+6Ch] [ebp+4h]

  result = (unsigned int)this->members.super.super.super.flags >> 0xB; /*0x605779*/
  if ( (this->members.super.super.super.flags & 0x800) == 0 ) /*0x60577e*/
  {
    if ( LOBYTE(this->members.unk070[2]) || sub_45A500(g_TESSaveLoadGame) ) /*0x605794*/
    {
      process = this->members.super.process; /*0x60583e*/
      v41 = v4; /*0x605844*/
      if ( process ) /*0x605845*/
      {
        v12 = process->GetCurDay(process); /*0x605853*/
        GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x605855*/
        if ( v12 == v13 ) /*0x60585f*/
        {
          BYTE1(this->members.unk0E8[5]) = 0; /*0x6058b4*/
        }
        else
        {
          if ( !BYTE1(this->members.unk0E8[5]) ) /*0x605861*/
          {
            GameDayOfWeek = (const char *)TimeGlobals_GetGameDayOfWeek(&MEMORY[0xB332E0]); /*0x60586f*/
            if ( GameDayOfWeek == MEMORY[0xB37D80].value || GameDayOfWeek == stru_B37D88.value ) /*0x605882*/
            {
              MerchantContainer = (TESObjectREFR *)ExtraDataList_GetMerchantContainer(&this->members.super.super.baseExtraList); /*0x605887*/
              v16 = MerchantContainer; /*0x60588c*/
              if ( MerchantContainer ) /*0x605890*/
              {
                vtbl = MerchantContainer->vtbl; /*0x605892*/
                LOBYTE(v17) = !TESObjectREFR::ShouldReferenceRespawn(MerchantContainer); /*0x6058a3*/
                vtbl->Unk_61(v16, v17); /*0x6058a9*/
              }
            }
          }
          BYTE1(this->members.unk0E8[5]) = 1; /*0x6058ab*/
        }
      }
      if ( ((unsigned __int8 (__thiscall *)(Actor *, int))this->vtbl->super.super.HasFatigue)(this, v41) ) /*0x6058c5*/
      {
        if ( this->vtbl->GetMountedHorse(this) || ((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this) ) /*0x6058e5*/
          sub_5F0410((TESObjectREFR *)this, v3); /*0x6058ed*/
      }
      if ( this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) /*0x605927*/
        || LOBYTE(this->members.unk0B4[3])
        || !LOBYTE(qword_B3BB2C[0x9B])
        || this->members.DeadState == 6 )
      {
        if ( this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x605a2f*/
        {
          if ( this->members.DeadState == 1 ) /*0x605a40*/
          {
            if ( byte_B14E98 ) /*0x605a60*/
            {
              if ( Actor::IsEssential(this) ) /*0x605a6b*/
                this->vtbl->Resurrect(this, 0, 0, 1); /*0x605a84*/
            }
          }
          else
          {
            this->members.super.process->Unk_08(this->members.super.process); /*0x605a4a*/
            GameDay = *(float *)&this->members.unk080[1] - *(float *)&MEMORY[0xB33E90][0xC]; /*0x605a52*/
            *(float *)&this->members.unk080[1] = GameDay; /*0x605a58*/
          }
          if ( !Actor::IsEssential(this) && sub_5E1D70(this) ) /*0x605a97*/
          {
            DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x605aa8*/
            if ( !TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) ) /*0x605ab4*/
            {
              v25 = this->members.super.process; /*0x605ac1*/
              if ( v25 ) /*0x605ac6*/
              {
                GameDay = ((double (__thiscall *)(LowProcess *))v25->GetUnk08C)(v25); /*0x605ad4*/
                if ( GameDay != *(float *)&SrcStr ) /*0x605ae1*/
                {
                  value = MEMORY[0xB35C1C].value; /*0x605aee*/
                  this->members.super.process->GetUnk08C(this->members.super.process); /*0x605af4*/
                  LODWORD(v42) = value; /*0x605af8*/
                  v6 = (double)(int)value; /*0x605afc*/
                  if ( (int)value < 0 ) /*0x605b00*/
                    v6 = v6 + flt_A2FC78; /*0x605b02*/
                  *(double *)&v43.x = GameDay + v6; /*0x605b0f*/
                  LODWORD(v42) = TimeGlobals_GetGameDaysPassed(&MEMORY[0xB332E0]); /*0x605b1a*/
                  v27 = (double)SLODWORD(v42); /*0x605b1e*/
                  if ( SLODWORD(v42) < 0 ) /*0x605b22*/
                    v27 = v27 + flt_A2FC78; /*0x605b24*/
                  v42 = v27 * dbl_A2F920; /*0x605b35*/
                  GameDay = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) + v42; /*0x605b3e*/
                  if ( GameDay > *(double *)&v43.x ) /*0x605b4b*/
                    sub_6748B0(&qword_B3BB2C[0x75], (MobileObject *)this); /*0x605b53*/
                }
              }
            }
          }
        }
      }
      else
      {
        if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this) ) /*0x605937*/
        {
          if ( !Actor::GetCurrentPackage(this) /*0x605960*/
            || Actor::GetCurrentPackage(this)->members.type != kPackageType_DoNothing
            && Actor::GetCurrentPackage(this)->members.type != kPackageType_ClearMountPosition )
          {
            sub_5F8000(this); /*0x605964*/
          }
        }
        a2 = this->members.unk0CC; /*0x605969*/
        if ( a2 ) /*0x605971*/
          sub_5F7CF0(this, a2, 1); /*0x605978*/
        LOBYTE(vtbl) = this->members.super.process->GetCurDay(this->members.super.process); /*0x60598c*/
        TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x60598e*/
        if ( v19 != (_BYTE)vtbl ) /*0x605995*/
          sub_422D10(&this->members.super.super.baseExtraList.vtbl); /*0x60599a*/
        if ( !this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this) /*0x6059c1*/
          && (LOBYTE(qword_B3BB2C[0x9E])
           || (v20 = this->members.super.process->editorPackage) != 0 && TESPackage::IsTemporaryOverrideType(v20)) )
        {
          v21 = this->members.super.process; /*0x6059ca*/
          editorPackage = v21->editorPackage; /*0x6059cd*/
          if ( !editorPackage || editorPackage->members.type != kPackageType_DoNothing ) /*0x6059d8*/
          {
            v6 = arg0; /*0x6059dc*/
            if ( arg0 == 0.0 || this == (Actor *)reference ) /*0x6059f1*/
              v21->ManagePackProcedure(v21, this); /*0x605a09*/
            else
              ((void (__stdcall *)(Actor *, _DWORD))v21->Unk_03)(this, LODWORD(arg0)); /*0x6059fd*/
          }
        }
        GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x605a10*/
        ExtraDataList_PruneRunOncePackages(&this->members.super.super.baseExtraList, v23); /*0x605a19*/
      }
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x605b5e*/
      {
        v28 = this->vtbl; /*0x605b67*/
        GameDay = sub_673B00(); /*0x605b6e*/
        a2_4 = GameDay; /*0x605b7c*/
        ((void (__thiscall *)(Actor *, _DWORD))v28->Unk_DA)(this, LODWORD(a2_4)); /*0x605b7f*/
      }
      if ( LOBYTE(this->members.unk0B4[3]) ) /*0x605b81*/
      {
        v29 = this->members.super.process; /*0x605b8e*/
        if ( v29 ) /*0x605b93*/
        {
          if ( !v29->GetProcessLevel(v29) ) /*0x605b9e*/
          {
            niNode = this->members.super.super.niNode; /*0x605ba8*/
            if ( niNode ) /*0x605bad*/
            {
              LOBYTE(vtbl) = 1; /*0x605bbd*/
              if ( this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Creature ) /*0x605bc5*/
                LOBYTE(vtbl) = ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->Unk_9E)(this) != 0; /*0x605bd7*/
              Actor_HandleDeathState(this, 1u); /*0x605bdd*/
              this->vtbl->super.Unk_72((MobileObject *)this); /*0x605bec*/
              if ( (_BYTE)vtbl ) /*0x605bf2*/
              {
                a2_4a = this->vtbl->super.GetZRotation((MobileObject *)this); /*0x605c03*/
                NiMatrix33_InitRotationZ(&v44, a2_4a); /*0x605c06*/
                v43.x = 0.0; /*0x605c0d*/
                v6 = 1.0; /*0x605c15*/
                v43.y = 1.0; /*0x605c1c*/
                v43.z = 0.0; /*0x605c25*/
                v31 = sub_7101F0((NiTransform *)&v44, (NiTransform *)&v42, &v43); /*0x605c29*/
                GameDay = 0.0; /*0x605c30*/
                v43.x = v31->rot.data[0][0]; /*0x605c32*/
                v43.y = v31->rot.data[0][1]; /*0x605c3f*/
                v43.z = v31->rot.data[0][2]; /*0x605c4e*/
                sub_8AB440(niNode, &v43.x, 1, 0.0, 0); /*0x605c52*/
                this->members.super.process->Unk_08(this->members.super.process); /*0x605c62*/
              }
              else if ( this->vtbl->super.super.GetAnimData(this) ) /*0x605c71*/
              {
                v32 = this->vtbl->super.super.GetAnimData(this); /*0x605c87*/
                if ( ActorAnimData_HasAnimKey(v32, 0x20u) ) /*0x605c8b*/
                {
                  v33 = this->vtbl->super.super.GetAnimData(this); /*0x605ca6*/
                  ActorAnimData_ClearSlot(v33, 5, 0.0); /*0x605cac*/
                  GameDay = 0.0; /*0x605cb1*/
                  ActorAnimData_RestorePlaySavedSlot((int)v33, 0, 0x20u, 0xFFFFFFFF, 0.0, 0xFFFFFFFF); /*0x605cc1*/
                  NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v33, 0); /*0x605cca*/
                  if ( NormalizedSequenceSlot ) /*0x605cd1*/
                  {
                    *((float *)NormalizedSequenceSlot + 0x12) = *((float *)NormalizedSequenceSlot + 0xC); /*0x605cd9*/
                    GameDay = 0.0; /*0x605ce5*/
                    ActorAnimData_Update(v33, this, 0.0, *((float *)NormalizedSequenceSlot + 0xC)); /*0x605ceb*/
                    ActorAnimData_ApplyToActor(v33, (TESObjectREFR *)this); /*0x605cf3*/
                  }
                  sub_5F5D10((TESObjectREFR *)this, v5, v6, GameDay); /*0x605cfa*/
                }
              }
              LOBYTE(this->members.unk0B4[3]) = 0; /*0x605cff*/
            }
          }
        }
      }
      v35 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this); /*0x605d10*/
      if ( !v35 || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 0x18C))(v35), result != 4) ) /*0x605d25*/
      {
        GameDay = arg0; /*0x605d27*/
        sub_603CA0(this, v5, v6, arg0, arg0); /*0x605d31*/
      }
      if ( this != (Actor *)reference ) /*0x605d3c*/
      {
        result = (int)this->vtbl->super.super.GetBaseForm(this); /*0x605d48*/
        if ( result ) /*0x605d4c*/
        {
          v36 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x605d57*/
          v37 = this->vtbl->super.super.GetPos(this); /*0x605d61*/
          v43.x = *v37; /*0x605d67*/
          v43.y = v37[1]; /*0x605d6e*/
          result = *((_DWORD *)v37 + 2); /*0x605d72*/
          LODWORD(v43.z) = result; /*0x605d75*/
          if ( v36 ) /*0x605d79*/
          {
            LOBYTE(result) = TESObjectCELL_IsInterior(v36); /*0x605d7d*/
            if ( !(_BYTE)result ) /*0x605d84*/
            {
              LOBYTE(result) = sub_4CC540((int)v36, &v43.x); /*0x605d8d*/
              if ( !(_BYTE)result ) /*0x605d94*/
              {
                WorldSpace = (TESObjectCELL **)TESObjectCELL_GetWorldSpace(v36); /*0x605d98*/
                sub_4DD4B0((int)vtbl, v5, v6, GameDay, this, 0, WorldSpace); /*0x605da1*/
              }
            }
          }
        }
      }
    }
    else
    {
      *(float *)&v42 = sub_673B00(); /*0x6057ab*/
      v10 = *(float *)&v42; /*0x6057af*/
      deltaTime = *(float *)&v42 - *(float *)&this->members.unk0B4[2]; /*0x6057bb*/
      if ( *(float *)&this->members.unk0B4[2] > (double)*(float *)&v42 || *(float *)&this->members.unk0B4[2] < 0.0 ) /*0x6057db*/
      {
        this->members.unk0B4[2] = LODWORD(v42); /*0x6057df*/
        deltaTime = 0.0; /*0x6057e7*/
        if ( v10 > 0.0 && flt_A3744C > v10 ) /*0x605801*/
        {
          *(float *)&this->members.unk0B4[2] = 0.0; /*0x605803*/
          deltaTime = v10; /*0x605809*/
        }
      }
      this->members.super.process->Unk_08(this->members.super.process); /*0x60581b*/
      MagicTarget_ProcessEffects(&this->members.magicTarget, deltaTime); /*0x605828*/
      this->members.unk0B4[2] = LODWORD(v42); /*0x605831*/
    }
  }
  return result; /*0x605837*/
}
