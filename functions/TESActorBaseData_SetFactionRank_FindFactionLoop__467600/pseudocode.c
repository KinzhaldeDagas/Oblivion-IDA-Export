int __userpurge TESActorBaseData_SetFactionRank_::FindFactionLoop@<eax>(
        int a1@<edi>,
        _DWORD *a2@<esi>,
        _DWORD *eax0@<eax>,
        int a4,
        int a5,
        int a6,
        char a7)
{
  while ( !*eax0 || *(_DWORD *)*eax0 != a1 )
  {
    eax0 = (_DWORD *)eax0[1];
    if ( !eax0 )
      return TESActorBaseData_SetFactionRank_::NewFactionEntry(a1, a2, a4, a5, a6, a7);
  }
  return TESActorBaseData_SetFactionRank_::SetExistingEntryRank(a4, a5);
}
