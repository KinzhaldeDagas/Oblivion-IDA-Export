_DWORD *__cdecl sub_6BE770(int size)
{
  unsigned int v1; // ecx
  int v2; // eax
  int v3; // esi

  v1 = (0x48 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x48 * size;
  v2 = FormHeapAlloc(__CFADD__(v1, 4) ? 0xFFFFFFFF : v1 + 4);
  if ( !v2 ) /*0x6be7cb*/
    return 0; /*0x6be7f9*/
  v3 = v2 + 4; /*0x6be7d8*/
  *(_DWORD *)v2 = size; /*0x6be7de*/
  ArrayConstructor((char *)(v2 + 4), 0x48u, size, (void (__thiscall *)(char *))sub_6BE430, Shared_NoOpVirtual_60D0A0); /*0x6be7e0*/
  return (_DWORD *)v3; /*0x6be7e7*/
}
