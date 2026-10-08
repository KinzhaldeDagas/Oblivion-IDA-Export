_DWORD *__cdecl sub_6C0F40(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (unsigned __int64)(unsigned int)size >> 0x1A != 0 ? 0xFFFFFFFF : size << 6;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6c0f9b*/
    return 0; /*0x6c0fc9*/
  v3 = v2 + 4; /*0x6c0fa8*/
  *(_DWORD *)v2 = size; /*0x6c0fae*/
  ArrayConstructor((char *)(v2 + 4), 0x40u, size, (void (__thiscall *)(char *))sub_6C0AD0, Shared_NoOpVirtual_60D0A0); /*0x6c0fb0*/
  return (_DWORD *)v3; /*0x6c0fb7*/
}
