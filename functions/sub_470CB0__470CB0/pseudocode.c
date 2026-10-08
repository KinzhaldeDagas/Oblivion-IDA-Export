// AnimSequenceMultiple vtable +0x14. Produces an 8-bit list index by incrementing AL. Indices >=256 wrap modulo 256; index 254 collides with the save format's 0xFE null marker, and index 255 collides with 0xFF random/missing.
unsigned __int8 __thiscall AnimSequenceMultiple_GetSelectorForSequence(
        AnimSequenceMultiple *this,
        BSAnimGroupSequence *sequence)
{
  NiTList_Entry *head; // ecx
  unsigned __int8 result; // al

  head = this->sequences->head; /*0x470cb3*/
  result = 0; /*0x470cb6*/
  if ( !head ) /*0x470cba*/
    return 0xFF; /*0x470ccd*/
  while ( sequence != head->data ) /*0x470cc3*/
  {
    head = head->next; /*0x470cc5*/
    ++result; /*0x470cc7*/
    if ( !head ) /*0x470ccb*/
      return 0xFF; /*0x470ccb*/
  }
  return result; /*0x470ccf*/
}
