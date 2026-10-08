// Oblivion retail TESObjectLIGH activation override. lightFlags_7C bit 0x02, labelled 'Can carry' in Construction Set Light dialog 156, gates delegation to TESBoundObject_ActivatePickup; clear returns false. This is source-form pickup behavior, not shadow-caster admission.
char __userpurge sub_4B1140@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        void *a6,
        int a7,
        int a8,
        int a9)
{                                               // TESObjectLIGH::lightFlags_7C bit 0x02. The Oblivion Construction Set Light dialog names this bit 'Can carry'; retail activation delegates to TESBoundObject_ActivatePickup only when set.
  if ( (*(_DWORD *)(a1 + 0x7C) & 2) != 0 ) /*0x4b1147*/
    return TESBoundObject_ActivatePickup(a1, a2, a3, a4, a5, a6, a7, a8, a9); /*0x4b114e*/
  else
    return 0; /*0x4b1149*/
}
