int __userpurge TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop@<eax>(
        int **a1@<edi>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        TESForm *a9)
{
  int v9; // eax
  int v10; // esi
  int ReactionToTarget; // eax

  v9 = (int)*a1; /*0x467896*/
  if ( !*a1 ) /*0x46789a*/
    JUMPOUT(0x4678EE); /*0x4678ee*/
  v10 = *(_DWORD *)v9; /*0x4678a0*/
  if ( *(char *)(v9 + 4) <= (char)0xFFFFFFFF /*0x4678c0*/
    || (*(_BYTE *)(v10 + 0x34) & 8) != 0 && a9 == Actor_GetActorBaseForm((Actor *)reference, 0) )
  {
    return TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop_next(a2, a3, (int)a1, a4, a5, a6, a7, a8, a9); /*0x4678c0*/
  }
  ReactionToTarget = TESReactionForm_GetReactionToTarget((_DWORD *)(a8 + 0x24), v10); /*0x4678ca*/
  if ( v10 == a8 && a3 < ReactionToTarget ) /*0x4678d7*/
    return TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop_next( /*0x4678db*/
             a2,
             ReactionToTarget,
             (int)a1,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  if ( !ReactionToTarget || a2 <= ReactionToTarget ) /*0x4678e3*/
    return TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop_next(a2, a3, (int)a1, a4, a5, a6, a7, a8, a9); /*0x4678df*/
  else
    return TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop_next( /*0x4678e6*/
             ReactionToTarget,
             a3,
             (int)a1,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
}
