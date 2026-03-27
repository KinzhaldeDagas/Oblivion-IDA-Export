void __userpurge sub_677EC0(int a1@<ecx>, float a2@<edi>, double st7_0@<st0>, double a4@<st1>, float a5, float a6)
{
  int v7; // ebp
  Actor *v8; // eax
  int v9; // edx
  Actor *v10; // ecx
  int *v11; // eax
  int v12; // esi
  int v13; // eax
  PlayerCharacter *v14; // edi
  char v15; // bl
  double v16; // st5
  ExtraDataList *v17; // edi
  int *v18; // eax
  Actor **v19; // eax
  Actor **v20; // ebp
  int *v21; // esi
  Actor **i; // ebx
  Actor *v23; // esi
  int v24; // edi
  BSExtraDataVtbl *ExtraPackage; // eax
  char v26; // al
  int ProcessLevel; // ecx
  _DWORD *v28; // ebp
  void (__thiscall **v29)(_DWORD *, _DWORD); // edi
  int *j; // esi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  float v35; // [esp+20h] [ebp-24h]
  Actor **v36; // [esp+24h] [ebp-20h]
  int *v37; // [esp+28h] [ebp-1Ch]
  int v38; // [esp+2Ch] [ebp-18h]
  float v39; // [esp+30h] [ebp-14h]
  ExtraDataList *v40; // [esp+34h] [ebp-10h]
  int v41; // [esp+38h] [ebp-Ch]
  int ExtraDataFollower; // [esp+38h] [ebp-Ch]
  float v44; // [esp+40h] [ebp-4h]

  v7 = a1;
  byte_B3B935 = 0;
  v8 = sub_7616D0((ActorList *)(a1 + 0x68));
  v9 = 0;
  v35 = 0.0;
  v10 = v8;
  *(_DWORD *)(v7 + 0x78) = v8;
  v38 = 0;
  if ( v8 )
  {
    do
    {
      if ( v10->vtbl )
        ++v9;
      v10 = *(Actor **)&v10->members.super.super.super.type;
    }
    while ( v10 );
    v38 = v9;
  }
  *(_DWORD *)(v7 + 0xA8) = v9;
  if ( v8 )
  {
    while ( 1 )
    {
      v11 = *(int **)(v7 + 0x78);
      if ( !v11[1] && !*v11 )
        goto LABEL_84;
      v12 = *v11;
      if ( *v11 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        if ( (v13 & 0x200000) == 0 )
          break;
      }
LABEL_83:
      if ( !*(_DWORD *)(v7 + 0x78) )
        goto LABEL_84;
    }
    if ( (v13 & 0x20) != 0 || (v13 & 0x800) != 0 || !*(_DWORD *)(v12 + 0x58) || Actor::GetProcessLevel((Actor *)v12) )
    {
LABEL_77:
      v31 = *(_DWORD *)(v7 + 0x78);
      if ( v31 )
      {
        *(_DWORD *)(v7 + 0x74) = v31;
      }
      else
      {
        v32 = *(_DWORD *)(v7 + 0x74);
        *(_DWORD *)(v7 + 0x78) = v32;
        if ( !v32 )
          *(_DWORD *)(v7 + 0x78) = sub_7616D0((ActorList *)(v7 + 0x68));
      }
      v33 = *(_DWORD *)(v7 + 0x78);
      if ( v33 )
      {
        *(_DWORD *)(v7 + 0x74) = v33;
        *(_DWORD *)(v7 + 0x78) = *(_DWORD *)(v33 + 4);
      }
      goto LABEL_83;
    }
    TesObjectREF_GetDistance((TESObjectREFR *)v12, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
    *(float *)&v41 = st7_0;
    v14 = 0;
    v15 = 1;
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 0x190))(v12, LODWORD(a2)) )
    {
      v14 = (PlayerCharacter *)v12;
      if ( sub_5F1330((_DWORD *)v12) )
      {
        a2 = 0.0;
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v12 + 0x58) + 0x18))(*(_DWORD *)(v12 + 0x58), v12);
        *(_BYTE *)(*(_DWORD *)(v12 + 0x58) + 0x1D1) = 1;
        v15 = 0;
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v12 + 0x58) + 0x20))(*(_DWORD *)(v12 + 0x58));
LABEL_22:
        if ( v14 )
        {
          if ( PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
          {
            sub_5F2530(v14, v15, (int)v14, SLODWORD(fConstant_2));
            sub_5F25F0(v14, v15, (int)v14, fConstant_2, COERCE_FLOAT(1));
            st7_0 = fConstant_2;
            sub_5F2720(v14, v15, (int)v14, fConstant_2);
          }
        }
        if ( Actor::GetProcessLevel((Actor *)v12) )
          *(_DWORD *)(v7 + 0x78) = 0;
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x170))(v12) )
        {
          if ( !Actor::GetProcessLevel((Actor *)v12) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 0x190))(v12) )
            {
              if ( (PlayerCharacter *)v12 != TESDataHandler_g_PlayerRef && !sub_45A500(SaveLoad_CurrentSavegame) )
              {
                a4 = ((double (__usercall *)@<st0>(int@<ecx>, double@<st0>))*(_DWORD *)(*(_DWORD *)v12 + 0x1D8))(
                       v12,
                       st7_0);
                if ( st7_0 >= *(float *)&SrcStr
                  || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v12) == (struct Concurrency::details::ScheduleGroupBase *)3
                  || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 0x198))(v12, 0) )
                {
                  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 0x1DC))(v12);
                }
                else
                {
                  st7_0 = v35;
                  (*(void (__thiscall **)(int, float))(*(_DWORD *)v12 + 0x1D4))(v12, COERCE_FLOAT(LODWORD(v35)));
                  if ( v14 )
                  {
                    if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36CD8) > (double)*(float *)&v41 )
                      sub_674820(&ActorProcessManager_ptr, (int)v14, v41);
                  }
                  v16 = (double)v38;
                  if ( v38 < 0 )
                    v16 = v16 + flt_A2FC78;
                  v35 = v16 * dbl_A3C770 * flt_B33E9C + v35;
                }
              }
            }
          }
        }
        if ( v15 )
        {
          v17 = (ExtraDataList *)(v12 + 0x44);
          v40 = (ExtraDataList *)(v12 + 0x44);
          if ( v12 != 0xFFFFFFBC )
          {
            ExtraDataFollower = GetExtraDataFollower();
            if ( ExtraDataFollower )
            {
              v18 = (int *)FormHeapAlloc(8u);
              if ( v18 )
              {
                *v18 = 0;
                v18[1] = 0;
                v37 = v18;
              }
              else
              {
                v37 = 0;
              }
              v19 = (Actor **)FormHeapAlloc(8u);
              if ( v19 )
              {
                v20 = v19;
                *v19 = 0;
                v19[1] = 0;
                v36 = v19;
              }
              else
              {
                v36 = 0;
                v20 = 0;
              }
              v21 = *(int **)(ExtraDataFollower + 0xC);
              for ( i = v20; v21; v21 = (int *)v21[1] )
              {
                if ( !*v21 )
                  break;
                BSSimpleList_PushBack(v20, *v21);
              }
              if ( v20 )
              {
                do
                {
                  v23 = *i;
                  if ( !*i )
                    break;
                  if ( v23 != (Actor *)TESDataHandler_g_PlayerRef )
                  {
                    if ( v23->members.super.process )
                    {
                      v24 = sub_5E03A0(*i);
                      ExtraPackage = ExtraDataList::GetExtraPackage(&v23->members.super.super.baseExtraList);
                      if ( ExtraPackage )
                        v24 = (int)ExtraPackage;
                      if ( v24 && ((v26 = *(_BYTE *)(v24 + 0x20), v26 == 1) || v26 == 7) )
                      {
                        ProcessLevel = Actor::GetProcessLevel(v23);
                        if ( ProcessLevel )
                        {
                          v39 = a5;
                          if ( a5 <= 0.0 )
                            v39 = flt_A71E4C;
                          if ( ProcessLevel == 3 )
                          {
                            v28 = &v23->members.super.process->__vftable;
                            v29 = (void (__thiscall **)(_DWORD *, _DWORD))(*v28 + 0x1C);
                            TimeGlobals_GetGameHour(&TimeGlobals);
                            v44 = st7_0 - dbl_A2F928;
                            st7_0 = v44;
                            (*v29)(v28, LODWORD(v44));
                            v20 = v36;
                          }
                          ((void (__thiscall *)(Actor *, float))v23->vtbl->super.Unk_70)(
                            v23,
                            COERCE_FLOAT(LODWORD(v39)));
                        }
                      }
                      else
                      {
                        BSSimpleList_PushFront(v37, (int)v23);
                      }
                    }
                  }
                  i = (Actor **)i[1];
                  v17 = v40;
                }
                while ( i );
              }
              for ( j = v37; j; j = (int *)j[1] )
              {
                if ( !*j )
                  break;
                sub_424D00(v17, *j);
              }
              BSSimpleList_Clear(v37);
              FormHeapFree((unsigned int)v37);
              BSSimpleList_Clear(v20);
              FormHeapFree((unsigned int)v20);
              if ( BSSimpleList_IsEmpty(*(BSSimpleList_VoidPtr **)(ExtraDataFollower + 0xC)) )
                sub_420F00(v17);
              v7 = a1;
            }
          }
        }
        goto LABEL_77;
      }
      if ( !MobileObject_GetCharProxy((MobileObject *)v12) )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x154))(v12) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 0x148))(v12);
      }
    }
    st7_0 = a6;
    a2 = a6;
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 0x1C0))(v12);
    goto LABEL_22;
  }
LABEL_84:
  sub_677500((float *)v7, a4, flt_B33E9C);
}
