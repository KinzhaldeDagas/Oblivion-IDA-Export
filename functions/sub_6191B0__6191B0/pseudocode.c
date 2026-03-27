char __usercall sub_6191B0@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  PowerListEntry *v5; // eax
  ActorAnimData *v6; // eax
  ActorAnimData *v7; // eax
  _DWORD **v8; // eax
  _DWORD **v9; // eax
  char v10; // bl
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  Concurrency::details::SchedulerBase *v16; // eax
  _DWORD **v17; // eax
  Concurrency::details::SchedulerBase *v18; // eax
  bool v19; // cl
  bool v20; // zf
  bool v22; // [esp+9h] [ebp-Bh]
  bool v23; // [esp+Ah] [ebp-Ah]
  char v24; // [esp+Bh] [ebp-9h]
  float v25; // [esp+Ch] [ebp-8h]
  float v26; // [esp+10h] [ebp-4h]

  v5 = (PowerListEntry *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x164))(
                           *(_DWORD *)(a1 + 0x3C),
                           a4,
                           a3,
                           a2);
  if ( !v5
    || (v6 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)),
        (v5 = sub_4706E0(v6, 1)) == 0)
    || (v7 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)),
        v5 = sub_4706E0(v7, 1),
        v5[8].next == (PowerListEntry *)1) )
  {
    if ( *(_BYTE *)(a1 + 0x49) || *(_DWORD *)(a1 + 0x74) == 1 )
    {
      if ( !sub_6135F0(a1) || *(_DWORD *)(a1 + 0x70) == 0xB )
      {
        LOBYTE(v5) = Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C));
        if ( (_BYTE)v5 )
          LOBYTE(v5) = sub_5F4AE0(*(Actor **)(a1 + 0x3C), a2, a3, a4, 0);
        v20 = *(_DWORD *)(a1 + 0x74) == 1;
        *(_BYTE *)(a1 + 0x49) = 0;
        if ( v20 )
        {
          *(_DWORD *)(a1 + 0x78) = 1;
          *(_DWORD *)(a1 + 0x74) = 3;
        }
      }
      else
      {
        v8 = (_DWORD **)sub_6135F0(a1);
        v23 = sub_5E5640(v8);
        v9 = (_DWORD **)sub_6135F0(a1);
        v22 = Actor_GetCurrentAction(v9) == 3;
        v10 = 0;
        v11 = sub_6135F0(a1);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x330))(v11) )
        {
          v12 = sub_6135F0(a1);
          v10 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x330))(v12) + 0x49);
        }
        v25 = sub_615980(a1, 1);
        v26 = sub_615520(a1);
        v13 = sub_6135F0(a1);
        v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v13 + 0x58) + 0x138))(*(_DWORD *)(v13 + 0x58));
        v14 = sub_6135F0(a1);
        v19 = 1;
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x1A0))(v14) )
        {
          v15 = sub_6135F0(a1);
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 0x19C))(v15) )
          {
            v16 = (Concurrency::details::SchedulerBase *)sub_6135F0(a1);
            if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v16) != (struct Concurrency::details::ScheduleGroupBase *)3 )
            {
              v17 = (_DWORD **)sub_6135F0(a1);
              if ( !sub_5E0F30(v17) )
              {
                v18 = (Concurrency::details::SchedulerBase *)sub_6135F0(a1);
                if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v18) != (struct Concurrency::details::ScheduleGroupBase *)5 )
                  v19 = 0;
              }
            }
          }
        }
        if ( v26 < (double)v25
          || v19
          || v22
          || v10
          || GetRandomLargeInteger_(0) % 0x64 < 5 && (!v23 || v24)
          || (LOBYTE(v5) = Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)), !(_BYTE)v5) )
        {
          LOBYTE(v5) = Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C));
          if ( (_BYTE)v5 )
            LOBYTE(v5) = sub_5F4AE0(*(Actor **)(a1 + 0x3C), a2, v26, v25, 0);
          v20 = *(_DWORD *)(a1 + 0x74) == 1;
          *(_BYTE *)(a1 + 0x49) = 0;
          if ( v20 )
          {
            *(_DWORD *)(a1 + 0x78) = 1;
            *(_DWORD *)(a1 + 0x74) = 3;
          }
        }
      }
    }
  }
  return (char)v5;
}
