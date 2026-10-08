// Leaf-texture vector resize with a by-value default record: fill-inserts when growing, erases/destroys the excess tail when shrinking, then releases the by-value filename copy.
void __thiscall OB_stVector_SIdvLeafTexture_ResizeFill_010201A0(
        OB_stVector_SIdvLeafTexture_010201A0 *this,
        unsigned int newSize,
        OB_SIdvLeafTexture_010201A0 value)
{
  OB_SIdvLeafTexture_010201A0 *begin; // ecx
  int existingSize; // edi
  unsigned int currentSize; // eax
  OB_SIdvLeafTexture_010201A0 *endForInsert; // ebp
  OB_SIdvLeafTexture_010201A0 *end; // edi
  OB_SIdvLeafTexture_010201A0 *v9; // ebp
  OB_SIdvLeafTexture_010201A0 *v10; // ebx
  bool v11; // cc
  OB_stVectorIterator_SIdvLeafTexture_010201A0 eraseResult; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-4h]

  begin = this->begin; /*0x7a5f29*/
  existingSize = 0; /*0x7a5f2c*/
  v13 = 0; /*0x7a5f30*/
  if ( begin ) /*0x7a5f34*/
    currentSize = this->end - begin; /*0x7a5f4e*/
  else
    currentSize = 0; /*0x7a5f36*/
  if ( currentSize >= newSize ) /*0x7a5f56*/
  {
    if ( begin ) /*0x7a5f93*/
    {
      end = this->end; /*0x7a5f95*/
      if ( newSize < end - begin ) /*0x7a5faf*/
      {
        if ( begin > end ) /*0x7a5fb3*/
          _invalid_parameter_noinfo(newSize, (int)end, (int)this); /*0x7a5fb5*/
        v9 = this->begin; /*0x7a5fba*/
        if ( v9 > this->end ) /*0x7a5fc0*/
          _invalid_parameter_noinfo(newSize, (int)end, (int)this); /*0x7a5fc2*/
        v10 = &v9[newSize]; /*0x7a5fca*/
        v11 = v10 <= this->end; /*0x7a5fcc*/
        eraseResult.current = v9; /*0x7a5fcf*/
        if ( !v11 || v10 < this->begin ) /*0x7a5fd8*/
          _invalid_parameter_noinfo((int)v10, (int)end, (int)this); /*0x7a5fda*/
        OB_stVector_SIdvLeafTexture_EraseRange_010201A0(this, &eraseResult, this, v10, this, end); /*0x7a5fea*/
      }
    }
  }
  else
  {
    if ( begin ) /*0x7a5f5a*/
      existingSize = this->end - begin; /*0x7a5f70*/
    endForInsert = this->end; /*0x7a5f72*/
    if ( begin > endForInsert ) /*0x7a5f77*/
      _invalid_parameter_noinfo(newSize, existingSize, (int)this); /*0x7a5f79*/
    OB_stVector_SIdvLeafTexture_InsertFill_010201A0(this, this, endForInsert, newSize - existingSize, &value); /*0x7a5f8a*/
  }
  if ( value.filename.capacity >= 0x10 ) /*0x7a5ff4*/
    FormHeapFree((unsigned int)value.filename.storage.heapData); /*0x7a5ffb*/
}
