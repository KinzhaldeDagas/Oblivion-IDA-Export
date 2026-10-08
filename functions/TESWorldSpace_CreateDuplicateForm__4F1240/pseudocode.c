// Verified: the special TESFormVtbl +0x38 CreateDuplicateForm override clones worldspace cells and persistentCell but does not build +0x60. Full plugin/game loading later reconstructs +0x60 via TESDataHandler_LoadFiles; Candidate concern is only for queries made after duplication and before any full-load reconstruction. Whether that interval occurs in live callers is Unknown.
TESForm *__thiscall TESWorldSpace::CreateDuplicateForm(TESWorldSpace *this, int duplicateMode, void *cloneMap)
{
  void *v3; // ebp
  TESForm *v5; // eax
  TESWorldSpace *v6; // edi
  NiTMap_TESCELL *cellMap; // edx
  UInt32 m_numBuckets; // ecx
  UInt32 v9; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL **v11; // esi
  int v12; // eax
  NiTMap_TESCELL *v13; // ecx
  void *v14; // eax
  TESObjectCELL *v15; // eax
  TESObjectCELL *v16; // esi
  TESObjectCELL *persistentCell; // ecx
  void *v18; // eax
  TESObjectCELL *v19; // eax
  TESObjectCELL *v20; // ecx
  UInt32 v21; // ecx
  void *v22; // eax
  _DWORD *v23; // esi
  UInt32 v24; // ecx
  void (__thiscall *v25)(_DWORD *, int); // eax
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v3 = cloneMap; /*0x4f1247*/
  v5 = TESForm_Clone((TESForm *)this, duplicateMode, cloneMap); /*0x4f125f*/
  v6 = (TESWorldSpace *)OblivionDynamicCast( /*0x4f126a*/
                          v5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESWorldSpace `RTTI Type Descriptor',
                          0);
  NiTMap_Clear(&v6->cellMap->vtbl); /*0x4f1272*/
  cellMap = this->cellMap; /*0x4f1277*/
  m_numBuckets = cellMap->m_numBuckets; /*0x4f127a*/
  v9 = 0; /*0x4f127d*/
  if ( m_numBuckets ) /*0x4f1281*/
  {
    m_buckets = cellMap->m_buckets; /*0x4f1283*/
    v11 = m_buckets; /*0x4f1286*/
    while ( !*v11 ) /*0x4f1293*/
    {
      ++v9; /*0x4f1299*/
      ++v11; /*0x4f129c*/
      if ( v9 >= m_numBuckets ) /*0x4f12a1*/
        goto LABEL_5; /*0x4f12a1*/
    }
    v12 = (int)m_buckets[v9]; /*0x4f13c1*/
  }
  else
  {
LABEL_5:
    v12 = 0; /*0x4f12a3*/
  }
  duplicateMode = v12; /*0x4f12a7*/
  while ( duplicateMode ) /*0x4f12ab*/
  {
    v13 = this->cellMap; /*0x4f12b5*/
    cloneMap = 0; /*0x4f12c2*/
    NiTMap_U32Pointer_GetNextEntry( /*0x4f12ca*/
      (MEF_U32PointerMapLayout32 *)v13,
      (MEF_U32PointerMapEntry32 **)&duplicateMode,
      &keyOut,
      &cloneMap);
    if ( cloneMap ) /*0x4f12d5*/
    {
      v14 = (void *)(*(int (__thiscall **)(void *, _DWORD, void *))(*(_DWORD *)cloneMap + 0x38))(cloneMap, 0, v3); /*0x4f12ed*/
      v15 = (TESObjectCELL *)OblivionDynamicCast( /*0x4f12f0*/
                               v14,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESObjectCELL `RTTI Type Descriptor',
                               0);
      v16 = v15; /*0x4f12f5*/
      if ( v15 ) /*0x4f12fc*/
      {
        v15->vtbl->SetFromActiveFile((TESForm *)v15, 1); /*0x4f130a*/
        TESWorldSpace_RegisterExteriorCell(v6, v16); /*0x4f130f*/
      }
    }
  }
  persistentCell = this->persistentCell; /*0x4f131b*/
  if ( persistentCell ) /*0x4f1320*/
  {
    v18 = (void *)((int (__thiscall *)(TESObjectCELL *, _DWORD, void *))persistentCell->vtbl->Unk_0E)( /*0x4f1338*/
                    persistentCell,
                    0,
                    v3);
    v19 = (TESObjectCELL *)OblivionDynamicCast( /*0x4f133b*/
                             v18,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESObjectCELL `RTTI Type Descriptor',
                             0);
    if ( v19 ) /*0x4f1345*/
    {
      v6->persistentCell = v19; /*0x4f1347*/
      v19->vtbl->SetFromActiveFile((TESForm *)v19, 1); /*0x4f1356*/
    }
  }
  v20 = v6->persistentCell; /*0x4f1358*/
  if ( v20 ) /*0x4f135d*/
    TESWorldSpace_DistributePersistentCellReferences(v20, v6);// Verified clone-path call: after cloning the WorldSpace persistentCell, CreateDuplicateForm calls TESWorldSpace_DistributePersistentCellReferences to attach its references to cloned cells. No SubSpace index rebuild occurs in this call path. /*0x4f1360*/
  v21 = this->unknown04C[2];                    // Verified WorldSpace duplication clones the TESRoad at +0x54, releases any destination road, assigns the clone, and resets its owning WorldSpace backpointer at TESRoad+0x2C. The serialized ROAD loader similarly attaches through TESWorldSpace_SetRoad and writes this owner pointer. /*0x4f1365*/
  if ( v21 ) /*0x4f136a*/
  {
    v22 = (void *)(*(int (__thiscall **)(UInt32, _DWORD, void *))(*(_DWORD *)v21 + 0x38))(v21, 0, v3); /*0x4f1382*/
    v23 = OblivionDynamicCast( /*0x4f138a*/
            v22,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESRoad `RTTI Type Descriptor',
            0);
    if ( v23 ) /*0x4f1391*/
    {
      v24 = v6->unknown04C[2]; /*0x4f1393*/
      if ( v24 ) /*0x4f1398*/
        (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)v24 + 0x10))(v24, 1); /*0x4f13a1*/
      v6->unknown04C[2] = (UInt32)v23; /*0x4f13a3*/
      v25 = *(void (__thiscall **)(_DWORD *, int))(*v23 + 0x90); /*0x4f13a8*/
      v23[0xB] = v6; /*0x4f13b2*/
      v25(v23, 1); /*0x4f13b5*/
    }
  }
  return (TESForm *)v6; /*0x4f13b9*/
}
