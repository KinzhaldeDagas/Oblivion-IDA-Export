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
  unsigned int GameDayOfWeek; // eax
  TESObjectREFR *v15; // eax
  TESObjectREFR *v16; // edi
  int v17; // edx
  TESObjectREFR *a2; // eax
  char v19; // al
  char *v20; // ecx
  LowProcess *v21; // ecx
  TESPackage *editorPackage; // eax
  char v23; // al
  TESObjectCELL *ParentCell; // eax
  LowProcess *v25; // ecx
  int v26; // edi
  double v27; // st7
  ActorVtbl *v28; // edi
  LowProcess *v29; // ecx
  void *niNode; // edi
  NiTransform *v31; // eax
  ActorAnimData *v32; // eax
  ActorAnimData *v33; // edi
  PowerListEntry *v34; // eax
  int v35; // eax
  TESObjectCELL *v36; // edi
  float *v37; // eax
  TESWorldSpace *WorldSpace; // eax
  float a2_4; // [esp+1Ch] [ebp-4Ch]
  float a2_4a; // [esp+1Ch] [ebp-4Ch]
  int v41; // [esp+20h] [ebp-48h]
  NiTransform v42; // [esp+2Ch] [ebp-3Ch] BYREF
  int v43; // [esp+6Ch] [ebp+4h]

  result = (unsigned int)this->members.super.super.super.flags >> 0xB;
  if ( (this->members.super.super.super.flags & 0x800) == 0 )
  {
    if ( LOBYTE(this->members.unk070[2]) || sub_45A500(SaveLoad_CurrentSavegame) )
    {
      process = this->members.super.process;
      v41 = v4;
      if ( process )
      {
        v12 = process->GetCurDay(process);
        GameDay = TimeGlobals_GetGameDay(&TimeGlobals);
        if ( v12 == v13 )
        {
          BYTE1(this->members.unk0E8[5]) = 0;
        }
        else
        {
          if ( !BYTE1(this->members.unk0E8[5]) )
          {
            GameDayOfWeek = TimeGlobals_GetGameDayOfWeek(&TimeGlobals);
            if ( GameDayOfWeek == iMerchantRespawnDay1 || GameDayOfWeek == dword_B37D88 )
            {
              v15 = (TESObjectREFR *)sub_420680(&this->members.super.super.baseExtraList);
              v16 = v15;
              if ( v15 )
              {
                vtbl = v15->vtbl;
                LOBYTE(v17) = !TESObjectREFR::ShouldReferenceRespawn(v15);
                vtbl->Unk_61(v16, v17);
              }
            }
          }
          BYTE1(this->members.unk0E8[5]) = 1;
        }
      }
      if ( ((unsigned __int8 (__thiscall *)(Actor *, int))this->vtbl->super.super.HasFatigue)(this, v41) )
      {
        if ( this->vtbl->GetMountedHorse(this) || ((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this) )
          sub_5F0410((TESObjectREFR *)this, v3);
      }
      if ( this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
        || LOBYTE(this->members.unk0B4[3])
        || !byte_B3BD98
        || this->members.DeadState == 6 )
      {
        if ( this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) )
        {
          if ( this->members.DeadState == 1 )
          {
            if ( byte_B14E98 )
            {
              if ( Actor::IsEssential(this) )
                this->vtbl->Resurrect(this, 0, 0, 1);
            }
          }
          else
          {
            this->members.super.process->Unk_08(this->members.super.process);
            GameDay = *(float *)&this->members.unk080[1] - flt_B33E9C;
            *(float *)&this->members.unk080[1] = GameDay;
          }
          if ( !Actor::IsEssential(this) && sub_5E1D70(this) )
          {
            ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
            if ( !TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
            {
              v25 = this->members.super.process;
              if ( v25 )
              {
                GameDay = ((double (__thiscall *)(LowProcess *))v25->GetUnk08C)(v25);
                if ( GameDay != *(float *)&SrcStr )
                {
                  v26 = iHoursToRespawnCell;
                  this->members.super.process->GetUnk08C(this->members.super.process);
                  LODWORD(v42.rot.data[0][0]) = v26;
                  v6 = (double)v26;
                  if ( v26 < 0 )
                    v6 = v6 + flt_A2FC78;
                  *(double *)&v42.rot.data[1][0] = GameDay + v6;
                  LODWORD(v42.rot.data[0][0]) = TimeGlobals_GetGameDaysPassed(&TimeGlobals);
                  v27 = (double)SLODWORD(v42.rot.data[0][0]);
                  if ( v42.rot.data[0][0] < 0.0 )
                    v27 = v27 + flt_A2FC78;
                  *(double *)&v42.rot.data[0][0] = v27 * dbl_A2F920;
                  GameDay = TimeGlobals_GetGameHour(&TimeGlobals) + *(double *)&v42.rot.data[0][0];
                  if ( GameDay > *(double *)&v42.rot.data[1][0] )
                    sub_6748B0(&ActorProcessManager_ptr, (TESObjectREFR *)this);
                }
              }
            }
          }
        }
      }
      else
      {
        if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this) )
        {
          if ( !sub_5E0380(this) || sub_5E0380(this)->members.type != 0x18 && sub_5E0380(this)->members.type != 0x1E )
            sub_5F8000(this);
        }
        a2 = this->members.unk0CC;
        if ( a2 )
          sub_5F7CF0(this, a2, 1);
        LOBYTE(vtbl) = this->members.super.process->GetCurDay(this->members.super.process);
        TimeGlobals_GetGameDay(&TimeGlobals);
        if ( v19 != (_BYTE)vtbl )
          sub_422D10(&this->members.super.super.baseExtraList.vtbl);
        if ( !this->vtbl->super.super.GetKnockedState((TESObjectREFR *)this)
          && (byte_B3BDA4 || (v20 = (char *)this->members.super.process->editorPackage) != 0 && sub_567770(v20)) )
        {
          v21 = this->members.super.process;
          editorPackage = v21->editorPackage;
          if ( !editorPackage || editorPackage->members.type != 0x18 )
          {
            v6 = arg0;
            if ( arg0 == 0.0 || this == (Actor *)TESDataHandler_g_PlayerRef )
              v21->ManagePackProcedure(v21, this);
            else
              ((void (__stdcall *)(Actor *, _DWORD))v21->Unk_03)(this, LODWORD(arg0));
          }
        }
        GameDay = TimeGlobals_GetGameDay(&TimeGlobals);
        sub_420050(&this->members.super.super.baseExtraList, v23);
      }
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
      {
        v28 = this->vtbl;
        GameDay = sub_673B00();
        a2_4 = GameDay;
        ((void (__thiscall *)(Actor *, _DWORD))v28->Unk_DA)(this, LODWORD(a2_4));
      }
      if ( LOBYTE(this->members.unk0B4[3]) )
      {
        v29 = this->members.super.process;
        if ( v29 )
        {
          if ( !v29->GetProcessLevel(v29) )
          {
            niNode = this->members.super.super.niNode;
            if ( niNode )
            {
              LOBYTE(vtbl) = 1;
              if ( this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Creature )
                LOBYTE(vtbl) = ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->Unk_9E)(this) != 0;
              Actor_HandleDeathSTate____(this, 1u);
              this->vtbl->super.Unk_72((MobileObject *)this);
              if ( (_BYTE)vtbl )
              {
                a2_4a = this->vtbl->super.GetZRotation((MobileObject *)this);
                NiMatrix33_InitRotationTransform(v42.rot.data[2], a2_4a);
                v42.rot.data[1][0] = 0.0;
                v6 = 1.0;
                v42.rot.data[1][1] = 1.0;
                v42.rot.data[1][2] = 0.0;
                v31 = sub_7101F0((NiTransform *)v42.rot.data[2], &v42, (NiPoint3 *)v42.rot.data[1]);
                GameDay = 0.0;
                *(_QWORD *)&v42.rot.data[1][0] = *(_QWORD *)&v31->rot.data[0][0];
                v42.rot.data[1][2] = v31->rot.data[0][2];
                sub_8AB440((int)niNode, (int)v42.rot.data[1], 1, 0.0, 0);
                this->members.super.process->Unk_08(this->members.super.process);
              }
              else if ( this->vtbl->super.super.GetAnimData(this) )
              {
                v32 = this->vtbl->super.super.GetAnimData(this);
                if ( sub_470D00(v32, 0x20) )
                {
                  v33 = this->vtbl->super.super.GetAnimData(this);
                  sub_470FC0(v33, 5, 0.0);
                  GameDay = 0.0;
                  sub_474AB0((int)v33, v5, v6, 0.0, 0, 0x20, 0xFFFFFFFF, 0.0, 0xFFFFFFFF);
                  v34 = sub_4706E0(v33, 0);
                  if ( v34 )
                  {
                    v34[9].data = v34[6].data;
                    GameDay = 0.0;
                    sub_476D10((AnimSequenceSingle *)v33, (int)v33, v5, v6, 0.0, (int)this, 0.0, *(float *)&v34[6].data);
                    sub_474510(v33, (TESObjectREFR *)this);
                  }
                  sub_5F5D10((PlayerCharacter *)this, v5, v6, GameDay);
                }
              }
              LOBYTE(this->members.unk0B4[3]) = 0;
            }
          }
        }
      }
      v35 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this);
      if ( !v35 || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 0x18C))(v35), result != 4) )
      {
        GameDay = arg0;
        sub_603CA0(this, v5, v6, arg0, arg0);
      }
      if ( this != (Actor *)TESDataHandler_g_PlayerRef )
      {
        result = (int)this->vtbl->super.super.GetBaseForm(this);
        if ( result )
        {
          v36 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
          v37 = this->vtbl->super.super.GetPos(this);
          *(_QWORD *)&v42.rot.data[1][0] = *(_QWORD *)v37;
          result = *((_DWORD *)v37 + 2);
          LODWORD(v42.rot.data[1][2]) = result;
          if ( v36 )
          {
            LOBYTE(result) = TESObjectCELL_IsInterior(v36);
            if ( !(_BYTE)result )
            {
              LOBYTE(result) = sub_4CC540((int)v36, v42.rot.data[1]);
              if ( !(_BYTE)result )
              {
                WorldSpace = TESObjectCELL_GetWorldSpace(v36);
                sub_4DD4B0((int)vtbl, v5, v6, GameDay, this, 0, WorldSpace);
              }
            }
          }
        }
      }
    }
    else
    {
      v42.rot.data[0][0] = sub_673B00();
      v10 = v42.rot.data[0][0];
      *(float *)&v43 = v42.rot.data[0][0] - *(float *)&this->members.unk0B4[2];
      if ( *(float *)&this->members.unk0B4[2] > (double)v42.rot.data[0][0] || *(float *)&this->members.unk0B4[2] < 0.0 )
      {
        *(float *)&this->members.unk0B4[2] = v42.rot.data[0][0];
        *(float *)&v43 = 0.0;
        if ( v10 > 0.0 && flt_A3744C > v10 )
        {
          *(float *)&this->members.unk0B4[2] = 0.0;
          *(float *)&v43 = v10;
        }
      }
      this->members.super.process->Unk_08(this->members.super.process);
      result = MagicTarget_ProcessEffects(&this->members.magicTarget, v43);
      *(float *)&this->members.unk0B4[2] = v42.rot.data[0][0];
    }
  }
  return result;
}
