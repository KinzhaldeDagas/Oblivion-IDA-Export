_DWORD *__cdecl sub_6C2A10(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (0x14 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * size;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6c2a6b*/
    return 0; /*0x6c2a99*/
  v3 = v2 + 4; /*0x6c2a78*/
  *(_DWORD *)v2 = size; /*0x6c2a7e*/
  ArrayConstructor((char *)(v2 + 4), 0x14u, size, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6c2a80*/
  return (_DWORD *)v3; /*0x6c2a87*/
}
