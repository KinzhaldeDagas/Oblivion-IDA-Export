void __thiscall sub_676D90(int this)
{
  Actor *v5; // edi
  TESObjectREFR *vtbl; // esi
  int v7; // eax
  TESObjectREFR *v8; // eax
  char *v9; // eax
  char *Name; // [esp-8h] [ebp-Ch]

  v5 = sub_7616D0((ActorList *)(this + 0x68));
  while ( v5 )
  {
    if ( !v5->vtbl )
      break;
    vtbl = 0;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v5->vtbl->super.super.super.super.InitializeComponent + 0x64))(v5->vtbl) )
      vtbl = (TESObjectREFR *)v5->vtbl;
    v5 = *(Actor **)&v5->members.super.super.super.type;
    if ( vtbl )
    {
      if ( sub_5E6B40(vtbl) )
      {
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl[1].vtbl->super.super.InitializeComponent + 0x33))(vtbl[1].vtbl) )
        {
          v7 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl[1].vtbl->super.super.InitializeComponent + 0x33))(vtbl[1].vtbl);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 0x190))(v7) )
          {
            v8 = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl[1].vtbl->super.super.InitializeComponent
                                   + 0x33))(vtbl[1].vtbl);
            if ( v8 )
            {
              Name = TESObjectREFR_GetName(v8);
              v9 = TESObjectREFR_GetName(vtbl);
              Interface_ConsolePrint("%s %s%", v9, "is talking to ", Name);
            }
          }
        }
      }
    }
  }
}
