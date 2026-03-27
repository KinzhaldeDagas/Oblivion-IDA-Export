unsigned int __thiscall sub_5210A0(NiTMap_TESCELL *this)
{
  NiTMap_TESCELL *v1; // edi
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  unsigned int result; // eax
  TESObjectCELL *v7; // esi
  UInt32 refID; // ebx
  UInt32 i; // edi
  void *v10; // eax
  void *v11; // eax
  TESObjectCELL *v12; // [esp+Ch] [ebp-10h] BYREF
  NiTMap_Entry_TESCELL *v13; // [esp+10h] [ebp-Ch] BYREF
  NiTMap_TESCELL *v14; // [esp+14h] [ebp-8h]
  void *v15; // [esp+18h] [ebp-4h] BYREF

  v1 = this;
  m_numBuckets = this->m_numBuckets;
  v3 = 0;
  v14 = this;
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
    result = (unsigned int)m_buckets[v3];
  }
  else
  {
LABEL_5:
    result = 0;
  }
  v13 = (NiTMap_Entry_TESCELL *)result;
  if ( result )
  {
    do
    {
      v12 = 0;
      result = sub_452600(v1, &v13, &v15, &v12);
      v7 = v12;
      if ( v12 )
      {
        refID = v12->members.super.refID;
        for ( i = 0; i < refID; ++i )
        {
          v10 = (void *)sub_494ED0((TESObjectREFR *)v7, i);
          v11 = OblivionDynamicCast(
                  v10,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESIdleForm `RTTI Type Descriptor',
                  0);
          if ( v11 )
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)v11 + 0x10))(v11, 1);
        }
        for ( result = 0; result < v7->members.super.refID; ++result )
          *(_DWORD *)(*(_DWORD *)&v7->members.super.type + 4 * result) = 0;
        v1 = v14;
        v7->members.super.refID = 0;
        v7->members.super.modlist.data = 0;
      }
    }
    while ( v13 );
  }
  return result;
}
