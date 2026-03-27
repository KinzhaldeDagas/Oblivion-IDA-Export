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

  result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  v7 = result;
  v8 = result;
  if ( result )
  {
    v11 = a2;
    do
    {
      result = (int *)v8[1];
      if ( !result && !*v8 )
        break;
      v9 = (ActiveEffect *)*v8;
      if ( !*v8 || v9->members.bTerminated || v9->members.effectItem->effectCode != a4 || v9->members.item == a5 )
      {
        v7 = v8;
        v8 = (int *)v8[1];
      }
      else
      {
        a3 = ActiveEffect_Base_Remove(v9, (char)v7, a3, 1);
        v10 = (int *)(*(int (__thiscall **)(int, ActiveEffect *))(*(_DWORD *)a1 + 8))(a1, v9);
        BSSimpleList_Remove(v10, v11);
        (*(void (__thiscall **)(int, ActiveEffect *))(*(_DWORD *)a1 + 0x14))(a1, v9);
        result = (int *)((int (__thiscall *)(ActiveEffect *, int))v9->vtbl->noDef)(v9, 1);
        if ( v8 != v7 )
          v8 = (int *)v7[1];
      }
    }
    while ( v8 );
  }
  return result;
}
