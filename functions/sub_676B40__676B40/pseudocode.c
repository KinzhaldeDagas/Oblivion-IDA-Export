void __thiscall sub_676B40(ActorProcessManager *this, char a2)
{
  ActorProcessManager *v2; // esi
  int i; // ebx
  Actor *ListHead; // eax
  Actor *v5; // ebp
  ActorVtbl *vtbl; // esi
  void (__thiscall *Unk_16)(TESForm *); // eax
  int v8; // edi
  _DWORD *v9; // eax
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  char *Name; // eax
  const char *v12; // eax
  const char *v13; // [esp-8h] [ebp-14Ch]
  PlayerCharacter *v14; // [esp-4h] [ebp-148h]
  int v15; // [esp-4h] [ebp-148h]
  char Format[300]; // [esp+14h] [ebp-130h] BYREF

  v2 = this; /*0x676b57*/
  for ( i = 0; i < 4; ++i ) /*0x676b5e*/
  {
    if ( i ) /*0x676b62*/
    {
      if ( i == 1 ) /*0x676b6a*/
      {
        ListHead = ActorProcessManager_GetListHead(v2, 1); /*0x676b6d*/
      }
      else if ( i == 2 ) /*0x676b72*/
      {
        ListHead = ActorProcessManager_GetListHead(v2, 2); /*0x676b75*/
      }
      else
      {
        ListHead = ActorProcessManager_GetListHead(v2, 3); /*0x676b7b*/
      }
    }
    else
    {
      ListHead = ActorProcessManager_GetListHead(v2, 0); /*0x676b65*/
    }
    v5 = ActorList_ReturnHead((ActorList *)ListHead); /*0x676b87*/
    if ( v5 ) /*0x676b8b*/
    {
      while ( 1 ) /*0x676b91*/
      {
        if ( !v5->vtbl ) /*0x676b96*/
          goto LABEL_31; /*0x676b96*/
        vtbl = 0; /*0x676ba4*/
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v5->vtbl->super.super.super.super.InitializeComponent /*0x676ba6*/
              + 0x64))(v5->vtbl) )
          vtbl = v5->vtbl; /*0x676bac*/
        v5 = *(Actor **)&v5->members.super.super.super.type; /*0x676bb1*/
        if ( vtbl ) /*0x676bb4*/
          break; /*0x676bb4*/
LABEL_30:
        v2 = this; /*0x676cf3*/
        if ( !v5 ) /*0x676cf9*/
          goto LABEL_31; /*0x676cf9*/
      }
      if ( !a2 ) /*0x676bc2*/
      {
        v12 = (const char *)(*((int (__thiscall **)(ActorVtbl *, const char *, int))vtbl->super.super.super.super.InitializeComponent /*0x676ce3*/
                             + 0x35))(
                              vtbl,
                              "is in List",
                              i);
        PrintToLog___("%s %s% i", v12, v13, v15); /*0x676ceb*/
        goto LABEL_30; /*0x676ceb*/
      }
      Unk_16 = vtbl->super.super.super.Unk_16; /*0x676bc8*/
      if ( !Unk_16 ) /*0x676bcd*/
        goto LABEL_21; /*0x676bcd*/
      v8 = *((_DWORD *)Unk_16 + 2); /*0x676bcf*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent + 0xCD))( /*0x676bde*/
             vtbl,
             1) )
      {
        if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl) ) /*0x676bf2*/
        {
          v14 = reference; /*0x676bff*/
          v9 = (_DWORD *)(*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl); /*0x676c08*/
          if ( sub_613670(v9, (int)v14) ) /*0x676c0c*/
            goto LABEL_25; /*0x676c13*/
        }
        if ( !v8 || *(_BYTE *)(v8 + 0x20) != 0xD ) /*0x676c21*/
        {
LABEL_21:
          if ( sub_5E10A0(vtbl, (int)reference) < 3 ) /*0x676c33*/
            goto LABEL_30; /*0x676c33*/
          if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, _DWORD))vtbl->super.super.super.super.InitializeComponent /*0x676c45*/
                + 0x66))(
                 vtbl,
                 0) )
          {
            goto LABEL_30; /*0x676c45*/
          }
          CopyFromBase = vtbl->super.super.super.super.CopyFromBase; /*0x676c4f*/
          if ( ((unsigned __int16)CopyFromBase & 0x800) != 0 || ((unsigned __int8)CopyFromBase & 0x20) != 0 ) /*0x676c65*/
            goto LABEL_30; /*0x676c65*/
          goto LABEL_25; /*0x676c65*/
        }
      }
      else if ( !sub_5E6BA0((Actor *)vtbl) ) /*0x676c95*/
      {
        goto LABEL_21; /*0x676c95*/
      }
      if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)vtbl->super.super.super.Unk_16 + 0xCC))(vtbl->super.super.super.Unk_16) != reference ) /*0x676caa*/
        goto LABEL_21; /*0x676caa*/
LABEL_25:
      Name = TESObjectREFR_GetName((TESObjectREFR *)vtbl); /*0x676c6b*/
      _sprintf(Format, "%s detects the player ", Name); /*0x676c7d*/
      Interface_ConsolePrint(Format); /*0x676c87*/
      goto LABEL_30; /*0x676c8c*/
    }
LABEL_31:
    ; /*0x676cff*/
  }
}
