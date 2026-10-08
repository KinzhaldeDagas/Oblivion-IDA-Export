// Destroys [first,last) SFrondTexture records at 0x2C-byte stride by releasing each embedded filename string.
void __cdecl OB_SFrondTexture_DestroyRange_010201A0(OB_SFrondTexture_010201A0 *first, OB_SFrondTexture_010201A0 *last)
{
  OB_SFrondTexture_010201A0 *i; // esi

  for ( i = first; i != last; ++i ) /*0x79b12c*/
  {
    if ( i->filename.capacity >= 0x10 ) /*0x79b135*/
      FormHeapFree((unsigned int)i->filename.storage.heapData); /*0x79b13b*/
    i->filename.capacity = 0xF; /*0x79b143*/
    i->filename.size = 0; /*0x79b14a*/
    i->filename.storage.inlineData[0] = 0; /*0x79b14d*/
  }
}
