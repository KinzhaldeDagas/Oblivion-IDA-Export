void __thiscall sub_6545E0(MiddleHighProcess *a1, Actor *a6)
{
  double v2; // st6
  double v3; // st7
  ActorAnimData *v5; // eax
  int v6; // ebp
  SInt8 knockedState; // al
  void *niNode; // eax
  UInt32 v9; // eax
  unsigned __int8 **v10; // eax
  UInt32 v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // st7
  bool v17; // bl
  SInt8 v18; // bl
  UInt32 v19; // eax
  UInt32 v20; // eax
  bool v21; // zf
  char *Name; // eax
  bool IsSwimming; // al
  ActorAnimData *v24; // ecx
  int v25; // ebp
  int v26; // ebx
  int v27; // ebp
  int v28; // eax
  bool v29; // bl
  int v30; // eax
  double v31; // rt0
  float v32; // [esp+18h] [ebp-38h]
  float v33; // [esp+1Ch] [ebp-34h] BYREF
  float v34; // [esp+20h] [ebp-30h] BYREF
  double v35; // [esp+24h] [ebp-2Ch] BYREF
  float v36; // [esp+2Ch] [ebp-24h]
  float v37; // [esp+30h] [ebp-20h]
  float v38; // [esp+34h] [ebp-1Ch]
  float v39; // [esp+38h] [ebp-18h]
  float v40; // [esp+3Ch] [ebp-14h]
  float v41; // [esp+40h] [ebp-10h]
  float v42; // [esp+44h] [ebp-Ch]
  float v43; // [esp+48h] [ebp-8h]
  float GameHour; // [esp+4Ch] [ebp-4h]
  float retaddr; // [esp+50h] [ebp+0h]

  v5 = a6->vtbl->super.super.GetAnimData(a6);
  v6 = (int)v5;
  if ( a6 == (Actor *)TESDataHandler_g_PlayerRef && v5 == Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1) )
    JUMPOUT(0x654C4E);
  if ( a6->vtbl->super.super.IsDead((TESObjectREFR *)a6, 0)
    && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)a6) != (struct Concurrency::details::ScheduleGroupBase *)6 )
  {
    a1->knockedState = 0;
    return;
  }
  sub_5E0A60(a6);
  if ( v3 < *(float *)&SrcStr
    || a6->vtbl->super.super.HasFatigue((TESObjectREFR *)a6)
    || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)a6) == (struct Concurrency::details::ScheduleGroupBase *)6 )
  {
    knockedState = a1->knockedState;
    if ( knockedState )
    {
      if ( knockedState == 2 || knockedState == 1 )
        v3 = Script_AddEventToExtraScript(0, &a6->members.super.super.baseExtraList, 0x40);
    }
    else
    {
      if ( ((int (__thiscall *)(MiddleHighProcess *))a1->GetSitSleepState)(a1) )
      {
        if ( a6->vtbl->GetMountedHorse(a6) )
          sub_5F0410((TESObjectREFR *)a6, v6);
        else
          sub_5E4140((TESObjectREFR *)a6);
      }
      MagicCaster_InitializeCasting___(&a6->members.magicCaster);
      if ( a6->vtbl->super.super.HasFatigue((TESObjectREFR *)a6) )
      {
        a1->knockedState = 3;
        sub_88D070((NiNode *)a6->members.super.super.niNode, 1, 1, 0);
        sub_8A5580((int)a6->members.super.super.niNode, 1);
        v3 = 0.0;
        sub_470FC0((_DWORD *)v6, 5, 0.0);
        sub_4728C0(v6);
        ((void (__thiscall *)(MiddleHighProcess *, Actor *))a1->Unk_64)(a1, a6);
      }
      else
      {
        a1->knockedState = 4;
        sub_4723A0((float *)v6, v2, (float *)&v35 + 1, a6, 1, 0);
        v38 = -*((float *)&v35 + 1);
        v39 = -v36;
        v40 = -v37;
        retaddr = flt_B33E9C * dbl_A3F3D0;
        retaddr = 1.0 / retaddr;
        v41 = retaddr * v38;
        *((float *)&v35 + 1) = v41;
        v42 = v39 * retaddr;
        v36 = v42;
        niNode = a6->members.super.super.niNode;
        v43 = retaddr * v40;
        v37 = v43;
        sub_8AB440((int)niNode, (int)&v35 + 4, 0, 0.0, 0);
        sub_8A5580((int)a6->members.super.super.niNode, 0);
        v3 = Script_AddEventToExtraScript(0, &a6->members.super.super.baseExtraList, 0x40);
      }
    }
  }
  switch ( a1->knockedState )
  {
    case 1:
      v33 = a1->GetCurHour(a1);
      GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
      v12 = GameHour;
      v13 = v33;
      if ( v33 <= (double)GameHour )
        v14 = v12 - v13;
      else
        v14 = v13 + dbl_A492B8 - v12;
      v33 = v14;
      v35 = v33;
      v15 = sub_4029D0(&TimeGlobals);
      LOBYTE(GameHour) = v15 * dbl_A72D40 < v35;
      v35 = v33;
      v16 = sub_4029D0(&TimeGlobals) * dbl_A72D38;
      v17 = v16 < v35;
      sub_5E0A60(a6);
      if ( v16 < *(float *)&SrcStr
        || a6->vtbl->super.super.HasFatigue((TESObjectREFR *)a6)
        || !LOBYTE(GameHour)
        || !v17 && !sub_5F0270((MobileObject *)a6, flt_A45FF4) )
      {
        goto LABEL_69;
      }
      v18 = a1->knockedState;
      a1->knockedState = 3;
      GameHour = COERCE_FLOAT(sub_521450((TESObjectREFR *)g_idleAnimationMap, (TESObjectREFR *)a6, 0));
      a1->knockedState = v18;
      v19 = sub_5E12B0(a6);
      if ( v19 )
        (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v19 + 0x9C))(v19, 0, 0);
      v20 = LODWORD(v42);
      v21 = LODWORD(v42) == 0;
      a1->knockedState = 5;
      if ( v21 )
        goto LABEL_46;
      sub_475300((int **)v6, v20, 5u);
      return;
    case 2:
    case 4:
      if ( *(_DWORD *)(v6 + 8) && sub_88FA30(*(_DWORD *)(v6 + 8)) > *(float *)&SrcStr )
        goto LABEL_69;
      sub_5EF930(a6);
      a1->knockedState = 2 * (a1->knockedState == 4) + 1;
      v9 = sub_5E12B0(a6);
      if ( v9 )
        (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)v9 + 0x9C))(v9, 1, 0);
      sub_470FC0((_DWORD *)v6, 5, 0.0);
      sub_4728C0(v6);
      ((void (__thiscall *)(MiddleHighProcess *, Actor *))a1->Unk_64)(a1, a6);
      return;
    case 3:
      sub_5E0A60(a6);
      if ( v3 < *(float *)&SrcStr
        || a6->vtbl->super.super.HasFatigue((TESObjectREFR *)a6)
        || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)a6) == (struct Concurrency::details::ScheduleGroupBase *)6 )
      {
        Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)a6);
      }
      else
      {
        v10 = sub_521450((TESObjectREFR *)g_idleAnimationMap, (TESObjectREFR *)a6, 0);
        if ( v10 )
        {
          sub_475300((int **)v6, (UInt32)v10, 5u);
          v11 = sub_5E12B0(a6);
          if ( v11 )
            (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v11 + 0x9C))(v11, 0, 0);
          a1->knockedState = 5;
        }
        else
        {
LABEL_46:
          Name = TESObjectREFR_GetName((TESObjectREFR *)a6);
          PrintError("No 'GetUp' animation found for actor '%s'.", Name);
          ((void (__thiscall *)(MiddleHighProcess *, Actor *))a1->Unk_BD)(a1, a6);
        }
      }
      return;
    case 5:
      if ( sub_4711F0((_DWORD *)v6)
        && (!sub_4706E0((ActorAnimData *)v6, 0) || sub_4706E0((ActorAnimData *)v6, 0)[8].next == (PowerListEntry *)1) )
      {
        IsSwimming = Actor_IsSwimming(a6);
        v24 = (ActorAnimData *)v6;
        if ( !IsSwimming )
        {
          if ( sub_477E50((ActorAnimData *)v6, (PlayerCharacter *)a6) )
          {
LABEL_54:
            v25 = *(_DWORD *)(v6 + 8);
            v26 = (int)a6->members.super.super.niNode;
            GameHour = *(float *)&v26;
            if ( v25 )
            {
              v27 = sub_405790(v25, 0);
              v28 = sub_4D96F0(a6, (_DWORD *)v27, "Bip01 Head");
              if ( v28
                || (v28 = NiObjectNET_LookupObjectByName((_DWORD *)v27, "Bip01 Neck")) != 0
                || (v28 = NiObjectNET_LookupObjectByName((_DWORD *)v27, "Bip01 Spine1")) != 0 )
              {
                sub_4121A0((float *)(v28 + 0x88), (float *)&v35, (float *)(v27 + 0x88));
                v29 = (*((_BYTE *)*a1->GetCharProxy(a1, &v34) + 0x1F4) & 1) == 0;
                sub_7016A0((NiD3DVertexShader *)&v33);
                if ( v29 )
                {
                  v30 = sub_4D96F0(a6, (_DWORD *)LODWORD(v43), "Bip01 Spine");
                  if ( v30 )
                  {
                    if ( sub_897580(v30, 0) )
                    {
                      v31 = dbl_A3D360;
                      v34 = v34 * v31;
                      *(float *)&v35 = *(float *)&v35 * v31;
                      *((float *)&v35 + 1) = v31 * *((float *)&v35 + 1);
                    }
                  }
                }
                v32 = sub_683CB0(&v34);
                a1->knockedState = 0;
                ((void (__thiscall *)(Actor *, _DWORD))a6->vtbl->super.Unk_7A)(a6, LODWORD(v32));
                v26 = LODWORD(v42);
              }
            }
            sub_8A5580(v26, 0);
            sub_8AB8A0(v26, 0.0);
            sub_424870(&a6->members.super.super.baseExtraList, 0);
            a1->knockedState = 6;
            return;
          }
          v24 = (ActorAnimData *)v6;
        }
        sub_475440(v24, 1, 0);
        goto LABEL_54;
      }
      if ( *(_DWORD *)(v6 + 0xCC) || *(_DWORD *)(v6 + 0xD0) )
LABEL_69:
        JUMPOUT(0x654C4D);
      a1->knockedState = 3;
      return;
    case 6:
      if ( !sub_472EA0((_DWORD *)v6) )
        goto LABEL_69;
      a1->knockedState = 0;
      def_6547FC((int)a6);
      return;
    default:
      goto LABEL_69;
  }
}
