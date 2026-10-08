void __usercall sub_5A2F1B(
        int a1@<edi>,
        TESObjectREFR *a2@<ebx>,
        _DWORD *a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  SaveLoad_AddCreatedObj((char *)g_TESSaveLoadGame, a1); /*0x5a2f22*/
  sub_5A2F27(a2, a1, a3, a4, a5, a6); /*0x5a2f23*/
}
