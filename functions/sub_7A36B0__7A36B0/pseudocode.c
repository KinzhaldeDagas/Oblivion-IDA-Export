// Destroys [first,last) compact SIdvLeafTexture records at 0x54 stride, releasing each owned filename.
void __cdecl OB_SIdvLeafTexture_DestroyRange_010201A0(
        OB_SIdvLeafTexture_010201A0 *first,
        OB_SIdvLeafTexture_010201A0 *last)
{
  OB_SIdvLeafTexture_010201A0 *v2; // edi
  unsigned int *p_capacity; // esi

  v2 = first; /*0x7a36b6*/
  if ( first != last ) /*0x7a36bc*/
  {
    p_capacity = &first->filename.capacity; /*0x7a36c0*/
    do /*0x7a36ea*/
    {
      if ( *p_capacity >= 0x10 ) /*0x7a36c8*/
        FormHeapFree(p_capacity[0xFFFFFFFB]); /*0x7a36ce*/
      *p_capacity = 0xF; /*0x7a36d6*/
      p_capacity[0xFFFFFFFF] = 0; /*0x7a36dc*/
      *((_BYTE *)p_capacity + 0xFFFFFFEC) = 0; /*0x7a36df*/
      ++v2; /*0x7a36e2*/
      p_capacity += 0x15; /*0x7a36e5*/
    }
    while ( v2 != last ); /*0x7a36ea*/
  }
}
