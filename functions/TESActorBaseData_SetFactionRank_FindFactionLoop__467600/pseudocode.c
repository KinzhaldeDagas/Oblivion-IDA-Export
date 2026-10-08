void __userpurge TESActorBaseData_SetFactionRank_::FindFactionLoop(
        int a1@<edi>,
        _DWORD *a2@<esi>,
        _DWORD *eax0@<eax>,
        int a4,
        int a5,
        int a6,
        char a7)
{
  while ( !*eax0 || *(_DWORD *)*eax0 != a1 ) /*0x467608*/
  {
    eax0 = (_DWORD *)eax0[1]; /*0x46760a*/
    if ( !eax0 ) /*0x46760f*/
    {
      TESActorBaseData_SetFactionRank_::NewFactionEntry(a1, a2, a4, a5, a6, a7); /*0x467610*/
      return; /*0x467610*/
    }
  }
  TESActorBaseData_SetFactionRank_::SetExistingEntryRank(eax0, a4, a5); /*0x467608*/
}
