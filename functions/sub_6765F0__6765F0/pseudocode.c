void __userpurge sub_6765F0(
        int a1@<ebx>,
        int a2@<edi>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        ActorProcessManager *a6@<ecx>,
        double a7@<st3>,
        _BYTE *a8,
        _BYTE *a9,
        char a10)
{
  Creature *v10; // eax
  PlayerCharacter *v11; // ecx
  TESPackage *v12; // esi
  TESPackage *v13; // eax
  Actor *v14; // eax
  TESPackage *v15; // edi
  LowProcess *process; // ecx
  ActorProcessManager *v17; // esi
  int i; // ebx
  Actor *v19; // eax
  Actor *v20; // edi
  TESObjectREFR *vtbl; // esi
  int v22; // ebp
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraDataVtbl *v24; // eax
  char *v25; // eax
  float *v26; // eax
  int v27; // [esp+0h] [ebp-38h]
  int v29; // [esp+18h] [ebp-20h] BYREF
  Actor *j; // [esp+1Ch] [ebp-1Ch]
  int v31; // [esp+20h] [ebp-18h]
  int v32; // [esp+24h] [ebp-14h]
  int v33; // [esp+28h] [ebp-10h]
  int v34; // [esp+34h] [ebp-4h]

  if ( !TESDataHandler_g_PlayerRef->isInSEWorld )
  {
    v10 = TESDataHandler_g_PlayerRef->vtbl->super.GetMountedHorse(TESDataHandler_g_PlayerRef);
    v11 = TESDataHandler_g_PlayerRef;
    if ( v10 || v11->lastRiddenHorse )
    {
      v12 = 0;
      if ( a8 )
      {
        a7 = 0.0;
        *(float *)&v29 = 0.0;
        sub_5F0810(v11, st7_0, st5_0, st6_0, (int)a8, (int)&v29, v31, v32, v33);
        if ( TESDataHandler_g_PlayerRef->lastRiddenHorse )
        {
          v13 = (TESPackage *)FormHeapAlloc(0x3Cu);
          j = (Actor *)v13;
          v34 = 0;
          if ( v13 )
            v12 = TESPackage::TESPackage(v13);
          v34 = 0xFFFFFFFF;
          TESPackage_SetType_(v12, 5);
          v12->members.packageFlags |= 6u;
          v14 = (Actor *)FormHeapAlloc(0xCu);
          j = v14;
          v34 = 1;
          if ( v14 )
            v15 = (TESPackage *)TESPackage_LocationData_constr(v14);
          else
            v15 = 0;
          v34 = 0xFFFFFFFF;
          TESPackage_LocationData_SetType(v15, 0);
          TESPackage_LocationData_SetReference(v15, (int)TESDataHandler_g_PlayerRef->lastRiddenHorse);
          TESPackage_SetLocation(v12, (char *)v15);
          if ( v15 )
          {
            TESPackage_LocationData_destr(v15);
            FormHeapFree((unsigned int)v15);
          }
          sub_5672A0(v12);
          Actor_AddPackage_((Actor *)TESDataHandler_g_PlayerRef->lastRiddenHorse, v12, 1, 1);
        }
      }
      else if ( v11->lastRiddenHorse )
      {
        sub_5EAE70((Actor *)v11->lastRiddenHorse, a1, a2, v27);
        process = TESDataHandler_g_PlayerRef->lastRiddenHorse->members.super.super.process;
        process->SetCurrentPackProcedure(process, kProcedure_TRAVEL);
      }
    }
    v17 = a6;
    for ( i = 0; i < 4; ++i )
    {
      if ( i )
      {
        if ( i == 1 )
        {
          v19 = sub_673A50(v17, 1);
        }
        else if ( i == 2 )
        {
          v19 = sub_673A50(v17, 2);
        }
        else
        {
          v19 = sub_673A50(v17, 3);
        }
      }
      else
      {
        v19 = sub_673A50(v17, 0);
      }
      v20 = sub_7616D0((ActorList *)v19);
      for ( j = v20; v20; v17 = a6 )
      {
        if ( !v20->vtbl )
          break;
        vtbl = 0;
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v20->vtbl->super.super.super.super.InitializeComponent
              + 0x64))(v20->vtbl) )
          vtbl = (TESObjectREFR *)v20->vtbl;
        v20 = *(Actor **)&v20->members.super.super.super.type;
        if ( vtbl )
        {
          if ( sub_660F10((Concurrency::details::SchedulerBase *)vtbl, 1) && a8 )
          {
            sub_5E7C30(vtbl, st5_0, st6_0, a8, a10);
            if ( Actor::GetProcessLevel((Actor *)vtbl) != i )
              v20 = j;
          }
          else if ( sub_5E6BC0(vtbl) )
          {
            v22 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl[1].vtbl->super.super.InitializeComponent + 0x61))(vtbl[1].vtbl);
            if ( (*(_BYTE *)(v22 + 0x1E) & 1) != 0 )
            {
              if ( a9 )
              {
                TeleportExtraData = GetTeleportExtraData(a9);
                v24 = sub_42B410(&TeleportExtraData->super);
                v25 = (char *)GetTeleportExtraData(v24);
                if ( v25 )
                {
                  v26 = (float *)sub_6899C0(v25);
                  sub_4D7E30((float *)vtbl, v26);
                  if ( a7 < fConst_200 )
                    sub_5668E0((_DWORD *)v22, 0);
                }
              }
            }
          }
        }
      }
    }
  }
}
