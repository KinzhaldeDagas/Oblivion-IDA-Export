int __userpurge TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop@<eax>(
        int esi0@<esi>,
        int ebp0@<ebp>,
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
  int v12; // eax
  int v13; // edi

  v12 = *(_DWORD *)esi0;
  if ( !*(_DWORD *)esi0 )
    return TESActorBaseData_GetFactionReactionAndRank_::ThisFactionLoop_Next(a3, a4, a5, a6);
  v13 = *(_DWORD *)v12;
  if ( *(char *)(v12 + 4) > (char)0xFFFFFFFF
    && ((*(_BYTE *)(v13 + 0x34) & 8) == 0 || a11 != Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0)) )
  {
    TESReactionForm_GetReactionToTarget((_DWORD *)(ebp0 + 0x24), v13);
  }
  return TESActorBaseData_GetFactionReactionAndRank_::TargetFactionLoop_next(esi0, a3, a4, a5, a6);
}
