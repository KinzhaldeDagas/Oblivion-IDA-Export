// RunFinishEvent chunk: resolve target through caster vfunc +4, call ScriptEffect_RunFinishEvent(script,target,eventList), then destroy the event list.
int __usercall ScriptEffect_Remove_::RunFinishEvent@<eax>(int a1@<esi>, double a2@<st1>, double a3@<st0>)
{
  TESObjectREFR *v3; // eax
  char **v5; // [esp-4h] [ebp-4h]

  v5 = *(char ***)(a1 + 0x3C); /*0x6a464a*/
  v3 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 4))(*(_DWORD *)(a1 + 0x20)); /*0x6a464e*/
  ScriptEffect_RunFinishEvent(*(Script **)(a1 + 0x38), a2, a3, v3, v5); /*0x6a4654*/
  return ScriptEffect_Remove_::DestroyEventList((ScriptEffect *)a1);
}
