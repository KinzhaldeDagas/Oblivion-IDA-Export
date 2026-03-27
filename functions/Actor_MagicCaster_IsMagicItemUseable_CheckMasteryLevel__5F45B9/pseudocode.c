int __usercall Actor_MagicCaster_IsMagicItemUseable_::CheckMasteryLevel@<eax>(
        int a1@<ebx>,
        PlayerCharacter *a2@<ebp>,
        int a3@<edi>,
        int *a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int SchoolAV; // eax
  int SkillMasteryLevel; // esi

  if ( a2 == TESDataHandler_g_PlayerRef
    && (*(int (__thiscall **)(int))(*(_DWORD *)a9 + 0x18))(a9) != 2
    && (*(int (__thiscall **)(int))(*(_DWORD *)a9 + 0x18))(a9) != 3 )
  {
    SchoolAV = EffectItemList_GetSchoolAV();
    SkillMasteryLevel = Actor_GetSkillMasteryLevel(a4, a1, a3, SchoolAV);
    HIBYTE(a8) = SkillMasteryLevel >= (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  }
  return Actor_MagicCaster_IsMagicItemUseable_::CheckImmuneToSilence_(a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}
