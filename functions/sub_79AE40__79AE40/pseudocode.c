// Oblivion-authoritative fill insertion for st_vector<SFrondVertex>. Snapshots the value for alias safety, inserts count 0x38-byte records, reuses capacity when possible, otherwise grows to max(old+old/2, size+count), and preserves overlapping ranges with forward/backward movement.
void __thiscall OB_stVector_SFrondVertex_InsertFill_010201A0(
        OB_stVector16_010201A0 *this,
        OB_stVector16_010201A0 *expectedOwner,
        OB_SFrondVertex_010201A0 *position,
        unsigned int count,
        const OB_SFrondVertex_010201A0 *value)
{
  void *begin; // ecx
  unsigned int capacityCount; // edi
  int sizeForLimitCheck; // eax
  int currentSize; // eax
  unsigned int grownCapacity; // edi
  int sizeForGrowth; // eax
  OB_SFrondVertex_010201A0 *constructedPrefixEnd; // eax
  OB_SFrondVertex_010201A0 *insertedEnd; // eax
  void *v15; // eax
  char *v16; // esi
  OB_SFrondVertex_010201A0 *end; // ecx
  unsigned int v18; // eax
  OB_SFrondVertex_010201A0 *trailingSource; // esi
  const OB_SFrondVertex_010201A0 *v20; // [esp-20h] [ebp-78h]
  OB_SFrondVertex_010201A0 *v21; // [esp-Ch] [ebp-64h]
  unsigned int v22; // [esp-8h] [ebp-60h]
  int v23; // [esp+0h] [ebp-58h] BYREF
  OB_SFrondVertex_010201A0 copiedValue; // [esp+10h] [ebp-48h] BYREF
  int *v25; // [esp+48h] [ebp-10h]
  int v26; // [esp+54h] [ebp-4h]
  OB_SFrondVertex_010201A0 *savedEnd; // [esp+68h] [ebp+10h]
  OB_SFrondVertex_010201A0 *newStorage; // [esp+6Ch] [ebp+14h]
  const OB_SFrondVertex_010201A0 *valuea; // [esp+6Ch] [ebp+14h]

  v25 = &v23; /*0x79ae68*/
  qmemcpy(&copiedValue, value, sizeof(copiedValue)); /*0x79ae78*/
  begin = this->begin; /*0x79ae7a*/
  if ( begin ) /*0x79ae7f*/
    capacityCount = ((char *)this->capacityEnd - (char *)begin) / 0x38; /*0x79ae9b*/
  else
    capacityCount = 0; /*0x79ae81*/
  if ( count ) /*0x79aea2*/
  {
    if ( begin ) /*0x79aeaa*/
      sizeForLimitCheck = ((char *)this->end - (char *)this->begin) / 0x38; /*0x79aec7*/
    else
      sizeForLimitCheck = 0; /*0x79aeac*/
    if ( 0x4924924 - sizeForLimitCheck < count ) /*0x79aed2*/
      OB_stVector_ThrowLengthError_010201A0(capacityCount); /*0x79aed4*/
    if ( this->begin ) /*0x79aed9*/
      currentSize = ((char *)this->end - (char *)this->begin) / 0x38; /*0x79aefa*/
    else
      currentSize = 0; /*0x79aedf*/
    if ( capacityCount >= count + currentSize ) /*0x79af00*/
    {
      end = (OB_SFrondVertex_010201A0 *)this->end; /*0x79b028*/
      savedEnd = end; /*0x79b03f*/
      if ( end - position >= count ) /*0x79b055*/
      {
        v18 = 0x38 * count; /*0x79b0d3*/
        trailingSource = &end[-count]; /*0x79b0d8*/
        valuea = (const OB_SFrondVertex_010201A0 *)v18; /*0x79b0dd*/
        this->end = OB_SFrondVertex_UninitializedCopyThunk_010201A0(&end[v18 / 0xFFFFFFC8], end, end); /*0x79b0eb*/
        OB_SFrondVertex_CopyBackwardThunk_010201A0(position, trailingSource, savedEnd); /*0x79b0ee*/
        OB_SFrondVertex_FillRange_010201A0( /*0x79b0fe*/
          position,
          (OB_SFrondVertex_010201A0 *)((char *)valuea + (_DWORD)position),
          &copiedValue);
      }
      else
      {
        OB_SFrondVertex_UninitializedCopyThunk_010201A0(position, end, &position[count]); /*0x79b069*/
        v22 = count - ((char *)this->end - (char *)position) / 0x38; /*0x79b08f*/
        v21 = (OB_SFrondVertex_010201A0 *)this->end; /*0x79b090*/
        v26 = 2; /*0x79b093*/
        OB_SFrondVertex_UninitializedFillNThunk_010201A0(v21, v22, &copiedValue); /*0x79b09a*/
        this->end = (char *)this->end + 0x38 * count; /*0x79b0a2*/
        OB_SFrondVertex_FillRange_010201A0(position, (OB_SFrondVertex_010201A0 *)this->end - count, &copiedValue); /*0x79b0b0*/
      }
    }
    else
    {
      if ( 0x4924924 - (capacityCount >> 1) >= capacityCount ) /*0x79af13*/
        grownCapacity = (capacityCount >> 1) + capacityCount; /*0x79af19*/
      else
        grownCapacity = 0; /*0x79af15*/
      if ( this->begin ) /*0x79af1b*/
        sizeForGrowth = ((char *)this->end - (char *)this->begin) / 0x38; /*0x79af3c*/
      else
        sizeForGrowth = 0; /*0x79af21*/
      if ( grownCapacity < count + sizeForGrowth ) /*0x79af42*/
        grownCapacity = count + OB_stVector_SFrondVertex_Size_010201A0(this); /*0x79af4d*/
      newStorage = OB_stVector_SFrondVertex_Allocate_010201A0(grownCapacity); /*0x79af62*/
      v20 = (const OB_SFrondVertex_010201A0 *)this->begin; /*0x79af6f*/
      v26 = 0; /*0x79af70*/
      constructedPrefixEnd = OB_SFrondVertex_UninitializedCopy_010201A0(v20, position, newStorage); /*0x79af77*/
      insertedEnd = OB_SFrondVertex_UninitializedFillNThunk_010201A0(constructedPrefixEnd, count, &copiedValue); /*0x79af87*/
      OB_SFrondVertex_UninitializedCopy_010201A0(position, (const OB_SFrondVertex_010201A0 *)this->end, insertedEnd); /*0x79afa2*/
      v15 = this->begin; /*0x79afa7*/
      if ( v15 ) /*0x79afaf*/
        v15 = (void *)(((char *)this->end - (char *)v15) / 0x38); /*0x79afc7*/
      v16 = (char *)v15 + count; /*0x79afc9*/
      if ( this->begin ) /*0x79afcb*/
        FormHeapFree((unsigned int)this->begin); /*0x79afd3*/
      this->capacityEnd = &newStorage[grownCapacity]; /*0x79aff3*/
      this->end = &newStorage[(_DWORD)v16]; /*0x79aff9*/
      this->begin = newStorage; /*0x79affc*/
    }
  }
}
