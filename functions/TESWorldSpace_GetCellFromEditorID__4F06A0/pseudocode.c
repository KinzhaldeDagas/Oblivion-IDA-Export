TESForm *__thiscall TESWorldSpace::GetCellFromEditorID(TESWorldSpace *this, char *Str2)
{
  TESForm *v2; // edi
  NiTMap_TESCELL *cellMap; // ecx
  UInt32 m_numBuckets; // edx
  UInt32 v6; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v8; // ecx
  NiTMap_Entry_TESCELL *v9; // eax
  NiTMap_TESCELL *v10; // ecx
  TESForm *v11; // esi
  char *v12; // eax
  TESForm *v14; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v15; // [esp+Ch] [ebp-8h] BYREF
  void *v16; // [esp+10h] [ebp-4h] BYREF

  v2 = 0;
  if ( !Str2 )
    return 0;
  cellMap = this->cellMap;
  m_numBuckets = cellMap->m_numBuckets;
  v6 = 0;
  if ( m_numBuckets )
  {
    m_buckets = cellMap->m_buckets;
    v8 = m_buckets;
    while ( !*v8 )
    {
      ++v6;
      ++v8;
      if ( v6 >= m_numBuckets )
        goto LABEL_6;
    }
    v9 = m_buckets[v6];
  }
  else
  {
LABEL_6:
    v9 = 0;
  }
  v15 = v9;
  while ( v15 )
  {
    if ( v2 )
      break;
    v10 = this->cellMap;
    v14 = 0;
    sub_452600(v10, &v15, &v16, (TESObjectCELL **)&v14);
    v11 = v14;
    if ( v14 )
    {
      v12 = (char *)v14->vtbl->GetEditorName(v14);
      if ( !_strcmp(v12, Str2) )
        v2 = v11;
    }
  }
  return v2;
}
