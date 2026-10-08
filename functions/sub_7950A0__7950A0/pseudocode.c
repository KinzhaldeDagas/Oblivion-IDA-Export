// OBLIVION AUTHORITY (2026-08-30): vector<unsigned int> insert-fill core. Handles in-place overlap and 1.5x geometric reallocation while preserving the checked insertion position.
void __thiscall OB_stVectorUInt32_InsertFill_010201A0(
        OB_stVectorUInt32_010201A0 *this,
        OB_stVector4Iterator_010201A0 position,
        unsigned int count,
        const unsigned int *value)
{
  unsigned int *begin; // edx
  unsigned int v6; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // edi
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // eax
  int v17; // ecx
  unsigned int v18; // ebx
  unsigned int *end; // ebp
  unsigned int v20; // eax
  const unsigned int *v21; // ebx
  unsigned int counta; // [esp+14h] [ebp+Ch]
  unsigned int countb; // [esp+14h] [ebp+Ch]

  begin = this->begin; /*0x7950a8*/
  value = (const unsigned int *)*value; /*0x7950af*/
  if ( begin ) /*0x7950b3*/
    v6 = this->capacity - begin; /*0x7950be*/
  else
    v6 = 0; /*0x7950b5*/
  if ( count ) /*0x7950c7*/
  {
    if ( begin ) /*0x7950cf*/
      v8 = this->end - begin; /*0x7950da*/
    else
      v8 = 0; /*0x7950d1*/
    if ( 0xFFFFFFFF - v8 < count ) /*0x7950e5*/
      OB_stVector_ThrowLengthError_010201A0(0xFFFFFFFF - v8); /*0x7950e7*/
    if ( begin ) /*0x7950ee*/
      v9 = this->end - begin; /*0x7950f9*/
    else
      v9 = 0; /*0x7950f0*/
    if ( v6 >= count + v9 ) /*0x795101*/
    {
      end = this->end; /*0x7951bc*/
      v20 = 4 * count; /*0x7951cc*/
      countb = 4 * count; /*0x7951d5*/
      if ( end - position.current >= count ) /*0x7951d9*/
      {
        v21 = &end[v20 / 0xFFFFFFFC]; /*0x795224*/
        this->end = OB_stVector4_UninitializedCopyRange_010201A0(&end[v20 / 0xFFFFFFFC], end, end); /*0x795230*/
        OB_stVector4_CopyBackwardRange_010201A0(position.current, v21, end); /*0x795233*/
        OB_stVector4_CopyFillRange_010201A0( /*0x795245*/
          position.current,
          &position.current[countb / 4],
          (const unsigned int *)&value);
      }
      else
      {
        OB_stVector4_UninitializedCopyRange_010201A0(position.current, end, &position.current[v20 / 4]); /*0x7951e0*/
        OB_stVector4_UninitializedFillN_010201A0( /*0x7951fa*/
          this->end,
          count - (this->end - position.current),
          (const unsigned int *)&value);
        this->end = (unsigned int *)((char *)this->end + countb); /*0x795203*/
        OB_stVector4_CopyFillRange_010201A0( /*0x795212*/
          position.current,
          &this->end[countb / 0xFFFFFFFC],
          (const unsigned int *)&value);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v6 >> 1) >= v6 ) /*0x795112*/
        v10 = (v6 >> 1) + v6; /*0x795118*/
      else
        v10 = 0; /*0x795114*/
      if ( begin ) /*0x79511c*/
        v11 = this->end - begin; /*0x795127*/
      else
        v11 = 0; /*0x79511e*/
      if ( v10 < count + v11 ) /*0x79512e*/
      {
        if ( begin ) /*0x795132*/
          v12 = this->end - begin; /*0x79513d*/
        else
          v12 = 0; /*0x795134*/
        v10 = count + v12; /*0x795140*/
      }
      counta = v10; /*0x795147*/
      v13 = (unsigned int *)FormHeapAlloc(4 * v10); /*0x79515a*/
      v14 = OB_stVector4_UninitializedCopyRange_010201A0(this->begin, position.current, v13); /*0x795161*/
      v15 = OB_stVector4_UninitializedFillN_010201A0(v14, count, (const unsigned int *)&value); /*0x79516f*/
      OB_stVector4_UninitializedCopyRange_010201A0(position.current, this->end, v15); /*0x79517c*/
      v16 = this->begin; /*0x795181*/
      if ( v16 ) /*0x795186*/
        v17 = this->end - v16; /*0x795191*/
      else
        v17 = 0; /*0x795188*/
      v18 = v17 + count; /*0x795194*/
      if ( v16 ) /*0x795198*/
        FormHeapFree((unsigned int)this->begin); /*0x79519b*/
      this->begin = v13; /*0x7951ad*/
      this->capacity = &v13[counta]; /*0x7951b1*/
      this->end = &v13[v18]; /*0x7951b4*/
    }
  }
}
