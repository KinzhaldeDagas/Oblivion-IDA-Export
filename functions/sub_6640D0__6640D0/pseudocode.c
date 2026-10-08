// Fast-travel eligibility gate for the player: blocks combat, guard alarm, damaging active effects, script-disabled travel flag at PlayerCharacter+0x5A9, invalid/dead player states, and non-travel-enabled current cell/worldspace. It does not execute the travel.
bool __thiscall PlayerCharacter_CanStartFastTravel(TESObjectREFR *this)
{
  bool v2; // bl
  Actor **v4; // eax
  Actor **v5; // esi
  int *v6; // eax
  int *v7; // esi
  int v8; // eax
  UInt32 DwordAtOffset40; // eax
  bool v10; // al
  TESWorldSpace *WorldSpace; // eax
  char string[500]; // [esp+18h] [ebp-1F8h] BYREF

  v2 = 0; /*0x6640f0*/
  if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0) ) /*0x6640f2*/
  {
    _sprintf(string, stru_B38B38.value); /*0x664106*/
    GameUI_QueueMessage(string, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x664120*/
    return 0; /*0x664140*/
  }
  v4 = sub_6758E0((ActorProcessManager *)&qword_B3BB2C[0x75], (TESObjectREFR *)reference, 0xF, 0); /*0x664151*/
  v5 = v4; /*0x664156*/
  if ( v4 && (v4[1] || *v4) ) /*0x664162*/
  {
    _sprintf(string, stru_B38B60.value); /*0x664173*/
    GameUI_QueueMessage(string, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x66418d*/
    BSSimpleList_Clear(v5); /*0x664197*/
    FormHeapFree((unsigned int)v5); /*0x66419d*/
    return 0; /*0x66419d*/
  }
  v6 = (int *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 0x1A) + 8))((char *)this + 0x68); /*0x6641c8*/
  if ( *((_DWORD *)this + 0x16) && v6 ) /*0x6641d2*/
  {
    do /*0x6641d4*/
    {
      v7 = (int *)v6[1]; /*0x6641d4*/
      if ( !v7 && !*v6 ) /*0x6641db*/
        break; /*0x6641db*/
      v8 = *v6; /*0x6641df*/
      if ( v8 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x28))(v8) ) /*0x6641ec*/
      {
        _sprintf(string, stru_B38B58.value); /*0x664215*/
        goto LABEL_18; /*0x664215*/
      }
      v6 = v7; /*0x6641f4*/
    }
    while ( v7 ); /*0x6641d4*/
  }
  if ( !*((_BYTE *)this + 0x5A9) ) /*0x6641f8*/
  {
    _sprintf(string, stru_B38B48.value); /*0x664207*/
LABEL_18:
    GameUI_QueueMessage(string, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x66421a*/
    return 0; /*0x664237*/
  }
  if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_97)(reference) /*0x66429c*/
    || reference->vtbl->super.super.super.HasFatigue((TESObjectREFR *)reference)
    || reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Fatigue) < 1
    || reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Health) < 1 )
  {
    return 0; /*0x6641be*/
  }
  if ( Shared_GetDwordAtOffset40(this) ) /*0x6642a4*/
  {
    DwordAtOffset40 = Shared_GetDwordAtOffset40(this); /*0x6642af*/
    v10 = sub_4CA6C0(DwordAtOffset40); /*0x6642b6*/
  }
  else
  {
    WorldSpace = TESObjectREFR_GetWorldSpace(this); /*0x6642bd*/
    if ( !WorldSpace ) /*0x6642c4*/
    {
LABEL_28:
      _sprintf(string, stru_B38B40.value); /*0x6642d6*/
      GameUI_QueueMessage(string, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x6642fc*/
      return v2; /*0x6642fc*/
    }
    v10 = sub_4EF140(WorldSpace); /*0x6642c8*/
  }
  v2 = !v10; /*0x6642cf*/
  if ( v10 ) /*0x6642d4*/
    goto LABEL_28; /*0x6642d4*/
  return v2; /*0x664128*/
}
