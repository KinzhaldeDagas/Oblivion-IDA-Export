void __thiscall GridDistantArray::~GridDistantArray(char **this)
{
  char *v2; // eax
  unsigned int v3; // edi
  int v4; // edi

  *this = (char *)&GridDistantArray::`vftable'; /*0x483ac9*/
  sub_481E10(this); /*0x483ad7*/
  v2 = *(this + 4); /*0x483adc*/
  if ( v2 ) /*0x483ae1*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x483ae6*/
    _LN21(v2, 0x10u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_483600); /*0x483af2*/
    FormHeapFree(v3); /*0x483af8*/
  }
  v4 = *(_DWORD *)&MEMORY[0xB33E90][0x594]; /*0x483b00*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x594] ) /*0x483b00*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x483b0e*/
    {
      if ( v4 ) /*0x483b1a*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x483b24*/
    }
    *(_DWORD *)&MEMORY[0xB33E90][0x594] = 0; /*0x483b26*/
  }
  sub_481DF0(this); /*0x483b3a*/
}
