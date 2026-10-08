_DWORD *__cdecl sub_6BC900(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (unsigned __int64)(unsigned int)size >> 0x1A != 0 ? 0xFFFFFFFF : size << 6;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6bc95b*/
    return 0; /*0x6bc989*/
  v3 = v2 + 4; /*0x6bc968*/
  *(_DWORD *)v2 = size; /*0x6bc96e*/
  ArrayConstructor( /*0x6bc970*/
    (char *)(v2 + 4),
    0x40u,
    size,
    (void (__thiscall *)(char *))ActorList_ReturnHead,
    Shared_NoOpVirtual_60D0A0);
  return (_DWORD *)v3; /*0x6bc977*/
}
