unsigned int __userpurge TESActorBaseData_GetFactionRank_::FactionLoop_next@<eax>(
        int a1@<esi>,
        char a2@<dl>,
        int a3@<edi>,
        int a4,
        int a5)
{
  int *v5; // esi

  v5 = *(int **)(a1 + 4); /*0x467546*/
  if ( v5 ) /*0x46754b*/
    return TESActorBaseData_GetFactionRank_::FactionLoop(v5, a2, a3, a4, a5); /*0x46754b*/
  else
    return TESActorBaseData_GetFactionRank_::Return_Neg1(a4, a5); /*0x46754c*/
}
