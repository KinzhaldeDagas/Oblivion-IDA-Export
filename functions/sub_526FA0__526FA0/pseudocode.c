// Oblivion 1.2.0.416: compiler-emitted vector<float>::insert(position,count,value) body used by the checked float insert-one wrapper; 4-byte stride, 1.5x growth, alias-safe local fill value, in-place shift or FormHeap reallocation. Named CompilerCopy because equivalent specializations also exist at other addresses.
void __thiscall OB_stVectorFloat_InsertFill_CompilerCopy_010201A0(
        OB_stVectorFloat_010201A0 *this,
        OB_stVectorFloatIterator_010201A0 position,
        unsigned int count,
        const float *value)
{
  float *begin; // edx
  unsigned int v6; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // edi
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  int v17; // ecx
  unsigned int v18; // ebx
  float *end; // ebp
  bool v20; // cf
  unsigned int v21; // eax
  const unsigned int *v22; // ebx
  unsigned int counta; // [esp+14h] [ebp+Ch]
  unsigned int countb; // [esp+14h] [ebp+Ch]

  value = *(const float **)value; /*0x526fa8*/
  begin = this->begin; /*0x526fae*/
  if ( begin ) /*0x526fb3*/
    v6 = this->capacity - begin; /*0x526fbe*/
  else
    v6 = 0; /*0x526fb5*/
  if ( count ) /*0x526fc7*/
  {
    if ( begin ) /*0x526fcf*/
      v8 = this->end - begin; /*0x526fda*/
    else
      v8 = 0; /*0x526fd1*/
    if ( 0xFFFFFFFF - v8 < count ) /*0x526fe5*/
      OB_stVector_ThrowLengthError_010201A0(0xFFFFFFFF - v8); /*0x526fe7*/
    if ( begin ) /*0x526fee*/
      v9 = this->end - begin; /*0x526ff9*/
    else
      v9 = 0; /*0x526ff0*/
    if ( v6 >= count + v9 ) /*0x527001*/
    {
      end = this->end; /*0x5270bc*/
      v20 = end - position.current < count; /*0x5270ca*/
      v21 = 4 * count; /*0x5270cc*/
      countb = 4 * count; /*0x5270d5*/
      if ( v20 ) /*0x5270d9*/
      {
        OB_stVector4_UninitializedCopyRange_010201A0( /*0x5270e0*/
          (const unsigned int *)position.current,
          (const unsigned int *)end,
          (unsigned int *)&position.current[v21 / 4]);
        OB_stVectorFloat_UninitializedFillN_010201A0( /*0x5270fa*/
          this->end,
          count - (this->end - position.current),
          (const float *)&value);
        this->end = (float *)((char *)this->end + countb); /*0x527103*/
        OB_stVectorFloat_CopyFillRange_010201A0( /*0x527112*/
          position.current,
          &this->end[countb / 0xFFFFFFFC],
          (const float *)&value);
      }
      else
      {
        v22 = (const unsigned int *)&end[v21 / 0xFFFFFFFC]; /*0x527124*/
        this->end = (float *)OB_stVector4_UninitializedCopyRange_010201A0( /*0x527130*/
                               (const unsigned int *)&end[v21 / 0xFFFFFFFC],
                               (const unsigned int *)end,
                               (unsigned int *)end);
        OB_stVector4_CopyBackwardRange_010201A0((const unsigned int *)position.current, v22, (unsigned int *)end); /*0x527133*/
        OB_stVectorFloat_CopyFillRange_010201A0(position.current, &position.current[countb / 4], (const float *)&value); /*0x527145*/
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v6 >> 1) >= v6 ) /*0x527012*/
        v10 = (v6 >> 1) + v6; /*0x527018*/
      else
        v10 = 0; /*0x527014*/
      if ( begin ) /*0x52701c*/
        v11 = this->end - begin; /*0x527027*/
      else
        v11 = 0; /*0x52701e*/
      if ( v10 < count + v11 ) /*0x52702e*/
      {
        if ( begin ) /*0x527032*/
          v12 = this->end - begin; /*0x52703d*/
        else
          v12 = 0; /*0x527034*/
        v10 = count + v12; /*0x527040*/
      }
      counta = v10; /*0x527047*/
      v13 = (unsigned int *)FormHeapAlloc(4 * v10); /*0x52705a*/
      v14 = (float *)OB_stVector4_UninitializedCopyRange_010201A0( /*0x527061*/
                       (const unsigned int *)this->begin,
                       (const unsigned int *)position.current,
                       v13);
      v15 = OB_stVectorFloat_UninitializedFillN_010201A0(v14, count, (const float *)&value); /*0x52706f*/
      OB_stVector4_UninitializedCopyRange_010201A0( /*0x52707c*/
        (const unsigned int *)position.current,
        (const unsigned int *)this->end,
        (unsigned int *)v15);
      v16 = this->begin; /*0x527081*/
      if ( v16 ) /*0x527086*/
        v17 = this->end - v16; /*0x527091*/
      else
        v17 = 0; /*0x527088*/
      v18 = v17 + count; /*0x527094*/
      if ( v16 ) /*0x527098*/
        FormHeapFree((unsigned int)this->begin); /*0x52709b*/
      this->begin = (float *)v13; /*0x5270ad*/
      this->capacity = (float *)&v13[counta]; /*0x5270b1*/
      this->end = (float *)&v13[v18]; /*0x5270b4*/
    }
  }
}
