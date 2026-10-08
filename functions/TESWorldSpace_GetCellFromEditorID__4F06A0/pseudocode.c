TESForm *__thiscall TESWorldSpace::GetCellFromEditorID(TESWorldSpace *this, char *Str2)
{
  void *v2; // edi
  NiTMap_TESCELL *cellMap; // ecx
  UInt32 m_numBuckets; // edx
  UInt32 v6; // eax
  NiTMap_Entry_TESCELL **m_buckets; // esi
  NiTMap_Entry_TESCELL **v8; // ecx
  MEF_U32PointerMapEntry32 *v9; // eax
  NiTMap_TESCELL *v10; // ecx
  void *v11; // esi
  const char *v12; // eax
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x4f06a5*/
  if ( !Str2 ) /*0x4f06ad*/
    return 0; /*0x4f073e*/
  cellMap = this->cellMap; /*0x4f06b3*/
  m_numBuckets = cellMap->m_numBuckets; /*0x4f06b6*/
  v6 = 0; /*0x4f06b9*/
  if ( m_numBuckets ) /*0x4f06be*/
  {
    m_buckets = cellMap->m_buckets; /*0x4f06c0*/
    v8 = m_buckets; /*0x4f06c3*/
    while ( !*v8 ) /*0x4f06c7*/
    {
      ++v6; /*0x4f06c9*/
      ++v8; /*0x4f06cc*/
      if ( v6 >= m_numBuckets ) /*0x4f06d1*/
        goto LABEL_6; /*0x4f06d1*/
    }
    v9 = (MEF_U32PointerMapEntry32 *)m_buckets[v6]; /*0x4f0739*/
  }
  else
  {
LABEL_6:
    v9 = 0; /*0x4f06d3*/
  }
  position = v9; /*0x4f06d7*/
  while ( position ) /*0x4f06db*/
  {
    if ( v2 ) /*0x4f06e2*/
      break; /*0x4f06e2*/
    v10 = this->cellMap; /*0x4f06ee*/
    valueOut = 0; /*0x4f06f6*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)v10, &position, &keyOut, &valueOut); /*0x4f06fa*/
    v11 = valueOut; /*0x4f06ff*/
    if ( valueOut ) /*0x4f0705*/
    {
      v12 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)valueOut + 0xD4))(valueOut); /*0x4f0716*/
      if ( !CRT_StricmpLocaleDispatch(v12, Str2) ) /*0x4f0719*/
        v2 = v11; /*0x4f0725*/
    }
  }
  return (TESForm *)v2; /*0x4f0731*/
}
