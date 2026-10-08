_DWORD *__cdecl sub_6BD790(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (0x24 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x24 * size;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6bd7eb*/
    return 0; /*0x6bd819*/
  v3 = v2 + 4; /*0x6bd7f8*/
  *(_DWORD *)v2 = size; /*0x6bd7fe*/
  ArrayConstructor((char *)(v2 + 4), 0x24u, size, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6bd800*/
  return (_DWORD *)v3; /*0x6bd807*/
}
