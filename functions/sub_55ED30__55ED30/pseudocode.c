BSTreeModel **__thiscall sub_55ED30(
        NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> **this,
        BSTreeModel **a2,
        int a3,
        int a4)
{
  BSTreeModel **v5; // ebp
  int v6; // eax
  BSTreeModel *v7; // esi
  BSTreeModel *v8; // edi
  BSTreeModel *v9; // eax
  BSTreeModel *v10; // eax
  volatile LONG *v11; // edi
  BSTreeModel *v12; // esi
  volatile LONG *v13; // esi
  int v15; // [esp+2Ch] [ebp+8h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B39E80, (int)&unk_A2F830);
  *a2 = 0;
  if ( !a3 )
    goto LABEL_34;
  v5 = (BSTreeModel **)sub_55EC20(this, a3);
  v15 = 0xFFFFFFFF;
  v6 = 0;
  while ( 1 )
  {
    v7 = v5[v6];
    if ( !v7 )
    {
      if ( v15 == 0xFFFFFFFF )
        v15 = v6;
      goto LABEL_16;
    }
    if ( *((_DWORD *)v7 + 0x12) == a4 )
      break;
LABEL_16:
    if ( ++v6 >= 1 )
      goto LABEL_10;
  }
  v8 = *a2;
  if ( *a2 != v7 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
        (**(void (__thiscall ***)(BSTreeModel *, int))v8)(v8, 1);
    }
    *a2 = v7;
    InterlockedIncrement((volatile LONG *)v7 + 1);
  }
LABEL_10:
  if ( !*a2 )
  {
    if ( v15 >= 0 )
    {
      v10 = (BSTreeModel *)FormHeapAlloc(0x58u);
      if ( v10 )
        v11 = (volatile LONG *)BSTreeModel::BSTreeModel(v10);
      else
        v11 = 0;
      v12 = *a2;
      if ( *a2 != (BSTreeModel *)v11 )
      {
        if ( v12 )
        {
          if ( !InterlockedDecrement((volatile LONG *)v12 + 1) )
            (**(void (__thiscall ***)(BSTreeModel *, int))v12)(v12, 1);
        }
        *a2 = (BSTreeModel *)v11;
        if ( v11 )
          InterlockedIncrement(v11 + 1);
      }
      v13 = (volatile LONG *)v5[v15];
      if ( v13 != (volatile LONG *)*a2 )
      {
        if ( v13 )
        {
          if ( !InterlockedDecrement(v13 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v13)(v13, 1);
        }
        v9 = *a2;
        v5[v15] = *a2;
LABEL_32:
        if ( v9 )
          InterlockedIncrement((volatile LONG *)v9 + 1);
      }
    }
    else if ( *v5 )
    {
      v9 = *v5;
      *a2 = *v5;
      goto LABEL_32;
    }
  }
LABEL_34:
  NiLeaveCriticalSection_0(&stru_B39E80);
  return a2;
}
