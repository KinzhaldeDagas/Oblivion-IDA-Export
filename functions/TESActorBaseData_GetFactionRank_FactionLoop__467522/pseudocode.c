int __userpurge TESActorBaseData_GetFactionRank_::FactionLoop@<eax>(
        int *a1@<esi>,
        char dl0@<dl>,
        int edi0@<edi>,
        int a4,
        int a5)
{
  int v5; // eax
  bool v6; // zf

  v5 = *a1;
  if ( dl0 )
  {
    if ( !v5 || (*(_BYTE *)(*(_DWORD *)v5 + 0x34) & 8) != 0 )
      return TESActorBaseData_GetFactionRank_::FactionLoop_next((int)a1, a4, a5);
    v6 = *(_DWORD *)v5 == edi0;
  }
  else
  {
    if ( !v5 )
      return TESActorBaseData_GetFactionRank_::FactionLoop_next((int)a1, a4, a5);
    v6 = *(_DWORD *)v5 == edi0;
  }
  if ( !v6 )
    return TESActorBaseData_GetFactionRank_::FactionLoop_next((int)a1, a4, a5);
  return TESActorBaseData_GetFactionRank_::Return_Rank(a4, a5);
}
