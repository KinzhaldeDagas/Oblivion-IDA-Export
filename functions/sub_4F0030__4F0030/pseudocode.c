// Verified: clears inline exterior cellMap at +0x30; iterates mapped TESObjectCELL values and destroys them unless the WorldSpace base flag 0x4000 is set, then empties the map.
int __thiscall TESWorldSpace_ClearExteriorCellMap(TESWorldSpace *this)
{
  NiTMap_TESCELL *cellMap; // ecx
  UInt32 m_numBuckets; // edx
  UInt32 v4; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v6; // ecx
  MEF_U32PointerMapEntry32 *v7; // eax
  NiTMap_TESCELL *v8; // ecx
  void *valueOut; // [esp+4h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+Ch] [ebp-4h] BYREF

  if ( (this->super.flags & 0x4000) == 0 ) /*0x4f003e*/
  {
    cellMap = this->cellMap; /*0x4f0040*/
    m_numBuckets = cellMap->m_numBuckets; /*0x4f0043*/
    v4 = 0; /*0x4f0046*/
    if ( m_numBuckets ) /*0x4f004b*/
    {
      m_buckets = cellMap->m_buckets; /*0x4f004d*/
      v6 = m_buckets; /*0x4f0050*/
      while ( !*v6 ) /*0x4f0055*/
      {
        ++v4; /*0x4f0057*/
        ++v6; /*0x4f005a*/
        if ( v4 >= m_numBuckets ) /*0x4f005f*/
          goto LABEL_6; /*0x4f005f*/
      }
      v7 = (MEF_U32PointerMapEntry32 *)m_buckets[v4]; /*0x4f00b3*/
    }
    else
    {
LABEL_6:
      v7 = 0; /*0x4f0061*/
    }
    position = v7; /*0x4f0065*/
    while ( position ) /*0x4f006a*/
    {
      v8 = this->cellMap; /*0x4f0075*/
      valueOut = 0; /*0x4f0082*/
      NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)v8, &position, &keyOut, &valueOut); /*0x4f008a*/
      if ( valueOut ) /*0x4f0095*/
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)valueOut + 0x10))(valueOut, 1); /*0x4f009e*/
    }
  }
  return NiTMap_Clear(&this->cellMap->vtbl); /*0x4f00aa*/
}
