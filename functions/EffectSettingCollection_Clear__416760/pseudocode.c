int __thiscall EffectSettingCollection_Clear(NiTMap_TESCELL *this)
{
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // edi
  NiTMap_Entry_TESCELL **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  m_numBuckets = this->m_numBuckets; /*0x416766*/
  v3 = 0; /*0x416769*/
  if ( m_numBuckets ) /*0x41676e*/
  {
    m_buckets = this->m_buckets; /*0x416770*/
    v5 = m_buckets; /*0x416773*/
    while ( !*v5 ) /*0x416778*/
    {
      ++v3; /*0x41677a*/
      ++v5; /*0x41677d*/
      if ( v3 >= m_numBuckets ) /*0x416782*/
        goto LABEL_5; /*0x416782*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)m_buckets[v3]; /*0x4167d2*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x416784*/
  }
  position = v6; /*0x416788*/
  while ( position ) /*0x41678c*/
  {
    valueOut = 0; /*0x4167a1*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this, &position, &keyOut, &valueOut); /*0x4167a9*/
    if ( valueOut ) /*0x4167b4*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)valueOut + 0x10))(valueOut, 1); /*0x4167bd*/
  }
  return NiTMap_Clear(this); /*0x4167c6*/
}
