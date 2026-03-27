int __userpurge MagicTarget_ProcessEffectsFromItem_::ActiveEffectLoop@<eax>(
        ActiveEffect **a1@<ebx>,
        int a2@<edi>,
        double a3@<st1>,
        int a4,
        int a5,
        int a6,
        int a7,
        MagicItem *a8)
{
  ActiveEffect *v8; // esi
  int *v9; // ebp
  int *v10; // eax

  if ( !a1[1] && !*a1 )
    return MagicTarget_ProcessEffectsFromItem_::Done(a4);
  v8 = *a1;
  v9 = (int *)a1[1];
  if ( *a1 )
  {
    if ( v8->members.item == a8 )
    {
      if ( !v8->members.bApplied )
        ActiveEffect_Base_ProcessEffect(*a1, (char)v9, a3, flt_A2FAAC, flt_A2FAAC);
      if ( v8->members.bTerminated )
      {
        if ( a1 == (ActiveEffect **)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) )
          v9 = (int *)a1;
        v10 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
        BSSimpleList_Remove(v10, (int)v8);
        (*(void (__thiscall **)(int, ActiveEffect *))(*(_DWORD *)a2 + 0x14))(a2, v8);
        ((void (__thiscall *)(ActiveEffect *, int))v8->vtbl->noDef)(v8, 1);
      }
    }
  }
  return MagicTarget_ProcessEffectsFromItem_::ActiveEffectLoop_next((int)v9, a4);
}
