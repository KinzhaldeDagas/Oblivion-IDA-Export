void __userpurge sub_6210D0(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        PlayerCharacter *a6,
        char a7)
{
  TESObjectREFR ***v8; // edi
  TESObjectREFR **i; // eax

  if ( !a7 ) /*0x6210da*/
  {
    v8 = *(TESObjectREFR ****)(a1 + 0x40); /*0x6210dd*/
    if ( v8 ) /*0x6210e2*/
    {
      for ( i = *v8; *v8; i = *v8 ) /*0x6210e4*/
        CombatController_RemoveTarget((float *)a1, *i); /*0x6210f5*/
    }
    CombatController_TryAddTarget(a1, a2, a3, a5, a6, 0, 0.0, 0.0, 0.0); /*0x621117*/
  }
  if ( *(_DWORD *)(a1 + 0x6C) == 7 /*0x621135*/
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x174))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) != a1 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))( /*0x621147*/
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      0);
  }
  CombatController_SetCombatMode(a1, a7 != 0 ? 0xC : 7);
  sub_619920(a1, 0); /*0x62115f*/
  sub_620E80(a1, a3, a4, a5); /*0x621166*/
}
