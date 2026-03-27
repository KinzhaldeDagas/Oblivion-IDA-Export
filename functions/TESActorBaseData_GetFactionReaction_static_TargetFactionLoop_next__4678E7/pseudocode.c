// positive sp value has been detected, the output may be wrong!
int __userpurge TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop_next@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        TESForm *a9)
{
  int **v9; // edi

  v9 = *(int ***)(a3 + 4);
  if ( v9 )
    return TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop(v9, a4, a5, a6, a7, a8, a9);
  if ( a2 )
    return a2;
  if ( a1 == 0x2710 )
    return 0;
  return a1;
}
