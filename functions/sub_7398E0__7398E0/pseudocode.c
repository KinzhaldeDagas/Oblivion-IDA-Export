// Pass227: Deleting destructor for NiTArray<NiPointer<NiScreenTexture>> vtable.
char **__thiscall sub_7398E0(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x7398e3*/
  *this = (char *)&NiTArray<NiPointer<NiScreenTexture>>::`vftable'; /*0x7398e8*/
  if ( v3 ) /*0x7398ee*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x7398f4*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x739900*/
    FormHeapFree(v4); /*0x739906*/
  }
  if ( (a2 & 1) != 0 ) /*0x739914*/
    FormHeapFree((unsigned int)this); /*0x739917*/
  return this; /*0x739921*/
}
