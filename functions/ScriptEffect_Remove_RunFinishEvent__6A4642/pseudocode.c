int __usercall ScriptEffect_Remove_::RunFinishEvent@<eax>(int a1@<esi>, double a2@<st1>, double a3@<st0>)
{
  TESObjectREFR *v4; // eax
  char **v6; // [esp-4h] [ebp-4h]

  v6 = *(char ***)(a1 + 0x3C);
  v4 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x20) + 4))(*(_DWORD *)(a1 + 0x20));
  sub_4F9F30(*(Script **)(a1 + 0x38), a2, a3, v4, v6);
  return ScriptEffect_Remove_::DestroyEventList((ScriptEffect *)a1);
}
