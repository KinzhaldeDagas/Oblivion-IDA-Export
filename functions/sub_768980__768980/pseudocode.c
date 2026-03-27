LONG __thiscall sub_768980(NiTMap_void *a1, int a2, NiRenderTargetGroup *a3, int a4)
{
  int v5; // ebp
  NiTMap_Entry_void *v6; // edi
  int v7; // ebx
  NiTMap_Entry_void *v8; // edi
  LONG result; // eax

  v5 = (*((int (__thiscall **)(NiTMap_void *, int))a1->vtbl + 1))(a1, a2);
  v6 = a1->m_buckets[v5];
  if ( v6 )
  {
    while ( !(*((unsigned __int8 (__thiscall **)(NiTMap_void *, int, void *))a1->vtbl + 2))(a1, a2, v6->key) )
    {
      v6 = v6->next;
      if ( !v6 )
        goto LABEL_4;
    }
    (*((void (__thiscall **)(NiTMap_void *, NiTMap_Entry_void *))a1->vtbl + 4))(a1, v6);
    v7 = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    result = (*((int (__thiscall **)(NiTMap_void *, NiTMap_Entry_void *, NiRenderTargetGroup *))a1->vtbl + 3))(
               a1,
               v6,
               a3);
  }
  else
  {
LABEL_4:
    v7 = a4;
    v8 = (NiTMap_Entry_void *)(*((int (__thiscall **)(NiTMap_void *))a1->vtbl + 5))(a1);
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
    (*((void (__thiscall **)(NiTMap_void *, NiTMap_Entry_void *, NiRenderTargetGroup *))a1->vtbl + 3))(a1, v8, a3);
    result = (LONG)a1->m_buckets;
    v8->next = *(NiTMap_Entry_void **)(result + 4 * v5);
    a1->m_buckets[v5] = v8;
    ++a1->m_numItems;
  }
  if ( v7 )
  {
    result = InterlockedDecrement((volatile LONG *)(v7 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))v7)(v7, 1);
  }
  return result;
}
