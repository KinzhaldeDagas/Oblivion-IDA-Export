TESObjectREFR *__thiscall sub_65A050(ActorVtbl *this, char a2)
{
  Actor *v3; // eax
  Actor *i; // ebx
  ActorVtbl *vtbl; // ebp
  Actor *v6; // eax
  Actor *v7; // edi
  int v8; // eax
  int v9; // ebp
  _DWORD *v10; // edi
  void (__thiscall **v11)(_DWORD *, int); // ebp
  int v12; // eax
  Actor *v13; // eax
  Actor *j; // ebx
  ActorVtbl *v15; // ebp
  _DWORD **v16; // edi
  int v17; // eax
  int v18; // ebp
  _DWORD *v19; // edi
  void (__thiscall **v20)(_DWORD *, int); // ebp
  int v21; // eax
  TESObjectREFR *result; // eax
  TESObjectREFRVtbl *v23; // ecx
  int v24; // eax
  LowProcess *process; // edi
  TESObjectREFR *v26; // esi

  v3 = sub_673A50(&ActorProcessManager_ptr, 0);
  for ( i = sub_7616D0((ActorList *)v3); i; i = *(Actor **)&i->members.super.super.super.type )
  {
    vtbl = i->vtbl;
    if ( i->vtbl != this )
    {
      v6 = (Actor *)OblivionDynamicCast(
                      vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);
      v7 = v6;
      if ( v6 )
      {
        if ( (ActorVtbl *)sub_5E6830(v6) == this )
          v7->members.super.process->Unk_12C(v7->members.super.process);
        if ( a2 )
        {
          v8 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this);
          sub_5E69E0(v7, v8);
        }
        v9 = ((int (__thiscall *)(LowProcess *))v7->members.super.process->Unk_AB)(v7->members.super.process);
        if ( v9 == (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x49))(this) )
          ((void (__thiscall *)(LowProcess *, _DWORD))v7->members.super.process->Unk_AC)(v7->members.super.process, 0);
      }
      else if ( a2 )
      {
        v10 = OblivionDynamicCast(
                vtbl,
                0,
                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                &MagicProjectile `RTTI Type Descriptor',
                0);
        if ( v10 )
        {
          v11 = (void (__thiscall **)(_DWORD *, int))(*v10 + 0x218);
          v12 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this);
          (*v11)(v10, v12);
        }
      }
    }
  }
  v13 = sub_673A50(&ActorProcessManager_ptr, 1);
  for ( j = sub_7616D0((ActorList *)v13); j; j = *(Actor **)&j->members.super.super.super.type )
  {
    v15 = j->vtbl;
    if ( j->vtbl != this )
    {
      v16 = (_DWORD **)OblivionDynamicCast(
                         v15,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
      if ( v16 )
      {
        if ( a2 )
        {
          v17 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this);
          sub_5E69E0(v16, v17);
        }
        v18 = (*(int (__thiscall **)(_DWORD *))(*v16[0x16] + 0x2B0))(v16[0x16]);
        if ( v18 == (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x49))(this) )
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v16[0x16] + 0x2B4))(v16[0x16], 0);
      }
      else if ( a2 )
      {
        v19 = OblivionDynamicCast(
                v15,
                0,
                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                &MagicProjectile `RTTI Type Descriptor',
                0);
        if ( v19 )
        {
          v20 = (void (__thiscall **)(_DWORD *, int))(*v19 + 0x218);
          v21 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this);
          (*v20)(v19, v21);
        }
      }
    }
  }
  sub_677B50(&ActorProcessManager_ptr, this, a2);
  result = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  if ( TESDataHandler_g_PlayerRef )
  {
    v23 = result[1].vtbl;
    if ( v23 )
      (*((void (__thiscall **)(TESObjectREFRVtbl *, ActorVtbl *))v23->super.super.InitializeComponent + 0x12E))(
        v23,
        this);
    if ( a2 )
    {
      v24 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this);
      sub_5E69E0(TESDataHandler_g_PlayerRef, v24);
    }
    process = TESDataHandler_g_PlayerRef->super.super.super.process;
    v26 = (TESObjectREFR *)(*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x49))(this);
    result = (TESObjectREFR *)((int (__thiscall *)(LowProcess *))process->Unk_AB)(process);
    if ( result == v26 )
      return ((TESObjectREFR *(__thiscall *)(LowProcess *, _DWORD))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_AC)(
               TESDataHandler_g_PlayerRef->super.super.super.process,
               0);
  }
  return result;
}
