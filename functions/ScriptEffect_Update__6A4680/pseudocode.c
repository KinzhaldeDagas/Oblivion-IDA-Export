void __userpurge ScriptEffect_Update(int a1@<ecx>, double a2@<st1>, double a3@<st0>, float a4)
{
  TESObjectREFR *v6; // eax
  char **v7; // [esp-4h] [ebp-Ch]

  if ( *(_DWORD *)(a1 + 0x38) )
  {
    v7 = *(char ***)(a1 + 0x3C);
    v6 = (TESObjectREFR *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x20)
                                                                                                + 4))(
                            *(_DWORD *)(a1 + 0x20),
                            a3,
                            a2);
    sub_4F9F60(*(Script **)(a1 + 0x38), a2, a3, v6, v7, a4);
  }
}
