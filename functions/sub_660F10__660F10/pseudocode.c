bool __stdcall sub_660F10(Concurrency::details::SchedulerBase *a1, char a2)
{
  int v2; // eax
  int v3; // esi
  PlayerCharacter *form; // ebp
  TargetData *v5; // ecx
  ObjectType v6; // ebx
  PlayerCharacter *v7; // eax
  PlayerCharacter *v8; // ecx
  PlayerCharacter *v9; // eax
  char v11; // al
  TargetData *v12; // ecx
  ObjectType v13; // ebx
  ObjectType v14; // esi

  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::SchedulerBase *, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0)
    || (*((_DWORD *)a1 + 2) & 0x800) != 0
    || (*(unsigned __int8 (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x1A0))(a1)
    || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(a1) == (struct Concurrency::details::ScheduleGroupBase *)5 )
  {
    return 0;
  }
  (*(void (__thiscall **)(_DWORD, Concurrency::details::SchedulerBase *, int))(**((_DWORD **)a1 + 0x16) + 0x18))(
    *((_DWORD *)a1 + 0x16),
    a1,
    1);
  v2 = sub_5E03A0(a1);
  v3 = v2;
  if ( a2 )
  {
    form = 0;
    if ( v2 )
    {
      v5 = *(TargetData **)(v2 + 0x28);
      if ( v5 )
      {
        form = (PlayerCharacter *)sub_569E60(v5).form;
        if ( !form )
        {
          v6.form = sub_569E70(*(TargetData **)(v3 + 0x28)).form;
          if ( v6.objectCode )
          {
            if ( (TESForm *)v6.objectCode == TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef) )
              form = TESDataHandler_g_PlayerRef;
          }
        }
      }
      v7 = (PlayerCharacter *)sub_566D00((char **)v3, (int)a1);
      v8 = TESDataHandler_g_PlayerRef;
      if ( v7 == TESDataHandler_g_PlayerRef )
      {
LABEL_18:
        if ( form != v8 )
          return 1;
        return !sub_5E6BC0((_DWORD **)a1);
      }
    }
    else
    {
      v8 = TESDataHandler_g_PlayerRef;
    }
    if ( form == v8
      || (v9 = (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 0x16) + 0xCC))(*((_DWORD *)a1 + 0x16)),
          v8 = TESDataHandler_g_PlayerRef,
          v9 == TESDataHandler_g_PlayerRef) )
    {
      if ( *(_BYTE *)(v3 + 0x20) != 9 )
        goto LABEL_18;
    }
  }
  else if ( v2 )
  {
    v11 = *(_BYTE *)(v2 + 0x20);
    if ( v11 == 1 || v11 == 7 )
    {
      v12 = *(TargetData **)(v3 + 0x28);
      if ( v12 )
      {
        v13.form = sub_569E60(v12).form;
        if ( !v13.objectCode )
        {
          v14.form = sub_569E70(*(TargetData **)(v3 + 0x28)).form;
          if ( v14.objectCode )
          {
            if ( (TESForm *)v14.objectCode == TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef) )
              return !sub_5E6BC0((_DWORD **)a1);
          }
        }
        if ( (PlayerCharacter *)v13.form == TESDataHandler_g_PlayerRef )
          return !sub_5E6BC0((_DWORD **)a1);
      }
    }
  }
  return 0;
}
