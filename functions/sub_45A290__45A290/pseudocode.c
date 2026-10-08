void *__thiscall sub_45A290(unsigned __int8 **this, void *Dst)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 v3; // bl
  void *v4; // esi
  unsigned __int8 **p_bufferCursor; // edi

  v2 = *(this + 5); /*0x45a290*/
  v3 = *v2; /*0x45a294*/
  v4 = Dst; /*0x45a297*/
  *(this + 5) = v2 + 1; /*0x45a2a1*/
  if ( v3 ) /*0x45a2a4*/
  {
    if ( Dst ) /*0x45a2a8*/
    {
      _memset((int)Dst, 0, 0x104u); /*0x45a2ce*/
    }
    else
    {
      v4 = (void *)FormHeapAlloc(v3 + 1); /*0x45a2b7*/
      _memset((int)v4, 0, v3 + 1); /*0x45a2bc*/
    }
  }
  p_bufferCursor = &g_TESSaveLoadGame->bufferCursor; /*0x45a2e2*/
  memcpy(v4, *p_bufferCursor, v3); /*0x45a2e8*/
  *p_bufferCursor += v3; /*0x45a2ed*/
  return v4; /*0x45a2f2*/
}
