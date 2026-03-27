bool __thiscall sub_6640D0(TESObjectREFR *this)
{
  bool v4; // bl
  TESObjectREFR **v6; // eax
  TESObjectREFR **v7; // esi
  int *v8; // eax
  int *v9; // esi
  int v10; // eax
  TESObjectCELL *ParentCell; // eax
  char v12; // al
  TESWorldSpace *WorldSpace; // eax
  char string[500]; // [esp+18h] [ebp-1F8h] BYREF

  v4 = 0;
  if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)TESDataHandler_g_PlayerRef, 0) )
  {
    _sprintf(string, (const char *)dword_B38B38);
    GameUI_QueueMessage(string, 0, 1u, flt_A30634);
    return 0;
  }
  v6 = sub_6758E0((int)TESDataHandler_g_PlayerRef, 0xF, 0);
  v7 = v6;
  if ( v6 && (v6[1] || *v6) )
  {
    _sprintf(string, (const char *)dword_B38B60);
    GameUI_QueueMessage(string, 0, 1u, flt_A30634);
    BSSimpleList_Clear(v7);
    FormHeapFree((unsigned int)v7);
    return 0;
  }
  v8 = (int *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 0x1A) + 8))((char *)this + 0x68);
  if ( *((_DWORD *)this + 0x16) && v8 )
  {
    do
    {
      v9 = (int *)v8[1];
      if ( !v9 && !*v8 )
        break;
      v10 = *v8;
      if ( v10 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x28))(v10) )
      {
        _sprintf(string, (const char *)dword_B38B58);
        goto LABEL_18;
      }
      v8 = v9;
    }
    while ( v9 );
  }
  if ( !*((_BYTE *)this + 0x5A9) )
  {
    _sprintf(string, (const char *)dword_B38B48);
LABEL_18:
    GameUI_QueueMessage(string, 0, 1u, flt_A30634);
    return 0;
  }
  if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_97)(TESDataHandler_g_PlayerRef)
    || TESDataHandler_g_PlayerRef->vtbl->super.super.super.HasFatigue((TESObjectREFR *)TESDataHandler_g_PlayerRef)
    || TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Fatigue) < 1
    || TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Health) < 1 )
  {
    return 0;
  }
  if ( TESObjectREFR_GetParentCell(this) )
  {
    ParentCell = TESObjectREFR_GetParentCell(this);
    v12 = sub_4CA6C0((int)ParentCell);
  }
  else
  {
    WorldSpace = TESObjectREFR_GetWorldSpace(this);
    if ( !WorldSpace )
    {
LABEL_28:
      _sprintf(string, (const char *)dword_B38B40);
      GameUI_QueueMessage(string, 0, 1u, flt_A30634);
      return v4;
    }
    v12 = sub_4EF140(WorldSpace);
  }
  v4 = v12 == 0;
  if ( v12 )
    goto LABEL_28;
  return v4;
}
