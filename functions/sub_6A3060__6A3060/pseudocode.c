void __thiscall sub_6A3060(char *this)
{
  Actor *v2; // eax
  Actor *i; // ebx
  ActorVtbl *vtbl; // esi
  ActorVtbl *v5; // edi
  void *v6; // eax
  char *v7; // ecx
  Actor *v8; // eax
  Actor *j; // ebx
  ActorVtbl *v10; // esi
  ActorVtbl *v11; // edi
  void *v12; // eax
  char *v13; // ecx
  PlayerCharacter *v14; // ecx

  v2 = sub_673A50(&ActorProcessManager_ptr, 0);
  if ( v2 )
  {
    for ( i = sub_7616D0((ActorList *)v2); i; i = *(Actor **)&i->members.super.super.super.type )
    {
      vtbl = i->vtbl;
      if ( i->vtbl
        && (*((unsigned __int8 (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
      {
        v5 = vtbl;
      }
      else
      {
        v5 = 0;
      }
      if ( vtbl
        && (*((unsigned __int8 (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x3A))(vtbl) )
      {
        v6 = OblivionDynamicCast(
               vtbl,
               0,
               (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
               &MagicProjectile `RTTI Type Descriptor',
               0);
      }
      else
      {
        v6 = 0;
      }
      if ( v5 )
      {
        if ( this )
          sub_5E69E0(v5, (int)(this + 0xC));
        else
          sub_5E69E0(v5, 0);
      }
      else if ( v6 )
      {
        if ( this )
          v7 = this + 0xC;
        else
          v7 = 0;
        (*(void (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 0x218))(v6, v7);
      }
    }
  }
  v8 = sub_673A50(&ActorProcessManager_ptr, 1);
  if ( v8 )
  {
    for ( j = sub_7616D0((ActorList *)v8); j; j = *(Actor **)&j->members.super.super.super.type )
    {
      v10 = j->vtbl;
      if ( j->vtbl
        && (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v10->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) )
      {
        v11 = v10;
      }
      else
      {
        v11 = 0;
      }
      if ( v10
        && (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v10->super.super.super.super.InitializeComponent + 0x3A))(v10) )
      {
        v12 = OblivionDynamicCast(
                v10,
                0,
                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                &MagicProjectile `RTTI Type Descriptor',
                0);
      }
      else
      {
        v12 = 0;
      }
      if ( v11 )
      {
        if ( this )
          sub_5E69E0(v11, (int)(this + 0xC));
        else
          sub_5E69E0(v11, 0);
      }
      else if ( v12 )
      {
        if ( this )
          v13 = this + 0xC;
        else
          v13 = 0;
        (*(void (__thiscall **)(void *, char *))(*(_DWORD *)v12 + 0x218))(v12, v13);
      }
    }
  }
  v14 = TESDataHandler_g_PlayerRef;
  if ( TESDataHandler_g_PlayerRef )
  {
    if ( this )
      sub_5E69E0(v14, (int)(this + 0xC));
    else
      sub_5E69E0(v14, 0);
  }
}
