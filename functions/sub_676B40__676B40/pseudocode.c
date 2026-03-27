void __thiscall sub_676B40(ActorProcessManager *this, char a2)
{
  ActorProcessManager *v5; // esi
  int i; // ebx
  Actor *v7; // eax
  Actor *v8; // ebp
  ActorVtbl *vtbl; // esi
  void (__thiscall *Unk_16)(TESForm *); // eax
  int v11; // edi
  _DWORD *v12; // eax
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  char *Name; // eax
  const char *v15; // eax
  const char *v16; // [esp-8h] [ebp-14Ch]
  PlayerCharacter *v17; // [esp-4h] [ebp-148h]
  int v18; // [esp-4h] [ebp-148h]
  char Format[300]; // [esp+14h] [ebp-130h] BYREF

  v5 = this;
  for ( i = 0; i < 4; ++i )
  {
    if ( i )
    {
      if ( i == 1 )
      {
        v7 = sub_673A50(v5, 1);
      }
      else if ( i == 2 )
      {
        v7 = sub_673A50(v5, 2);
      }
      else
      {
        v7 = sub_673A50(v5, 3);
      }
    }
    else
    {
      v7 = sub_673A50(v5, 0);
    }
    v8 = sub_7616D0((ActorList *)v7);
    if ( v8 )
    {
      while ( 1 )
      {
        if ( !v8->vtbl )
          goto LABEL_31;
        vtbl = 0;
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v8->vtbl->super.super.super.super.InitializeComponent
              + 0x64))(v8->vtbl) )
          vtbl = v8->vtbl;
        v8 = *(Actor **)&v8->members.super.super.super.type;
        if ( vtbl )
          break;
LABEL_30:
        v5 = this;
        if ( !v8 )
          goto LABEL_31;
      }
      if ( !a2 )
      {
        v15 = (const char *)(*((int (__thiscall **)(ActorVtbl *, const char *, int))vtbl->super.super.super.super.InitializeComponent
                             + 0x35))(
                              vtbl,
                              "is in List",
                              i);
        PrintToLog___("%s %s% i", v15, v16, v18);
        goto LABEL_30;
      }
      Unk_16 = vtbl->super.super.super.Unk_16;
      if ( !Unk_16 )
        goto LABEL_21;
      v11 = *((_DWORD *)Unk_16 + 2);
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent + 0xCD))(
             vtbl,
             1) )
      {
        if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl) )
        {
          v17 = TESDataHandler_g_PlayerRef;
          v12 = (_DWORD *)(*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl);
          if ( sub_613670(v12, (int)v17) )
            goto LABEL_25;
        }
        if ( !v11 || *(_BYTE *)(v11 + 0x20) != 0xD )
        {
LABEL_21:
          if ( sub_5E10A0(vtbl, (int)TESDataHandler_g_PlayerRef) < 3 )
            goto LABEL_30;
          if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent
                + 0x66))(
                 vtbl,
                 0) )
          {
            goto LABEL_30;
          }
          CopyFromBase = vtbl->super.super.super.super.CopyFromBase;
          if ( ((unsigned __int16)CopyFromBase & 0x800) != 0 || ((unsigned __int8)CopyFromBase & 0x20) != 0 )
            goto LABEL_30;
          goto LABEL_25;
        }
      }
      else if ( !sub_5E6BA0((Actor *)vtbl) )
      {
        goto LABEL_21;
      }
      if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)vtbl->super.super.super.Unk_16 + 0xCC))(vtbl->super.super.super.Unk_16) != TESDataHandler_g_PlayerRef )
        goto LABEL_21;
LABEL_25:
      Name = TESObjectREFR_GetName((TESObjectREFR *)vtbl);
      _sprintf(Format, "%s detects the player ", Name);
      Interface_ConsolePrint(Format);
      goto LABEL_30;
    }
LABEL_31:
    ;
  }
}
