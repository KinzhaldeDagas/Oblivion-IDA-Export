int __userpurge Actor_MagicCaster_IsMagicItemUseable_::CheckMasteryLevel@<eax>(
        PlayerCharacter *a1@<ebp>,
        int a2@<edi>,
        Actor *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        void *a8,
        int a9,
        int a10,
        char a11,
        int a12,
        _DWORD *a13)
{
  SkillActorValue SchoolAV; // eax
  SkillMasteryLevel SkillMasteryLevel; // esi

  if ( a1 == reference /*0x5f45df*/
    && (*(int (__thiscall **)(void *))(*(_DWORD *)a8 + 0x18))(a8) != 2
    && (*(int (__thiscall **)(void *))(*(_DWORD *)a8 + 0x18))(a8) != 3 )
  {
    SchoolAV = EffectItemList_GetSchoolAV(); /*0x5f45e3*/
    SkillMasteryLevel = Actor_GetSkillMasteryLevel(a3, SchoolAV); /*0x5f45f0*/
    HIBYTE(a7) = SkillMasteryLevel >= (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x5f45fd*/
  }
  return Actor_MagicCaster_IsMagicItemUseable_::CheckImmuneToSilence_(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
