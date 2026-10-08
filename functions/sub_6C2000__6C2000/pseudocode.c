_DWORD *__cdecl sub_6C2000(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (0x14 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x14 * size;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6c205b*/
    return 0; /*0x6c2089*/
  v3 = v2 + 4; /*0x6c2068*/
  *(_DWORD *)v2 = size; /*0x6c206e*/
  ArrayConstructor((char *)(v2 + 4), 0x14u, size, (void (__thiscall *)(char *))sub_6C1F90, Shared_NoOpVirtual_60D0A0); /*0x6c2070*/
  return (_DWORD *)v3; /*0x6c2077*/
}
