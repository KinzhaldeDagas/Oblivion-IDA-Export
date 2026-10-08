LONG __thiscall sub_768980(NiTMap_void *a1, int a2, NiRenderTargetGroup *a3, int a4)
{
  int v5; // ebp
  NiTMap_Entry_void *v6; // edi
  int v7; // ebx
  NiTMap_Entry_void *v8; // edi
  LONG result; // eax

  v5 = (*((int (__thiscall **)(NiTMap_void *, int))a1->vtbl + 1))(a1, a2); /*0x768992*/
  v6 = a1->m_buckets[v5]; /*0x768997*/
  if ( v6 ) /*0x76899c*/
  {
    while ( !(*((unsigned __int8 (__thiscall **)(NiTMap_void *, int, void *))a1->vtbl + 2))(a1, a2, v6->key) ) /*0x7689b0*/
    {
      v6 = v6->next; /*0x7689b2*/
      if ( !v6 ) /*0x7689b6*/
        goto LABEL_4; /*0x7689b6*/
    }
    (*((void (__thiscall **)(NiTMap_void *, NiTMap_Entry_void *))a1->vtbl + 4))(a1, v6); /*0x768a26*/
    v7 = a4; /*0x768a2b*/
    if ( a4 ) /*0x768a33*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x768a39*/
    result = (*((int (__thiscall **)(NiTMap_void *, NiTMap_Entry_void *, NiRenderTargetGroup *))a1->vtbl + 3))( /*0x768a4c*/
               a1,
               v6,
               a3);
  }
  else
  {
LABEL_4:
    v7 = a4; /*0x7689b8*/
    v8 = (NiTMap_Entry_void *)(*((int (__thiscall **)(NiTMap_void *))a1->vtbl + 5))(a1); /*0x7689c8*/
    if ( a4 ) /*0x7689ce*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x7689d4*/
    (*((void (__thiscall **)(NiTMap_void *, NiTMap_Entry_void *, NiRenderTargetGroup *))a1->vtbl + 3))(a1, v8, a3); /*0x7689e7*/
    result = (LONG)a1->m_buckets; /*0x7689e9*/
    v8->next = *(NiTMap_Entry_void **)(result + 4 * v5); /*0x7689ef*/
    a1->m_buckets[v5] = v8; /*0x7689f4*/
    ++a1->m_numItems; /*0x7689f7*/
  }
  if ( v7 ) /*0x7689fd*/
  {
    result = InterlockedDecrement((volatile LONG *)(v7 + 4)); /*0x768a03*/
    if ( !result ) /*0x768a0b*/
      return (**(LONG (__thiscall ***)(int, int))v7)(v7, 1); /*0x768a15*/
  }
  return result; /*0x768a17*/
}
