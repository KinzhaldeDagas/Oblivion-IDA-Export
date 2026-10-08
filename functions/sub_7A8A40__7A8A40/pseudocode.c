// OBLIVION AUTHORITY (2026-08-30): Core fill-insert for the 0x10-byte vector<CLeafLodEngine::SLodEntry>; handles capacity growth, relocation, and repeated 8-byte pair insertion.
void __thiscall OB_stVectorLeafLodEntry_InsertFill_010201A0(
        OB_stVectorLeafLodEntry_010201A0 *this,
        OB_stVectorLeafLodEntry_010201A0 *positionOwner,
        OB_CLeafLodEngine_SLodEntry_010201A0 *position,
        unsigned int count,
        const OB_CLeafLodEngine_SLodEntry_010201A0 *value)
{
  const OB_CBillboardLeaf_010201A0 *m_pLeafMatch; // edx
  OB_CLeafLodEngine_SLodEntry_010201A0 *begin; // eax
  unsigned int capacityCount; // edi
  int v9; // ecx
  int v10; // ecx
  unsigned int newCapacity; // edi
  int v12; // ecx
  int v13; // ecx
  OB_CLeafLodEngine_SLodEntry_010201A0 *newBegin; // ebx
  OB_CLeafLodEngine_SLodEntry_010201A0 *afterPrefix; // eax
  OB_CLeafLodEngine_SLodEntry_010201A0 *afterInserted; // eax
  OB_CLeafLodEngine_SLodEntry_010201A0 *oldBegin; // ecx
  int oldSize; // eax
  OB_CLeafLodEngine_SLodEntry_010201A0 *end; // ebx
  OB_CLeafLodEngine_SLodEntry_010201A0 *v20; // [esp-20h] [ebp-4Ch]
  OB_CLeafLodEngine_SLodEntry_010201A0 *v21; // [esp-Ch] [ebp-38h]
  unsigned int v22; // [esp-8h] [ebp-34h]
  int v23; // [esp+0h] [ebp-2Ch] BYREF
  OB_CLeafLodEngine_SLodEntry_010201A0 valueCopy; // [esp+10h] [ebp-1Ch] BYREF
  OB_CLeafLodEngine_SLodEntry_010201A0 *v25; // [esp+18h] [ebp-14h]
  int *v26; // [esp+1Ch] [ebp-10h]
  int v27; // [esp+28h] [ebp-4h]
  unsigned int counta; // [esp+3Ch] [ebp+10h]
  OB_CLeafLodEngine_SLodEntry_010201A0 *countb; // [esp+3Ch] [ebp+10h]
  unsigned int valuea; // [esp+40h] [ebp+14h]

  v26 = &v23; /*0x7a8a68*/
  m_pLeafMatch = value->m_pLeafMatch; /*0x7a8a72*/
  begin = this->begin; /*0x7a8a75*/
  valueCopy.m_pLeaf = value->m_pLeaf; /*0x7a8a7a*/
  valueCopy.m_pLeafMatch = m_pLeafMatch; /*0x7a8a7d*/
  if ( begin ) /*0x7a8a80*/
    capacityCount = this->capacity - begin; /*0x7a8a8b*/
  else
    capacityCount = 0; /*0x7a8a82*/
  if ( count ) /*0x7a8a93*/
  {
    if ( begin ) /*0x7a8a9b*/
      v9 = this->end - begin; /*0x7a8aa6*/
    else
      v9 = 0; /*0x7a8a9d*/
    if ( 0x1FFFFFFF - v9 < count ) /*0x7a8ab2*/
      OB_stVector_ThrowLengthError_010201A0(capacityCount); /*0x7a8ab4*/
    if ( begin ) /*0x7a8abb*/
      v10 = this->end - begin; /*0x7a8ac6*/
    else
      v10 = 0; /*0x7a8abd*/
    if ( capacityCount >= count + v10 ) /*0x7a8acd*/
    {
      end = this->end; /*0x7a8bcf*/
      if ( end - position >= count ) /*0x7a8bde*/
      {
        valuea = count; /*0x7a8c53*/
        countb = &end[-count]; /*0x7a8c59*/
        this->end = OB_LeafLodEntry_UninitializedCopyRange_Checked_010201A0(countb, end, this->end); /*0x7a8c67*/
        OB_LeafLodEntry_CopyBackwardRange_010201A0(position, countb, end); /*0x7a8c6a*/
        OB_LeafLodEntry_CopyFillRange_010201A0(position, &position[valuea], &valueCopy); /*0x7a8c7a*/
      }
      else
      {
        OB_LeafLodEntry_UninitializedCopyRange_Checked_010201A0(position, end, &position[count]); /*0x7a8bf1*/
        v22 = count - (this->end - position); /*0x7a8c09*/
        v21 = this->end; /*0x7a8c0a*/
        v27 = 2; /*0x7a8c0d*/
        OB_LeafLodEntry_UninitializedFillN_ReturnEnd_010201A0(v21, v22, &valueCopy); /*0x7a8c14*/
        this->end += count; /*0x7a8c1c*/
        OB_LeafLodEntry_CopyFillRange_010201A0(position, &this->end[-count], &valueCopy); /*0x7a8c2a*/
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (capacityCount >> 1) >= capacityCount ) /*0x7a8ae0*/
        newCapacity = (capacityCount >> 1) + capacityCount; /*0x7a8ae6*/
      else
        newCapacity = 0; /*0x7a8ae2*/
      if ( begin ) /*0x7a8aea*/
        v12 = this->end - begin; /*0x7a8af5*/
      else
        v12 = 0; /*0x7a8aec*/
      if ( newCapacity < count + v12 ) /*0x7a8afc*/
      {
        if ( begin ) /*0x7a8b00*/
          v13 = this->end - begin; /*0x7a8b0b*/
        else
          v13 = 0; /*0x7a8b02*/
        newCapacity = v13 + count; /*0x7a8b0e*/
      }
      newBegin = OB_stVectorLeafLodEntry_Allocate_010201A0(newCapacity); /*0x7a8b28*/
      v20 = this->begin; /*0x7a8b30*/
      v25 = newBegin; /*0x7a8b31*/
      v27 = 0; /*0x7a8b34*/
      afterPrefix = OB_LeafLodEntry_UninitializedCopyRange_010201A0(v20, position, newBegin); /*0x7a8b3b*/
      afterInserted = OB_LeafLodEntry_UninitializedFillN_ReturnEnd_010201A0(afterPrefix, count, &valueCopy); /*0x7a8b4e*/
      OB_LeafLodEntry_UninitializedCopyRange_010201A0(position, this->end, afterInserted); /*0x7a8b69*/
      oldBegin = this->begin; /*0x7a8b6e*/
      if ( oldBegin ) /*0x7a8b76*/
        oldSize = this->end - oldBegin; /*0x7a8b81*/
      else
        oldSize = 0; /*0x7a8b78*/
      counta = oldSize + count; /*0x7a8b84*/
      if ( oldBegin ) /*0x7a8b89*/
        FormHeapFree((unsigned int)oldBegin); /*0x7a8b8c*/
      this->capacity = &newBegin[newCapacity]; /*0x7a8b9d*/
      this->end = &newBegin[counta]; /*0x7a8ba0*/
      this->begin = newBegin; /*0x7a8ba3*/
    }
  }
}
