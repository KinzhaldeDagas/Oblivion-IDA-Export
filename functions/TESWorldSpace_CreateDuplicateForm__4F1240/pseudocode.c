int __thiscall TESWorldSpace::CreateDuplicateForm(TESWorldSpace *this, int a2, void *cloneMap)
{
  double v3; // st5
  double v4; // st6
  void *v5; // ebp
  TESForm *v7; // eax
  TESWorldSpace *v8; // edi
  NiTMap_TESCELL *cellMap; // edx
  UInt32 m_numBuckets; // ecx
  UInt32 v11; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL **v13; // esi
  int v14; // eax
  NiTMap_TESCELL *v15; // ecx
  void *v16; // eax
  TESObjectCELL *v17; // eax
  TESObjectCELL *v18; // esi
  TESObjectCELL *unk034; // ecx
  void *v20; // eax
  TESObjectCELL *v21; // eax
  TESObjectCELL *v22; // ecx
  UInt32 v23; // ecx
  void *v24; // eax
  _DWORD *v25; // esi
  UInt32 v26; // ecx
  void (__thiscall *v27)(_DWORD *, int); // eax
  void *v29; // [esp+10h] [ebp-4h] BYREF

  v5 = cloneMap;
  v7 = TESForm_Clone((TESForm *)this, a2, cloneMap);
  v8 = (TESWorldSpace *)OblivionDynamicCast(
                          v7,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESWorldSpace `RTTI Type Descriptor',
                          0);
  NiTMap_Clear(&v8->cellMap->vtbl);
  cellMap = this->cellMap;
  m_numBuckets = cellMap->m_numBuckets;
  v11 = 0;
  if ( m_numBuckets )
  {
    m_buckets = cellMap->m_buckets;
    v13 = m_buckets;
    while ( !*v13 )
    {
      ++v11;
      ++v13;
      if ( v11 >= m_numBuckets )
        goto LABEL_5;
    }
    v14 = (int)m_buckets[v11];
  }
  else
  {
LABEL_5:
    v14 = 0;
  }
  a2 = v14;
  while ( a2 )
  {
    v15 = this->cellMap;
    cloneMap = 0;
    sub_452600(v15, (NiTMap_Entry_TESCELL **)&a2, &v29, (TESObjectCELL **)&cloneMap);
    if ( cloneMap )
    {
      v16 = (void *)(*(int (__thiscall **)(void *, _DWORD, void *))(*(_DWORD *)cloneMap + 0x38))(cloneMap, 0, v5);
      v17 = (TESObjectCELL *)OblivionDynamicCast(
                               v16,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESObjectCELL `RTTI Type Descriptor',
                               0);
      v18 = v17;
      if ( v17 )
      {
        v17->vtbl->SetFromActiveFile((TESForm *)v17, 1);
        sub_4EFEF0(v8, v18);
      }
    }
  }
  unk034 = this->unk034;
  if ( unk034 )
  {
    v20 = (void *)((int (__thiscall *)(TESObjectCELL *, _DWORD, void *))unk034->vtbl->Unk_0E)(unk034, 0, v5);
    v21 = (TESObjectCELL *)OblivionDynamicCast(
                             v20,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESObjectCELL `RTTI Type Descriptor',
                             0);
    if ( v21 )
    {
      v8->unk034 = v21;
      v21->vtbl->SetFromActiveFile((TESForm *)v21, 1);
    }
  }
  v22 = v8->unk034;
  if ( v22 )
    sub_4D3A00((int)v22, v3, v4, v8);
  v23 = this->unk04C[2];
  if ( v23 )
  {
    v24 = (void *)(*(int (__thiscall **)(UInt32, _DWORD, void *))(*(_DWORD *)v23 + 0x38))(v23, 0, v5);
    v25 = OblivionDynamicCast(
            v24,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESRoad `RTTI Type Descriptor',
            0);
    if ( v25 )
    {
      v26 = v8->unk04C[2];
      if ( v26 )
        (*(void (__thiscall **)(UInt32, int))(*(_DWORD *)v26 + 0x10))(v26, 1);
      v8->unk04C[2] = (UInt32)v25;
      v27 = *(void (__thiscall **)(_DWORD *, int))(*v25 + 0x90);
      v25[0xB] = v8;
      v27(v25, 1);
    }
  }
  return (int)v8;
}
