// Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
OB_stString28_010201A0 *__thiscall OB_stString28_AssignSubstring_010201A0(
        OB_stString28_010201A0 *this,
        const OB_stString28_010201A0 *source,
        unsigned int offset,
        unsigned int count)
{
  unsigned int copyCount; // edi
  unsigned int capacity; // eax
  bool v8; // zf
  OB_stStringStorage16_010201A0 *p_storage; // edx
  OB_stStringStorage16_010201A0 *destinationStorage; // ebx
  OB_stStringStorage16_010201A0 *destinationBytes; // eax
  bool v12; // cf
  rsize_t v13; // [esp-Ch] [ebp-1Ch]
  _BYTE v14[12]; // [esp-4h] [ebp-14h]

  if ( source->size < offset ) /*0x414431*/
    std::_String_base::_Xran(); /*0x414433*/
  copyCount = source->size - offset; /*0x41443f*/
  if ( count < copyCount ) /*0x414443*/
    copyCount = count; /*0x414445*/
  if ( this == source ) /*0x414449*/
  {
    sub_4134E0(this, offset, offset + copyCount, 0xFFFFFFFF); /*0x414452*/
    sub_4134E0(this, offset, 0, offset); /*0x41445c*/
    return this; /*0x414467*/
  }
  if ( copyCount == 0xFFFFFFFF ) /*0x41446d*/
    std::_String_base::_Xlen(); /*0x41446f*/
  capacity = this->capacity; /*0x414474*/
  if ( capacity < copyCount ) /*0x414479*/
  {
    *(_DWORD *)v14 = this->size; /*0x41447e*/
    sub_4135C0(this, copyCount, *(rsize_t *)v14); /*0x414482*/
    v8 = copyCount == 0; /*0x414487*/
LABEL_11:
    if ( !v8 ) /*0x414489*/
    {
      if ( source->capacity < 0x10 ) /*0x41448f*/
        p_storage = &source->storage; /*0x4144c0*/
      else
        p_storage = (OB_stStringStorage16_010201A0 *)source->storage.heapData; /*0x414491*/
      destinationStorage = &this->storage; /*0x4144c9*/
      if ( this->capacity < 0x10 ) /*0x4144cc*/
        destinationBytes = &this->storage; /*0x4144d2*/
      else
        destinationBytes = (OB_stStringStorage16_010201A0 *)destinationStorage->heapData; /*0x4144ce*/
      HIDWORD(v13) = (char *)p_storage + offset; /*0x4144d7*/
      LODWORD(v13) = this->capacity; /*0x4144d8*/
      memcpy_s(destinationBytes, v13, (const void *)copyCount, *(rsize_t *)&v14[4]); /*0x4144da*/
      v12 = this->capacity < 0x10; /*0x4144e2*/
      this->size = copyCount; /*0x4144e6*/
      if ( !v12 ) /*0x4144e9*/
        destinationStorage = (OB_stStringStorage16_010201A0 *)destinationStorage->heapData; /*0x4144eb*/
      destinationStorage->inlineData[copyCount] = 0; /*0x4144ed*/
    }
    return this; /*0x4144f2*/
  }
  v8 = copyCount == 0; /*0x414496*/
  if ( copyCount ) /*0x414498*/
    goto LABEL_11; /*0x414498*/
  this->size = 0; /*0x41449d*/
  if ( capacity < 0x10 ) /*0x4144a0*/
    this->storage.inlineData[0] = 0; /*0x4144b5*/
  else
    *this->storage.heapData = 0; /*0x4144a6*/
  return this; /*0x414461*/
}
