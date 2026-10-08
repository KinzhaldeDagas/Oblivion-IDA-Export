// OBLIVION AUTHORITY (2026-08-30): Compiler-folded copy assignment for a 0x10-byte vector owner with four-byte elements. Handles self-assignment, empty source, capacity reuse, initialized/uninitialized tails, and reallocation.
OB_stVector4_010201A0 *__thiscall OB_stVector4_CopyAssign_010201A0(
        OB_stVector4_010201A0 *this,
        const OB_stVector4_010201A0 *source)
{
  unsigned int *begin; // ebx
  unsigned int v4; // edx
  unsigned int *v6; // eax
  unsigned int v7; // ecx
  unsigned int *v8; // eax
  unsigned int *v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  const unsigned int *v12; // ebx
  unsigned int *v13; // ecx
  unsigned int v14; // eax

  if ( this == source ) /*0x79b2fa*/
    return this; /*0x79b2fa*/
  begin = source->begin; /*0x79b301*/
  if ( !begin || (v4 = source->end - begin) == 0 ) /*0x79b313*/
  {
    OB_stVector4_Clear_010201A0(this); /*0x79b315*/
    return this; /*0x79b320*/
  }
  v6 = this->begin; /*0x79b323*/
  if ( v6 ) /*0x79b328*/
    v7 = this->end - v6; /*0x79b333*/
  else
    v7 = 0; /*0x79b32a*/
  if ( v4 <= v7 ) /*0x79b338*/
  {
    OB_stVector4_CopyRange_010201A0(begin, source->end, this->begin); /*0x79b33d*/
    v8 = source->begin; /*0x79b342*/
    if ( v8 ) /*0x79b34a*/
      v9 = &this->begin[source->end - v8]; /*0x79b36c*/
    else
      v9 = this->begin; /*0x79b352*/
    this->end = v9; /*0x79b357*/
    return this; /*0x79b35d*/
  }
  if ( v6 ) /*0x79b37c*/
    v10 = this->capacity - v6; /*0x79b387*/
  else
    v10 = 0; /*0x79b37e*/
  if ( v4 > v10 ) /*0x79b38c*/
  {
    if ( v6 ) /*0x79b3cc*/
      FormHeapFree((unsigned int)this->begin); /*0x79b3cf*/
    v13 = source->begin; /*0x79b3d7*/
    if ( v13 ) /*0x79b3dc*/
      v14 = source->end - v13; /*0x79b3e7*/
    else
      v14 = 0; /*0x79b3de*/
    if ( OB_stVector4_AllocateCapacity_010201A0(this, v14) ) /*0x79b3ed*/
      this->end = OB_stVector4_UninitializedCopyRange_010201A0(source->begin, source->end, this->begin); /*0x79b409*/
    return this; /*0x79b40f*/
  }
  if ( v6 ) /*0x79b390*/
    v11 = this->end - v6; /*0x79b39b*/
  else
    v11 = 0; /*0x79b392*/
  v12 = &begin[v11]; /*0x79b3a1*/
  OB_stVector4_CopyRange_010201A0(source->begin, v12, this->begin); /*0x79b3a6*/
  this->end = OB_stVector4_UninitializedCopyRange_010201A0(v12, source->end, this->end); /*0x79b3c0*/
  return this; /*0x79b31c*/
}
