int __userpurge TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop_next@<eax>(
        int esi0@<esi>,
        int a2@<ebp>,
        int a3@<ebx>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int *v12; // esi

  v12 = *(int **)(esi0 + 4); /*0x4679c5*/
  if ( v12 ) /*0x4679ca*/
    return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop( /*0x4679ca*/
             v12,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             (TESForm *)a12);
  else
    return TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop_Next(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); /*0x4679cb*/
}
