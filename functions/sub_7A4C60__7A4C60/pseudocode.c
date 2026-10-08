// Leaf-texture vector deep copy assignment: clear on empty source, reuse initialized/capacity ranges when possible, otherwise destroy/free and allocate exact source size.
OB_stVector_SIdvLeafTexture_010201A0 *__thiscall OB_stVector_SIdvLeafTexture_CopyAssign_010201A0(
        OB_stVector_SIdvLeafTexture_010201A0 *this,
        const OB_stVector_SIdvLeafTexture_010201A0 *source)
{
  OB_SIdvLeafTexture_010201A0 *begin; // eax
  unsigned int sourceSize; // ecx
  OB_SIdvLeafTexture_010201A0 *destinationBegin; // ebx
  unsigned int destinationSize; // eax
  OB_SIdvLeafTexture_010201A0 *v8; // eax
  OB_SIdvLeafTexture_010201A0 *v9; // eax
  unsigned int destinationCapacity; // eax
  const OB_SIdvLeafTexture_010201A0 *sourceSplit; // edi
  unsigned int sourceCount; // eax

  if ( this == source ) /*0x7a4c6a*/
    return this; /*0x7a4ddb*/
  begin = source->begin; /*0x7a4c70*/
  if ( !begin || (sourceSize = source->end - begin) == 0 ) /*0x7a4c90*/
  {
    OB_stVector_SIdvLeafTexture_Clear_010201A0(this); /*0x7a4c94*/
    return this; /*0x7a4c9e*/
  }
  destinationBegin = this->begin; /*0x7a4ca2*/
  if ( destinationBegin ) /*0x7a4ca7*/
    destinationSize = this->end - destinationBegin; /*0x7a4cc1*/
  else
    destinationSize = 0; /*0x7a4ca9*/
  if ( sourceSize > destinationSize ) /*0x7a4cc5*/
  {
    if ( destinationBegin ) /*0x7a4d3c*/
      destinationCapacity = this->capacityEnd - destinationBegin; /*0x7a4d56*/
    else
      destinationCapacity = 0; /*0x7a4d3e*/
    if ( sourceSize <= destinationCapacity ) /*0x7a4d5a*/
    {
      sourceSplit = &source->begin[OB_stVector_SIdvLeafTexture_Size_010201A0(this)]; /*0x7a4d6b*/
      OB_stVector_SIdvLeafTexture_CopyAssignRangeForwardThunk_010201A0(source->begin, sourceSplit, destinationBegin); /*0x7a4d70*/
      this->end = OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0(sourceSplit, source->end, this->end); /*0x7a4d89*/
      return this; /*0x7a4d91*/
    }
    if ( destinationBegin ) /*0x7a4d96*/
    {
      OB_stVector_SIdvLeafTexture_DestroyRangeThunk_010201A0(destinationBegin, this->end); /*0x7a4d9f*/
      FormHeapFree((unsigned int)this->begin); /*0x7a4da8*/
    }
    sourceCount = OB_stVector_SIdvLeafTexture_Size_010201A0(source); /*0x7a4db2*/
    if ( OB_stVector_SIdvLeafTexture_AllocateStorage_010201A0(this, sourceCount) ) /*0x7a4dba*/
      this->end = OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0(source->begin, source->end, this->begin); /*0x7a4dd6*/
    return this; /*0x7a4dd6*/
  }
  v8 = OB_SIdvLeafTexture_CopyAssignRangeForward_010201A0(source->begin, source->end, destinationBegin); /*0x7a4ce1*/
  OB_SIdvLeafTexture_DestroyRange_010201A0(v8, this->end); /*0x7a4cf1*/
  v9 = source->begin; /*0x7a4cf6*/
  if ( v9 ) /*0x7a4cfe*/
    this->end = &this->begin[source->end - v9]; /*0x7a4d2f*/
  else
    this->end = this->begin; /*0x7a4d07*/
  return this; /*0x7a4c9c*/
}
