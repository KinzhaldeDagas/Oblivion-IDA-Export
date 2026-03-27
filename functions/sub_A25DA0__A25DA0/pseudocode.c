void __cdecl sub_A25DA0()
{
  UInt32 *p_unk28; // ebx
  unsigned int v1; // esi
  unsigned int *v2; // ebp
  _DWORD *v3; // eax
  UInt32 v4; // esi
  NodeActor *next; // esi
  volatile LONG *data; // esi
  LONG (__stdcall *v7)(volatile LONG *); // ebp
  UInt32 v8; // esi
  int v9; // [esp+0h] [ebp-14h]

  p_unk28 = &ActorProcessManager_ptr.unk28;
  v9 = 6;
  do
  {
    v1 = *p_unk28;
    if ( *p_unk28 )
    {
      while ( 1 )
      {
        v2 = *(unsigned int **)v1;
        if ( !*(_DWORD *)v1 )
          break;
        sub_605E80(*(unsigned int **)v1);
        FormHeapFree((unsigned int)v2);
        v3 = *(_DWORD **)(v1 + 4);
        if ( v3 )
        {
          *(_DWORD *)(v1 + 4) = v3[1];
          *(_DWORD *)v1 = *v3;
          FormHeapFree((unsigned int)v3);
        }
        else
        {
          *(_DWORD *)v1 = 0;
        }
      }
    }
    FormHeapFree(v1);
    ++p_unk28;
    --v9;
  }
  while ( v9 );
  if ( ActorProcessManager_ptr.unk4C[1] )
  {
    do
    {
      v4 = *(_DWORD *)(ActorProcessManager_ptr.unk4C[1] + 4);
      FormHeapFree(ActorProcessManager_ptr.unk4C[1]);
      ActorProcessManager_ptr.unk4C[1] = v4;
    }
    while ( v4 );
  }
  ActorProcessManager_ptr.unk4C[0] = 0;
  if ( ActorProcessManager_ptr.highActors.node.next )
  {
    do
    {
      next = ActorProcessManager_ptr.highActors.node.next->next;
      FormHeapFree((unsigned int)ActorProcessManager_ptr.highActors.node.next);
      ActorProcessManager_ptr.highActors.node.next = next;
    }
    while ( next );
  }
  ActorProcessManager_ptr.highActors.node.data = 0;
  sub_643230((unsigned int **)&unk_B3BD7C);
  BSSimpleList_Clear(&ActorProcessManager_ptr.actor64);
  data = (volatile LONG *)ActorProcessManager_ptr.tempEffects.node.data;
  v7 = InterlockedDecrement;
  if ( data )
  {
    if ( !v7(data + 1) )
      (**(void (__thiscall ***)(void *, int))data)((void *)data, 1);
  }
  v8 = ActorProcessManager_ptr.unk38[2];
  if ( v8 )
  {
    if ( !v7((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1);
  }
  BSSimpleList_Clear(&ActorProcessManager_ptr.lowActors18.head.node.data);
  BSSimpleList_Clear(&ActorProcessManager_ptr.lowActors0C.head.node.data);
  BSSimpleList_Clear(&ActorProcessManager_ptr);
}
