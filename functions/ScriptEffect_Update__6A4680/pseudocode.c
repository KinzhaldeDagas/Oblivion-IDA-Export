// ScriptEffect Update vfunc: reuse the active effect ScriptEventList and run ScriptEffectUpdate with this frame/update delta.
void __userpurge ScriptEffect_Update(int a1@<ecx>, double a2@<st1>, double a3@<st0>, float a4)
{
  TESObjectREFR *v5; // eax
  char **v6; // [esp-4h] [ebp-Ch]

  if ( *(_DWORD *)(a1 + 0x38) ) /*0x6a4683*/
  {
    v6 = *(char ***)(a1 + 0x3C); /*0x6a4699*/
    v5 = (TESObjectREFR *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x20) /*0x6a469d*/
                                                                                                + 4))(
                            *(_DWORD *)(a1 + 0x20),
                            a3,
                            a2);
    ScriptEffect_RunUpdateEvent(*(Script **)(a1 + 0x38), a2, a3, v5, v6, a4); /*0x6a46a3*/
  }
}
