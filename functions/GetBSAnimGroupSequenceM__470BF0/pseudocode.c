// AnimSequenceMultiple vtable +0x10. Consumes a signed selector byte: 0..127 can select exactly; 0x80..0xFE sign-extend and fail the unsigned count bound, while 0xFF is explicit random. ActorAnimData_LoadState intercepts serialized 0xFE before this virtual, so 0xFE is a null-sequence marker in save files rather than random restore.
BSAnimGroupSequence *__thiscall AnimSequenceMultiple_GetSequenceBySelector(
        AnimSequenceMultiple *this,
        signed __int8 selector)
{
  unsigned int selectedIndex; // edx
  UInt32 numItems; // edi
  NiTList_Entry *head; // ecx
  BSAnimGroupSequence *result; // eax

  if ( selector == (signed __int8)0xFF || (selectedIndex = selector, selector >= this->sequences->numItems) ) /*0x470c04*/
  {
    numItems = this->sequences->numItems; /*0x470c0a*/
    selectedIndex = Game_RandomLargeInteger(0) % numItems; /*0x470c19*/
  }
  head = this->sequences->head; /*0x470c1f*/
  if ( !head ) /*0x470c24*/
    return 0; /*0x470c38*/
  while ( 1 ) /*0x470c26*/
  {
    result = (BSAnimGroupSequence *)head->data; /*0x470c26*/
    if ( !selectedIndex-- ) /*0x470c29*/
      break; /*0x470c30*/
    head = head->next; /*0x470c32*/
    if ( !head ) /*0x470c36*/
      return 0; /*0x470c36*/
  }
  return result; /*0x470c3a*/
}
