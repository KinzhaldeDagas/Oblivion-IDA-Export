int __userpurge MagicTarget_ProcessEffectsFromItem_::ActiveEffectLoop@<eax>(
        ActiveEffect **a1@<ebx>,
        int a2@<edi>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        MagicItem *a9)
{
  ActiveEffect *v9; // esi
  ActiveEffect **v10; // ebp
  int *v11; // eax

  if ( !a1[1] && !*a1 ) /*0x6a2438*/
    return MagicTarget_ProcessEffectsFromItem_::Done(a5); /*0x6a243a*/
  v9 = *a1; /*0x6a243c*/
  v10 = (ActiveEffect **)a1[1]; /*0x6a2440*/
  if ( *a1 ) /*0x6a243c*/
  {
    if ( v9->members.item == a9 ) /*0x6a244b*/
    {
      if ( !v9->members.bApplied ) /*0x6a244d*/
      {
        a3 = kFaceEarNormalMatchRadius; /*0x6a2453*/
        ActiveEffect_Base_ProcessEffect(*a1, (char)v10, a3, a4, kFaceEarNormalMatchRadius); /*0x6a245f*/
      }
      if ( v9->members.bTerminated ) /*0x6a2464*/
      {
        if ( a1 == (ActiveEffect **)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a2 + 8))(a2, a4) ) /*0x6a2475*/
          v10 = a1; /*0x6a2477*/
        v11 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x6a2481*/
        BSSimpleList_Remove(v11, (int)v9); /*0x6a2485*/
        (*(void (__thiscall **)(int, ActiveEffect *))(*(_DWORD *)a2 + 0x14))(a2, v9); /*0x6a2492*/
        ((void (__thiscall *)(ActiveEffect *, int))v9->vtbl->scalarDeletingDestructor)(v9, 1); /*0x6a249c*/
      }
    }
  }
  return MagicTarget_ProcessEffectsFromItem_::ActiveEffectLoop_next(v10, a2, a3, a5, a6, a7, a8, a9);
}
