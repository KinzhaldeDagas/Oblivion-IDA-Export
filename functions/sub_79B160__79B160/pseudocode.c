// Oblivion-authoritative copy assignment for the SFrondGuide vertex vector at +0x00. Reuses existing 0x38-byte-element capacity when possible, otherwise frees/reserves and deep-copies the source range.
OB_stVector16_010201A0 *__thiscall OB_stVector_SFrondVertex_CopyAssign_010201A0(
        OB_stVector16_010201A0 *this,
        const OB_stVector16_010201A0 *source)
{
  void *begin; // eax
  unsigned int v4; // ecx
  OB_SFrondVertex_010201A0 *v6; // edi
  unsigned int v7; // eax
  void *v8; // eax
  unsigned int v9; // eax
  OB_SFrondVertex_010201A0 *v10; // ebx
  unsigned int v11; // eax

  if ( this == source ) /*0x79b16a*/
    return this; /*0x79b2db*/
  begin = source->begin; /*0x79b170*/
  if ( !begin || (v4 = ((char *)source->end - (char *)begin) / 0x38) == 0 ) /*0x79b18f*/
  {
    OB_stVector_SFrondVertex_Clear_010201A0(this); /*0x79b193*/
    return this; /*0x79b19c*/
  }
  v6 = (OB_SFrondVertex_010201A0 *)this->begin; /*0x79b1a1*/
  if ( v6 ) /*0x79b1a6*/
    v7 = ((char *)this->end - (char *)v6) / 0x38; /*0x79b1c2*/
  else
    v7 = 0; /*0x79b1a8*/
  if ( v4 > v7 ) /*0x79b1c6*/
  {
    if ( v6 ) /*0x79b244*/
      v9 = ((char *)this->capacityEnd - (char *)v6) / 0x38; /*0x79b260*/
    else
      v9 = 0; /*0x79b246*/
    if ( v4 <= v9 ) /*0x79b264*/
    {
      v10 = (OB_SFrondVertex_010201A0 *)((char *)source->begin + 0x38 * OB_stVector_SFrondVertex_Size_010201A0(this)); /*0x79b279*/
      OB_SFrondVertex_CopyForwardThunk_010201A0((OB_SFrondVertex_010201A0 *)source->begin, v10, v6); /*0x79b27f*/
      this->end = OB_SFrondVertex_UninitializedCopyThunk_010201A0( /*0x79b298*/
                    v10,
                    (const OB_SFrondVertex_010201A0 *)source->end,
                    (OB_SFrondVertex_010201A0 *)this->end);
      return this; /*0x79b2a0*/
    }
    if ( v6 ) /*0x79b2a5*/
      FormHeapFree((unsigned int)this->begin); /*0x79b2a8*/
    v11 = OB_stVector_SFrondVertex_Size_010201A0(source); /*0x79b2b2*/
    if ( OB_stVector_SFrondVertex_Buy_010201A0(this, v11) ) /*0x79b2ba*/
      this->end = OB_SFrondVertex_UninitializedCopyThunk_010201A0( /*0x79b2d6*/
                    (const OB_SFrondVertex_010201A0 *)source->begin,
                    (const OB_SFrondVertex_010201A0 *)source->end,
                    (OB_SFrondVertex_010201A0 *)this->begin);
    return this; /*0x79b2d6*/
  }
  OB_SFrondVertex_CopyForward_010201A0( /*0x79b1e5*/
    (OB_SFrondVertex_010201A0 *)source->begin,
    (OB_SFrondVertex_010201A0 *)source->end,
    v6);
  v8 = source->begin; /*0x79b1ea*/
  if ( v8 ) /*0x79b1f2*/
    this->end = (char *)this->begin + 0x38 * (((char *)source->end - (char *)v8) / 0x38); /*0x79b237*/
  else
    this->end = this->begin; /*0x79b204*/
  return this; /*0x79b19a*/
}
