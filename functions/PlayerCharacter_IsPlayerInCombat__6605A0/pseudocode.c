bool __thiscall PlayerCharacter_IsPlayerInCombat(TESObjectREFR ***this, char a2)
{
  TESObjectREFR **v3; // eax
  TESObjectREFR *v4; // eax
  TESObjectREFR *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // eax

  v3 = *(this + 0x16B); /*0x6605a3*/
  if ( !v3 ) /*0x6605ad*/
    return 0; /*0x6605ad*/
  v4 = *v3; /*0x6605b3*/
  if ( !v4 ) /*0x6605b7*/
    return 0; /*0x660691*/
  v5 = v4; /*0x6605be*/
  while ( v5->vtbl->IsActor(v5) ) /*0x6605ca*/
  {
    if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD))v5->vtbl[1].GetSleepState)(v5, 0) ) /*0x6605ec*/
      break; /*0x6605f0*/
    if ( sub_5E6CD0(v5, 0) /*0x660627*/
      && TesObjectREF_GetDistance(v5, (TESObjectREFR *)reference, 0) <= flt_A5739C
      && (!a2 || !sub_5E6CD0(v5, 0)) )
    {
      break; /*0x66062e*/
    }
    v6 = *(this + 0x16B); /*0x660630*/
    v7 = (_DWORD *)v6[1]; /*0x660636*/
    if ( v7 ) /*0x66063b*/
    {
      v6[1] = v7[1]; /*0x660640*/
      *v6 = *v7; /*0x660646*/
      FormHeapFree((unsigned int)v7); /*0x660648*/
    }
    else
    {
      *v6 = 0; /*0x660652*/
    }
    v5 = **(this + 0x16B); /*0x66065e*/
    if ( !v5 ) /*0x660662*/
      break; /*0x660662*/
  }
  v8 = *(this + 0x16B); /*0x660679*/
  return v8[1] || *v8; /*0x66068d*/
}
