int __userpurge TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop@<eax>(
        int *esi0@<esi>,
        int ebp0@<ebp>,
        int a3@<ebx>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        TESForm *a12)
{
  int v12; // eax
  int v13; // edi
  int ReactionToTarget; // eax

  v12 = *esi0; /*0x467961*/
  if ( !*esi0 ) /*0x467961*/
    return TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop_Next( /*0x467965*/
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             (int)a12);
  v13 = *(_DWORD *)v12; /*0x46796b*/
  if ( *(char *)(v12 + 4) <= (char)0xFFFFFFFF /*0x46798c*/
    || (*(_BYTE *)(v13 + 0x34) & 8) != 0 && a12 == Actor_GetActorBaseForm((Actor *)reference, 0) )
  {
    return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop_next( /*0x46798c*/
             (int)esi0,
             ebp0,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  }
  ReactionToTarget = TESReactionForm_GetReactionToTarget((_DWORD *)(ebp0 + 0x24), v13); /*0x467992*/
  if ( v13 == ebp0 && a3 < ReactionToTarget ) /*0x46799d*/
    return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop_next( /*0x4679ab*/
             (int)esi0,
             ebp0,
             a4,
             a5,
             a6,
             a7,
             a8,
             *(char *)(*esi0 + 4),
             a10,
             a11,
             a12);
  if ( !ReactionToTarget || a8 <= ReactionToTarget ) /*0x4679b5*/
    return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop_next( /*0x4679b5*/
             (int)esi0,
             ebp0,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  else
    return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop_next( /*0x4679c2*/
             (int)esi0,
             ebp0,
             a4,
             a5,
             a6,
             a7,
             ReactionToTarget,
             a9,
             *(char *)(*esi0 + 4),
             a11,
             a12);
}
