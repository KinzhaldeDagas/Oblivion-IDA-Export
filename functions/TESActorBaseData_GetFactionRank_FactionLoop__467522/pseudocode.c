int __userpurge TESActorBaseData_GetFactionRank_::FactionLoop@<eax>(
        int *a1@<esi>,
        char dl0@<dl>,
        int edi0@<edi>,
        int a4,
        int a5)
{
  int v5; // eax
  bool v6; // zf

  v5 = *a1; /*0x467524*/
  if ( dl0 ) /*0x467526*/
  {
    if ( !v5 || (*(_BYTE *)(*(_DWORD *)v5 + 0x34) & 8) != 0 ) /*0x467538*/
      return TESActorBaseData_GetFactionRank_::FactionLoop_next((int)a1, dl0, edi0, a4, a5); /*0x467538*/
    v6 = *(_DWORD *)v5 == edi0; /*0x46753a*/
  }
  else
  {
    if ( !v5 ) /*0x467540*/
      return TESActorBaseData_GetFactionRank_::FactionLoop_next((int)a1, dl0, edi0, a4, a5); /*0x467540*/
    v6 = *(_DWORD *)v5 == edi0; /*0x467542*/
  }
  if ( !v6 ) /*0x467544*/
    return TESActorBaseData_GetFactionRank_::FactionLoop_next((int)a1, dl0, edi0, a4, a5); /*0x467545*/
  return TESActorBaseData_GetFactionRank_::Return_Rank(v5, a4, a5);
}
