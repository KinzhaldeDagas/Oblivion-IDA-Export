int *__thiscall sub_6EBD50(int *this, int size)
{
  int v3; // edi
  unsigned int v4; // ecx
  int v5; // eax

  v3 = 0; /*0x6ebd79*/
  *(this + 1) = size; /*0x6ebd7d*/
  *(this + 2) = 0; /*0x6ebd80*/
  if ( size )
  {
    v4 = (0x14 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * size;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x6ebdb6*/
    {
      v3 = v5 + 4; /*0x6ebdc3*/
      *(_DWORD *)v5 = size; /*0x6ebdc9*/
      ArrayConstructor( /*0x6ebdcb*/
        (char *)(v5 + 4),
        0x14u,
        size,
        (void (__thiscall *)(char *))sub_6EBB10,
        (void (__thiscall *)(void *))sub_6EBB40);
    }
  }
  *this = v3; /*0x6ebdd2*/
  return this; /*0x6ebdd5*/
}
