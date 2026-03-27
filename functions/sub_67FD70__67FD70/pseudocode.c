int __cdecl sub_67FD70(Atmosphere *a1)
{
  _DWORD *v1; // esi
  NiAVObject *v2; // ebp
  NiSurfaceData *SurfaceData; // ebx
  _DWORD *v4; // ebp
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // edi
  int v15; // ebx
  _DWORD *v16; // ecx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *v22; // edi
  _DWORD *v23; // eax
  _DWORD *v25; // [esp+1Ch] [ebp-14h] BYREF
  int a2; // [esp+20h] [ebp-10h]
  int v27; // [esp+2Ch] [ebp-4h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g_pathingMutex, (int)&unk_A2F830);
  v1 = 0;
  if ( a1 )
  {
    v25 = 0;
    v2 = sub_452A60(a1);
    a2 = (int)v2;
    SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)a1);
    if ( NiTMap_GetAt(lowPathWorld_ptr, (int)v2, &v25) )
    {
      v4 = v25;
      if ( v25 )
      {
        v5 = v25;
        v25 = 0;
        if ( NiTMap_GetAt(v5, (int)SurfaceData, &v25) && v25 )
        {
          BSSimpleList_PushFront(v25, (int)a1);
          goto LABEL_22;
        }
        v6 = (_DWORD *)FormHeapAlloc(8u);
        if ( v6 )
        {
          *v6 = 0;
          v6[1] = 0;
          v7 = v6;
          BSSimpleList_PushFront(v6, (int)a1);
        }
        else
        {
          v7 = 0;
          BSSimpleList_PushFront(0, (int)a1);
        }
LABEL_21:
        NiTMap_SetAt(v4, (int)SurfaceData, (int)v7);
LABEL_22:
        if ( (NiSurfaceData *)a2 == SurfaceData )
          return NiLeaveCriticalSection_0(&g_pathingMutex);
        v13 = lowPathWorld_ptr;
        v25 = 0;
        if ( NiTMap_GetAt(v13, (int)SurfaceData, &v25) )
        {
          v14 = v25;
          if ( v25 )
          {
            v15 = a2;
            v16 = v25;
            v25 = 0;
            if ( NiTMap_GetAt(v16, a2, &v25) && v25 )
            {
              BSSimpleList_PushFront(v25, (int)a1);
            }
            else
            {
              v17 = (_DWORD *)FormHeapAlloc(8u);
              if ( v17 )
              {
                *v17 = 0;
                v17[1] = 0;
                v1 = v17;
              }
              BSSimpleList_PushFront(v1, (int)a1);
              NiTMap_SetAt(v14, v15, (int)v1);
            }
            return NiLeaveCriticalSection_0(&g_pathingMutex);
          }
        }
        if ( LOBYTE(SurfaceData->unk04) == 0x35 )
        {
          v18 = (_DWORD *)FormHeapAlloc(0x10u);
          v25 = v18;
          v27 = 2;
          if ( v18 )
          {
            v19 = NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(
                    (NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *)v18,
                    0xBFu);
LABEL_37:
            v21 = lowPathWorld_ptr;
            v22 = v19;
            v27 = 0xFFFFFFFF;
            NiTMap_SetAt(v21, (int)SurfaceData, (int)v19);
            v23 = (_DWORD *)FormHeapAlloc(8u);
            if ( v23 )
            {
              *v23 = 0;
              v23[1] = 0;
              v1 = v23;
            }
            BSSimpleList_PushFront(v1, (int)a1);
            NiTMap_SetAt(v22, a2, (int)v1);
            return NiLeaveCriticalSection_0(&g_pathingMutex);
          }
        }
        else
        {
          v20 = (_DWORD *)FormHeapAlloc(0x10u);
          v25 = v20;
          v27 = 3;
          if ( v20 )
          {
            v19 = NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(
                    (NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *)v20,
                    0x25u);
            goto LABEL_37;
          }
        }
        v19 = 0;
        goto LABEL_37;
      }
      v2 = (NiAVObject *)a2;
    }
    if ( LOBYTE(v2->members.super.super.m_uiRefCount) == 0x35 )
    {
      v8 = (_DWORD *)FormHeapAlloc(0x10u);
      v25 = v8;
      v27 = 0;
      if ( v8 )
      {
        v9 = NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(
               (NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *)v8,
               0xBFu);
LABEL_17:
        v11 = lowPathWorld_ptr;
        v4 = v9;
        v27 = 0xFFFFFFFF;
        NiTMap_SetAt(v11, a2, (int)v9);
        v12 = (_DWORD *)FormHeapAlloc(8u);
        if ( v12 )
        {
          *v12 = 0;
          v12[1] = 0;
          v7 = v12;
        }
        else
        {
          v7 = 0;
        }
        BSSimpleList_PushFront(v7, (int)a1);
        goto LABEL_21;
      }
    }
    else
    {
      v10 = (_DWORD *)FormHeapAlloc(0x10u);
      v25 = v10;
      v27 = 1;
      if ( v10 )
      {
        v9 = NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(
               (NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *)v10,
               0x25u);
        goto LABEL_17;
      }
    }
    v9 = 0;
    goto LABEL_17;
  }
  return NiLeaveCriticalSection_0(&g_pathingMutex);
}
