void __userpurge sub_6765F0(
        int a1@<ebx>,
        int a2@<edi>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        ActorProcessManager *a6@<ecx>,
        TESObjectREFR *a7,
        TESObjectREFR *a8,
        char a9)
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
  Actor *ListHead; // eax
  Actor *v20; // edi
  TESObjectREFR *vtbl; // esi
  int v22; // ebp
  TeleportData *TeleportData; // eax
  TESObjectREFR *LinkedDoor; // eax
  char *v25; // eax
  char *Head; // eax
  int v27; // [esp+0h] [ebp-38h]
  int v29; // [esp+18h] [ebp-20h] BYREF
  Actor *j; // [esp+1Ch] [ebp-1Ch]
  int v31; // [esp+20h] [ebp-18h]
  int v32; // [esp+24h] [ebp-14h]
  int v33; // [esp+28h] [ebp-10h]
  int v34; // [esp+34h] [ebp-4h]

  if ( !reference->isInSEWorld ) /*0x676621*/
  {
    v10 = reference->vtbl->super.GetMountedHorse(reference); /*0x676637*/
    v11 = reference; /*0x67663b*/
    if ( v10 || v11->lastRiddenHorse ) /*0x676643*/
    {
      v12 = 0; /*0x676654*/
      if ( a7 ) /*0x676658*/
      {
        *(float *)&v29 = 0.0; /*0x676667*/
        sub_5F0810(v11, st7_0, st5_0, st6_0, (int)a7, (int)&v29, v31, v32, v33); /*0x676683*/
        if ( reference->lastRiddenHorse ) /*0x67668e*/
        {
          v13 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x67669c*/
          j = (Actor *)v13; /*0x6766a4*/
          v34 = 0; /*0x6766aa*/
          if ( v13 ) /*0x6766ae*/
            v12 = TESPackage::TESPackage(v13); /*0x6766b7*/
          v34 = 0xFFFFFFFF; /*0x6766c0*/
          TESPackage_SetType_(v12, 5); /*0x6766c4*/
          v12->members.packageFlags |= 6u; /*0x6766c9*/
          v14 = (Actor *)FormHeapAlloc(0xCu); /*0x6766cf*/
          j = v14; /*0x6766d7*/
          v34 = 1; /*0x6766dd*/
          if ( v14 ) /*0x6766e5*/
            v15 = (TESPackage *)TESPackage_LocationData_constr(v14); /*0x6766ee*/
          else
            v15 = 0; /*0x6766f2*/
          v34 = 0xFFFFFFFF; /*0x6766f8*/
          TESPackage_LocationData_SetType(v15, 0); /*0x6766fc*/
          TESPackage_LocationData_SetReference(v15, (int)reference->lastRiddenHorse); /*0x676710*/
          TESPackage_SetLocation(v12, (char *)v15); /*0x676718*/
          if ( v15 ) /*0x67671f*/
          {
            TESPackage_LocationData_destr(v15); /*0x676723*/
            FormHeapFree((unsigned int)v15); /*0x676729*/
          }
          sub_5672A0(v12); /*0x676733*/
          Actor_AddPackage_((Actor *)reference->lastRiddenHorse, v12, 1, 1); /*0x676749*/
        }
      }
      else if ( v11->lastRiddenHorse ) /*0x676750*/
      {
        sub_5EAE70((Actor *)v11->lastRiddenHorse, a1, a2, v27); /*0x67675e*/
        process = reference->lastRiddenHorse->members.super.super.process; /*0x67676f*/
        process->SetCurrentPackProcedure(process, kProcedure_TRAVEL); /*0x67677b*/
      }
    }
    v17 = a6; /*0x67677d*/
    for ( i = 0; i < 4; ++i ) /*0x676781*/
    {
      if ( i ) /*0x676785*/
      {
        if ( i == 1 ) /*0x67678d*/
        {
          ListHead = ActorProcessManager_GetListHead(v17, 1); /*0x676790*/
        }
        else if ( i == 2 ) /*0x676795*/
        {
          ListHead = ActorProcessManager_GetListHead(v17, 2); /*0x676798*/
        }
        else
        {
          ListHead = ActorProcessManager_GetListHead(v17, 3); /*0x67679e*/
        }
      }
      else
      {
        ListHead = ActorProcessManager_GetListHead(v17, 0); /*0x676788*/
      }
      v20 = ActorList_ReturnHead((ActorList *)ListHead); /*0x6767aa*/
      for ( j = v20; v20; v17 = a6 ) /*0x6767b2*/
      {
        if ( !v20->vtbl ) /*0x6767c0*/
          break; /*0x6767c4*/
        vtbl = 0; /*0x6767d2*/
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v20->vtbl->super.super.super.super.InitializeComponent /*0x6767d4*/
              + 0x64))(v20->vtbl) )
          vtbl = (TESObjectREFR *)v20->vtbl; /*0x6767da*/
        v20 = *(Actor **)&v20->members.super.super.super.type; /*0x6767de*/
        if ( vtbl ) /*0x6767e1*/
        {
          if ( sub_660F10((Actor *)vtbl, 1) && a7 ) /*0x6767ff*/
          {
            sub_5E7C30(vtbl, st5_0, st6_0, a7, a9); /*0x676809*/
            if ( Actor::GetProcessLevel((Actor *)vtbl) != i ) /*0x676817*/
              v20 = j; /*0x676819*/
          }
          else if ( sub_5E6BC0(vtbl) ) /*0x676821*/
          {
            v22 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl[1].vtbl->super.super.InitializeComponent + 0x61))(vtbl[1].vtbl); /*0x676837*/
            if ( (*(_BYTE *)(v22 + 0x1E) & 1) != 0 ) /*0x67683d*/
            {
              if ( a8 ) /*0x676845*/
              {
                TeleportData = TESObjectREFR_GetTeleportData(a8); /*0x676847*/
                LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x67684e*/
                v25 = (char *)TESObjectREFR_GetTeleportData(LinkedDoor); /*0x676855*/
                if ( v25 ) /*0x67685c*/
                {
                  Head = EmbeddedList_GetHead(v25); /*0x676860*/
                  if ( TESObjectREFR::GetDistanceToPoint(vtbl, (const float *)Head) < fConst_200 ) /*0x676878*/
                    sub_5668E0((_DWORD *)v22, 0); /*0x67687e*/
                }
              }
            }
          }
        }
      }
    }
  }
}
