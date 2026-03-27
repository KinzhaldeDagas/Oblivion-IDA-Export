void __thiscall sub_520FA0(NiTMap_TESCELL *this)
{
  NiTMap_TESCELL *v1; // edi
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectREFR *v7; // ecx
  UInt32 v8; // ebp
  void *v9; // eax
  TESObjectREFR **v10; // edi
  unsigned int v11; // ebx
  UInt32 i; // esi
  TESObjectREFR **v13; // eax
  TESObjectREFR *v14; // [esp+8h] [ebp-10h] BYREF
  NiTMap_Entry_TESCELL *v15; // [esp+Ch] [ebp-Ch] BYREF
  UInt32 refID; // [esp+10h] [ebp-8h] BYREF
  NiTMap_TESCELL *v17; // [esp+14h] [ebp-4h]

  v1 = this;
  m_numBuckets = this->m_numBuckets;
  v3 = 0;
  v17 = this;
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
  v15 = v6;
  while ( v15 )
  {
    v14 = 0;
    sub_452600(v1, &v15, (void **)&refID, (TESObjectCELL **)&v14);
    v7 = v14;
    if ( v14 )
    {
      v8 = 0;
      refID = v14->member.super.refID;
      if ( refID )
      {
        while ( 1 )
        {
          v9 = (void *)sub_494ED0(v7, v8);
          v10 = (TESObjectREFR **)OblivionDynamicCast(
                                    v9,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESIdleForm `RTTI Type Descriptor',
                                    0);
          if ( v10 )
          {
            ((void (__thiscall *)(TESObjectREFR **))(*v10)[1].member.super.modlist.next)(v10);
            v11 = sub_5204C0(v10);
            for ( i = 0; i < v11; ++i )
            {
              v13 = (TESObjectREFR **)sub_520260(v10, i);
              sub_520EB0(v13);
            }
          }
          if ( ++v8 >= refID )
            break;
          v7 = v14;
        }
        v1 = v17;
      }
    }
  }
}
