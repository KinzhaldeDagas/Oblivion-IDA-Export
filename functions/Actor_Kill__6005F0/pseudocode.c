void __userpurge Actor_Kill(Actor *a1@<ecx>, double a2@<st2>, double a3@<st1>, double x@<st0>, Actor *a5, int a6)
{
  ActorVtbl *vtbl; // edx
  int v8; // edi
  int v9; // ebx
  int DeadState; // eax
  void (__thiscall **v11)(_DWORD, _DWORD); // ebx
  int *SafeFloatPointer; // eax
  int process; // ecx
  _BYTE *v14; // eax
  double v15; // st7
  float (__thiscall *v16)(Actor *, AVCode); // eax
  double v17; // st7
  ActorVtbl *v18; // edx
  void (__thiscall *v19)(Actor *, UInt32, float, Actor *); // eax
  char *Name; // eax
  int BaseCalcAVi; // eax
  ActorVtbl *v22; // edx
  double v23; // st7
  float (__thiscall *GetAV_F)(Actor *, AVCode); // eax
  double v25; // st7
  ActorVtbl *v26; // edx
  void (__thiscall *DamageAV_F)(Actor *, UInt32, float, Actor *); // eax
  int v28; // ecx
  Actor *v29; // edi
  LowProcess *v30; // ecx
  int v31; // ecx
  bool v32; // zf
  PlayerCharacter *v33; // eax
  char v34; // al
  int v35; // ecx
  int v36; // ebx
  _BYTE *v37; // eax
  unsigned __int16 AnimGroup; // ax
  _DWORD *v39; // ebx
  int v40; // eax
  int v41; // ecx
  TESForm *v42; // eax
  int v43; // eax
  _DWORD **sound; // ebx
  Actor *v45; // eax
  int v46; // eax
  float v47; // ecx
  float v48; // edx
  const char *v49; // ebx
  int v50; // ecx
  int v51; // eax
  PlayerCharacter *v52; // ecx
  LowProcess *v53; // ebx
  int v54; // ecx
  _DWORD *v55; // ebx
  void (__thiscall **v56)(_DWORD *, _DWORD); // edi
  double x_low; // st7
  double GameHour; // st7
  void (__thiscall *v59)(_DWORD *, _DWORD); // edx
  int v60; // edi
  int v61; // ebx
  NiNode *niNode; // ebx
  bhkCharacterProxy *CharProxy; // eax
  char *v64; // eax
  __m128 *v65; // eax
  int v66; // ecx
  double v67; // st7
  int v68; // ecx
  TESPackage *editorPackage; // ecx
  TESPackage *v70; // ecx
  char *v71; // eax
  ActorVtbl *v72; // eax
  int v73; // edi
  int v74; // ebx
  ActorVtbl *v75; // edx
  int v76; // ebx
  int v77; // edi
  const char *v78; // eax
  ActorVtbl *v79; // eax
  int v80; // ebx
  int v81; // edi
  const char *v82; // ebx
  unsigned int v83; // [esp+34h] [ebp-148h]
  unsigned int v84; // [esp+34h] [ebp-148h]
  const char *duration; // [esp+38h] [ebp-144h]
  float durationa; // [esp+38h] [ebp-144h]
  float durationb; // [esp+38h] [ebp-144h]
  int v88; // [esp+3Ch] [ebp-140h]
  NiPoint3 v89; // [esp+54h] [ebp-128h] BYREF
  Actor *v90; // [esp+64h] [ebp-118h]
  float v91; // [esp+68h] [ebp-114h]
  NiTransform v92; // [esp+6Ch] [ebp-110h] BYREF
  char string[204]; // [esp+ACh] [ebp-D0h] BYREF
  int savedregs; // [esp+17Ch] [ebp+0h] BYREF

  vtbl = a1->vtbl;
  v90 = a5;
  if ( !((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.IsDead)(
          a1,
          0,
          x,
          a3,
          a2) )
  {
    LOBYTE(a1->members.unk080[0]) = 0;
    sub_5EF930(a1);
    if ( a1 == (Actor *)TESDataHandler_g_PlayerRef->lastRiddenHorse )
      TESDataHandler_g_PlayerRef->lastRiddenHorse = 0;
    if ( !byte_B14E98 )
      goto LABEL_19;
    v8 = 0;
    v9 = (int)a1->vtbl->super.super.GetBaseForm((TESObjectREFR *)a1);
    if ( v9 )
    {
      if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
        v8 = v9;
    }
    if ( (*(_DWORD *)(v8 + 0x28) & 2) != 0 )
    {
      DeadState = a1->members.DeadState;
      if ( DeadState == 3 || DeadState == 5 )
      {
        BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, v9, v8, (int)a1, 8);
        v22 = a1->vtbl;
        LODWORD(v89.x) = BaseCalcAVi;
        v23 = (double)BaseCalcAVi;
        GetAV_F = v22->GetAV_F;
        v89.x = v23;
        v89.x = flt_B37D10 * v89.x;
        v25 = ((double (__thiscall *)(Actor *, int))GetAV_F)(a1, 8);
        v26 = a1->vtbl;
        v91 = v25;
        DamageAV_F = v26->DamageAV_F;
        v89.x = v89.x - v91;
        ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))DamageAV_F)(a1, 8, LODWORD(v89.x), 0);
        return;
      }
      sub_424770(&a1->members.super.super.baseExtraList);
      v11 = (void (__thiscall **)(_DWORD, _DWORD))a1->members.super.process->__vftable;
      SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fEssentialDeathTime);
      ((void (__thiscall **)(LowProcess *, _DWORD))v11)[0x28](a1->members.super.process, *(float *)SafeFloatPointer);
      ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_D0)(a1, 0);
      sub_5EAE70(a1, (int)v11, v8, v88);
      process = (int)a1->members.super.process;
      if ( process )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)process + 0x378))(process) )
        {
          v11 = (void (__thiscall **)(_DWORD, _DWORD))a1->members.super.process;
          v83 = (*((int (__thiscall **)(void (__thiscall **)(_DWORD, _DWORD)))*v11 + 0xDF))(v11);
          v14 = (_BYTE *)(*((int (__thiscall **)(void (__thiscall **)(_DWORD, _DWORD)))*v11 + 0xDE))(v11);
          sub_4D7300(v14, v83, 0);
        }
      }
      if ( a1->vtbl->GetMountedHorse(a1) || ((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1) )
        sub_5F0410((TESObjectREFR *)a1, (int)&savedregs);
      MagicCaster_InitializeCasting___(&a1->members.magicCaster);
      Actor_HandleDeathSTate____(a1, 6u);
      v91 = (float)Actor_GetBaseCalcAVi((int *)a1, (int)v11, v8, (int)a1, 8);
      v15 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B37D10) * v91;
      v16 = a1->vtbl->GetAV_F;
      v91 = v15;
      v17 = ((double (__thiscall *)(Actor *, int))v16)(a1, 8);
      v18 = a1->vtbl;
      v89.x = v17;
      v19 = v18->DamageAV_F;
      v89.x = v91 - v89.x;
      ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))v19)(a1, 8, LODWORD(v89.x), 0);
      duration = (const char *)dword_B38908;
      Name = TESObjectREFR_GetName((TESObjectREFR *)a1);
      _sprintf(string, "%s %s", Name, duration);
      GameUI_QueueMessage(string, 0, 1u, flt_A30634);
    }
    else
    {
LABEL_19:
      v28 = (int)a1->members.super.process;
      if ( v28 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v28 + 0x204))(v28, 0);
      v29 = v90;
      if ( v90 )
      {
        v30 = v90->members.super.process;
        if ( v30 )
        {
          if ( ((int (__thiscall *)(LowProcess *))v30->Unk_F3)(v30) )
          {
            v90 = (Actor *)((int (__thiscall *)(LowProcess *))v90->members.super.process->Unk_F3)(v90->members.super.process);
            v29 = v90;
          }
        }
      }
      if ( Actor_IsNPC(a1) || TESObjectREFR_GetOwner((TESObjectREFR *)a1) )
      {
        if ( v29 )
        {
          if ( Actor_IsNPC(v29) )
          {
            v31 = (int)a1->members.super.process;
            LOBYTE(a1->members.unk080[0]) = (!v31
                                          || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v31 + 0x148))(v31))
                                         && sub_67CB50(&dword_B3BDB0, a1) == 0;
          }
        }
      }
      if ( v29 == (Actor *)TESDataHandler_g_PlayerRef && !a1->vtbl->super.IsDead((MobileObject *)a1) )
      {
        v32 = !Actor_IsNPC(a1);
        v33 = TESDataHandler_g_PlayerRef;
        if ( v32 )
        {
          ++v33->miscStats[5];
        }
        else
        {
          ++v33->miscStats[6];
          sub_4DB760((TESObjectREFR *)a1);
          if ( !v34 )
          {
            if ( LOBYTE(a1->members.unk080[0]) )
              sub_6608F0((int)TESDataHandler_g_PlayerRef);
          }
        }
      }
      v35 = (int)a1->members.super.process;
      if ( v35 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 0x378))(v35) )
        {
          v36 = (int)a1->members.super.process;
          v84 = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 0x37C))(v36);
          v37 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v36 + 0x378))(v36);
          sub_4D7300(v37, v84, 0);
        }
      }
      sub_5EA380(a1, x, a3);
      if ( a1 != (Actor *)TESDataHandler_g_PlayerRef )
        a1->members.unk07C = v29;
      if ( a1->vtbl->GetMountedHorse(a1) || ((int (__thiscall *)(Actor *))a1->vtbl->Unk_E2)(a1) )
        sub_5F0410((TESObjectREFR *)a1, (int)&savedregs);
      MagicCaster_InitializeCasting___(&a1->members.magicCaster);
      AnimGroup = Actor_LoadAnimGroup_((TESObjectREFR *)a1, 0x20, 0, 0);
      v39 = (_DWORD *)AnimGroup;
      if ( sub_51AA00(AnimGroup) == 0x20 )
      {
        v40 = (int)a1->vtbl->super.super.GetAnimData((TESObjectREFR *)a1);
        ActorAnimData_PlayAnimGroup(v40, v39, 1, 0xFFFFFFFF);
        ((void (__thiscall *)(LowProcess *, Actor *))a1->members.super.process->Unk_64)(a1->members.super.process, a1);
      }
      v41 = (int)a1->members.super.process;
      if ( v41 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 0x4B4))(v41);
        if ( !a1->members.super.process->GetProcessLevel(a1->members.super.process) )
        {
          if ( a1 == (Actor *)TESDataHandler_g_PlayerRef
            || !byte_B333B8
            || (v89.x = TesObjectREF_GetDistance((TESObjectREFR *)a1, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0),
                x = v89.x,
                a3 = fDeathSoundMaxDistance,
                a3 >= v89.x) )
          {
            if ( a1->vtbl->super.super.GetBaseForm((TESObjectREFR *)a1)->member.type == kFormType_Creature )
            {
              if ( Actor_IsCreature(a1) && (v42 = a1->vtbl->super.super.GetBaseForm((TESObjectREFR *)a1)) != 0 )
                v43 = sub_51CEC0(v42, 8u);
              else
                v43 = 0;
              sound = (_DWORD **)OSGlobals->sound;
              if ( v43 )
              {
                if ( sound )
                {
                  x = OSGLobals_PlaySound(*(_DWORD *)(v43 + 0xC), 0x102, 0);
                  v29 = v45;
                  if ( v45 )
                  {
                    v46 = (int)a1->vtbl->super.super.GetPos((TESObjectREFR *)a1);
                    v47 = *(float *)v46;
                    v48 = *(float *)(v46 + 4);
                    v89.z = *(float *)(v46 + 8);
                    v89.y = v48;
                    v89.x = v47;
                    x = v47;
                    sub_6B7360((int *)v29, v47, v48, v89.z);
                    sub_6AC3E0(sound, (int)v29->vtbl, (LONG)a1);
                    sub_6B7190((int *)v29, 0);
                    sub_6B73E0(v29);
                    FormHeapFree((unsigned int)v29);
                  }
                }
              }
            }
            else
            {
              ((void (__thiscall *)(Actor *, Actor *, int, int))a1->vtbl->Unk_C2)(a1, v90, 1, 1);
            }
          }
        }
      }
      Actor_HandleDeathSTate____(a1, 1u);
      v49 = (const char *)OSGlobals->sound;
      if ( a1 == (Actor *)TESDataHandler_g_PlayerRef )
      {
        if ( v49 )
        {
          SoundManager_OpenMusicFile(v49, 8, (int)".\\Data\\Music\\Special\\death.mp3", 0);
          SoundManager_PlayMusic((int)v49, (int)v29);
        }
      }
      v50 = (int)a1->members.super.process;
      if ( v50 )
      {
        v51 = (*(int (__thiscall **)(int, Actor *))(*(_DWORD *)v50 + 0xE8))(v50, a1);
        if ( v51 )
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v51 + 0x9C))(v51, 1, 0);
      }
      v52 = TESDataHandler_g_PlayerRef;
      if ( a1 == (Actor *)TESDataHandler_g_PlayerRef && !v52->isThirdPerson )
        TogglePOV(v52, 0);
      v53 = a1->members.super.process;
      if ( v53 )
      {
        if ( !v53->GetProcessLevel(a1->members.super.process) )
        {
          LOBYTE(v89.x) = BYTE2(v53[2].unk048);
          if ( LOBYTE(v89.x) )
            BYTE2(v53[2].unk048) = sub_693210((TESObjectREFR *)a1, SLOBYTE(v89.x));
        }
      }
      v54 = (int)a1->members.super.process;
      if ( v54 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 0x20))(v54);
        v55 = &a1->members.super.process->__vftable;
        v56 = (void (__thiscall **)(_DWORD *, _DWORD))(*v55 + 0x4F4);
        LODWORD(v89.x) = TimeGlobals_GetGameDaysPassed(&TimeGlobals);
        x_low = (double)SLODWORD(v89.x);
        if ( v89.x < 0.0 )
          x_low = x_low + flt_A2FC78;
        *(double *)&v89.x = x_low * dbl_A2F920;
        GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
        v59 = *v56;
        v89.x = GameHour + *(double *)&v89.x;
        x = v89.x;
        v59(v55, LODWORD(v89.x));
      }
      v60 = 0;
      v61 = (int)a1->vtbl->super.super.GetBaseForm((TESObjectREFR *)a1);
      if ( v61 )
      {
        if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
          v60 = v61;
      }
      sub_440FA0((int *)TES, v60, 1);
      if ( a1->vtbl->IsInCombat(a1, 1) )
        ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_D0)(a1, 0);
      if ( a1->vtbl->IsTresspassing(a1) )
        sub_4246F0(&a1->members.super.super.baseExtraList);
      niNode = (NiNode *)a1->members.super.super.niNode;
      if ( MobileObject_GetCharProxy((MobileObject *)a1) )
      {
        CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
        if ( CharProxy )
        {
          v64 = *((char **)CharProxy + 2);
          if ( v64 )
          {
            v65 = (__m128 *)sub_8AC0A0(v64);
            sub_43F3E0(&v89.x, v65);
          }
        }
      }
      if ( a1 == (Actor *)TESDataHandler_g_PlayerRef )
        sub_65AC20(a1, 1);
      else
        a1->vtbl->super.Unk_72((MobileObject *)a1);
      v66 = (int)a1->members.super.process;
      if ( !v66 || (*(int (__thiscall **)(int))(*(_DWORD *)v66 + 8))(v66) )
      {
        sub_5E9E70((TESObjectREFR *)a1);
        RunScripts((TESObjectREFR *)a1, a2, a3, x);
        LOBYTE(a1->members.unk0B4[3]) = 1;
      }
      else
      {
        v67 = flt_B36C80;
        ((void (__stdcall *)(float))a1->members.super.process->SetUnk22C)(flt_B36C80);
        if ( !((int (__thiscall *)(LowProcess *))a1->members.super.process->GetKnockedState)(a1->members.super.process)
          || ((int (__thiscall *)(LowProcess *))a1->members.super.process->GetKnockedState)(a1->members.super.process) == 6 )
        {
          durationb = a1->vtbl->super.GetZRotation((MobileObject *)a1);
          NiMatrix33_InitRotationTransform(v92.rot.data[1], durationb);
          v89.x = 0.0;
          a3 = 1.0;
          v89.y = 1.0;
          v89.z = 0.0;
          v89 = *(NiPoint3 *)&sub_7101F0((NiTransform *)v92.rot.data[1], &v92, &v89)->rot.data[0][0];
          sub_88D070(niNode, 6, 1, 0);
          v67 = 0.0;
          sub_8AB440((int)niNode, (int)&v89, 1, 0.0, 0);
        }
        else if ( a1->vtbl->super.super.HasFatigue((TESObjectREFR *)a1) )
        {
          sub_8A5580((int)niNode, 0);
          durationa = a1->vtbl->super.GetZRotation((MobileObject *)a1);
          NiMatrix33_InitRotationTransform(v92.rot.data[1], durationa);
          v67 = 0.0;
          v89.x = 0.0;
          a3 = flt_A31E2C;
          v89.y = flt_A31E2C;
          v89.z = 0.0;
          v89 = *(NiPoint3 *)&sub_7101F0((NiTransform *)v92.rot.data[1], &v92, &v89)->rot.data[0][0];
          sub_4529E0(&v92.scale, &v89.x);
          sub_536660((int)niNode, &v92.scale);
        }
        if ( dword_B3B914 <= dword_B148E4 || !((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->Unk_9E)(a1) )
        {
          v68 = (int)a1->members.super.process;
          if ( v68 )
          {
            if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v68 + 0x3D0))(v68)
              && (GetRandomLargeInteger_(0) % 0x64 <= iDeathDropWeaponChance
               || !((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->Unk_9E)(a1)) )
            {
              sub_5F5D10((PlayerCharacter *)a1, a2, a3, v67);
            }
          }
        }
      }
      if ( a1->members.super.process )
      {
        sub_5EAE70(a1, (int)niNode, v60, v88);
        editorPackage = a1->members.super.process->editorPackage;
        if ( editorPackage )
        {
          if ( sub_5660A0(editorPackage) )
          {
            v70 = a1->members.super.process->editorPackage;
            if ( v70 )
              v70->__vftable->super.Destroy((TESForm *)v70, 1);
          }
        }
        a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0);
        a1->members.super.process->editorPackage = 0;
      }
      if ( byte_B3B908 )
      {
        v71 = TESObjectREFR_GetName((TESObjectREFR *)a1);
        Interface_ConsolePrint("%.20s is dead!", v71);
      }
    }
    if ( trackAllDeath )
    {
      if ( v90 )
      {
        v72 = v90->vtbl;
        LODWORD(v89.x) = v90->members.super.super.super.refID;
        v73 = 0;
        v74 = (int)v72->super.super.GetBaseForm((TESObjectREFR *)v90);
        if ( v74 )
        {
          if ( v90->vtbl->super.super.IsActor((TESObjectREFR *)v90) )
            v73 = v74;
        }
        v90 = *(Actor **)(v73 + 0xA4);
        if ( !v90 )
          v90 = (Actor *)EmptyString;
        v75 = a1->vtbl;
        v91 = *(float *)&a1->members.super.super.super.refID;
        v76 = 0;
        v77 = (int)v75->super.super.GetBaseForm((TESObjectREFR *)a1);
        if ( v77 )
        {
          if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
            v76 = v77;
        }
        v78 = *(const char **)(v76 + 0xA4);
        if ( !v78 )
          v78 = EmptyString;
        PrintToLog___("'%s' (%08X) was killed by '%s' (%08X).", v78, v91, (const char *)v90, v89.x);
      }
      else
      {
        v79 = a1->vtbl;
        LODWORD(v89.x) = a1->members.super.super.super.refID;
        v80 = 0;
        v81 = (int)v79->super.super.GetBaseForm((TESObjectREFR *)a1);
        if ( v81 )
        {
          if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
            v80 = v81;
        }
        v82 = *(const char **)(v80 + 0xA4);
        if ( !v82 )
          v82 = EmptyString;
        PrintToLog___("'%s' (%08X) has died with no attacker.", v82, v89.x);
      }
    }
  }
}
