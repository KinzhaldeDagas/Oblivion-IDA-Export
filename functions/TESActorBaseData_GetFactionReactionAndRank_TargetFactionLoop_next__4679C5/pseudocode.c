int __userpurge TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop_next@<eax>(
        int esi0@<esi>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        TESForm *a11)
{
  int v11; // esi

  v11 = *(_DWORD *)(esi0 + 4);
  if ( v11 )
    return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop(v11, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  else
    return TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop_Next(a3, a4, a5, a6);
}
