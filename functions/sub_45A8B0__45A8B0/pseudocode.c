int __thiscall sub_45A8B0(NiTMap_TESCELL *this)
{
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // esi
  TESObjectCELL *v9; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v10; // [esp+Ch] [ebp-8h] BYREF
  void *v11; // [esp+10h] [ebp-4h] BYREF

  m_numBuckets = this->m_numBuckets;
  v3 = 0;
  if ( m_numBuckets )
  {
    m_buckets = this->m_buckets;
    v5 = m_buckets;
    while ( !*v5 )
    {
      ++v3;
      ++v5;
      if ( v3 >= m_numBuckets )
        goto LABEL_5;
    }
    v6 = m_buckets[v3];
  }
  else
  {
LABEL_5:
    v6 = 0;
  }
  v10 = v6;
  while ( v10 )
  {
    v9 = 0;
    sub_452600(this, &v10, &v11, &v9);
    v7 = v9;
    if ( v9 )
    {
      if ( *(_DWORD *)&v9->members.super.type )
        MemoryHeap_Free_checked(*(void **)&v9->members.super.type);
      FormHeapFree((unsigned int)v7);
    }
  }
  return NiTMap_Clear(this);
}
