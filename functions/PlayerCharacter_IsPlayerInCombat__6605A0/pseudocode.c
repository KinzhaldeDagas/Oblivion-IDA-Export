bool __thiscall PlayerCharacter_IsPlayerInCombat(TESObjectREFR ***this, char a2)
{
  TESObjectREFR **v3; // eax
  TESObjectREFR *v4; // eax
  TESObjectREFR *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // eax

  v3 = *(this + 0x16B);
  if ( !v3 )
    return 0;
  v4 = *v3;
  if ( !v4 )
    return 0;
  v5 = v4;
  while ( v5->vtbl->IsActor(v5) )
  {
    if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD))v5->vtbl[1].GetSleepState)(v5, 0) )
      break;
    if ( sub_5E6CD0(v5, 0)
      && TesObjectREF_GetDistance(v5, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) <= flt_A5739C
      && (!a2 || !sub_5E6CD0(v5, 0)) )
    {
      break;
    }
    v6 = *(this + 0x16B);
    v7 = (_DWORD *)v6[1];
    if ( v7 )
    {
      v6[1] = v7[1];
      *v6 = *v7;
      FormHeapFree((unsigned int)v7);
    }
    else
    {
      *v6 = 0;
    }
    v5 = **(this + 0x16B);
    if ( !v5 )
      break;
  }
  v8 = *(this + 0x16B);
  return v8[1] || *v8;
}
