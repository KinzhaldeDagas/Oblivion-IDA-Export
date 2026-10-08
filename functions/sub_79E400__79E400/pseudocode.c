// Oblivion st_vector<SFrondTexture>::insert(position,count,value). Makes an alias-safe value copy, enforces max_size 0x5D1745D, grows capacity by 1.5x when needed, and performs exception-safe deep construction/destruction of 0x2C-byte string-bearing records.
// positive sp value has been detected, the output may be wrong!
void __thiscall OB_stVector_SFrondTexture_InsertFill_010201A0(
        OB_stVector16_010201A0 *this,
        OB_stVector16_010201A0 *expectedOwner,
        OB_SFrondTexture_010201A0 *position,
        unsigned int count,
        const OB_SFrondTexture_010201A0 *value)
{
  unsigned int capacityCount; // edi
  void *begin; // ecx
  int v8; // eax
  int v9; // eax
  unsigned int newCapacityCount; // edi
  int v11; // eax
  OB_SFrondTexture_010201A0 *newStorage; // eax
  const OB_SFrondTexture_010201A0 *oldBegin; // ecx
  OB_SFrondTexture_010201A0 *afterInserted; // eax
  const OB_SFrondTexture_010201A0 *oldEnd; // ecx
  OB_SFrondTexture_010201A0 *oldBeginForDestroy; // ecx
  int oldSize; // eax
  unsigned int newSize; // ebx
  OB_SFrondTexture_010201A0 *newBegin; // eax
  OB_SFrondTexture_010201A0 *newEnd; // ebx
  OB_SFrondTexture_010201A0 *existingEnd; // ecx
  OB_SFrondTexture_010201A0 *v22; // eax
  OB_SFrondTexture_010201A0 *newEndAfterTailCopy; // eax
  OB_SFrondTexture_010201A0 *tailFirst; // ecx
  OB_SFrondTexture_010201A0 *end; // [esp-10h] [ebp-70h]
  unsigned int v26; // [esp-Ch] [ebp-6Ch]
  OB_SFrondTexture_010201A0 *v27; // [esp-Ch] [ebp-6Ch]
  int v28; // [esp-4h] [ebp-64h] BYREF
  OB_SFrondTexture_010201A0 *newStorageBegin; // [esp+10h] [ebp-50h]
  OB_SFrondTexture_010201A0 *constructedEnd; // [esp+14h] [ebp-4Ch]
  OB_SFrondTexture_010201A0 *v31; // [esp+18h] [ebp-48h]
  OB_SFrondTexture_010201A0 *destinationLast; // [esp+1Ch] [ebp-44h]
  OB_SFrondTexture_010201A0 v33; // [esp+20h] [ebp-40h] BYREF
  int *v34; // [esp+50h] [ebp-10h]
  int v35; // [esp+5Ch] [ebp-4h]

  v34 = &v28; /*0x79e42b*/
  capacityCount = 0; /*0x79e433*/
  v31 = (OB_SFrondTexture_010201A0 *)this; /*0x79e43c*/
  v33.filename.capacity = 0xF; /*0x79e43f*/
  v33.filename.size = 0; /*0x79e446*/
  v33.filename.storage.inlineData[0] = 0; /*0x79e449*/
  OB_stString28_AssignSubstring_010201A0(&v33.filename, &value->filename, 0, 0xFFFFFFFF); /*0x79e44d*/
  v33.aspectRatio = value->aspectRatio; /*0x79e455*/
  v33.sizeScale = value->sizeScale; /*0x79e45b*/
  v33.minAngleOffset = value->minAngleOffset; /*0x79e461*/
  v33.maxAngleOffset = value->maxAngleOffset; /*0x79e467*/
  begin = this->begin; /*0x79e46a*/
  v35 = 0; /*0x79e46f*/
  if ( begin ) /*0x79e472*/
    capacityCount = ((char *)this->capacityEnd - (char *)begin) / 0x2C; /*0x79e488*/
  if ( count ) /*0x79e48f*/
  {
    if ( begin ) /*0x79e497*/
      v8 = ((char *)this->end - (char *)begin) / 0x2C; /*0x79e4b1*/
    else
      v8 = 0; /*0x79e499*/
    if ( 0x5D1745D - v8 < count ) /*0x79e4bc*/
      OB_stVector_ThrowLengthError_010201A0(capacityCount); /*0x79e4be*/
    if ( begin ) /*0x79e4c5*/
      v9 = ((char *)this->end - (char *)begin) / 0x2C; /*0x79e4df*/
    else
      v9 = 0; /*0x79e4c7*/
    if ( capacityCount >= count + v9 ) /*0x79e4e5*/
    {
      existingEnd = (OB_SFrondTexture_010201A0 *)this->end; /*0x79e60f*/
      destinationLast = existingEnd; /*0x79e62c*/
      if ( existingEnd - position >= count ) /*0x79e62f*/
      {
        v31 = &existingEnd[-count]; /*0x79e6c5*/
        newEndAfterTailCopy = OB_stVector_SFrondTexture_UninitializedCopyThunk_010201A0( /*0x79e6c8*/
                                this,
                                v31,
                                existingEnd,
                                existingEnd);
        tailFirst = v31; /*0x79e6cd*/
        this->end = newEndAfterTailCopy; /*0x79e6d0*/
        OB_SFrondTexture_CopyAssignRangeBackwardCheckedThunk_010201A0(position, tailFirst, destinationLast); /*0x79e6d9*/
        OB_SFrondTexture_FillRange_010201A0(position, &position[count], &v33); /*0x79e6e6*/
      }
      else
      {
        destinationLast = (OB_SFrondTexture_010201A0 *)(0x2C * count); /*0x79e63a*/
        OB_stVector_SFrondTexture_UninitializedCopyThunk_010201A0(this, position, existingEnd, &position[count]); /*0x79e644*/
        v26 = count - ((char *)this->end - (char *)position) / 0x2C; /*0x79e667*/
        end = (OB_SFrondTexture_010201A0 *)this->end; /*0x79e668*/
        LOBYTE(v35) = 3; /*0x79e66b*/
        OB_stVector_SFrondTexture_UninitializedFillNThunk_010201A0(this, end, v26, &v33); /*0x79e66f*/
        v22 = destinationLast; /*0x79e674*/
        this->end = (char *)this->end + (unsigned int)destinationLast; /*0x79e677*/
        v27 = (OB_SFrondTexture_010201A0 *)((char *)this->end - (char *)v22); /*0x79e683*/
        v35 = 0; /*0x79e685*/
        OB_SFrondTexture_FillRange_010201A0(position, v27, &v33); /*0x79e68c*/
      }
    }
    else
    {
      if ( 0x5D1745D - (capacityCount >> 1) >= capacityCount ) /*0x79e4f8*/
        newCapacityCount = (capacityCount >> 1) + capacityCount; /*0x79e4fe*/
      else
        newCapacityCount = 0; /*0x79e4fa*/
      if ( begin ) /*0x79e502*/
        v11 = ((char *)this->end - (char *)begin) / 0x2C; /*0x79e51c*/
      else
        v11 = 0; /*0x79e504*/
      if ( newCapacityCount < count + v11 ) /*0x79e522*/
        newCapacityCount = count + sub_6F1140(this); /*0x79e52d*/
      newStorage = (OB_SFrondTexture_010201A0 *)sub_556440((char *)newCapacityCount); /*0x79e532*/
      oldBegin = (const OB_SFrondTexture_010201A0 *)this->begin; /*0x79e537*/
      LOBYTE(destinationLast) = 0; /*0x79e53a*/
      newStorageBegin = newStorage; /*0x79e548*/
      constructedEnd = newStorage; /*0x79e54b*/
      LOBYTE(v35) = 1; /*0x79e553*/
      constructedEnd = OB_SFrondTexture_UninitializedCopy_010201A0(oldBegin, position, newStorage); /*0x79e567*/
      afterInserted = OB_stVector_SFrondTexture_UninitializedFillNThunk_010201A0(this, constructedEnd, count, &v33); /*0x79e56a*/
      oldEnd = (const OB_SFrondTexture_010201A0 *)this->end; /*0x79e56f*/
      LOBYTE(destinationLast) = 0; /*0x79e572*/
      constructedEnd = afterInserted; /*0x79e580*/
      OB_SFrondTexture_UninitializedCopy_010201A0(position, oldEnd, afterInserted); /*0x79e588*/
      oldBeginForDestroy = (OB_SFrondTexture_010201A0 *)this->begin; /*0x79e58d*/
      if ( oldBeginForDestroy ) /*0x79e595*/
        oldSize = ((char *)this->end - (char *)oldBeginForDestroy) / 0x2C; /*0x79e5af*/
      else
        oldSize = 0; /*0x79e597*/
      newSize = oldSize + count; /*0x79e5b1*/
      if ( oldBeginForDestroy ) /*0x79e5b5*/
      {
        OB_SFrondTexture_DestroyRange_010201A0(oldBeginForDestroy, (OB_SFrondTexture_010201A0 *)this->end); /*0x79e5c1*/
        FormHeapFree((unsigned int)this->begin); /*0x79e5ca*/
      }
      newBegin = newStorageBegin; /*0x79e5d2*/
      newEnd = &newStorageBegin[newSize]; /*0x79e5dd*/
      this->capacityEnd = &newStorageBegin[newCapacityCount]; /*0x79e5df*/
      this->end = newEnd; /*0x79e5e2*/
      this->begin = newBegin; /*0x79e5e5*/
    }
  }
  if ( v33.filename.capacity >= 0x10 ) /*0x79e6f2*/
    FormHeapFree((unsigned int)v33.filename.storage.heapData); /*0x79e6f8*/
}
