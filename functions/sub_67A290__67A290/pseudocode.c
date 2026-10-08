EntryData *__userpurge sub_67A290@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  Actor *v6; // ebx
  TESObjectREFR *v7; // edi
  Actor **v9; // eax
  int v10; // ecx
  int v11; // eax
  int vtbl; // esi
  int v13; // eax
  EntryData *v14; // eax
  EntryData *v15; // esi
  char v16; // [esp+0h] [ebp-10h]
  EntryData *v17; // [esp+Ch] [ebp-4h]

  v17 = 0; /*0x67a299*/
  v6 = ActorList_ReturnHead((ActorList *)(a1 + 0x68)); /*0x67a2a6*/
  v7 = *(TESObjectREFR **)(a5 + 0xC); /*0x67a2ac*/
  if ( v7 ) /*0x67a2b1*/
  {
    if ( (v7->member.super.flags & 0x800) != 0 || (v7->member.super.flags & 0x20) != 0 || v7->vtbl->IsDead(v7, 1) ) /*0x67a2d3*/
      return 0; /*0x67a2df*/
    if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v7[1].vtbl->super.super.InitializeComponent + 0x111))(v7[1].vtbl) > 0 ) /*0x67a2f1*/
    {
      v9 = sub_6758E0((ActorProcessManager *)a1, v7, 0xF, 0); /*0x67a2fa*/
      if ( v9 ) /*0x67a301*/
      {
        v10 = 0; /*0x67a303*/
        do /*0x67a312*/
        {
          if ( *v9 ) /*0x67a305*/
            ++v10; /*0x67a30a*/
          v9 = (Actor **)v9[1]; /*0x67a30d*/
        }
        while ( v9 ); /*0x67a312*/
        v11 = v10; /*0x67a314*/
      }
      else
      {
        v11 = 0; /*0x67a318*/
      }
      (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v7[1].vtbl->super.super.InitializeComponent + 0x8D))( /*0x67a326*/
        v7[1].vtbl,
        v11);
    }
  }
  if ( !v6 ) /*0x67a32a*/
    return 0; /*0x67a413*/
  do /*0x67a3f0*/
  {
    if ( !*(_DWORD *)&v6->members.super.super.super.type && !v6->vtbl ) /*0x67a336*/
      break; /*0x67a339*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v6->vtbl->super.super.super.super.InitializeComponent + 0x64))(v6->vtbl) ) /*0x67a349*/
    {
      vtbl = (int)v6->vtbl; /*0x67a353*/
      if ( v6->vtbl ) /*0x67a353*/
      {
        if ( Actor::GetDeadState((Concurrency::details::SchedulerBase *)v6->vtbl) != (struct Concurrency::details::ScheduleGroupBase *)3 /*0x67a39c*/
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)vtbl + 0x1A0))(vtbl)
          && (TESObjectREFR *)vtbl != v7
          && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)vtbl + 0x198))(vtbl, 0)
          && (*(_DWORD *)(vtbl + 8) & 0x800) == 0 )
        {
          Actor_GetDetectionLevelAgainstActor((TESObjectREFR *)vtbl, (int)v7, a2, a3, a4, 0, v7, &a5, 0, 0, 0, v16); /*0x67a3ae*/
          if ( v13 > 0 ) /*0x67a3b5*/
          {
            if ( !v17 ) /*0x67a3bc*/
            {
              v14 = (EntryData *)FormHeapAlloc(8u); /*0x67a3c0*/
              if ( v14 ) /*0x67a3ca*/
              {
                v14->extendData = 0; /*0x67a3cc*/
                v14->countDelta = 0; /*0x67a3d2*/
              }
              else
              {
                v14 = 0; /*0x67a3db*/
              }
              v17 = v14; /*0x67a3dd*/
            }
            BSSimpleList_PushFront(v17, vtbl); /*0x67a3e6*/
          }
        }
      }
    }
    v6 = *(Actor **)&v6->members.super.super.super.type; /*0x67a3eb*/
  }
  while ( v6 ); /*0x67a3f0*/
  v15 = v17; /*0x67a3f6*/
  if ( v17 ) /*0x67a3fc*/
  {
    BSSimpleList_SortViaArrayAndRebuild(v17, (int (__cdecl *)(tListVoid *, tListVoid *))CompareActorDistanceToPlayer); /*0x67a405*/
    return v17; /*0x67a410*/
  }
  return v15; /*0x67a2d9*/
}
