// Bethesda compact string length helper. If inline length marker is 0xFFFF, strlen(heap string); otherwise returns the 16-bit stored length. Used here to gate optional TESObjectTREE leaf texture.
unsigned int __thiscall OB_CompactString_Length_010201A0(void *compactString)
{
  unsigned int result; // eax

  LOWORD(result) = *((_WORD *)compactString + 4); /*0x449190*/
  if ( (_WORD)result == 0xFFFF ) /*0x449198*/
    return strlen(*((const char **)compactString + 1)); /*0x44919d*/
  else
    return (unsigned __int16)result; /*0x4491ac*/
}
