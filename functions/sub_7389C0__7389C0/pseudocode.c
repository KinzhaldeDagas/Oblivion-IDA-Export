int *__thiscall sub_7389C0(int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-Ch]

  if ( (a2 & 2) != 0 ) /*0x7389cb*/
  {
    _LN21((char *)this, 0x14u, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7387F0); /*0x7389dd*/
    if ( (a2 & 1) != 0 ) /*0x7389e5*/
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF)); /*0x7389e8*/
    return this + 0xFFFFFFFF; /*0x7389f0*/
  }
  else
  {
    v4 = *(this + 2); /*0x7389fb*/
    *this = (int)&NiScreenGeometryData::ScreenElement::`vftable'; /*0x7389fc*/
    FormHeapFree(v4); /*0x738a02*/
    FormHeapFree(*(this + 3)); /*0x738a0b*/
    FormHeapFree(*(this + 4)); /*0x738a14*/
    if ( (a2 & 1) != 0 ) /*0x738a1f*/
      FormHeapFree((unsigned int)this); /*0x738a22*/
    return this; /*0x738a2a*/
  }
}
