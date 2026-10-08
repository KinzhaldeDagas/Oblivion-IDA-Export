// OBLIVION AUTHORITY (2026-08-30): Insert-fill core for vector<vector<unsigned short>>. Copies the fill value, uses 0x10-byte owner arithmetic, 1.5x growth, exception-safe move/fill construction, and normal epilogue at 0x797267; prior noreturn metadata was false.
// positive sp value has been detected, the output may be wrong!
void __thiscall OB_stVector_stVectorUShort_InsertFill_010201A0(
        OB_stVector_stVectorUShort_010201A0 *this,
        OB_stVector_stVectorUShortIterator_010201A0 position,
        unsigned int count,
        const OB_stVectorUShort_010201A0 *value)
{
  OB_stVectorUShort_010201A0 *begin; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  OB_stVector16_010201A0 *_010201A0; // eax
  OB_stVectorUShort_010201A0 *v13; // ecx
  OB_stVectorUShort_010201A0 *v14; // eax
  OB_stVectorUShort_010201A0 *v15; // eax
  OB_stVectorUShort_010201A0 *v16; // ecx
  OB_stVector4_010201A0 *v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  OB_stVectorUShort_010201A0 *end; // eax
  OB_stVectorUShort_010201A0 *v21; // edi
  OB_stVectorUShort_010201A0 *v22; // [esp-10h] [ebp-48h]
  unsigned int v23; // [esp-Ch] [ebp-44h]
  OB_stVectorUShort_010201A0 *v24; // [esp-Ch] [ebp-44h]
  int v25; // [esp-4h] [ebp-3Ch] BYREF
  OB_stVector4_010201A0 v26; // [esp+10h] [ebp-28h] BYREF
  OB_stVectorUShort_010201A0 *destinationEnd; // [esp+20h] [ebp-18h]
  OB_stVector_stVectorUShort_010201A0 *v28; // [esp+24h] [ebp-14h]
  int *v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+34h] [ebp-4h]
  OB_stVector4_010201A0 *first; // [esp+4Ch] [ebp+14h]

  v29 = &v25; /*0x797008*/
  v28 = this; /*0x79700d*/
  OB_stVectorUShort_CopyCtor_010201A0((OB_stVectorUShort_010201A0 *)&v26, value); /*0x797017*/
  begin = this->begin; /*0x79701c*/
  v6 = 0; /*0x79701f*/
  v30 = 0; /*0x797023*/
  if ( begin ) /*0x797026*/
    v7 = this->capacityEnd - begin; /*0x797031*/
  else
    v7 = 0; /*0x797028*/
  if ( count ) /*0x797039*/
  {
    if ( begin ) /*0x797041*/
      v6 = this->end - begin; /*0x797048*/
    if ( 0xFFFFFFF - v6 < count ) /*0x797054*/
      OB_stVector_ThrowLengthError_010201A0(count); /*0x797056*/
    if ( begin ) /*0x79705d*/
      v8 = this->end - begin; /*0x797068*/
    else
      v8 = 0; /*0x79705f*/
    if ( v7 >= count + v8 ) /*0x79706f*/
    {
      end = this->end; /*0x797185*/
      destinationEnd = end; /*0x797194*/
      if ( end - position.current >= count ) /*0x797197*/
      {
        v21 = &end[-count]; /*0x797217*/
        this->end = OB_stVector_stVectorUShort_UninitializedMoveRangeThunk_010201A0(v21, end, end); /*0x797225*/
        OB_stVector_stVectorUShort_MoveAssignRangeBackward_010201A0(position.current, v21, destinationEnd); /*0x79722e*/
        OB_stVector_stVectorUShort_CopyAssignFillRange_010201A0( /*0x79723e*/
          position.current,
          &position.current[count],
          (const OB_stVectorUShort_010201A0 *)&v26);
      }
      else
      {
        OB_stVector_stVectorUShort_UninitializedMoveRangeThunk_010201A0(position.current, end, &position.current[count]); /*0x7971a8*/
        v23 = count - (this->end - position.current); /*0x7971bd*/
        v22 = this->end; /*0x7971be*/
        LOBYTE(v30) = 3; /*0x7971c1*/
        OB_stVector_stVectorUShort_UninitializedFillNThunk_010201A0(v22, v23, (const OB_stVectorUShort_010201A0 *)&v26); /*0x7971c5*/
        this->end += count; /*0x7971cd*/
        v24 = &this->end[-count]; /*0x7971d9*/
        v30 = 0; /*0x7971db*/
        OB_stVector_stVectorUShort_CopyAssignFillRange_010201A0( /*0x7971e2*/
          position.current,
          v24,
          (const OB_stVectorUShort_010201A0 *)&v26);
      }
    }
    else
    {
      if ( 0xFFFFFFF - (v7 >> 1) >= v7 ) /*0x797082*/
        v9 = (v7 >> 1) + v7; /*0x797088*/
      else
        v9 = 0; /*0x797084*/
      if ( begin ) /*0x79708c*/
        v10 = this->end - begin; /*0x797097*/
      else
        v10 = 0; /*0x79708e*/
      if ( v9 < count + v10 ) /*0x79709e*/
      {
        if ( begin ) /*0x7970a2*/
          v11 = this->end - begin; /*0x7970ad*/
        else
          v11 = 0; /*0x7970a4*/
        v9 = v11 + count; /*0x7970b0*/
      }
      _010201A0 = OB_stVector16_Allocate_010201A0(v9); /*0x7970b6*/
      v13 = this->begin; /*0x7970bb*/
      LOBYTE(destinationEnd) = 0; /*0x7970be*/
      first = (OB_stVector4_010201A0 *)_010201A0; /*0x7970cf*/
      LOBYTE(v30) = 1; /*0x7970d7*/
      v14 = OB_stVector_stVectorUShort_UninitializedMoveRange_010201A0( /*0x7970db*/
              v13,
              position.current,
              (OB_stVectorUShort_010201A0 *)_010201A0);
      v15 = OB_stVector_stVectorUShort_UninitializedFillNThunk_010201A0( /*0x7970ee*/
              v14,
              count,
              (const OB_stVectorUShort_010201A0 *)&v26);
      v16 = this->end; /*0x7970f3*/
      LOBYTE(destinationEnd) = 0; /*0x7970f6*/
      OB_stVector_stVectorUShort_UninitializedMoveRange_010201A0(position.current, v16, v15); /*0x79710c*/
      v17 = (OB_stVector4_010201A0 *)this->begin; /*0x797111*/
      if ( v17 ) /*0x797119*/
        v18 = ((char *)this->end - (char *)v17) >> 4; /*0x797124*/
      else
        v18 = 0; /*0x79711b*/
      v19 = v18 + count; /*0x797127*/
      if ( v17 ) /*0x79712b*/
      {
        OB_stVector4_DestroyRange_010201A0(v17, (OB_stVector4_010201A0 *)this->end); /*0x797137*/
        FormHeapFree((unsigned int)this->begin); /*0x797140*/
      }
      this->capacityEnd = (OB_stVectorUShort_010201A0 *)&first[v9]; /*0x797155*/
      this->end = (OB_stVectorUShort_010201A0 *)&first[v19]; /*0x797158*/
      this->begin = (OB_stVectorUShort_010201A0 *)first; /*0x79715b*/
    }
  }
  if ( v26.begin ) /*0x79724b*/
    FormHeapFree((unsigned int)v26.begin); /*0x79724e*/
}
