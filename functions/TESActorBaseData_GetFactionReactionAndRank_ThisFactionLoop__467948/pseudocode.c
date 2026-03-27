int __userpurge TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop@<eax>(
        int ebx0@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( !*(_DWORD *)a5 )
    return TESActorBaseData_GetFactionReactionAndRank_::ReturnValues(a2, a3);
  if ( a10 == 0xFFFFFFC4 )
    return TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop_Next(a2, a3, a4, a5);
  return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop(
           a10 + 0x3C,
           ebx0,
           **(_DWORD **)a5,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
