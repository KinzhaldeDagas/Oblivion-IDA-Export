// Verified DistantLOD cell task producer: allocates a 0x2C DistantLODLoaderTaskData payload and stores cell/worldspace/mode plus instancedLODNode (+0x1C) and cellLODBuffer (+0x20). DistantLOD_UpdateExteriorGrid supplies the global scene node and a per-cell Ni2DBuffer. The generic bound-object callback retains the buffer in queued records; the tree override uses the node and ignores the buffer.
void __thiscall DistantLOD_QueueCellLoadTask(
        LockFreeMap *this,
        TESWorldSpace *worldspace,
        int groupX,
        int groupY,
        NiNode *instancedLODNode,
        Ni2DBuffer *cellLODBuffer,
        int priorityIndex,
        DistantLODLoadMode lodMode)
{
  TESWorldSpace *PointerAtOffset7C; // edi
  NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *v9; // esi
  NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *v10; // eax
  Ni2DBuffer *v11; // edi
  bool v12; // zf
  const char *v13; // eax
  IOTask *v14; // eax
  IOTask *v15; // eax
  IOTask *v16; // eax
  Ni2DBuffer *v17; // [esp-8h] [ebp-140h] BYREF
  Ni2DBuffer *v18; // [esp-4h] [ebp-13Ch]
  Ni2DBuffer *a2; // [esp+14h] [ebp-124h] BYREF
  Ni2DBuffer *v20; // [esp+18h] [ebp-120h]
  Ni2DBuffer **v21; // [esp+1Ch] [ebp-11Ch]
  LockFreeMap *v22; // [esp+20h] [ebp-118h]
  char v23[260]; // [esp+24h] [ebp-114h] BYREF
  int v24; // [esp+134h] [ebp-4h]

  PointerAtOffset7C = worldspace; /*0x4bd46b*/
  v9 = 0; /*0x4bd480*/
  v22 = this; /*0x4bd484*/
  v20 = (Ni2DBuffer *)instancedLODNode; /*0x4bd488*/
  a2 = cellLODBuffer; /*0x4bd48c*/
  if ( worldspace ) /*0x4bd490*/
  {
    if ( !DistantLODLoaderTaskMap_HasCellTask(this, groupX, groupY) ) /*0x4bd4a6*/
    {
      if ( Shared_GetPointerAtOffset7C(worldspace) ) /*0x4bd4b5*/
        PointerAtOffset7C = (TESWorldSpace *)Shared_GetPointerAtOffset7C(worldspace); /*0x4bd4c5*/
      if ( lodMode != DistantLODLoadMode_NonTreeBoundObjectsOnly /*0x4bd4d5*/
        || TESWorldSpace_PassesCellLODFilter(PointerAtOffset7C, groupX, groupY) )
      {
        v10 = (NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *)FormHeapAlloc(0x2Cu); /*0x4bd4e4*/
        v21 = (Ni2DBuffer **)v10; /*0x4bd4ec*/
        v24 = 0; /*0x4bd4f2*/
        if ( v10 ) /*0x4bd4f9*/
          v9 = NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(v10); /*0x4bd502*/
        v18 = a2; /*0x4bd508*/
        v24 = 0xFFFFFFFF; /*0x4bd50c*/
        *((_DWORD *)v9 + 2) = PointerAtOffset7C; /*0x4bd517*/
        *(_DWORD *)v9 = groupX; /*0x4bd51a*/
        *((_DWORD *)v9 + 1) = groupY; /*0x4bd51c*/
        NiSmartPointer_Set__((Ni2DBuffer **)v9 + 8, v18); /*0x4bd51f*/
        NiSmartPointer_Set__((Ni2DBuffer **)v9 + 7, v20); /*0x4bd52c*/
        LOWORD(v18) = groupY; /*0x4bd538*/
        LOWORD(v17) = groupX; /*0x4bd539*/
        *((_BYTE *)v9 + 0x28) = 0; /*0x4bd53a*/
        *((_DWORD *)v9 + 9) = lodMode;          // Verified stores the DistantLODLoadMode passed by DistantLOD_UpdateExteriorGrid into task-data +0x24; the worker forwards it to the external parser or worldspace override-record loader. /*0x4bd53e*/
        v11 = 0; /*0x4bd546*/
        v20 = (Ni2DBuffer *)TESObjectCELL_PackExteriorGroupLabel((__int16)v17, (unsigned __int16)v18); /*0x4bd54b*/
        a2 = 0; /*0x4bd54f*/
        v12 = externalLodFiles == 0; /*0x4bd553*/
        v24 = 1; /*0x4bd55a*/
        if ( v12 ) /*0x4bd565*/
        {
          v16 = (IOTask *)FormHeapAlloc(0x30u); /*0x4bd5f2*/
          v21 = (Ni2DBuffer **)v16; /*0x4bd5fa*/
          LOBYTE(v24) = 3; /*0x4bd600*/
          if ( v16 ) /*0x4bd608*/
          {
            v15 = DistantLODLoaderTask_ctorEmbeddedRecordSource( /*0x4bd621*/
                    v16,
                    *(_DWORD *)(4 * priorityIndex + 0xA45A58),
                    (int)v22,
                    (int)v9);
            goto LABEL_17; /*0x4bd626*/
          }
        }
        else
        {
          v13 = (const char *)(*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)v9 + 2) + 0xD4))( /*0x4bd578*/
                                *((_DWORD *)v9 + 2),
                                groupX,
                                groupY);
          _sprintf(v23, "DistantLOD\\%s_%i_%i.lod", v13, v17, v18); /*0x4bd585*/
          if ( !MEMORY[0xB33A04] || !MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v23, 0, 0, 1) ) /*0x4bd5a9*/
            goto LABEL_19; /*0x4bd5ad*/
          v14 = (IOTask *)FormHeapAlloc(0x30u); /*0x4bd5b5*/
          v21 = (Ni2DBuffer **)v14; /*0x4bd5bd*/
          LOBYTE(v24) = 2; /*0x4bd5c3*/
          if ( v14 ) /*0x4bd5cb*/
          {
            v15 = DistantLODLoaderTask_ctorExternalLodFile( /*0x4bd5e9*/
                    v14,
                    v23,
                    *(_DWORD *)(4 * priorityIndex + 0xA45A58),
                    (int)v22,
                    (int)v9);
            goto LABEL_17; /*0x4bd5ee*/
          }
        }
        v15 = 0; /*0x4bd628*/
LABEL_17:
        LOBYTE(v24) = 1; /*0x4bd62a*/
        sub_4BCB70((int *)&a2, (int)v15); /*0x4bd637*/
        v11 = a2; /*0x4bd63c*/
        if ( a2 ) /*0x4bd642*/
        {
          v18 = 0; /*0x4bd644*/
          v21 = &v17; /*0x4bd64c*/
          v17 = a2; /*0x4bd651*/
          InterlockedIncrement((volatile LONG *)&a2->members.width); /*0x4bd653*/
          (*((void (__thiscall **)(LockFreeMap *, Ni2DBuffer *, Ni2DBuffer *, Ni2DBuffer *))v22->vtbl + 3))( /*0x4bd667*/
            v22,
            v20,
            v17,
            v18);
          (*((void (__thiscall **)(IOManager *, Ni2DBuffer *))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], v11); /*0x4bd675*/
          goto LABEL_20; /*0x4bd677*/
        }
LABEL_19:
        DistantLODLoaderTaskData_Destroy((DistantLODLoaderTaskData *)v9); /*0x4bd679*/
        FormHeapFree((unsigned int)v9); /*0x4bd681*/
LABEL_20:
        v24 = 0xFFFFFFFF; /*0x4bd689*/
        if ( v11 ) /*0x4bd696*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v11->members.width) ) /*0x4bd69c*/
            (*(void (__thiscall **)(Ni2DBuffer *, int))v11->__vftable)(v11, 1); /*0x4bd6ae*/
        }
      }
    }
  }
}
