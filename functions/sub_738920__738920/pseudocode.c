int *__thiscall sub_738920(int *this, int size)
{
  int v3; // edi
  unsigned int v4; // ecx
  int v5; // eax

  v3 = 0; /*0x738949*/
  *(this + 1) = size; /*0x73894d*/
  *(this + 2) = 0; /*0x738950*/
  if ( size )
  {
    v4 = (0x14 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * size;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x738986*/
    {
      v3 = v5 + 4; /*0x738993*/
      *(_DWORD *)v5 = size; /*0x738999*/
      ArrayConstructor( /*0x73899b*/
        (char *)(v5 + 4),
        0x14u,
        size,
        (void (__thiscall *)(char *))sub_7387D0,
        (void (__thiscall *)(void *))sub_7387F0);
    }
  }
  *this = v3; /*0x7389a2*/
  return this; /*0x7389a5*/
}
