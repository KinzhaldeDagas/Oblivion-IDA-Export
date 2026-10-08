// Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
OB_stString28_010201A0 *__thiscall OB_stString28_AssignBytes_010201A0(
        OB_stString28_010201A0 *this,
        const char *source,
        unsigned int count)
{
  int v3; // edi
  unsigned int capacity; // ecx
  OB_stStringStorage16_010201A0 *p_storage; // ebx
  OB_stStringStorage16_010201A0 *heapData; // eax
  OB_stStringStorage16_010201A0 *currentStorage; // eax
  unsigned int currentCapacity; // eax
  bool v11; // zf
  unsigned int v12; // ecx
  OB_stStringStorage16_010201A0 *destinationStorage; // eax
  bool v14; // cf
  _BYTE v15[12]; // [esp-8h] [ebp-14h]

  capacity = this->capacity; /*0x414505*/
  p_storage = &this->storage; /*0x41450b*/
  if ( capacity < 0x10 ) /*0x41450e*/
    heapData = &this->storage; /*0x414514*/
  else
    heapData = (OB_stStringStorage16_010201A0 *)p_storage->heapData; /*0x414510*/
  if ( source >= (const char *)heapData )
  {
    currentStorage = capacity < 0x10 ? &this->storage : (OB_stStringStorage16_010201A0 *)p_storage->heapData;
    if ( &currentStorage->inlineData[this->size] > source ) /*0x414530*/
    {
      if ( capacity >= 0x10 ) /*0x414535*/
        p_storage = (OB_stStringStorage16_010201A0 *)p_storage->heapData; /*0x414537*/
      return OB_stString28_AssignSubstring_010201A0(this, this, source - (const char *)p_storage, count); /*0x41454c*/
    }
  }
  *(_DWORD *)&v15[4] = v3; /*0x41454f*/
  if ( count == 0xFFFFFFFF ) /*0x414557*/
    std::_String_base::_Xlen(); /*0x414559*/
  currentCapacity = this->capacity; /*0x41455e*/
  if ( currentCapacity < count ) /*0x414563*/
  {
    *(_DWORD *)v15 = this->size; /*0x414568*/
    sub_4135C0(this, count, *(rsize_t *)v15); /*0x41456c*/
    v11 = count == 0; /*0x414571*/
LABEL_16:
    if ( !v11 ) /*0x414573*/
    {
      v12 = this->capacity; /*0x414575*/
      if ( v12 < 0x10 ) /*0x41457b*/
        destinationStorage = &this->storage; /*0x41459b*/
      else
        destinationStorage = (OB_stStringStorage16_010201A0 *)p_storage->heapData; /*0x41457d*/
      memcpy_s(destinationStorage, __PAIR64__((unsigned int)source, v12), (const void *)count, *(rsize_t *)&v15[4]); /*0x4145a1*/
      v14 = this->capacity < 0x10; /*0x4145a9*/
      this->size = count; /*0x4145ad*/
      if ( !v14 ) /*0x4145b0*/
        p_storage = (OB_stStringStorage16_010201A0 *)p_storage->heapData; /*0x4145b2*/
      p_storage->inlineData[count] = 0; /*0x4145b4*/
    }
    return this; /*0x4145b9*/
  }
  v11 = count == 0; /*0x414581*/
  if ( count ) /*0x414583*/
    goto LABEL_16; /*0x414583*/
  this->size = 0; /*0x414588*/
  if ( currentCapacity >= 0x10 ) /*0x41458b*/
    p_storage = (OB_stStringStorage16_010201A0 *)p_storage->heapData; /*0x41458d*/
  p_storage->inlineData[0] = 0; /*0x414594*/
  return this; /*0x414549*/
}
