char **__thiscall sub_712830(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x712833*/
  *this = (char *)&NiTLargeArray<NiPointer<NiObject>>::`vftable'; /*0x712838*/
  if ( v3 ) /*0x71283e*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x712844*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x712850*/
    FormHeapFree(v4); /*0x712856*/
  }
  if ( (a2 & 1) != 0 ) /*0x712864*/
    FormHeapFree((unsigned int)this); /*0x712867*/
  return this; /*0x712871*/
}
