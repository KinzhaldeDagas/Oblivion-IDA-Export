// Deep copy assignment for st_vector<SFrondGuide>. Reuses initialized elements/capacity where possible, destroys surplus guides, or frees and buys exact capacity before exception-safe copy construction.
OB_stVector_SFrondGuide_010201A0 *__thiscall OB_stVector_SFrondGuide_CopyAssign_010201A0(
        OB_stVector_SFrondGuide_010201A0 *this,
        const OB_stVector_SFrondGuide_010201A0 *source)
{
  OB_SFrondGuide_010201A0 *begin; // eax
  unsigned int v4; // ecx
  OB_SFrondGuide_010201A0 *v6; // ebx
  unsigned int v7; // eax
  OB_SFrondGuide_010201A0 *v8; // eax
  OB_SFrondGuide_010201A0 *v9; // eax
  unsigned int v10; // eax
  const OB_SFrondGuide_010201A0 *v11; // edi
  unsigned int v12; // eax

  if ( this == source ) /*0x79fb8a*/
    return this; /*0x79fd02*/
  begin = source->begin; /*0x79fb90*/
  if ( !begin || (v4 = source->end - begin) == 0 ) /*0x79fbb0*/
  {
    OB_stVector_SFrondGuide_Clear_010201A0((OB_stVector16_010201A0 *)this); /*0x79fbb4*/
    return this; /*0x79fbbe*/
  }
  v6 = this->begin; /*0x79fbc2*/
  if ( v6 ) /*0x79fbc7*/
    v7 = this->end - v6; /*0x79fbe1*/
  else
    v7 = 0; /*0x79fbc9*/
  if ( v4 > v7 ) /*0x79fbe5*/
  {
    if ( v6 ) /*0x79fc62*/
      v10 = this->capacityEnd - v6; /*0x79fc7c*/
    else
      v10 = 0; /*0x79fc64*/
    if ( v4 <= v10 ) /*0x79fc80*/
    {
      v11 = &source->begin[OB_stVector_SFrondGuide_Size_010201A0((const OB_stVector16_010201A0 *)this)]; /*0x79fc92*/
      OB_SFrondGuide_CopyAssignRangeForwardCheckedThunk_010201A0(source->begin, v11, v6); /*0x79fc97*/
      this->end = OB_stVector_SFrondGuide_UninitializedCopyThunk_010201A0( /*0x79fcb0*/
                    (OB_stVector16_010201A0 *)this,
                    v11,
                    source->end,
                    this->end);
      return this; /*0x79fcb8*/
    }
    if ( v6 ) /*0x79fcbd*/
    {
      OB_SFrondGuide_DestroyRangeThunk_010201A0(v6, this->end); /*0x79fcc6*/
      FormHeapFree((unsigned int)this->begin); /*0x79fccf*/
    }
    v12 = OB_stVector_SFrondGuide_Size_010201A0((const OB_stVector16_010201A0 *)source); /*0x79fcd9*/
    if ( OB_stVector_SFrondGuide_Buy_010201A0((OB_stVector16_010201A0 *)this, v12) ) /*0x79fce1*/
      this->end = OB_stVector_SFrondGuide_UninitializedCopyThunk_010201A0( /*0x79fcfd*/
                    (OB_stVector16_010201A0 *)this,
                    source->begin,
                    source->end,
                    this->begin);
    return this; /*0x79fcfd*/
  }
  v8 = OB_SFrondGuide_CopyAssignRangeForwardThunk_010201A0(source->begin, source->end, v6); /*0x79fc01*/
  OB_SFrondGuide_DestroyRange_010201A0(v8, this->end); /*0x79fc11*/
  v9 = source->begin; /*0x79fc16*/
  if ( v9 ) /*0x79fc1e*/
    this->end = &this->begin[source->end - v9]; /*0x79fc55*/
  else
    this->end = this->begin; /*0x79fc2a*/
  return this; /*0x79fbbc*/
}
