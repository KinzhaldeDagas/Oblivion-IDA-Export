int __thiscall sub_4EBD00(NiTMap_TESCELL *this)
{
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // esi
  TESFormVtbl *vtbl; // edi
  TESObjectCELL *v10; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+Ch] [ebp-8h] BYREF
  void *v12; // [esp+10h] [ebp-4h] BYREF

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
  v11 = v6;
  while ( v11 )
  {
    v10 = 0;
    sub_452600(this, &v11, &v12, &v10);
    v7 = v10;
    if ( v10 )
    {
      vtbl = v10->vtbl;
      if ( v10->vtbl )
      {
        sub_4EC740(&v10->vtbl->super.InitializeComponent);
        FormHeapFree((unsigned int)vtbl);
      }
      v7->vtbl = 0;
      FormHeapFree((unsigned int)v7);
    }
  }
  return NiTMap_Clear(this);
}
