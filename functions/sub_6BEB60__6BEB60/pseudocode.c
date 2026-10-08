char *__cdecl sub_6BEB60(signed int a1, int size)
{
  int v2; // edi
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  char *v6; // ebp
  char *v7; // esi

  v2 = size; /*0x6beb84*/
  v3 = (0x48 * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0x48 * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  if ( v4 ) /*0x6bebbd*/
  {
    v5 = v4 + 4; /*0x6bebca*/
    *(_DWORD *)v4 = size; /*0x6bebd0*/
    ArrayConstructor((char *)(v4 + 4), 0x48u, size, (void (__thiscall *)(char *))sub_6BE430, Shared_NoOpVirtual_60D0A0); /*0x6bebd2*/
    v6 = (char *)v5; /*0x6bebd7*/
  }
  else
  {
    v6 = 0; /*0x6bebdb*/
  }
  if ( size ) /*0x6bebe7*/
  {
    v7 = v6; /*0x6bebed*/
    do /*0x6bebfe*/
    {
      sub_6BEA00(v7, a1); /*0x6bebf3*/
      v7 += 0x48; /*0x6bebf8*/
      --v2; /*0x6bebfb*/
    }
    while ( v2 ); /*0x6bebfe*/
  }
  return v6; /*0x6bec02*/
}
