// Oblivion-authoritative fill insertion for st_vector<SFrondGuide>. Snapshots the deep guide value for alias safety, inserts count 0x30 records, uses exception-safe placement construction, reuses capacity or grows by 1.5x, and deep-moves overlapping guide ranges.
// positive sp value has been detected, the output may be wrong!
void __thiscall OB_stVector_SFrondGuide_InsertFill_010201A0(
        OB_stVector16_010201A0 *this,
        OB_stVector16_010201A0 *expectedOwner,
        OB_SFrondGuide_010201A0 *position,
        unsigned int count,
        const OB_SFrondGuide_010201A0 *value)
{
  unsigned __int8 frondMapIndex; // al
  unsigned int sharedVertexStartIndex; // ecx
  unsigned int verticesPerGuideVertex; // edx
  double offsetAngle; // st7
  double surfaceArea; // st7
  void *begin; // ecx
  unsigned int capacityCount; // ebx
  int sizeForLimitCheck; // eax
  int currentSize; // eax
  unsigned int grownCapacity; // ebx
  int sizeForGrowth; // eax
  OB_SFrondGuide_010201A0 *newStorage; // eax
  const OB_SFrondGuide_010201A0 *v18; // ecx
  OB_SFrondGuide_010201A0 *constructedPrefixEnd; // eax
  OB_SFrondGuide_010201A0 *insertedEnd; // eax
  const OB_SFrondGuide_010201A0 *v21; // ecx
  OB_SFrondGuide_010201A0 *oldBegin; // ecx
  int oldSize; // eax
  unsigned int newSize; // edi
  OB_SFrondGuide_010201A0 *end; // ecx
  unsigned int savedCount; // edi
  OB_SFrondGuide_010201A0 *currentEndForFill; // [esp-10h] [ebp-68h]
  unsigned int remainingFillCount; // [esp-Ch] [ebp-64h]
  OB_SFrondGuide_010201A0 *fillEnd; // [esp-Ch] [ebp-64h]
  int v30; // [esp-4h] [ebp-5Ch] BYREF
  OB_SFrondGuide_010201A0 copiedValue; // [esp+10h] [ebp-48h] BYREF
  int v32; // [esp+40h] [ebp-18h]
  OB_stVector16_010201A0 *v33; // [esp+44h] [ebp-14h]
  int *v34; // [esp+48h] [ebp-10h]
  int v35; // [esp+54h] [ebp-4h]
  OB_SFrondGuide_010201A0 *trailingSource; // [esp+68h] [ebp+10h]
  OB_SFrondGuide_010201A0 *newStorageBase; // [esp+6Ch] [ebp+14h]
  OB_SFrondGuide_010201A0 *source; // [esp+6Ch] [ebp+14h]

  v34 = &v30; /*0x79f728*/
  v33 = this; /*0x79f72d*/
  OB_stVector_SFrondVertex_CopyCtor_010201A0(&copiedValue.vertexVector, &value->vertexVector); /*0x79f737*/
  frondMapIndex = value->frondMapIndex; /*0x79f73f*/
  copiedValue.guideLength = value->guideLength; /*0x79f742*/
  sharedVertexStartIndex = value->sharedVertexStartIndex; /*0x79f748*/
  verticesPerGuideVertex = value->verticesPerGuideVertex; /*0x79f74b*/
  copiedValue.radius = value->radius; /*0x79f74e*/
  offsetAngle = value->offsetAngle; /*0x79f751*/
  copiedValue.frondMapIndex = frondMapIndex; /*0x79f754*/
  copiedValue.offsetAngle = offsetAngle; /*0x79f757*/
  copiedValue.sharedVertexStartIndex = sharedVertexStartIndex; /*0x79f75a*/
  surfaceArea = value->surfaceArea; /*0x79f75d*/
  copiedValue.verticesPerGuideVertex = verticesPerGuideVertex; /*0x79f760*/
  copiedValue.surfaceArea = surfaceArea; /*0x79f763*/
  copiedValue.fuzzySurfaceArea = value->fuzzySurfaceArea; /*0x79f769*/
  begin = this->begin; /*0x79f76c*/
  capacityCount = 0; /*0x79f76f*/
  v35 = 0; /*0x79f773*/
  if ( begin ) /*0x79f776*/
    capacityCount = ((char *)this->capacityEnd - (char *)begin) / 0x30; /*0x79f78c*/
  if ( count ) /*0x79f793*/
  {
    if ( begin ) /*0x79f79b*/
      sizeForLimitCheck = ((char *)this->end - (char *)begin) / 0x30; /*0x79f7b5*/
    else
      sizeForLimitCheck = 0; /*0x79f79d*/
    if ( 0x5555555 - sizeForLimitCheck < count ) /*0x79f7c0*/
      OB_stVector_ThrowLengthError_010201A0(count); /*0x79f7c2*/
    if ( begin ) /*0x79f7c9*/
      currentSize = ((char *)this->end - (char *)begin) / 0x30; /*0x79f7e3*/
    else
      currentSize = 0; /*0x79f7cb*/
    if ( capacityCount >= count + currentSize ) /*0x79f7e9*/
    {
      end = (OB_SFrondGuide_010201A0 *)this->end; /*0x79f919*/
      source = end; /*0x79f936*/
      if ( end - position >= count ) /*0x79f939*/
      {
        savedCount = count; /*0x79f9cd*/
        trailingSource = &end[-count]; /*0x79f9d6*/
        this->end = OB_stVector_SFrondGuide_UninitializedCopyThunk_010201A0(this, trailingSource, end, end); /*0x79f9e1*/
        OB_SFrondGuide_CopyAssignRangeBackwardCheckedThunk_010201A0(position, trailingSource, source); /*0x79f9ea*/
        OB_SFrondGuide_FillRange_010201A0(position, &position[savedCount], &copiedValue); /*0x79f9f7*/
      }
      else
      {
        OB_stVector_SFrondGuide_UninitializedCopyThunk_010201A0(this, position, end, &position[count]); /*0x79f94f*/
        remainingFillCount = count - ((char *)this->end - (char *)position) / 0x30; /*0x79f972*/
        currentEndForFill = (OB_SFrondGuide_010201A0 *)this->end; /*0x79f973*/
        LOBYTE(v35) = 3; /*0x79f976*/
        OB_stVector_SFrondGuide_UninitializedFillNThunk_010201A0( /*0x79f97a*/
          this,
          currentEndForFill,
          remainingFillCount,
          &copiedValue);
        this->end = (char *)this->end + 0x30 * count; /*0x79f982*/
        fillEnd = (OB_SFrondGuide_010201A0 *)((char *)this->end + 0xFFFFFFD0 * count); /*0x79f98e*/
        v35 = 0; /*0x79f990*/
        OB_SFrondGuide_FillRange_010201A0(position, fillEnd, &copiedValue); /*0x79f997*/
      }
    }
    else
    {
      if ( 0x5555555 - (capacityCount >> 1) >= capacityCount ) /*0x79f7fc*/
        grownCapacity = (capacityCount >> 1) + capacityCount; /*0x79f802*/
      else
        grownCapacity = 0; /*0x79f7fe*/
      if ( begin ) /*0x79f806*/
        sizeForGrowth = ((char *)this->end - (char *)begin) / 0x30; /*0x79f820*/
      else
        sizeForGrowth = 0; /*0x79f808*/
      if ( grownCapacity < count + sizeForGrowth ) /*0x79f826*/
        grownCapacity = count + OB_stVector_SFrondGuide_Size_010201A0(this); /*0x79f831*/
      newStorage = OB_stVector_SFrondGuide_Allocate_010201A0(grownCapacity); /*0x79f836*/
      v18 = (const OB_SFrondGuide_010201A0 *)this->begin; /*0x79f83b*/
      LOBYTE(v32) = 0; /*0x79f83e*/
      newStorageBase = newStorage; /*0x79f84f*/
      LOBYTE(v35) = 1; /*0x79f857*/
      constructedPrefixEnd = OB_SFrondGuide_UninitializedCopy_010201A0(v18, position, newStorage); /*0x79f85b*/
      insertedEnd = OB_stVector_SFrondGuide_UninitializedFillNThunk_010201A0( /*0x79f86e*/
                      this,
                      constructedPrefixEnd,
                      count,
                      &copiedValue);
      v21 = (const OB_SFrondGuide_010201A0 *)this->end; /*0x79f873*/
      LOBYTE(v32) = 0; /*0x79f876*/
      OB_SFrondGuide_UninitializedCopy_010201A0(position, v21, insertedEnd); /*0x79f88c*/
      oldBegin = (OB_SFrondGuide_010201A0 *)this->begin; /*0x79f891*/
      if ( oldBegin ) /*0x79f899*/
        oldSize = ((char *)this->end - (char *)oldBegin) / 0x30; /*0x79f8b3*/
      else
        oldSize = 0; /*0x79f89b*/
      newSize = oldSize + count; /*0x79f8b5*/
      if ( oldBegin ) /*0x79f8b9*/
      {
        OB_SFrondGuide_DestroyRange_010201A0(oldBegin, (OB_SFrondGuide_010201A0 *)this->end); /*0x79f8c5*/
        FormHeapFree((unsigned int)this->begin); /*0x79f8ce*/
      }
      this->capacityEnd = &newStorageBase[grownCapacity]; /*0x79f8e9*/
      this->end = &newStorageBase[newSize]; /*0x79f8ec*/
      this->begin = newStorageBase; /*0x79f8ef*/
    }
  }
  if ( copiedValue.vertexVector.begin ) /*0x79fa04*/
    FormHeapFree((unsigned int)copiedValue.vertexVector.begin); /*0x79fa07*/
}
