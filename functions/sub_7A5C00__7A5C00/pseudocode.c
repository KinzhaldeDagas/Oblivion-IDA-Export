// Complete leaf-texture vector fill insertion: snapshots an aliasing value, checks max 0x030C30C3 elements, reuses capacity with overlap-safe movement or reallocates at max(1.5x capacity,size+count), and deep-copies filenames.
// positive sp value has been detected, the output may be wrong!
void __thiscall OB_stVector_SIdvLeafTexture_InsertFill_010201A0(
        OB_stVector_SIdvLeafTexture_010201A0 *this,
        OB_stVector_SIdvLeafTexture_010201A0 *expectedOwner,
        OB_SIdvLeafTexture_010201A0 *position,
        unsigned int count,
        const OB_SIdvLeafTexture_010201A0 *value)
{
  OB_SIdvLeafTexture_010201A0 *begin; // ecx
  unsigned int capacityCount; // edi
  int v8; // eax
  int v9; // eax
  unsigned int newCapacity; // edi
  int v11; // eax
  OB_SIdvLeafTexture_010201A0 *allocatedBegin; // eax
  OB_SIdvLeafTexture_010201A0 *v13; // ecx
  OB_SIdvLeafTexture_010201A0 *v14; // eax
  OB_SIdvLeafTexture_010201A0 *v15; // ecx
  OB_SIdvLeafTexture_010201A0 *v16; // ecx
  int v17; // eax
  unsigned int newSize; // ebx
  OB_SIdvLeafTexture_010201A0 *newBegin; // eax
  OB_SIdvLeafTexture_010201A0 *newEnd; // ebx
  OB_SIdvLeafTexture_010201A0 *end; // ecx
  OB_SIdvLeafTexture_010201A0 *v22; // eax
  OB_SIdvLeafTexture_010201A0 *v23; // eax
  OB_SIdvLeafTexture_010201A0 *v24; // ecx
  OB_SIdvLeafTexture_010201A0 *v25; // [esp-10h] [ebp-98h]
  unsigned int v26; // [esp-Ch] [ebp-94h]
  OB_SIdvLeafTexture_010201A0 *v27; // [esp-Ch] [ebp-94h]
  int v28; // [esp-4h] [ebp-8Ch] BYREF
  OB_SIdvLeafTexture_010201A0 *newStorage; // [esp+10h] [ebp-78h]
  OB_SIdvLeafTexture_010201A0 *constructedEnd; // [esp+14h] [ebp-74h]
  OB_SIdvLeafTexture_010201A0 *v31; // [esp+18h] [ebp-70h]
  OB_SIdvLeafTexture_010201A0 *destinationEnd; // [esp+1Ch] [ebp-6Ch]
  OB_SIdvLeafTexture_010201A0 aliasedValueCopy; // [esp+20h] [ebp-68h] BYREF
  int *v34; // [esp+78h] [ebp-10h]
  int v35; // [esp+84h] [ebp-4h]

  v34 = &v28; /*0x7a5c2b*/
  v31 = (OB_SIdvLeafTexture_010201A0 *)this; /*0x7a5c37*/
  OB_SIdvLeafTexture_CopyCtor_010201A0(&aliasedValueCopy, value); /*0x7a5c3a*/
  begin = this->begin; /*0x7a5c3f*/
  capacityCount = 0; /*0x7a5c42*/
  v35 = 0; /*0x7a5c46*/
  if ( begin ) /*0x7a5c49*/
    capacityCount = this->capacityEnd - begin; /*0x7a5c5f*/
  if ( count ) /*0x7a5c66*/
  {
    if ( begin ) /*0x7a5c6e*/
      v8 = this->end - begin; /*0x7a5c88*/
    else
      v8 = 0; /*0x7a5c70*/
    if ( 0x30C30C3 - v8 < count ) /*0x7a5c93*/
      OB_stVector_ThrowLengthError_010201A0(capacityCount); /*0x7a5c95*/
    if ( begin ) /*0x7a5c9c*/
      v9 = this->end - begin; /*0x7a5cb6*/
    else
      v9 = 0; /*0x7a5c9e*/
    if ( capacityCount >= count + v9 ) /*0x7a5cbc*/
    {
      end = this->end;                          // In-capacity insertion path handles both tail>=count and tail<count with uninitialized construction plus overlap-safe assignment. /*0x7a5de6*/
      destinationEnd = end; /*0x7a5e03*/
      if ( end - position >= count ) /*0x7a5e06*/
      {
        v31 = &end[-count]; /*0x7a5e9c*/
        v23 = OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0(v31, end, end); /*0x7a5e9f*/
        v24 = v31; /*0x7a5ea4*/
        this->end = v23; /*0x7a5ea7*/
        OB_stVector_SIdvLeafTexture_CopyAssignRangeBackwardThunk_010201A0(position, v24, destinationEnd); /*0x7a5eb0*/
        OB_SIdvLeafTexture_CopyAssignFillRange_010201A0(position, &position[count], &aliasedValueCopy); /*0x7a5ebd*/
      }
      else
      {
        destinationEnd = (OB_SIdvLeafTexture_010201A0 *)(0x54 * count); /*0x7a5e11*/
        OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0(position, end, &position[count]); /*0x7a5e1b*/
        v26 = count - (this->end - position); /*0x7a5e3e*/
        v25 = this->end; /*0x7a5e3f*/
        LOBYTE(v35) = 3; /*0x7a5e42*/
        OB_stVector_SIdvLeafTexture_UninitializedFillNThunk_010201A0(v25, v26, &aliasedValueCopy); /*0x7a5e46*/
        v22 = destinationEnd; /*0x7a5e4b*/
        this->end = (OB_SIdvLeafTexture_010201A0 *)((char *)this->end + (unsigned int)destinationEnd); /*0x7a5e4e*/
        v27 = (OB_SIdvLeafTexture_010201A0 *)((char *)this->end - (char *)v22); /*0x7a5e5a*/
        v35 = 0; /*0x7a5e5c*/
        OB_SIdvLeafTexture_CopyAssignFillRange_010201A0(position, v27, &aliasedValueCopy); /*0x7a5e63*/
      }
    }
    else
    {
      if ( 0x30C30C3 - (capacityCount >> 1) >= capacityCount ) /*0x7a5ccf*/
        newCapacity = (capacityCount >> 1) + capacityCount; /*0x7a5cd5*/
      else
        newCapacity = 0; /*0x7a5cd1*/
      if ( begin ) /*0x7a5cd9*/
        v11 = this->end - begin; /*0x7a5cf3*/
      else
        v11 = 0; /*0x7a5cdb*/
      if ( newCapacity < count + v11 ) /*0x7a5cf9*/
        newCapacity = count + OB_stVector_SIdvLeafTexture_Size_010201A0(this); /*0x7a5d04*/
      allocatedBegin = OB_stVector_SIdvLeafTexture_Allocate_010201A0(newCapacity); /*0x7a5d09*/
      v13 = this->begin; /*0x7a5d0e*/
      LOBYTE(destinationEnd) = 0; /*0x7a5d11*/
      newStorage = allocatedBegin; /*0x7a5d1f*/
      constructedEnd = allocatedBegin; /*0x7a5d22*/
      LOBYTE(v35) = 1; /*0x7a5d2a*/
      constructedEnd = OB_SIdvLeafTexture_UninitializedCopy_010201A0(v13, position, allocatedBegin);// Reallocation path deep-copies prefix, inserted values, and suffix into new storage before destroying/freeing the old range. /*0x7a5d3e*/
      v14 = OB_stVector_SIdvLeafTexture_UninitializedFillNThunk_010201A0(constructedEnd, count, &aliasedValueCopy); /*0x7a5d41*/
      v15 = this->end; /*0x7a5d46*/
      LOBYTE(destinationEnd) = 0; /*0x7a5d49*/
      constructedEnd = v14; /*0x7a5d57*/
      OB_SIdvLeafTexture_UninitializedCopy_010201A0(position, v15, v14); /*0x7a5d5f*/
      v16 = this->begin; /*0x7a5d64*/
      if ( v16 ) /*0x7a5d6c*/
        v17 = this->end - v16; /*0x7a5d86*/
      else
        v17 = 0; /*0x7a5d6e*/
      newSize = v17 + count; /*0x7a5d88*/
      if ( v16 ) /*0x7a5d8c*/
      {
        OB_SIdvLeafTexture_DestroyRange_010201A0(v16, this->end); /*0x7a5d98*/
        FormHeapFree((unsigned int)this->begin); /*0x7a5da1*/
      }
      newBegin = newStorage; /*0x7a5da9*/
      newEnd = &newStorage[newSize]; /*0x7a5db4*/
      this->capacityEnd = &newStorage[newCapacity]; /*0x7a5db6*/
      this->end = newEnd; /*0x7a5db9*/
      this->begin = newBegin; /*0x7a5dbc*/
    }
  }
  if ( aliasedValueCopy.filename.capacity >= 0x10 ) /*0x7a5ec9*/
    FormHeapFree((unsigned int)aliasedValueCopy.filename.storage.heapData); /*0x7a5ecf*/
}
