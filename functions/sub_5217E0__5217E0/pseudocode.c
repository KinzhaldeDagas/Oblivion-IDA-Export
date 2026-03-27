int __thiscall sub_5217E0(NiTMap_TESCELL *this)
{
  NiTMap_TESCELL *v1; // edi
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // esi
  UInt32 refID; // ebx
  UInt32 i; // edi
  void *v10; // eax
  void *v11; // eax
  unsigned int *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  unsigned int v16; // [esp-8h] [ebp-3Ch]
  TESObjectCELL *v17; // [esp+18h] [ebp-1Ch] BYREF
  NiTMap_Entry_TESCELL *v18; // [esp+1Ch] [ebp-18h] BYREF
  NiTMap_TESCELL *v19; // [esp+20h] [ebp-14h]
  void *v20[4]; // [esp+24h] [ebp-10h] BYREF

  v1 = this;
  v19 = this;
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
  v18 = v6;
  while ( v18 )
  {
    v17 = 0;
    sub_452600(v1, &v18, v20, &v17);
    v7 = v17;
    if ( v17 )
    {
      refID = v17->members.super.refID;
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
      if ( *(_DWORD *)&v7->members.fullName.name.m_dataLen )
      {
        while ( 1 )
        {
          v12 = *(unsigned int **)&v7->members.fullName.name.m_dataLen;
          if ( !v12[1] && !*v12 )
            break;
          FormHeapFree(*v12);
          v13 = *(_DWORD **)&v7->members.fullName.name.m_dataLen;
          v14 = (_DWORD *)v13[1];
          if ( v14 )
          {
            v13[1] = v14[1];
            *v13 = *v14;
            FormHeapFree((unsigned int)v14);
          }
          else
          {
            *v13 = 0;
          }
        }
        FormHeapFree(*(_DWORD *)&v7->members.fullName.name.m_dataLen);
      }
      FormHeapFree((unsigned int)v7->members.fullName.vtbl);
      v7->members.fullName.vtbl = 0;
      HIWORD(v7->members.fullName.name.m_data) = 0;
      LOWORD(v7->members.fullName.name.m_data) = 0;
      v16 = *(_DWORD *)&v7->members.super.type;
      v20[3] = (void *)0xFFFFFFFF;
      v7->vtbl = (TESFormVtbl *)&NiTLargeArray<TESForm *>::`vftable';
      FormHeapFree(v16);
      FormHeapFree((unsigned int)v7);
      v1 = v19;
    }
  }
  return NiTMap_Clear(v1);
}
