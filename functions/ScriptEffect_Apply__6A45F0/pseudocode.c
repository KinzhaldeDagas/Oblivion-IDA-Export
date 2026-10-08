// ScriptEffect Apply vfunc: if a script exists, create the ScriptEventList for this active effect, resolve the target through caster vfunc +4, then run ScriptEffectStart.
void __usercall ScriptEffect_Apply(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  char *v4; // ecx
  char **EventList; // eax
  int v6; // ecx
  TESObjectREFR *v7; // eax
  char **v8; // [esp-4h] [ebp-8h]

  v4 = *(char **)(a1 + 0x38); /*0x6a45f3*/
  if ( v4 ) /*0x6a45f8*/
  {
    EventList = Script_CreateEventList(v4); /*0x6a45fa*/
    v6 = *(_DWORD *)(a1 + 0x20); /*0x6a45ff*/
    *(_DWORD *)(a1 + 0x3C) = EventList; /*0x6a4602*/
    v8 = EventList; /*0x6a4605*/
    v7 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6); /*0x6a460b*/
    ScriptEffect_RunStartEvent(*(Script **)(a1 + 0x38), a2, a3, v7, v8); /*0x6a4611*/
  }
}
