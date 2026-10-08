TESObjectREFR **__thiscall sub_6753F0(ActorProcessManager *this, TESObjectREFR *a2, int a3)
{
  ActorProcessManager *v3; // edi
  TESObjectREFR **v4; // eax
  TESObjectREFR **v5; // ebx
  int v6; // eax
  int v7; // esi
  Actor *v8; // eax
  Actor *v9; // edi
  Actor *ListHead; // eax
  TESObjectREFR *vtbl; // esi
  TESObjectCELL *v12; // ebp
  TESWorldSpace *v13; // edi
  TESObjectREFR **v14; // eax
  int v15; // ebx
  TeleportData *TeleportData; // eax
  TESObjectREFR *LinkedDoor; // edi
  TESWorldSpace *v18; // ebp
  bool v19; // zf
  TESObjectREFR **v20; // eax
  Actor *v22; // [esp+30h] [ebp-24h]
  TESObjectREFR **v23; // [esp+34h] [ebp-20h]
  float Distance; // [esp+38h] [ebp-1Ch]
  float v25; // [esp+38h] [ebp-1Ch]
  int v26; // [esp+3Ch] [ebp-18h]
  TESObjectCELL *DwordAtOffset40; // [esp+40h] [ebp-14h]
  TESObjectCELL *v28; // [esp+44h] [ebp-10h]
  TESWorldSpace *WorldSpace; // [esp+50h] [ebp-4h]

  v3 = this; /*0x6753f7*/
  v4 = (TESObjectREFR **)FormHeapAlloc(8u); /*0x6753ff*/
  if ( v4 ) /*0x67540b*/
  {
    v5 = v4; /*0x67540d*/
    *v4 = 0; /*0x67540f*/
    v4[1] = 0; /*0x675411*/
    v23 = v4; /*0x675414*/
  }
  else
  {
    v23 = 0; /*0x67541a*/
    v5 = 0; /*0x67541e*/
  }
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x67542d*/
  WorldSpace = TESObjectREFR_GetWorldSpace(a2); /*0x675438*/
  if ( a2 )
  {
    v6 = ((int (__thiscall *)(LowProcess *))reference->super.super.super.process->Unk_110)(reference->super.super.super.process); /*0x675452*/
    ((void (__thiscall *)(LowProcess *, int))reference->super.super.super.process->Unk_111)( /*0x67546d*/
      reference->super.super.super.process,
      1 - v6);
    v7 = 0; /*0x67546f*/
    v26 = 0; /*0x675471*/
    while ( 1 )
    {
      if ( v7 )
      {
        if ( v7 == 1 )
          ListHead = ActorProcessManager_GetListHead(v3, 1); /*0x675498*/
        else
          ListHead = v7 == 2 ? ActorProcessManager_GetListHead(v3, 2) : ActorProcessManager_GetListHead(v3, 3);
        v9 = ActorList_ReturnHead((ActorList *)ListHead); /*0x6754b6*/
      }
      else
      {
        v8 = ActorProcessManager_GetListHead(v3, 0); /*0x675482*/
        v9 = ActorList_ReturnHead((ActorList *)v8); /*0x67548e*/
      }
      if ( v9 ) /*0x6754ba*/
        break; /*0x6754ba*/
LABEL_55:
      v26 = ++v7; /*0x675721*/
      if ( v7 >= 4 ) /*0x675725*/
        return v5; /*0x675725*/
      v3 = this; /*0x675477*/
    }
    while ( 1 ) /*0x6754c6*/
    {
      if ( !v9->vtbl ) /*0x6754ca*/
        goto LABEL_55; /*0x6754ca*/
      vtbl = 0; /*0x6754d8*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v9->vtbl->super.super.super.super.InitializeComponent + 0x64))(v9->vtbl) ) /*0x6754da*/
        vtbl = (TESObjectREFR *)v9->vtbl; /*0x6754e0*/
      v22 = *(Actor **)&v9->members.super.super.super.type; /*0x6754e7*/
      if ( vtbl ) /*0x6754ef*/
      {
        v12 = (TESObjectCELL *)Shared_GetDwordAtOffset40(vtbl); /*0x6754fc*/
        v28 = v12; /*0x675500*/
        v13 = TESObjectREFR_GetWorldSpace(vtbl); /*0x67550b*/
        if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))vtbl->vtbl[1].GetSleepState)(vtbl, 1) /*0x675523*/
          && Actor_IsGuardClass((Actor *)vtbl) )
        {
          if ( v12 && TESObjectCELL_IsInterior(v12) && v12 == DwordAtOffset40 /*0x67556a*/
            || WorldSpace == v13
            && (v12 && !TESObjectCELL_IsInterior(v12) || DwordAtOffset40 && !TESObjectCELL_IsInterior(DwordAtOffset40)) )
          {
            Distance = TesObjectREF_GetDistance(vtbl, a2, 0); /*0x675585*/
            if ( (double)(int)stru_B36A50.value < Distance ) /*0x67559a*/
              goto LABEL_54; /*0x67559a*/
            (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))vtbl[1].vtbl->super.super.InitializeComponent /*0x6755bd*/
             + 0x8A))(
              vtbl[1].vtbl,
              vtbl,
              a2,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              1);
            if ( *v5 ) /*0x6755bf*/
            {
              v14 = (TESObjectREFR **)FormHeapAlloc(8u); /*0x6755c6*/
              if ( v14 ) /*0x6755d0*/
              {
                *v14 = *v5; /*0x6755d4*/
                v14[1] = 0; /*0x6755d6*/
                v14[1] = v5[1]; /*0x6755e0*/
                v5[1] = (TESObjectREFR *)v14; /*0x6755e3*/
                *v5 = vtbl; /*0x6755e6*/
                goto LABEL_54; /*0x6755e8*/
              }
              *(_DWORD *)4 = v5[1]; /*0x6755f2*/
              v5[1] = 0; /*0x6755f5*/
            }
            *v5 = vtbl; /*0x6755f8*/
          }
          else
          {
            v15 = a3; /*0x6755ff*/
            if ( a3 ) /*0x675605*/
            {
              while ( *(_DWORD *)v15 ) /*0x675614*/
              {
                TeleportData = TESObjectREFR_GetTeleportData(*(TESObjectREFR **)v15); /*0x67561a*/
                if ( TeleportData ) /*0x675621*/
                {
                  LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x67562a*/
                  if ( (TESObjectCELL *)Shared_GetDwordAtOffset40(LinkedDoor) == v12 /*0x675658*/
                    || !Shared_GetDwordAtOffset40(LinkedDoor)
                    && (v18 = TESObjectREFR_GetWorldSpace(LinkedDoor),
                        v19 = v18 == TESObjectREFR_GetWorldSpace(vtbl),
                        v12 = v28,
                        v19) )
                  {
                    v25 = TesObjectREF_GetDistance(vtbl, LinkedDoor, 0); /*0x675664*/
                    if ( (double)(int)stru_B36A50.value >= v25 ) /*0x675679*/
                    {
                      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))vtbl[1].vtbl->super.super.InitializeComponent /*0x6756a5*/
                       + 0x8A))(
                        vtbl[1].vtbl,
                        vtbl,
                        a2,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        1);
                      if ( *v23 ) /*0x6756ab*/
                      {
                        v20 = (TESObjectREFR **)FormHeapAlloc(8u); /*0x6756b2*/
                        if ( v20 ) /*0x6756bc*/
                        {
                          *v20 = *v23; /*0x6756c0*/
                          v20[1] = 0; /*0x6756c2*/
                        }
                        else
                        {
                          v20 = 0; /*0x6756cb*/
                        }
                        v20[1] = v23[1]; /*0x6756d0*/
                        v23[1] = (TESObjectREFR *)v20; /*0x6756d3*/
                      }
                      *v23 = vtbl; /*0x6756d6*/
                      break; /*0x6756d6*/
                    }
                  }
                }
                v15 = *(_DWORD *)(v15 + 4); /*0x67567b*/
                if ( !v15 ) /*0x675680*/
                  break; /*0x675680*/
              }
            }
            v5 = v23; /*0x6756d8*/
          }
        }
      }
LABEL_54:
      v7 = v26; /*0x67570d*/
      if ( !v22 ) /*0x675715*/
        goto LABEL_55; /*0x675715*/
      v9 = v22; /*0x6754c2*/
    }
  }
  return v5; /*0x67572b*/
}
