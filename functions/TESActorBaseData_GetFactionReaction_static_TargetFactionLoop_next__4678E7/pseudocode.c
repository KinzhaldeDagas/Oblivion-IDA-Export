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

  v9 = *(int ***)(a3 + 4); /*0x4678e7*/
  if ( v9 ) /*0x4678ec*/
    return TESActorBaseData_GetFactionReaction_static_::TargetFactionLoop(v9, a1, a2, a4, a5, a6, a7, a8, a9); /*0x4678ec*/
  if ( a2 ) /*0x4678f1*/
    return a2; /*0x4678f4*/
  if ( a1 == 0x2710 ) /*0x467901*/
    return 0; /*0x46790b*/
  return a1; /*0x4678f8*/
}
