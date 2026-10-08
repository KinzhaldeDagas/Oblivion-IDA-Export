int __thiscall sub_4EBD00(NiTMap_TESCELL *this)
{
  UInt32 m_numBuckets; // edx
  UInt32 v3; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  _DWORD *v7; // esi
  unsigned int *v8; // edi
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  m_numBuckets = this->m_numBuckets; /*0x4ebd06*/
  v3 = 0; /*0x4ebd09*/
  if ( m_numBuckets ) /*0x4ebd0e*/
  {
    m_buckets = this->m_buckets; /*0x4ebd10*/
    v5 = m_buckets; /*0x4ebd13*/
    while ( !*v5 ) /*0x4ebd18*/
    {
      ++v3; /*0x4ebd1a*/
      ++v5; /*0x4ebd1d*/
      if ( v3 >= m_numBuckets ) /*0x4ebd22*/
        goto LABEL_5; /*0x4ebd22*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)m_buckets[v3]; /*0x4ebd8f*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x4ebd24*/
  }
  position = v6; /*0x4ebd28*/
  while ( position ) /*0x4ebd2c*/
  {
    valueOut = 0; /*0x4ebd41*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this, &position, &keyOut, &valueOut); /*0x4ebd49*/
    v7 = valueOut; /*0x4ebd4e*/
    if ( valueOut ) /*0x4ebd54*/
    {
      v8 = *(unsigned int **)valueOut; /*0x4ebd56*/
      if ( *(_DWORD *)valueOut ) /*0x4ebd56*/
      {
        sub_4EC740(*(unsigned int **)valueOut); /*0x4ebd5e*/
        FormHeapFree((unsigned int)v8); /*0x4ebd64*/
      }
      *v7 = 0; /*0x4ebd6d*/
      FormHeapFree((unsigned int)v7); /*0x4ebd73*/
    }
  }
  return NiTMap_Clear(this); /*0x4ebd83*/
}
