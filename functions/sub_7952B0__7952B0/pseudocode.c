// OBLIVION AUTHORITY (2026-08-30): vector<unsigned short> insert-fill core. Uses 2-byte element arithmetic, overlap-safe moves, and 1.5x growth.
void __thiscall OB_stVectorUShort_InsertFill_010201A0(
        OB_stVectorUShort_010201A0 *this,
        OB_stVectorUShortIterator_010201A0 position,
        unsigned int count,
        const unsigned __int16 *value)
{
  int v4; // ebx
  int v5; // edi
  unsigned __int16 *begin; // edx
  unsigned int v8; // eax
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  unsigned __int16 *v16; // ecx
  char *v17; // edi
  int v18; // eax
  unsigned __int16 *v19; // eax
  int v20; // ecx
  unsigned __int16 *v21; // ecx
  int v22; // eax
  unsigned int v23; // ebp
  unsigned __int16 *end; // ebx
  unsigned int v25; // eax
  bool v26; // cf
  const unsigned __int16 *v27; // ebp
  rsize_t v28; // [esp-14h] [ebp-20h]
  rsize_t v29; // [esp-8h] [ebp-14h]
  int v30; // [esp+8h] [ebp-4h]
  unsigned __int16 *valuea; // [esp+18h] [ebp+Ch]
  char *valueb; // [esp+18h] [ebp+Ch]

  begin = this->begin; /*0x7952bc*/
  value = (const unsigned __int16 *)*value; /*0x7952c1*/
  if ( begin ) /*0x7952c5*/
    v8 = this->capacityEnd - begin; /*0x7952d0*/
  else
    v8 = 0; /*0x7952c7*/
  if ( count ) /*0x7952d8*/
  {
    if ( begin ) /*0x7952e0*/
      v10 = this->end - begin; /*0x7952eb*/
    else
      v10 = 0; /*0x7952e2*/
    HIDWORD(v29) = v5; /*0x7952ed*/
    if ( 0xFFFFFFFF - v10 < count ) /*0x7952f5*/
      OB_stVector_ThrowLengthError_010201A0(0xFFFFFFFF - v10); /*0x7952f7*/
    if ( begin ) /*0x7952fe*/
      v11 = this->end - begin; /*0x795309*/
    else
      v11 = 0; /*0x795300*/
    LODWORD(v29) = v4; /*0x79530f*/
    if ( v8 >= count + v11 ) /*0x795310*/
    {
      end = this->end; /*0x7953e9*/
      v25 = 2 * count; /*0x7953f6*/
      v26 = end - position.current < count; /*0x7953fa*/
      valueb = (char *)(2 * count); /*0x7953fc*/
      if ( v26 ) /*0x795402*/
      {
        OB_stVectorUShort_UninitializedCopyRange_010201A0(position.current, end, &position.current[v25 / 2]); /*0x795409*/
        OB_stVectorUShort_UninitializedFillN_010201A0( /*0x795422*/
          this->end,
          count - (this->end - position.current),
          (const unsigned __int16 *)&value);
        this->end = (unsigned __int16 *)((char *)this->end + (unsigned int)valueb); /*0x79542b*/
        OB_stVectorUShort_CopyFillRange_010201A0( /*0x79543a*/
          position.current,
          (unsigned __int16 *)((char *)this->end - valueb),
          (const unsigned __int16 *)&value);
      }
      else
      {
        v27 = &end[v25 / 0xFFFFFFFE]; /*0x79544d*/
        this->end = OB_stVectorUShort_UninitializedCopyRange_010201A0(&end[v25 / 0xFFFFFFFE], end, end); /*0x795459*/
        OB_stVectorUShort_CopyBackwardRange_010201A0(position.current, v27, end); /*0x79545c*/
        OB_stVectorUShort_CopyFillRange_010201A0( /*0x79546e*/
          position.current,
          (unsigned __int16 *)((char *)position.current + (unsigned int)valueb),
          (const unsigned __int16 *)&value);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v8 >> 1) >= v8 ) /*0x795321*/
        v12 = (v8 >> 1) + v8; /*0x795327*/
      else
        v12 = 0; /*0x795323*/
      if ( begin ) /*0x79532b*/
        v13 = this->end - begin; /*0x795336*/
      else
        v13 = 0; /*0x79532d*/
      if ( v12 < count + v13 ) /*0x79533c*/
      {
        if ( begin ) /*0x795340*/
          v14 = this->end - begin; /*0x79534b*/
        else
          v14 = 0; /*0x795342*/
        v12 = count + v14; /*0x79534d*/
      }
      v30 = 2 * v12; /*0x795352*/
      v15 = FormHeapAlloc(2 * v12); /*0x795356*/
      v16 = this->begin; /*0x79535f*/
      v17 = (char *)v15; /*0x795362*/
      v18 = 2 * (position.current - v16); /*0x79536d*/
      valuea = (unsigned __int16 *)&v17[v18]; /*0x795373*/
      if ( position.current - v16 ) /*0x79536b*/
        memmove_s(v17, __PAIR64__((unsigned int)v16, v18), (const void *)v18, v29); /*0x79537d*/
      v19 = OB_stVectorUShort_UninitializedFillN_010201A0(valuea, count, (const unsigned __int16 *)&value); /*0x795392*/
      v20 = this->end - position.current; /*0x79539c*/
      if ( v20 ) /*0x79539e*/
      {
        HIDWORD(v28) = position.current; /*0x7953a3*/
        LODWORD(v28) = 2 * v20; /*0x7953a4*/
        memmove_s(v19, v28, (const void *)v28, v29); /*0x7953a6*/
      }
      v21 = this->begin; /*0x7953ae*/
      if ( v21 ) /*0x7953b3*/
        v22 = this->end - v21; /*0x7953be*/
      else
        v22 = 0; /*0x7953b5*/
      v23 = v22 + count; /*0x7953c0*/
      if ( v21 ) /*0x7953c4*/
        FormHeapFree((unsigned int)this->begin); /*0x7953c7*/
      this->begin = (unsigned __int16 *)v17; /*0x7953d9*/
      this->capacityEnd = (unsigned __int16 *)&v17[v30]; /*0x7953dd*/
      this->end = (unsigned __int16 *)&v17[2 * v23]; /*0x7953e0*/
    }
  }
}
