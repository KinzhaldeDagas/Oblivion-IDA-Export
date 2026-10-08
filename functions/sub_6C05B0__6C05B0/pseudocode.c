_DWORD *__cdecl sub_6C05B0(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (0x4C * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * size;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6c060b*/
    return 0; /*0x6c0639*/
  v3 = v2 + 4; /*0x6c0618*/
  *(_DWORD *)v2 = size; /*0x6c061e*/
  ArrayConstructor( /*0x6c0620*/
    (char *)(v2 + 4),
    0x4Cu,
    size,
    (void (__thiscall *)(char *))ActorList_ReturnHead,
    Shared_NoOpVirtual_60D0A0);
  return (_DWORD *)v3; /*0x6c0627*/
}
