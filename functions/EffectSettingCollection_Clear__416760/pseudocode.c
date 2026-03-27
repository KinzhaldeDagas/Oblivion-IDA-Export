int __thiscall EffectSettingCollection_Clear(NiTMap_TESCELL *this)
{
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edi
  NiTMap_Entry_TESCELL **v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESForm *v8; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v9; // [esp+Ch] [ebp-8h] BYREF
  void *v10; // [esp+10h] [ebp-4h] BYREF

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
  v9 = v6;
  while ( v9 )
  {
    v8 = 0;
    sub_452600(this, &v9, &v10, (TESObjectCELL **)&v8);
    if ( v8 )
      v8->vtbl->Destroy(v8, 1);
  }
  return NiTMap_Clear(this);
}
