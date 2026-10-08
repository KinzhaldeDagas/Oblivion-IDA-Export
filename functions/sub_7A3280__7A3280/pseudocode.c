// Oblivion binary evidence: checked-iterator insert of count identical four-byte values. Validates iterator ownership, enforces max_size 0x3FFFFFFF, reuses capacity when possible, otherwise grows by roughly 1.5x and moves trivial ranges. This folded routine services pointer, integer, and float vector specializations.
void __thiscall OB_stVector4_InsertFill_010201A0(
        OB_stVector4_010201A0 *this,
        OB_stVector4_010201A0 *positionOwner,
        unsigned int *position,
        unsigned int count,
        const unsigned int *value)
{
  unsigned int *begin; // ecx
  unsigned int capacityCount; // edi
  int sizeForLimitCheck; // eax
  int currentSize; // eax
  unsigned int newCapacity; // edi
  int oldSizeForGrowth; // eax
  int oldSize; // edi
  unsigned int *newBegin; // ebp
  unsigned int *insertBegin; // eax
  unsigned int *suffixDestination; // eax
  unsigned int *oldBegin; // eax
  int oldSizeAfterMove; // ecx
  unsigned int newSize; // ebx
  unsigned int *oldEnd; // ebp
  unsigned int insertBytes; // eax
  bool suffixShorterThanInsert; // cf
  const unsigned int *tailSplit; // ebx
  unsigned int insertByteCount; // [esp+18h] [ebp+Ch]

  value = (const unsigned int *)*value; /*0x7a328a*/
  begin = this->begin; /*0x7a328e*/
  if ( begin ) /*0x7a3294*/
    capacityCount = this->capacity - begin; /*0x7a329f*/
  else
    capacityCount = 0; /*0x7a3296*/
  if ( count ) /*0x7a32a8*/
  {
    if ( begin ) /*0x7a32b0*/
      sizeForLimitCheck = this->end - begin; /*0x7a32bb*/
    else
      sizeForLimitCheck = 0; /*0x7a32b2*/
    if ( 0x3FFFFFFF - sizeForLimitCheck < count ) /*0x7a32c7*/
      OB_stVector_ThrowLengthError_010201A0(capacityCount); /*0x7a32c9*/
    if ( begin ) /*0x7a32d0*/
      currentSize = this->end - begin; /*0x7a32db*/
    else
      currentSize = 0; /*0x7a32d2*/
    if ( capacityCount >= count + currentSize ) /*0x7a32e3*/
    {
      oldEnd = this->end; /*0x7a339d*/
      insertBytes = 4 * count; /*0x7a33ab*/
      suffixShorterThanInsert = oldEnd - position < count; /*0x7a33b2*/
      insertByteCount = 4 * count; /*0x7a33b4*/
      if ( suffixShorterThanInsert ) /*0x7a33ba*/
      {
        OB_stVector4_UninitializedCopyRange_010201A0(position, oldEnd, &position[insertBytes / 4]); /*0x7a33c1*/
        OB_stVector4_UninitializedFillN_010201A0( /*0x7a33db*/
          this->end,
          count - (this->end - position),
          (const unsigned int *)&value);
        this->end = (unsigned int *)((char *)this->end + insertByteCount); /*0x7a33e4*/
        OB_stVector4_CopyFillRange_010201A0( /*0x7a33f3*/
          position,
          &this->end[insertByteCount / 0xFFFFFFFC],
          (const unsigned int *)&value);
      }
      else
      {
        tailSplit = &oldEnd[insertBytes / 0xFFFFFFFC]; /*0x7a3405*/
        this->end = OB_stVector4_UninitializedCopyRange_010201A0(&oldEnd[insertBytes / 0xFFFFFFFC], oldEnd, oldEnd); /*0x7a3411*/
        OB_stVector4_CopyBackwardRange_010201A0(position, tailSplit, oldEnd); /*0x7a3414*/
        OB_stVector4_CopyFillRange_010201A0(position, &position[insertByteCount / 4], (const unsigned int *)&value); /*0x7a3426*/
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (capacityCount >> 1) >= capacityCount ) /*0x7a32f6*/
        newCapacity = (capacityCount >> 1) + capacityCount; /*0x7a32fc*/
      else
        newCapacity = 0; /*0x7a32f8*/
      if ( begin ) /*0x7a3300*/
        oldSizeForGrowth = this->end - begin; /*0x7a330b*/
      else
        oldSizeForGrowth = 0; /*0x7a3302*/
      if ( newCapacity < count + oldSizeForGrowth ) /*0x7a3312*/
      {
        if ( begin ) /*0x7a3316*/
          oldSize = this->end - begin; /*0x7a3321*/
        else
          oldSize = 0; /*0x7a3318*/
        newCapacity = count + oldSize; /*0x7a3324*/
      }
      newBegin = OB_stVector4_Allocate_010201A0(newCapacity); /*0x7a3334*/
      insertBegin = OB_stVector4_UninitializedCopyRange_010201A0(this->begin, position, newBegin); /*0x7a333f*/
      suffixDestination = OB_stVector4_UninitializedFillN_010201A0(insertBegin, count, (const unsigned int *)&value); /*0x7a334d*/
      OB_stVector4_UninitializedCopyRange_010201A0(position, this->end, suffixDestination); /*0x7a335e*/
      oldBegin = this->begin; /*0x7a3363*/
      if ( oldBegin ) /*0x7a3368*/
        oldSizeAfterMove = this->end - oldBegin; /*0x7a3373*/
      else
        oldSizeAfterMove = 0; /*0x7a336a*/
      newSize = oldSizeAfterMove + count; /*0x7a3376*/
      if ( oldBegin ) /*0x7a337a*/
        FormHeapFree((unsigned int)this->begin); /*0x7a337d*/
      this->begin = newBegin; /*0x7a338d*/
      this->capacity = &newBegin[newCapacity]; /*0x7a3392*/
      this->end = &newBegin[newSize]; /*0x7a3395*/
    }
  }
}
