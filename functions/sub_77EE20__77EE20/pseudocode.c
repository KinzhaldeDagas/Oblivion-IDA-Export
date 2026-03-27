void __cdecl sub_77EE20(TESObjectCELL *a1)
{
  NiTMap_TESCELL *v1; // ecx
  UInt32 m_numBuckets; // esi
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edx
  NiTMap_Entry_TESCELL *v5; // eax
  TESObjectCELL *v6; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+8h] [ebp-8h] BYREF
  NiTMap_Entry_TESCELL *v8; // [esp+Ch] [ebp-4h] BYREF

  v1 = (NiTMap_TESCELL *)dword_B428AC;
  if ( dword_B428AC )
  {
    m_numBuckets = v1->m_numBuckets;
    v3 = 0;
    if ( m_numBuckets )
    {
      m_buckets = v1->m_buckets;
      while ( !*m_buckets )
      {
        ++v3;
        ++m_buckets;
        if ( v3 >= m_numBuckets )
          goto LABEL_6;
      }
      v5 = v1->m_buckets[v3];
    }
    else
    {
LABEL_6:
      v5 = 0;
    }
    v8 = v5;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = 0;
        v6 = 0;
        sub_452600(v1, &v8, (void **)&v7, &v6);
        if ( a1 == v6 )
          NiTMap_RemoveAt((_DWORD *)dword_B428AC, v7);
        if ( !v8 )
          break;
        v1 = (NiTMap_TESCELL *)dword_B428AC;
      }
    }
  }
}
