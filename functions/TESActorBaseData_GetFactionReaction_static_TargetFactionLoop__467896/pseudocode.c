int __userpurge TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop@<eax>(
        int **a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        TESForm *a7)
{
  int v9; // eax
  int v10; // esi

  v9 = (int)*a1;
  if ( !*a1 )
    JUMPOUT(0x4678EE);
  v10 = *(_DWORD *)v9;
  if ( *(char *)(v9 + 4) > (char)0xFFFFFFFF
    && ((*(_BYTE *)(v10 + 0x34) & 8) == 0 || a7 != Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0)) )
  {
    TESReactionForm_GetReactionToTarget((_DWORD *)(a6 + 0x24), v10);
  }
  return TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop_next(a2, a3);
}
