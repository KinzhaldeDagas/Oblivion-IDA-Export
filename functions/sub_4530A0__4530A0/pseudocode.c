//
// Verified: clears/deletes primary map and frees nested ID lists, then frees secondary serialized-buffer list; callers SaveGame 4657EF and LoadGame 465AAA/4669BA. Owner layout/prototype beyond observed pointers remains Candidate; retain void *.
void __thiscall SaveLoad_ClearReferenceMapState(void *owner)
{
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // esi
  unsigned int *v9; // edi
  unsigned int v10; // eax
  bool v11; // zf
  int v12; // edi
  unsigned int *v13; // esi
  unsigned int v14; // edi
  char v15; // [esp+Fh] [ebp-9h] BYREF
  unsigned int v16; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v17; // [esp+14h] [ebp-4h] BYREF

  v2 = *(_DWORD *)owner; /*0x4530a6*/
  v3 = *(_DWORD *)(*(_DWORD *)owner + 4); /*0x4530a8*/
  v4 = 0; /*0x4530ac*/
  if ( v3 ) /*0x4530b1*/
  {
    v5 = *(_DWORD **)(v2 + 8); /*0x4530b3*/
    v6 = v5; /*0x4530b6*/
    while ( !*v6 ) /*0x4530c3*/
    {
      ++v4; /*0x4530c9*/
      ++v6; /*0x4530cc*/
      if ( v4 >= v3 ) /*0x4530d1*/
        goto LABEL_5; /*0x4530d1*/
    }
    v7 = v5[v4]; /*0x4531a0*/
  }
  else
  {
LABEL_5:
    v7 = 0; /*0x4530d3*/
  }
  v16 = v7; /*0x4530d7*/
  while ( v16 ) /*0x4530db*/
  {
    sub_452800(*(unsigned int **)owner, &v16, &v15, &v17); /*0x4530f1*/
    v8 = v17; /*0x4530f6*/
    v9 = v17; /*0x4530fc*/
    if ( v17 ) /*0x4530fe*/
    {
      do /*0x453114*/
      {
        v10 = *v9; /*0x453100*/
        v11 = *v9 == 0; /*0x453102*/
        v9 = (unsigned int *)v9[1]; /*0x453104*/
        if ( !v11 ) /*0x453107*/
          FormHeapFree(v10); /*0x45310a*/
      }
      while ( v9 ); /*0x453114*/
      if ( v8[1] ) /*0x453116*/
      {
        do /*0x453134*/
        {
          v12 = *(_DWORD *)(v8[1] + 4); /*0x453123*/
          FormHeapFree(v8[1]); /*0x453127*/
          v8[1] = v12; /*0x453131*/
        }
        while ( v12 ); /*0x453134*/
      }
      *v8 = 0; /*0x453137*/
      FormHeapFree((unsigned int)v8); /*0x45313d*/
    }
  }
  if ( *(_DWORD *)owner ) /*0x45314c*/
    (***(void (__thiscall ****)(_DWORD, int))owner)(*(_DWORD *)owner, 1); /*0x453158*/
  v13 = *((unsigned int **)owner + 1); /*0x45315a*/
  if ( v13 ) /*0x45315f*/
  {
    do /*0x453183*/
    {
      v14 = *v13; /*0x453161*/
      if ( *v13 ) /*0x453161*/
      {
        MemoryHeap_Free_checked(*(void **)(v14 + 4)); /*0x453170*/
        FormHeapFree(v14); /*0x453176*/
      }
      v13 = (unsigned int *)v13[1]; /*0x45317e*/
    }
    while ( v13 ); /*0x453183*/
    BSSimpleList_Clear(*((_DWORD **)owner + 1)); /*0x453188*/
    FormHeapFree(*((_DWORD *)owner + 1)); /*0x453191*/
  }
}
