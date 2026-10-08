int __userpurge TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop@<eax>(
        int ebx0@<ebx>,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( !*(_DWORD *)a5 ) /*0x46794c*/
    return TESActorBaseData_GetFactionReactionAndRank_::ReturnValues(ebx0, a2, a3); /*0x467950*/
  if ( a10 == 0xFFFFFFC4 ) /*0x46795f*/
    return TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop_Next( /*0x46795f*/
             ebx0,
             a2,
             (int)a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             0xFFFFFFC4);
  return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop(
           a10 + 0x3C,
           **(_DWORD **)a5,
           a2,
           (int)a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           (TESForm *)a10);
}
