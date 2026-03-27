EntryData *__userpurge sub_67A290@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  Actor *v6; // ebx
  TESObjectREFR *v7; // edi
  Actor **v9; // eax
  int v10; // ecx
  int v11; // eax
  TESObjectREFR *vtbl; // esi
  EntryData *v13; // eax
  EntryData *v14; // esi
  char v15; // [esp+0h] [ebp-10h]
  EntryData *v16; // [esp+Ch] [ebp-4h]

  v16 = 0;
  v6 = sub_7616D0((ActorList *)(a1 + 0x68));
  v7 = *(TESObjectREFR **)(a5 + 0xC);
  if ( v7 )
  {
    if ( (v7->member.super.flags & 0x800) != 0 || (v7->member.super.flags & 0x20) != 0 || v7->vtbl->IsDead(v7, 1) )
      return 0;
    if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v7[1].vtbl->super.super.InitializeComponent + 0x111))(v7[1].vtbl) > 0 )
    {
      v9 = sub_6758E0((ActorProcessManager *)a1, v7, 0xF, 0);
      if ( v9 )
      {
        v10 = 0;
        do
        {
          if ( *v9 )
            ++v10;
          v9 = (Actor **)v9[1];
        }
        while ( v9 );
        v11 = v10;
      }
      else
      {
        v11 = 0;
      }
      (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v7[1].vtbl->super.super.InitializeComponent + 0x8D))(
        v7[1].vtbl,
        v11);
    }
  }
  if ( !v6 )
    return 0;
  do
  {
    if ( !*(_DWORD *)&v6->members.super.super.super.type && !v6->vtbl )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v6->vtbl->super.super.super.super.InitializeComponent + 0x64))(v6->vtbl) )
    {
      vtbl = (TESObjectREFR *)v6->vtbl;
      if ( v6->vtbl )
      {
        if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v6->vtbl) != (struct Concurrency::details::ScheduleGroupBase *)3
          && !vtbl->vtbl->HasFatigue(vtbl)
          && vtbl != v7
          && !vtbl->vtbl->IsDead(vtbl, 0)
          && (vtbl->member.super.flags & 0x800) == 0
          && Actor_GetDetectionLevel(vtbl, (int)v7, a2, a3, a4, 0, v7, &a5, 0, 0, 0, v15) > 0 )
        {
          if ( !v16 )
          {
            v13 = (EntryData *)FormHeapAlloc(8u);
            if ( v13 )
            {
              v13->extendData = 0;
              v13->countDelta = 0;
            }
            else
            {
              v13 = 0;
            }
            v16 = v13;
          }
          BSSimpleList_PushFront(v16, (int)vtbl);
        }
      }
    }
    v6 = *(Actor **)&v6->members.super.super.super.type;
  }
  while ( v6 );
  v14 = v16;
  if ( v16 )
  {
    sub_5B27A0(v16, (int (__cdecl *)(tListVoid *, tListVoid *))sub_673B70);
    return v16;
  }
  return v14;
}
