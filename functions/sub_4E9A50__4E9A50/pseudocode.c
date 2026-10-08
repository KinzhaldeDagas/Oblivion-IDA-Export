// Verified TESRoad graph copy override: RTTI-checks source TESRoad, clears destination graph, copies every point position into newly allocated 0x28-byte nodes, then resolves each source adjacency target by position and appends the corresponding destination node to the destination connection list.
MEF_U32PointerMapEntry32 *__thiscall TESRoad_CopyConnectedPointGraph(char *this, NiTMap_Entry_TESCELL *valueOut)
{
  MEF_U32PointerMapEntry32 *result; // eax
  MEF_U32PointerMapEntry32 *v4; // esi
  void *value; // ecx
  MEF_U32PointerMapLayout32 *p_key; // edi
  unsigned int v7; // eax
  struct MEF_U32PointerMapEntry32 *next; // esi
  MEF_U32PointerMapEntry32 **buckets; // edx
  MEF_U32PointerMapEntry32 *v10; // eax
  NiTMap_Entry_TESCELL *i; // esi
  char *v12; // ebx
  NiTMap_Entry_TESCELL *v13; // eax
  float *v14; // edi
  char *v15; // eax
  unsigned int bucketCount; // edx
  unsigned int v17; // eax
  MEF_U32PointerMapEntry32 **v18; // ecx
  char *v19; // esi
  float *v20; // eax
  char *j; // edi
  float *v22; // eax
  int v23; // ebx
  char *ConnectionList; // esi
  int v25; // eax
  bool v26; // zf
  int *v27; // eax
  MEF_U32PointerMapEntry32 *position; // [esp+14h] [ebp-1Ch] BYREF
  MEF_U32PointerMapLayout32 *v29; // [esp+18h] [ebp-18h]
  char *v30; // [esp+1Ch] [ebp-14h]
  unsigned int keyOut; // [esp+20h] [ebp-10h] BYREF
  unsigned int v32; // [esp+2Ch] [ebp-4h]

  v30 = this; /*0x4e9a79*/
  result = (MEF_U32PointerMapEntry32 *)OblivionDynamicCast( /*0x4e9a90*/
                                         valueOut,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESRoad `RTTI Type Descriptor',
                                         0);
  v4 = result; /*0x4e9a95*/
  if ( result )
  {
    TESRoad_ClearConnectedPointMap((TESRoad *)this); /*0x4e9aa4*/
    value = v4[2].value; /*0x4e9aa9*/
    p_key = (MEF_U32PointerMapLayout32 *)&v4[2].key; /*0x4e9aac*/
    v7 = 0; /*0x4e9aaf*/
    v29 = (MEF_U32PointerMapLayout32 *)&v4[2].key; /*0x4e9ab3*/
    if ( value ) /*0x4e9ab7*/
    {
      next = v4[3].next; /*0x4e9ab9*/
      buckets = p_key->buckets; /*0x4e9abc*/
      while ( !*buckets ) /*0x4e9ac2*/
      {
        ++v7; /*0x4e9ac4*/
        ++buckets; /*0x4e9ac7*/
        if ( v7 >= (unsigned int)value ) /*0x4e9acc*/
          goto LABEL_6; /*0x4e9acc*/
      }
      v10 = *(&next->next + v7); /*0x4e9b2e*/
    }
    else
    {
LABEL_6:
      v10 = 0; /*0x4e9ace*/
    }
    for ( position = v10; position; p_key = v29 )
    {
      valueOut = 0; /*0x4e9af1*/
      NiTMap_U32Pointer_GetNextEntry(p_key, &position, &keyOut, (void **)&valueOut); /*0x4e9af5*/
      for ( i = valueOut; i; i = (NiTMap_Entry_TESCELL *)i->key )
      {
        if ( !i->key && !i->next ) /*0x4e9b07*/
          break; /*0x4e9b09*/
        v12 = (char *)i->next; /*0x4e9b0b*/
        v13 = (NiTMap_Entry_TESCELL *)FormHeapAlloc(0x28u); /*0x4e9b0f*/
        valueOut = v13; /*0x4e9b17*/
        v32 = 0; /*0x4e9b1d*/
        v14 = v13 ? TESConnectedPoint_ctor((float *)v13) : 0;
        v32 = 0xFFFFFFFF; /*0x4e9b37*/
        v15 = TESConnectedPoint_GetPosition(v12); /*0x4e9b3f*/
        TESConnectedPoint_SetPosition(v14, v15); /*0x4e9b47*/
        TESRoad_AddConnectedPointIfMissing(v30, (signed int)v14); /*0x4e9b51*/
      }
    }
    bucketCount = p_key->bucketCount; /*0x4e9b6b*/
    v17 = 0; /*0x4e9b6e*/
    if ( bucketCount ) /*0x4e9b72*/
    {
      v18 = p_key->buckets; /*0x4e9b77*/
      while ( !*v18 ) /*0x4e9b82*/
      {
        ++v17; /*0x4e9b84*/
        ++v18; /*0x4e9b87*/
        if ( v17 >= bucketCount ) /*0x4e9b8c*/
          goto LABEL_21; /*0x4e9b8c*/
      }
      result = p_key->buckets[v17]; /*0x4e9b9e*/
    }
    else
    {
LABEL_21:
      result = 0; /*0x4e9b8e*/
    }
    position = result; /*0x4e9b92*/
    if ( result ) /*0x4e9b96*/
    {
      while ( 1 ) /*0x4e9bb8*/
      {
        valueOut = 0; /*0x4e9bb8*/
        for ( result = (MEF_U32PointerMapEntry32 *)NiTMap_U32Pointer_GetNextEntry( /*0x4e9bc5*/
                                                     p_key,
                                                     &position,
                                                     &keyOut,
                                                     (void **)&valueOut);
              valueOut;
              result = (MEF_U32PointerMapEntry32 *)valueOut )
        {
          result = (MEF_U32PointerMapEntry32 *)valueOut; /*0x4e9bcb*/
          if ( !valueOut->key && !valueOut->next ) /*0x4e9bd4*/
            break; /*0x4e9bd6*/
          v19 = (char *)valueOut->next; /*0x4e9bdc*/
          v20 = (float *)TESConnectedPoint_GetPosition((char *)valueOut->next); /*0x4e9be0*/
          keyOut = TESRoad_FindConnectedPointByPosition(v30, v20); /*0x4e9bf1*/
          for ( j = TESPathGridPoint_GetConnectionList(v19); j; j = *((char **)j + 1) ) /*0x4e9bfe*/
          {
            if ( !*((_DWORD *)j + 1) && !*(_DWORD *)j ) /*0x4e9c05*/
              break; /*0x4e9c07*/
            v22 = (float *)TESConnectedPoint_GetPosition(*(char **)j); /*0x4e9c0b*/
            v23 = TESRoad_FindConnectedPointByPosition(v30, v22); /*0x4e9c1a*/
            if ( v23 ) /*0x4e9c1e*/
            {
              ConnectionList = TESPathGridPoint_GetConnectionList((char *)keyOut); /*0x4e9c29*/
              v25 = (int)(ConnectionList + 4); /*0x4e9c2e*/
              if ( *((_DWORD *)ConnectionList + 1) ) /*0x4e9c2b*/
              {
                do /*0x4e9c3b*/
                {
                  ConnectionList = *(char **)v25; /*0x4e9c33*/
                  v26 = *(_DWORD *)(*(_DWORD *)v25 + 4) == 0; /*0x4e9c35*/
                  v25 = *(_DWORD *)v25 + 4; /*0x4e9c38*/
                }
                while ( !v26 ); /*0x4e9c3b*/
              }
              if ( *(_DWORD *)ConnectionList ) /*0x4e9c3d*/
              {
                v27 = (int *)FormHeapAlloc(8u); /*0x4e9c43*/
                if ( v27 ) /*0x4e9c4d*/
                {
                  *v27 = v23; /*0x4e9c4f*/
                  v27[1] = 0; /*0x4e9c51*/
                  *((_DWORD *)ConnectionList + 1) = v27; /*0x4e9c54*/
                }
                else
                {
                  *((_DWORD *)ConnectionList + 1) = 0; /*0x4e9c5b*/
                }
              }
              else
              {
                *(_DWORD *)ConnectionList = v23; /*0x4e9c60*/
              }
            }
          }
          valueOut = (NiTMap_Entry_TESCELL *)valueOut->key; /*0x4e9c72*/
        }
        if ( !position ) /*0x4e9c80*/
          break; /*0x4e9c80*/
        p_key = v29; /*0x4e9ba3*/
      }
    }
  }
  return result; /*0x4e9c86*/
}
