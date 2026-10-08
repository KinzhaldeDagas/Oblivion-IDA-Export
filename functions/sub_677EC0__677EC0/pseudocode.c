// ActorProcessManager high/process list update used during fast-travel time simulation.
void __userpurge sub_677EC0(int a1@<ecx>, float a2@<edi>, double st7_0@<st0>, double a4@<st1>, float a5, float a6)
{
  int v6; // ebp
  Actor *v7; // eax
  int v8; // edx
  Actor *v9; // ecx
  int *v10; // eax
  int v11; // esi
  int v12; // eax
  PlayerCharacter *v13; // edi
  char v14; // bl
  double v15; // st5
  ExtraDataList *v16; // edi
  int *v17; // eax
  Actor **v18; // eax
  Actor **v19; // ebp
  int *v20; // esi
  Actor **i; // ebx
  Actor *v22; // esi
  int v23; // edi
  BSExtraDataVtbl *ExtraPackage; // eax
  char v25; // al
  int ProcessLevel; // ecx
  _DWORD *v27; // ebp
  void (__thiscall **v28)(_DWORD *, _DWORD); // edi
  int *j; // esi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  float v34; // [esp+20h] [ebp-24h]
  Actor **v35; // [esp+24h] [ebp-20h]
  int *v36; // [esp+28h] [ebp-1Ch]
  int v37; // [esp+2Ch] [ebp-18h]
  float v38; // [esp+30h] [ebp-14h]
  ExtraDataList *v39; // [esp+34h] [ebp-10h]
  int v40; // [esp+38h] [ebp-Ch]
  int ExtraDataFollower; // [esp+38h] [ebp-Ch]
  float v43; // [esp+40h] [ebp-4h]

  v6 = a1; /*0x677ec4*/
  unk_B3B935 = 0; /*0x677ecd*/
  v7 = ActorList_ReturnHead((ActorList *)(a1 + 0x68)); /*0x677ed4*/
  v8 = 0; /*0x677edb*/
  v34 = 0.0; /*0x677edd*/
  v9 = v7; /*0x677ee1*/
  *(_DWORD *)(v6 + 0x78) = v7; /*0x677ee5*/
  v37 = 0; /*0x677ee8*/
  if ( v7 ) /*0x677eec*/
  {
    do /*0x677efd*/
    {
      if ( v9->vtbl ) /*0x677ef0*/
        ++v8; /*0x677ef5*/
      v9 = *(Actor **)&v9->members.super.super.super.type; /*0x677ef8*/
    }
    while ( v9 ); /*0x677efd*/
    v37 = v8; /*0x677eff*/
  }
  *(_DWORD *)(v6 + 0xA8) = v8; /*0x677f05*/
  if ( v7 ) /*0x677f0b*/
  {
    while ( 1 ) /*0x677f14*/
    {
      v10 = *(int **)(v6 + 0x78); /*0x677f14*/
      if ( !v10[1] && !*v10 ) /*0x677f20*/
        goto LABEL_84; /*0x677f20*/
      v11 = *v10; /*0x677f26*/
      if ( *v10 ) /*0x677f26*/
      {
        v12 = *(_DWORD *)(v11 + 8); /*0x677f30*/
        if ( (v12 & 0x200000) == 0 ) /*0x677f3b*/
          break; /*0x677f3b*/
      }
LABEL_83:
      if ( !*(_DWORD *)(v6 + 0x78) ) /*0x678364*/
        goto LABEL_84; /*0x678368*/
    }
    if ( (v12 & 0x20) != 0 || (v12 & 0x800) != 0 || !*(_DWORD *)(v11 + 0x58) || Actor::GetProcessLevel((Actor *)v11) ) /*0x677f66*/
    {
LABEL_77:
      v30 = *(_DWORD *)(v6 + 0x78); /*0x678331*/
      if ( v30 ) /*0x678336*/
      {
        *(_DWORD *)(v6 + 0x74) = v30; /*0x67834f*/
      }
      else
      {
        v31 = *(_DWORD *)(v6 + 0x74); /*0x678338*/
        *(_DWORD *)(v6 + 0x78) = v31; /*0x67833d*/
        if ( !v31 ) /*0x678340*/
          *(_DWORD *)(v6 + 0x78) = ActorList_ReturnHead((ActorList *)(v6 + 0x68)); /*0x67834a*/
      }
      v32 = *(_DWORD *)(v6 + 0x78); /*0x678352*/
      if ( v32 ) /*0x678357*/
      {
        *(_DWORD *)(v6 + 0x74) = v32; /*0x67835b*/
        *(_DWORD *)(v6 + 0x78) = *(_DWORD *)(v32 + 4); /*0x678361*/
      }
      goto LABEL_83; /*0x678361*/
    }
    TesObjectREF_GetDistance((TESObjectREFR *)v11, (TESObjectREFR *)reference, 0); /*0x677f7c*/
    *(float *)&v40 = st7_0; /*0x677f81*/
    v13 = 0; /*0x677f8f*/
    v14 = 1; /*0x677f91*/
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 0x190))(v11, LODWORD(a2)) ) /*0x677f93*/
    {
      v13 = (PlayerCharacter *)v11; /*0x677f9b*/
      if ( sub_5F1330((_DWORD *)v11) ) /*0x677f9d*/
      {
        a2 = 0.0; /*0x677fae*/
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v11 + 0x58) + 0x18))(*(_DWORD *)(v11 + 0x58), v11); /*0x677fb1*/
        *(_BYTE *)(*(_DWORD *)(v11 + 0x58) + 0x1D1) = 1; /*0x677fb6*/
        v14 = 0; /*0x677fc5*/
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 0x58) + 0x20))(*(_DWORD *)(v11 + 0x58)); /*0x677fc7*/
LABEL_22:
        if ( v13 ) /*0x678008*/
        {
          if ( PlayerCharacter::IsSleeping_(reference) ) /*0x678010*/
          {
            sub_5F2530(v13, v14, (int)v13, SLODWORD(fConstant_2)); /*0x678025*/
            sub_5F25F0(v13, v14, (int)v13, fConstant_2, COERCE_FLOAT(1)); /*0x678038*/
            st7_0 = fConstant_2; /*0x67803d*/
            sub_5F2720(v13, v14, (int)v13, fConstant_2); /*0x678049*/
          }
        }
        if ( Actor::GetProcessLevel((Actor *)v11) ) /*0x678050*/
          *(_DWORD *)(v6 + 0x78) = 0; /*0x678059*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x170))(v11) ) /*0x67806a*/
        {
          if ( !Actor::GetProcessLevel((Actor *)v11) ) /*0x678076*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 0x190))(v11) ) /*0x67808d*/
            {
              if ( (PlayerCharacter *)v11 != reference && !sub_45A500(g_TESSaveLoadGame) ) /*0x6780a9*/
              {
                a4 = ((double (__usercall *)@<st0>(int@<ecx>, double@<st0>))*(_DWORD *)(*(_DWORD *)v11 + 0x1D8))( /*0x6780c0*/
                       v11,
                       st7_0);
                if ( st7_0 >= *(float *)&SrcStr /*0x6780eb*/
                  || Actor::GetDeadState((Concurrency::details::SchedulerBase *)v11) == (struct Concurrency::details::ScheduleGroupBase *)3
                  || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 0x198))(v11, 0) )
                {
                  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 0x1DC))(v11); /*0x678167*/
                }
                else
                {
                  st7_0 = v34; /*0x6780f3*/
                  (*(void (__thiscall **)(int, float))(*(_DWORD *)v11 + 0x1D4))(v11, COERCE_FLOAT(LODWORD(v34))); /*0x678103*/
                  if ( v13 ) /*0x678107*/
                  {
                    if ( *(float *)GameSetting_GetSafeFloatPointer((int *)g_GameSettingStringPointers_B36CD8) > (double)*(float *)&v40 ) /*0x678120*/
                      sub_674820(&qword_B3BB2C[0x75], (int)v13, v40); /*0x67812c*/
                  }
                  v15 = (double)v37; /*0x678139*/
                  if ( v37 < 0 ) /*0x67813f*/
                    v15 = v15 + flt_A2FC78; /*0x678141*/
                  v34 = v15 * dbl_A3C770 * *(float *)&MEMORY[0xB33E90][0xC] + v34; /*0x678157*/
                }
              }
            }
          }
        }
        if ( v14 ) /*0x67816b*/
        {
          v16 = (ExtraDataList *)(v11 + 0x44); /*0x678171*/
          v39 = (ExtraDataList *)(v11 + 0x44); /*0x678176*/
          if ( v11 != 0xFFFFFFBC ) /*0x67817a*/
          {
            ExtraDataFollower = ExtraDataList_GetFollowerExtra(); /*0x678189*/
            if ( ExtraDataFollower ) /*0x67818d*/
            {
              v17 = (int *)FormHeapAlloc(8u); /*0x678195*/
              if ( v17 ) /*0x6781a1*/
              {
                *v17 = 0; /*0x6781a3*/
                v17[1] = 0; /*0x6781a5*/
                v36 = v17; /*0x6781a8*/
              }
              else
              {
                v36 = 0; /*0x6781ae*/
              }
              v18 = (Actor **)FormHeapAlloc(8u); /*0x6781b4*/
              if ( v18 ) /*0x6781be*/
              {
                v19 = v18; /*0x6781c0*/
                *v18 = 0; /*0x6781c2*/
                v18[1] = 0; /*0x6781c4*/
                v35 = v18; /*0x6781c7*/
              }
              else
              {
                v35 = 0; /*0x6781cd*/
                v19 = 0; /*0x6781d1*/
              }
              v20 = *(int **)(ExtraDataFollower + 0xC); /*0x6781d7*/
              for ( i = v19; v20; v20 = (int *)v20[1] ) /*0x6781de*/
              {
                if ( !*v20 ) /*0x6781e0*/
                  break; /*0x6781e4*/
                BSSimpleList_PushBack(v19, *v20); /*0x6781e9*/
              }
              if ( v19 ) /*0x6781f7*/
              {
                do /*0x6782d1*/
                {
                  v22 = *i; /*0x678200*/
                  if ( !*i ) /*0x678200*/
                    break; /*0x678204*/
                  if ( v22 != (Actor *)reference ) /*0x678210*/
                  {
                    if ( v22->members.super.process ) /*0x678216*/
                    {
                      v23 = sub_5E03A0(*i); /*0x67822a*/
                      ExtraPackage = ExtraDataList::GetExtraPackage(&v22->members.super.super.baseExtraList); /*0x67822c*/
                      if ( ExtraPackage ) /*0x678233*/
                        v23 = (int)ExtraPackage; /*0x678235*/
                      if ( v23 && ((v25 = *(_BYTE *)(v23 + 0x20), v25 == 1) || v25 == 7) ) /*0x678248*/
                      {
                        ProcessLevel = Actor::GetProcessLevel(v22); /*0x678251*/
                        if ( ProcessLevel ) /*0x678255*/
                        {
                          v38 = a5; /*0x67825b*/
                          if ( a5 <= 0.0 ) /*0x678268*/
                            v38 = flt_A71E4C; /*0x678270*/
                          if ( ProcessLevel == 3 ) /*0x678277*/
                          {
                            v27 = &v22->members.super.process->__vftable; /*0x678279*/
                            v28 = (void (__thiscall **)(_DWORD *, _DWORD))(*v27 + 0x1C); /*0x678284*/
                            TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x678287*/
                            v43 = st7_0 - dbl_A2F928; /*0x678295*/
                            st7_0 = v43; /*0x67829b*/
                            (*v28)(v27, LODWORD(v43)); /*0x6782a2*/
                            v19 = v35; /*0x6782a4*/
                          }
                          ((void (__thiscall *)(Actor *, float))v22->vtbl->super.Unk_70)( /*0x6782ba*/
                            v22,
                            COERCE_FLOAT(LODWORD(v38)));
                        }
                      }
                      else
                      {
                        BSSimpleList_PushFront(v36, (int)v22); /*0x6782c3*/
                      }
                    }
                  }
                  i = (Actor **)i[1]; /*0x6782c8*/
                  v16 = v39; /*0x6782cd*/
                }
                while ( i ); /*0x6782d1*/
              }
              for ( j = v36; j; j = (int *)j[1] ) /*0x6782df*/
              {
                if ( !*j ) /*0x6782e1*/
                  break; /*0x6782e5*/
                sub_424D00(v16, *j); /*0x6782ea*/
              }
              BSSimpleList_Clear(v36); /*0x6782f8*/
              FormHeapFree((unsigned int)v36); /*0x6782fe*/
              BSSimpleList_Clear(v19); /*0x678308*/
              FormHeapFree((unsigned int)v19); /*0x67830e*/
              if ( BSSimpleList_IsEmpty(*(BSSimpleList_VoidPtr **)(ExtraDataFollower + 0xC)) ) /*0x67831d*/
                ExtraDataList_RemoveFollowerExtra(v16); /*0x678328*/
              v6 = a1; /*0x67832d*/
            }
          }
        }
        goto LABEL_77; /*0x67832d*/
      }
      if ( !MobileObject_GetCharProxy((MobileObject *)v11) ) /*0x677fcd*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x154))(v11) ) /*0x677fe0*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 0x148))(v11); /*0x677ff0*/
      }
    }
    st7_0 = a6; /*0x677ff4*/
    a2 = a6; /*0x678001*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 0x1C0))(v11); /*0x678004*/
    goto LABEL_22; /*0x678004*/
  }
LABEL_84:
  sub_677500((float *)v6, a4, *(float *)&MEMORY[0xB33E90][0xC]); /*0x678371*/
}
