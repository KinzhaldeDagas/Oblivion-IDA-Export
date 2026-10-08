void __thiscall sub_520FA0(NiTMap_TESCELL *this)
{
  NiTMap_TESCELL *v1; // edi
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  TESObjectREFR *v7; // ecx
  UInt32 v8; // ebp
  void *v9; // eax
  TESObjectREFR **v10; // edi
  unsigned int v11; // ebx
  UInt32 i; // esi
  TESObjectREFR **v13; // eax
  void *valueOut; // [esp+8h] [ebp-10h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-8h] BYREF
  NiTMap_TESCELL *v17; // [esp+14h] [ebp-4h]

  v1 = this; /*0x520fa5*/
  m_numBuckets = this->m_numBuckets; /*0x520fa7*/
  v3 = 0; /*0x520faa*/
  v17 = this; /*0x520fae*/
  if ( m_numBuckets ) /*0x520fb2*/
  {
    m_buckets = this->m_buckets; /*0x520fb4*/
    v5 = m_buckets; /*0x520fb7*/
    while ( !*v5 ) /*0x520fc3*/
    {
      ++v3; /*0x520fc5*/
      ++v5; /*0x520fc8*/
      if ( v3 >= m_numBuckets ) /*0x520fcd*/
        goto LABEL_5; /*0x520fcd*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)m_buckets[v3]; /*0x521019*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x520fcf*/
  }
  position = v6; /*0x520fd3*/
  while ( position ) /*0x520fd7*/
  {
    valueOut = 0; /*0x520ff1*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)v1, &position, &keyOut, &valueOut); /*0x520ff9*/
    v7 = (TESObjectREFR *)valueOut; /*0x520ffe*/
    if ( valueOut ) /*0x521004*/
    {
      v8 = 0; /*0x52100d*/
      keyOut = *((_DWORD *)valueOut + 3); /*0x521011*/
      if ( keyOut ) /*0x521015*/
      {
        while ( 1 ) /*0x521033*/
        {
          v9 = (void *)sub_494ED0(v7, v8); /*0x521033*/
          v10 = (TESObjectREFR **)OblivionDynamicCast( /*0x52103e*/
                                    v9,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESIdleForm `RTTI Type Descriptor',
                                    0);
          if ( v10 ) /*0x521045*/
          {
            ((void (__thiscall *)(TESObjectREFR **))(*v10)[1].member.super.modlist.next)(v10); /*0x52104e*/
            v11 = sub_5204C0(v10); /*0x521057*/
            for ( i = 0; i < v11; ++i ) /*0x52105d*/
            {
              v13 = (TESObjectREFR **)sub_520260(v10, i); /*0x521063*/
              sub_520EB0(v13); /*0x521069*/
            }
          }
          if ( ++v8 >= keyOut ) /*0x52107f*/
            break; /*0x52107f*/
          v7 = (TESObjectREFR *)valueOut; /*0x521020*/
        }
        v1 = v17; /*0x521081*/
      }
    }
  }
}
