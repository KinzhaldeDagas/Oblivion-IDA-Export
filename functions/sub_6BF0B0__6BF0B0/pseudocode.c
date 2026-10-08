_DWORD *__cdecl sub_6BF0B0(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (unsigned __int64)(unsigned int)size >> 0x1D != 0 ? 0xFFFFFFFF : 8 * size;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6bf10b*/
    return 0; /*0x6bf139*/
  v3 = v2 + 4; /*0x6bf118*/
  *(_DWORD *)v2 = size; /*0x6bf11e*/
  ArrayConstructor( /*0x6bf120*/
    (char *)(v2 + 4),
    8u,
    size,
    (void (__thiscall *)(char *))ActorList_ReturnHead,
    Shared_NoOpVirtual_60D0A0);
  return (_DWORD *)v3; /*0x6bf127*/
}
