// Oblivion body: checked byte-vector insert-fill. Handles alias-safe in-place insertion and reallocation, uses 1.5x growth, and updates begin/end/capacity. Called by byte insert-one and resize; RT4.1 st_vector_byte corroborates the element role.
void __thiscall OB_stVectorByte_InsertFill_010201A0(
        OB_stVectorByte_010201A0 *this,
        OB_stVectorByteIterator_010201A0 position,
        unsigned int count,
        const unsigned __int8 *value)
{
  int v4; // edi
  unsigned __int8 *begin; // eax
  unsigned int v7; // ebp
  unsigned __int8 *v9; // ecx
  unsigned __int8 *v10; // ecx
  unsigned int v11; // ebp
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // edi
  unsigned __int8 *v17; // eax
  const void *v18; // ecx
  unsigned __int8 *v19; // ecx
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // ebx
  unsigned __int8 *end; // ebp
  rsize_t v23; // [esp-4h] [ebp-10h]
  unsigned __int8 *counta; // [esp+18h] [ebp+Ch]
  unsigned __int8 *countb; // [esp+18h] [ebp+Ch]

  begin = this->begin; /*0x6ef2fb*/
  LOBYTE(value) = *value; /*0x6ef300*/
  if ( begin ) /*0x6ef304*/
    v7 = this->capacityEnd - begin; /*0x6ef30d*/
  else
    v7 = 0; /*0x6ef306*/
  if ( count ) /*0x6ef315*/
  {
    if ( begin ) /*0x6ef31d*/
      v9 = (unsigned __int8 *)(this->end - begin); /*0x6ef326*/
    else
      v9 = 0; /*0x6ef31f*/
    if ( 0xFFFFFFFF - (unsigned int)v9 < count ) /*0x6ef32f*/
      OB_stVector_ThrowLengthError_010201A0(v4); /*0x6ef331*/
    if ( begin ) /*0x6ef338*/
      v10 = (unsigned __int8 *)(this->end - begin); /*0x6ef341*/
    else
      v10 = 0; /*0x6ef33a*/
    LODWORD(v23) = v4; /*0x6ef347*/
    if ( v7 >= (unsigned int)&v10[count] ) /*0x6ef348*/
    {
      end = this->end; /*0x6ef40b*/
      if ( end - position.current >= count ) /*0x6ef41a*/
      {
        countb = &end[-count]; /*0x6ef463*/
        this->end = (unsigned __int8 *)sub_556CD0(countb, (int)end, this->end); /*0x6ef473*/
        OB_stVectorByte_CopyBackwardRange_010201A0(position.current, countb, end); /*0x6ef476*/
        sub_6EF2D0(position.current, &position.current[count], &value); /*0x6ef485*/
      }
      else
      {
        sub_556CD0(position.current, (int)end, &position.current[count]); /*0x6ef422*/
        OB_stVectorByte_UninitializedFillN_010201A0( /*0x6ef439*/
          this->end,
          count + position.current - this->end,
          (const unsigned __int8 *)&value);
        this->end += count; /*0x6ef43e*/
        sub_6EF2D0(position.current, &this->end[-count], &value); /*0x6ef44d*/
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v7 >> 1) >= v7 ) /*0x6ef359*/
        v11 = (v7 >> 1) + v7; /*0x6ef35f*/
      else
        v11 = 0; /*0x6ef35b*/
      if ( begin ) /*0x6ef363*/
        v12 = (unsigned __int8 *)(this->end - begin); /*0x6ef36c*/
      else
        v12 = 0; /*0x6ef365*/
      if ( v11 < (unsigned int)&v12[count] ) /*0x6ef372*/
      {
        if ( begin ) /*0x6ef376*/
          v13 = (unsigned __int8 *)(this->end - begin); /*0x6ef37f*/
        else
          v13 = 0; /*0x6ef378*/
        v11 = (unsigned int)&v13[count]; /*0x6ef381*/
      }
      v14 = (unsigned __int8 *)FormHeapAlloc(v11); /*0x6ef385*/
      v15 = this->begin; /*0x6ef38a*/
      v16 = v14; /*0x6ef38d*/
      counta = &v14[position.current - v15]; /*0x6ef39b*/
      if ( position.current != v15 ) /*0x6ef39f*/
        memmove_s( /*0x6ef3a5*/
          v14,
          __PAIR64__((unsigned int)v15, position.current - v15),
          (const void *)(position.current - v15),
          v23);
      v17 = OB_stVectorByte_UninitializedFillN_010201A0(counta, count, (const unsigned __int8 *)&value); /*0x6ef3ba*/
      v18 = (const void *)(this->end - position.current); /*0x6ef3c6*/
      if ( v18 ) /*0x6ef3c8*/
        memmove_s(v17, __PAIR64__((unsigned int)position.current, (unsigned int)v18), v18, v23); /*0x6ef3ce*/
      v19 = this->begin; /*0x6ef3d6*/
      if ( v19 ) /*0x6ef3db*/
        v20 = (unsigned __int8 *)(this->end - v19); /*0x6ef3e4*/
      else
        v20 = 0; /*0x6ef3dd*/
      v21 = &v20[count]; /*0x6ef3e6*/
      if ( v19 ) /*0x6ef3ea*/
        FormHeapFree((unsigned int)this->begin); /*0x6ef3ed*/
      this->begin = v16; /*0x6ef3fb*/
      this->capacityEnd = &v16[v11]; /*0x6ef3ff*/
      this->end = &v21[(_DWORD)v16]; /*0x6ef402*/
    }
  }
}
