int __userpurge TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop_Next@<eax>(
        int a1@<ebx>,
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
  int v11; // [esp+10h] [ebp+10h]

  v11 = *(_DWORD *)(a5 + 4); /*0x4679d5*/
  if ( v11 ) /*0x4679d9*/
    return TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop(a1, a2, a3, a4, v11, a6, a7, a8, a9, a10); /*0x4679d9*/
  else
    return TESActorBaseData_GetFactionReactionAndRank_::ReturnValues(a1, a2, a3); /*0x4679da*/
}
