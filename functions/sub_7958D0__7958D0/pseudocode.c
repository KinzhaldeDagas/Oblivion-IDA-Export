// Oblivion binary evidence: compiler-folded four-byte vector resize(newSize,value). Growth delegates to OB_stVector4_InsertFill; shrink erases the tail. Sole observed caller is CIndexedGeometry::AddStrip, confirming that the implementation is generic rather than leaf-specific.
void __thiscall OB_stVector4_ResizeFill_010201A0(OB_stVector4_010201A0 *this, unsigned int newSize, unsigned int value)
{
  unsigned int *begin; // ecx
  unsigned int currentSize; // eax
  int oldSize; // edi
  unsigned int *insertionPosition; // ebp
  unsigned int *oldEnd; // ebp
  unsigned int *currentBegin; // edi
  unsigned int *eraseBegin; // edi
  OB_stVector4Iterator_010201A0 result; // [esp+10h] [ebp-8h] BYREF

  begin = this->begin; /*0x7958d8*/
  if ( begin ) /*0x7958de*/
    currentSize = this->end - begin; /*0x7958e9*/
  else
    currentSize = 0; /*0x7958e0*/
  if ( currentSize >= newSize ) /*0x7958f2*/
  {
    if ( begin ) /*0x79592d*/
    {
      oldEnd = this->end; /*0x79592f*/
      if ( newSize < oldEnd - begin ) /*0x79593b*/
      {
        if ( begin > oldEnd ) /*0x79593f*/
          _invalid_parameter_noinfo(); /*0x795941*/
        currentBegin = this->begin; /*0x795946*/
        if ( currentBegin > this->end ) /*0x79594c*/
          _invalid_parameter_noinfo(); /*0x79594e*/
        result.current = currentBegin; /*0x795953*/
        eraseBegin = &currentBegin[newSize]; /*0x795957*/
        if ( eraseBegin > this->end || eraseBegin < this->begin ) /*0x795962*/
          _invalid_parameter_noinfo(); /*0x795964*/
        OB_stVector4_EraseRange_010201A0( /*0x795974*/
          this,
          &result,
          (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)eraseBegin, (unsigned int)this),
          (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)oldEnd, (unsigned int)this));
      }
    }
  }
  else
  {
    if ( begin ) /*0x7958f6*/
      oldSize = this->end - begin; /*0x795901*/
    else
      oldSize = 0; /*0x7958f8*/
    insertionPosition = this->end; /*0x795904*/
    if ( begin > insertionPosition ) /*0x795909*/
      _invalid_parameter_noinfo(); /*0x79590b*/
    OB_stVector4_InsertFill_010201A0(this, this, insertionPosition, newSize - oldSize, &value); /*0x79591c*/
  }
}
