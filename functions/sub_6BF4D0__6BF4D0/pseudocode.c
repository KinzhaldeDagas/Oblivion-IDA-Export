_DWORD *__cdecl sub_6BF4D0(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (unsigned __int64)(unsigned int)size >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * size;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6bf52b*/
    return 0; /*0x6bf559*/
  v3 = v2 + 4; /*0x6bf538*/
  *(_DWORD *)v2 = size; /*0x6bf53e*/
  ArrayConstructor( /*0x6bf540*/
    (char *)(v2 + 4),
    0x10u,
    size,
    (void (__thiscall *)(char *))ActorList_ReturnHead,
    Shared_NoOpVirtual_60D0A0);
  return (_DWORD *)v3; /*0x6bf547*/
}
