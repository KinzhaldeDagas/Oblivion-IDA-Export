unsigned int __thiscall sub_5210A0(NiTMap_TESCELL *this)
{
  NiTMap_TESCELL *v1; // edi
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  unsigned int result; // eax
  TESObjectREFR *v7; // esi
  UInt32 v8; // ebx
  UInt32 i; // edi
  void *v10; // eax
  void *v11; // eax
  void *valueOut; // [esp+Ch] [ebp-10h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-Ch] BYREF
  NiTMap_TESCELL *v14; // [esp+14h] [ebp-8h]
  unsigned int keyOut; // [esp+18h] [ebp-4h] BYREF

  v1 = this; /*0x5210a6*/
  m_numBuckets = this->m_numBuckets; /*0x5210a8*/
  v3 = 0; /*0x5210ad*/
  v14 = this; /*0x5210b1*/
  if ( m_numBuckets ) /*0x5210b5*/
  {
    m_buckets = this->m_buckets; /*0x5210b7*/
    v5 = m_buckets; /*0x5210ba*/
    while ( !*v5 ) /*0x5210c2*/
    {
      ++v3; /*0x5210c8*/
      ++v5; /*0x5210cb*/
      if ( v3 >= m_numBuckets ) /*0x5210d0*/
        goto LABEL_5; /*0x5210d0*/
    }
    result = (unsigned int)m_buckets[v3]; /*0x52117a*/
  }
  else
  {
LABEL_5:
    result = 0; /*0x5210d2*/
  }
  position = (MEF_U32PointerMapEntry32 *)result; /*0x5210d6*/
  if ( result ) /*0x5210da*/
  {
    do /*0x52116c*/
    {
      valueOut = 0; /*0x5210f2*/
      result = NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)v1, &position, &keyOut, &valueOut); /*0x5210f6*/
      v7 = (TESObjectREFR *)valueOut; /*0x5210fb*/
      if ( valueOut ) /*0x521101*/
      {
        v8 = *((_DWORD *)valueOut + 3); /*0x521103*/
        for ( i = 0; i < v8; ++i ) /*0x52110a*/
        {
          v10 = (void *)sub_494ED0(v7, i); /*0x52111f*/
          v11 = OblivionDynamicCast( /*0x521125*/
                  v10,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESIdleForm `RTTI Type Descriptor',
                  0);
          if ( v11 ) /*0x52112f*/
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)v11 + 0x10))(v11, 1); /*0x52113a*/
        }
        for ( result = 0; result < v7->member.super.refID; ++result ) /*0x521145*/
          *(_DWORD *)(*(_DWORD *)&v7->member.super.type + 4 * result) = 0; /*0x521153*/
        v1 = v14; /*0x52115e*/
        v7->member.super.refID = 0; /*0x521162*/
        v7->member.super.modlist.data = 0; /*0x521165*/
      }
    }
    while ( position ); /*0x52116c*/
  }
  return result; /*0x521173*/
}
