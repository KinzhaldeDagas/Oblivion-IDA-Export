void __stdcall sub_633F10(_DWORD *a1, float a2)
{
  int ExtraDataFollower; // esi
  int *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int *v6; // ebp
  Actor *v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // esi
  bool v11; // zf
  _DWORD *v12; // eax
  Actor *v13; // esi
  char v14; // bl
  char *v15; // edi
  BSExtraDataVtbl *ExtraPackage; // ebp
  char *v17; // edi
  BSExtraDataVtbl *v18; // ebp
  char v19; // al
  int ProcessLevel; // ecx
  _DWORD *v21; // ebp
  void (__thiscall **v22)(_DWORD *, _DWORD); // edi
  double v23; // st7
  int *j; // esi
  _DWORD *v25; // eax
  _DWORD *v26; // [esp+1Ch] [ebp-24h]
  float v27; // [esp+20h] [ebp-20h]
  Actor **v28; // [esp+24h] [ebp-1Ch]
  int *v29; // [esp+28h] [ebp-18h]
  ExtraDataList *v30; // [esp+2Ch] [ebp-14h]
  float v31; // [esp+30h] [ebp-10h]
  Actor *i; // [esp+34h] [ebp-Ch]
  int v33; // [esp+38h] [ebp-8h]
  float v34; // [esp+38h] [ebp-8h]
  int v35; // [esp+3Ch] [ebp-4h]

  v30 = (ExtraDataList *)(a1 + 0x11);
  if ( a1 != (_DWORD *)0xFFFFFFBC )
  {
    ExtraDataFollower = GetExtraDataFollower();
    v35 = ExtraDataFollower;
    if ( ExtraDataFollower )
    {
      v3 = (int *)FormHeapAlloc(8u);
      if ( v3 )
      {
        *v3 = 0;
        v3[1] = 0;
        v29 = v3;
      }
      else
      {
        v29 = 0;
      }
      v4 = (_DWORD *)FormHeapAlloc(8u);
      if ( v4 )
      {
        *v4 = 0;
        v4[1] = 0;
        v26 = v4;
      }
      else
      {
        v26 = 0;
      }
      v5 = v26;
      v6 = *(int **)(ExtraDataFollower + 0xC);
      v28 = (Actor **)v26;
      v7 = sub_673A50(&ActorProcessManager_ptr, 0);
      v27 = 0.0;
      for ( i = sub_7616D0((ActorList *)v7); v6; v6 = (int *)v6[1] )
      {
        v8 = *v6;
        if ( !*v6 )
          break;
        v9 = (int)(v26 + 1);
        v10 = v26;
        if ( v26[1] )
        {
          do
          {
            v10 = *(_DWORD **)v9;
            v11 = *(_DWORD *)(*(_DWORD *)v9 + 4) == 0;
            v9 = *(_DWORD *)v9 + 4;
          }
          while ( !v11 );
        }
        if ( *v10 )
        {
          v12 = (_DWORD *)FormHeapAlloc(8u);
          if ( v12 )
          {
            *v12 = v8;
            v12[1] = 0;
            v10[1] = v12;
          }
          else
          {
            v10[1] = 0;
          }
        }
        else
        {
          *v10 = v8;
        }
      }
      if ( v26 )
      {
        do
        {
          v13 = *v28;
          if ( !*v28 )
            break;
          v33 = BSSimpleList_Count(i);
          if ( v13 != (Actor *)TESDataHandler_g_PlayerRef )
          {
            v14 = 0;
            v15 = (char *)sub_5E03A0(a1);
            ExtraPackage = ExtraDataList::GetExtraPackage(v30);
            if ( !v15 || sub_567770(v15) )
            {
              if ( ExtraPackage )
                v15 = (char *)ExtraPackage;
            }
            if ( v15 )
            {
              if ( v15[0x20] == 2 )
                v14 = 1;
            }
            v17 = (char *)sub_5E03A0(v13);
            v18 = ExtraDataList::GetExtraPackage(&v13->members.super.super.baseExtraList);
            if ( v17 )
            {
              if ( sub_567770(v17) )
              {
                if ( v18 )
                  v17 = (char *)v18;
              }
            }
            if ( v14 || v17 && ((v19 = v17[0x20], v19 == 1) || v19 == 7) )
            {
              ProcessLevel = Actor::GetProcessLevel(v13);
              if ( ProcessLevel )
              {
                v31 = a2;
                if ( a2 <= 0.0 )
                  v31 = flt_A71E4C;
                if ( ProcessLevel == 3 )
                {
                  v21 = &v13->members.super.process->__vftable;
                  v22 = (void (__thiscall **)(_DWORD *, _DWORD))(*v21 + 0x1C);
                  v34 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2F928;
                  (*v22)(v21, LODWORD(v34));
                }
                ((void (__thiscall *)(Actor *, float))v13->vtbl->super.Unk_70)(v13, COERCE_FLOAT(LODWORD(v31)));
              }
              else
              {
                ((void (__thiscall *)(Actor *, _DWORD))v13->vtbl->super.Unk_70)(v13, 0.0);
                if ( v13->vtbl->super.super.IsActor((TESObjectREFR *)v13) && !Actor::GetProcessLevel(v13) )
                {
                  if ( ((double (__thiscall *)(Actor *))v13->vtbl->super.Unk_76)(v13) >= *(float *)&SrcStr
                    || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v13) == (struct Concurrency::details::ScheduleGroupBase *)3
                    || v13->vtbl->super.super.IsDead((TESObjectREFR *)v13, 0)
                    || TesObjectREF_GetDistance((TESObjectREFR *)v13, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) >= dbl_A2F938 )
                  {
                    v13->vtbl->super.Unk_77((MobileObject *)v13);
                  }
                  else
                  {
                    ((void (__thiscall *)(Actor *, float))v13->vtbl->super.Unk_75)(v13, COERCE_FLOAT(LODWORD(v27)));
                    v23 = (double)v33;
                    if ( v33 < 0 )
                      v23 = v23 + flt_A2FC78;
                    v27 = v23 * dbl_A3C770 * flt_B33E9C + v27;
                  }
                }
              }
            }
            else
            {
              BSSimpleList_PushFront(v29, (int)v13);
            }
          }
          v5 = v26;
          v28 = (Actor **)v28[1];
        }
        while ( v28 );
      }
      for ( j = v29; j; j = (int *)j[1] )
      {
        if ( !*j )
          break;
        sub_424D00(v30, *j);
      }
      BSSimpleList_Clear(v29);
      FormHeapFree((unsigned int)v29);
      BSSimpleList_Clear(v5);
      FormHeapFree((unsigned int)v5);
      v25 = *(_DWORD **)(v35 + 0xC);
      if ( !v25[1] && !*v25 )
        sub_420F00(v30);
    }
  }
}
