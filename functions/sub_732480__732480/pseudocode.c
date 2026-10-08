_DWORD *__thiscall sub_732480(_DWORD *this, int a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // ecx
  unsigned int v5; // eax

  if ( this != (_DWORD *)a2 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*(this + 6); /*0x73248c*/
    if ( v3 ) /*0x732491*/
    {
      (**v3)(v3, 1); /*0x732499*/
      *(this + 6) = 0; /*0x73249b*/
    }
    v4 = *(this + 3); /*0x7324a5*/
    *((_BYTE *)this + 8) = *(_BYTE *)(a2 + 8); /*0x7324a8*/
    *(this + 4) = 1; /*0x7324ab*/
    if ( v4 != *(_DWORD *)(a2 + 0xC) )
    {
      FormHeapFree(*(this + 5)); /*0x7324bb*/
      v5 = *(_DWORD *)(a2 + 0xC); /*0x7324c0*/
      *(this + 3) = v5; /*0x7324c5*/
      *(this + 5) = FormHeapAlloc((unsigned __int64)v5 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v5);
    }
    memcpy((void *)*(this + 5), *(const void **)(a2 + 0x14), 4 * *(_DWORD *)(a2 + 0xC)); /*0x7324f2*/
  }
  return this; /*0x7324fa*/
}
