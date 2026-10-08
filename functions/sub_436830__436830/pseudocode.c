char **__thiscall sub_436830(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x436833*/
  *this = (char *)&NiTArray<NiPointer<QueuedFile>>::`vftable'; /*0x436838*/
  if ( v3 ) /*0x43683e*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x436844*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_4BDDC0); /*0x436850*/
    FormHeapFree(v4); /*0x436856*/
  }
  if ( (a2 & 1) != 0 ) /*0x436864*/
    FormHeapFree((unsigned int)this); /*0x436867*/
  return this; /*0x436871*/
}
