int *__userpurge MagicTarget_RemoveEffectsFromOtherItems@<eax>(
        int a1@<ecx>,
        int a2@<esi>,
        double a3@<st0>,
        int a4,
        MagicItem *a5)
{
  int *result; // eax
  int *v7; // ebp
  int *v8; // edi
  ActiveEffect *v9; // esi
  int *v10; // eax
  int v11; // [esp-4h] [ebp-10h]

  result = (int *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 8))(a1, a3); /*0x6a255a*/
  v7 = result; /*0x6a255c*/
  v8 = result; /*0x6a2560*/
  if ( result ) /*0x6a2562*/
  {
    v11 = a2; /*0x6a2564*/
    do /*0x6a25cd*/
    {
      result = (int *)v8[1]; /*0x6a2565*/
      if ( !result && !*v8 ) /*0x6a256c*/
        break; /*0x6a256e*/
      v9 = (ActiveEffect *)*v8; /*0x6a2570*/
      if ( !*v8 || v9->members.bTerminated || v9->members.effectItem->effectCode != a4 || v9->members.item == a5 ) /*0x6a258e*/
      {
        v7 = v8; /*0x6a25c7*/
        v8 = (int *)v8[1]; /*0x6a25c9*/
      }
      else
      {
        a3 = ActiveEffect_Base_Remove(v9, (char)v7, a3, 1); /*0x6a2594*/
        v10 = (int *)(*(int (__thiscall **)(int, ActiveEffect *))(*(_DWORD *)a1 + 8))(a1, v9); /*0x6a25a1*/
        BSSimpleList_Remove(v10, v11); /*0x6a25a5*/
        (*(void (__thiscall **)(int, ActiveEffect *))(*(_DWORD *)a1 + 0x14))(a1, v9); /*0x6a25b2*/
        result = (int *)((int (__thiscall *)(ActiveEffect *, int))v9->vtbl->scalarDeletingDestructor)(v9, 1); /*0x6a25bc*/
        if ( v8 != v7 ) /*0x6a25c0*/
          v8 = (int *)v7[1]; /*0x6a25c2*/
      }
    }
    while ( v8 ); /*0x6a25cd*/
  }
  return result; /*0x6a25d0*/
}
