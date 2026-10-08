// vector<float>::insert(position,count,value) implementation. Snapshots *value for alias safety, enforces max_size 0x3FFFFFFF, reuses capacity with overlap-aware moves/fills, or reallocates using the shipped approximately-1.5x growth policy.
void __thiscall OB_stVectorFloat_InsertFill_010201A0(
        OB_stVectorFloat_010201A0 *this,
        OB_stVectorFloat_010201A0 *positionOwner,
        float *position,
        unsigned int count,
        const float *value)
{
  float *begin; // ecx
  unsigned int capacityCount; // edi
  int sizeForLimitCheck; // eax
  int currentSize; // eax
  unsigned int newCapacity; // edi
  int sizeForGrowthCheck; // eax
  int sizeForMinimumCapacity; // edi
  unsigned int *newStorage; // ebp
  float *prefixCopyEnd; // eax
  float *insertedRangeEnd; // eax
  float *oldBegin; // eax
  int oldSize; // ecx
  unsigned int newSize; // ebx
  float *end; // ebp
  unsigned int insertBytes; // eax
  bool suffixShorterThanInsert; // cf
  const unsigned int *tailCopyBegin; // ebx
  unsigned int insertByteCount; // [esp+14h] [ebp+Ch]

  value = *(const float **)value; /*0x799538*/
  begin = this->begin; /*0x79953e*/
  if ( begin ) /*0x799544*/
    capacityCount = this->capacity - begin; /*0x79954f*/
  else
    capacityCount = 0; /*0x799546*/
  if ( count ) /*0x799558*/
  {
    if ( begin ) /*0x799560*/
      sizeForLimitCheck = this->end - begin; /*0x79956b*/
    else
      sizeForLimitCheck = 0; /*0x799562*/
    if ( 0x3FFFFFFF - sizeForLimitCheck < count ) /*0x799577*/
      OB_stVector_ThrowLengthError_010201A0(capacityCount); /*0x799579*/
    if ( begin ) /*0x799580*/
      currentSize = this->end - begin; /*0x79958b*/
    else
      currentSize = 0; /*0x799582*/
    if ( capacityCount >= count + currentSize ) /*0x799593*/
    {
      end = this->end; /*0x79964d*/
      insertBytes = 4 * count; /*0x79965b*/
      suffixShorterThanInsert = end - position < count; /*0x799662*/
      insertByteCount = 4 * count; /*0x799664*/
      if ( suffixShorterThanInsert ) /*0x79966a*/
      {
        OB_stVector4_UninitializedCopyRange_010201A0( /*0x799671*/
          (const unsigned int *)position,
          (const unsigned int *)end,
          (unsigned int *)&position[insertBytes / 4]);
        OB_stVectorFloat_UninitializedFillN_010201A0(this->end, count - (this->end - position), (const float *)&value); /*0x79968b*/
        this->end = (float *)((char *)this->end + insertByteCount); /*0x799694*/
        OB_stVectorFloat_CopyFillRange_010201A0( /*0x7996a3*/
          position,
          &this->end[insertByteCount / 0xFFFFFFFC],
          (const float *)&value);
      }
      else
      {
        tailCopyBegin = (const unsigned int *)&end[insertBytes / 0xFFFFFFFC]; /*0x7996b5*/
        this->end = (float *)OB_stVector4_UninitializedCopyRange_010201A0( /*0x7996c1*/
                               (const unsigned int *)&end[insertBytes / 0xFFFFFFFC],
                               (const unsigned int *)end,
                               (unsigned int *)end);
        OB_stVector4_CopyBackwardRange_010201A0((const unsigned int *)position, tailCopyBegin, (unsigned int *)end); /*0x7996c4*/
        OB_stVectorFloat_CopyFillRange_010201A0(position, &position[insertByteCount / 4], (const float *)&value); /*0x7996d6*/
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (capacityCount >> 1) >= capacityCount ) /*0x7995a6*/
        newCapacity = (capacityCount >> 1) + capacityCount; /*0x7995ac*/
      else
        newCapacity = 0; /*0x7995a8*/
      if ( begin ) /*0x7995b0*/
        sizeForGrowthCheck = this->end - begin; /*0x7995bb*/
      else
        sizeForGrowthCheck = 0; /*0x7995b2*/
      if ( newCapacity < count + sizeForGrowthCheck ) /*0x7995c2*/
      {
        if ( begin ) /*0x7995c6*/
          sizeForMinimumCapacity = this->end - begin; /*0x7995d1*/
        else
          sizeForMinimumCapacity = 0; /*0x7995c8*/
        newCapacity = count + sizeForMinimumCapacity; /*0x7995d4*/
      }
      newStorage = OB_stVector4_Allocate_010201A0(newCapacity); /*0x7995e4*/
      prefixCopyEnd = (float *)OB_stVector4_UninitializedCopyRange_010201A0( /*0x7995ef*/
                                 (const unsigned int *)this->begin,
                                 (const unsigned int *)position,
                                 newStorage);
      insertedRangeEnd = OB_stVectorFloat_UninitializedFillN_010201A0(prefixCopyEnd, count, (const float *)&value); /*0x7995fd*/
      OB_stVector4_UninitializedCopyRange_010201A0( /*0x79960e*/
        (const unsigned int *)position,
        (const unsigned int *)this->end,
        (unsigned int *)insertedRangeEnd);
      oldBegin = this->begin; /*0x799613*/
      if ( oldBegin ) /*0x799618*/
        oldSize = this->end - oldBegin; /*0x799623*/
      else
        oldSize = 0; /*0x79961a*/
      newSize = oldSize + count; /*0x799626*/
      if ( oldBegin ) /*0x79962a*/
        FormHeapFree((unsigned int)this->begin); /*0x79962d*/
      this->begin = (float *)newStorage; /*0x79963d*/
      this->capacity = (float *)&newStorage[newCapacity]; /*0x799642*/
      this->end = (float *)&newStorage[newSize]; /*0x799645*/
    }
  }
}
